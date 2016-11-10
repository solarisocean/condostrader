<?php

/**
 * @file
 * Theming.
 */

/**
 * Theme confirmation message for fields revisions data deletion form.
 */
function theme_field_sql_norevisions_delete_confirmation($vars) {
  // @todo Pass as param?
  $entity_info = entity_get_info();
  $settings = $vars['settings'];
  $selection = $vars['selection'];

  $selected = array();
  $revisionable = array();
  foreach ($selection as $entity => $bundles) {
    $item_selected = $item_revisionable = array(
      'data' => check_plain($entity_info[$entity]['label']),
      'children' => array(),
    );
    foreach (array_keys($bundles) as $bundle) {
      $label = check_plain($entity_info[$entity]['bundles'][$bundle]['label']);
      $item_selected['children'][] = $label;
      if (empty($settings[$entity][$bundle])) {
        $item_revisionable['children'][] = $label;
      }
    }
    $selected[] = $item_selected;
    if (!empty($item_revisionable['children'])) {
      $revisionable[] = $item_revisionable;
    }
  }
  $title = t('You selected the following entities/bundles to delete fields revisions data:');
  $output = theme('item_list', array('items' => $selected, 'title' => $title));
  if (!empty($revisionable)) {
    $title = t('!severity: the following selected entities/bundles are not set as non-revisionable on the !link page:',
      array(
        '!severity' => '<span class="warning">' . t('Warning') . '</span>',
        '!link' => l(t('settings'), 'admin/config/system/field_sql_norevisions/settings'),
      )
    );
    $output .= theme('item_list', array('items' => $revisionable, 'title' => $title, 'attributes' => array('class' => array('warning'))));
  }
  return $output;
}
