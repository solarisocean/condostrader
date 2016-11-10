<?php

/**
 * @file
 * Field SQL norevisions admin UI.
 */

/**
 * Module's settings form callback.
 *
 * Allows to enable/disable saving of fields revisions data
 * for fieldable entity types and their bundles.
 */
function field_sql_norevisions_entity_settings_form($form, &$form_state) {
  $form['#process'][] = '_field_sql_norevisions_admin_form_process';

  $entity_info = entity_get_info();

  $settings = variable_get('field_sql_norevisions_entities', array());

  $form['field_sql_norevisions_entities'] = array(
    '#tree' => TRUE,
  );

  foreach ($entity_info as $entity_name => $entity) {
    // First we check if it's fieldable, we don't care about it if it's not.
    if (!$entity['fieldable']) {
      continue;
    }

    $form['field_sql_norevisions_entities'][$entity_name] = array(
      '#type' => 'fieldset',
      '#title' => check_plain($entity['label']),
      '#collapsible' => TRUE,
      '#collapsed' => FALSE,
    );

    foreach ($entity['bundles'] as $bundle_name => $bundle) {
      $form['field_sql_norevisions_entities'][$entity_name][$bundle_name] = array(
        '#type' => 'checkbox',
        '#title' => check_plain($bundle['label']),
        '#default_value' => !empty($settings[$entity_name][$bundle_name]) ? $settings[$entity_name][$bundle_name] : 0,
      );
    }
  }

  $form = system_settings_form($form);
  // Call module's form submit callback first to update values before saving.
  array_unshift($form['#submit'], 'field_sql_norevisions_entity_settings_form_submit');

  return $form;
}

/**
 * Settings form submit callback.
 */
function field_sql_norevisions_entity_settings_form_submit($form, &$form_state) {
  // There may be no entity types.
  $settings = !empty($form_state['values']['field_sql_norevisions_entities']) ? $form_state['values']['field_sql_norevisions_entities'] : array();
  foreach ($settings as $entity => $bundles) {
    // There is no reason to store info about disabled bundles.
    $settings[$entity] = array_filter($bundles);
  }
  // Empty arrays may left for entities if none of bundles was chosen.
  // Again, there is no reason to store such info.
  $form_state['values']['field_sql_norevisions_entities'] = array_filter($settings);
}

/**
 * Form callback for batch deletion of revisions.
 */
function field_sql_norevisions_batch_delete_form($form, &$form_state) {
  $settings = variable_get('field_sql_norevisions_entities', array());
  $confirm = isset($form_state['selection']);
  // Confirmation step.
  if ($confirm) {
    $form = confirm_form($form,
      t('Are you sure you want to delete fields revisions data on the selected items?'),
      'admin/config/system/field_sql_norevisions/delete',
      theme('field_sql_norevisions_delete_confirmation', array('settings' => $settings, 'selection' => $form_state['selection']))
    );
    $form['actions']['submit']['#submit'] = array('field_sql_norevisions_batch_delete_form_submit_confirm');
  }
  // Default (initial) step.
  else {
    $form['#process'][] = '_field_sql_norevisions_admin_form_process';

    $entity_info = entity_get_info();

    $form['settings'] = array(
      '#tree' => TRUE,
    );
    foreach ($entity_info as $entity_name => $entity) {
      // First we check if it's fieldable, we don't care about it if it's not.
      if (!$entity['fieldable']) {
        continue;
      }

      $form['settings'][$entity_name] = array(
        '#type' => 'fieldset',
        '#title' => check_plain($entity['label']),
        '#collapsible' => TRUE,
        '#collapsed' => FALSE,
      );

      foreach ($entity['bundles'] as $bundle_name => $bundle) {
        $form['settings'][$entity_name][$bundle_name] = array(
          '#type' => 'checkbox',
          '#title' => check_plain($bundle['label']),
          // Default to current module's configuration. In most cases fields
          // revisions data will be removed for entities/bundles set on the
          // configuration page.
          '#default_value' => !empty($settings[$entity_name][$bundle_name]),
        );
      }
    }
    $form['submit'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#validate' => array(
        'field_sql_norevisions_batch_delete_form_validate',
      ),
      '#submit' => array(
        'field_sql_norevisions_batch_delete_form_submit',
      ),
    );
    // @todo Force browser to reload the page if Back is hit.
  }

  return $form;
}

/**
 * Batch revisions deletion form submit callback.
 */
function field_sql_norevisions_batch_delete_form_validate($form, &$form_state) {
  if (!isset($form_state['values']['settings'])) {
    return;
  }

  $settings = $form_state['values']['settings'];
  foreach ($settings as $entity => $bundles) {
    // Filter not checked bundles.
    $settings[$entity] = array_filter($bundles);
  }
  // Filter entities with no checked bundles.
  $settings = array_filter($settings);
  if (empty($settings)) {
    form_error($form['settings'], t('Select at least one bundle to delete fields revisions data.'));
  }
  else {
    form_set_value($form['settings'], $settings, $form_state);
  }
}
/**
 * Batch revisions deletion form submit callback.
 */
function field_sql_norevisions_batch_delete_form_submit($form, &$form_state) {
  $form_state['selection'] = $form_state['values']['settings'];
  $form_state['rebuild'] = TRUE;
}

/**
 * Batch revisions deletion form confirmation submit callback.
 */
function field_sql_norevisions_batch_delete_form_submit_confirm($form, &$form_state) {
  $settings = $form_state['selection'];
  $batch = array(
    'operations' => array(),
    'finished' => 'field_sql_norevisions_batch_delete_revisions_finished',
    'file' => drupal_get_path('module', 'field_sql_norevisions') . '/field_sql_norevisions.admin.inc',
  );
  foreach ($settings as $entity => $bundles) {
    foreach (array_keys($bundles) as $bundle) {
      $fields = field_info_instances($entity, $bundle);
      foreach (array_keys($fields) as $field) {
        $batch['operations'][] = array(
          'field_sql_norevisions_batch_delete_revisions',
          array($field, $entity, $bundle),
        );
      }
    }
  }
  batch_set($batch);
}

/**
 * Batch revision delete callback.
 */
function field_sql_norevisions_batch_delete_revisions($field, $entity, $bundle, &$context) {
  if ($field_info = field_info_field($field)) {
    $table = _field_sql_storage_revision_tablename($field_info);
    db_delete($table)
      ->condition('entity_type', $entity)
      ->condition('bundle', $bundle)
      ->execute();
  }
}

/**
 * Batch revision delete finished callback.
 */
function field_sql_norevisions_batch_delete_revisions_finished($success, $result, $operations) {
  if ($success) {
    drupal_set_message(t('Field revisions data was successfully deleted.'));
  }
}
