<?php
/**
 * @file
 * ctf_blocks_main_map.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ctf_blocks_main_map_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ctrader_map-main_map'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main_map',
    'module' => 'ctrader_map',
    'node_types' => array(),
    'pages' => 'condo-search-page',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
