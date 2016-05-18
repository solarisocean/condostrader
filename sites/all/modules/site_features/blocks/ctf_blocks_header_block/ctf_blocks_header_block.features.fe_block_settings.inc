<?php
/**
 * @file
 * ctf_blocks_header_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ctf_blocks_header_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-header_block'] = array(
    'cache' => -1,
    'css_class' => 'front-header-block',
    'custom' => 0,
    'machine_name' => 'header_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'condor' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'condor',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => 0,
      ),
    ),
    'title' => 'Welcome text goes here',
    'visibility' => 0,
  );

  return $export;
}
