<?php
/**
 * @file
 * feature_for_content_type_condo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_for_content_type_condo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_for_content_type_condo_node_info() {
  $items = array(
    'condo' => array(
      'name' => t('Condo'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
