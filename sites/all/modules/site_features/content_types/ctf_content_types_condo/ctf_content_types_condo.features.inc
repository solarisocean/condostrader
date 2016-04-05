<?php
/**
 * @file
 * ctf_content_types_condo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_content_types_condo_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ctf_content_types_condo_node_info() {
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
