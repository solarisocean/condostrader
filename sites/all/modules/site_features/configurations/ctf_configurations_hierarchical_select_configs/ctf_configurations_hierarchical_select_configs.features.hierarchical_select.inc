<?php
/**
 * @file
 * ctf_configurations_hierarchical_select_configs.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function ctf_configurations_hierarchical_select_configs_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-field_user_region',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'resizable'       => 0,
  'level_labels' => array(
    'status' => 1,
    'labels' => array(
      0 => 'All Cities',
      1 => 'All Regions',
      2 => 'All Communities',
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
    'sort'      => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
      2 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 2,
  ),
  'entity_count' => array(
    'enabled' => 0,
    'require_entity' => 0,
    'settings' => array(
      'count_children' => 0,
      'entity_types' => array(
        'node' => array(
          'count_node' => array(
            'article' => 'article',
            'page' => 'page',
            'blog_post' => 'blog_post',
            'condo' => 'condo',
            'panel' => 'panel',
            'simplenews' => 'simplenews',
            'webform' => 'webform',
          ),
        ),
      ),
    ),
  ),
);

$configs['taxonomy-field_user_region'] = $config;
return $configs;
}
