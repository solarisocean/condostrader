<?php
/**
 * @file
 * Admin page callbacks for the Statistics module.
 */

/**
 * Form constructor for the entity_statistics administration form.
 */
function entity_statistics_settings_form() {
  // Entity counter settings.
  $form['entity'] = array(
    '#type' => 'fieldset',
    '#title' => t('Entity viewing counter settings'),
  );

  $form['entity']['entity_statistics_count_entity_views_entity_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Entity types'),
    '#description' => t('Choose entity types which you want to track'),
    '#options' => entity_statistics_entity_type_options(),
    '#default_value' => variable_get('entity_statistics_count_entity_views_entity_types', array()),
  );

  $form['entity']['entity_statistics_count_entity_views_ajax'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use Ajax to increment the counter'),
    '#default_value' => variable_get('entity_statistics_count_entity_views_ajax', 0),
    '#description' => t('Perform the count asynchronously after page load rather than during page generation.'),
  );

  $form['#submit'][] = 'entity_statistics_settings_form_submit';

  return system_settings_form($form);
}

/**
 * Settings form submit.
 */
function entity_statistics_settings_form_submit(&$form, &$form_state) {
  // If views enabled, invalidate cache.
  if (module_exists('views')) {
    views_invalidate_cache();
  }
}

/**
 * List of entity types to choose as available to counter.
 *
 * @NOTE: Only select entity types which has view mode assuming it will be
 * entity that will be rendered!
 *
 * @return array
 *   Entity types available.
 */
function entity_statistics_entity_type_options() {
  $entity_types_options = array();
  $entity_types = entity_get_info();
  foreach ($entity_types as $name => $entity_type) {
    if (empty($entity_type['view modes'])) {
      continue;
    }

    $entity_types_options[$name] = $entity_type['label'];
  }
  return $entity_types_options;
}
