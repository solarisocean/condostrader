<?php
/**
 * @file
 * ctf_blocks_powered_by_drupal.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ctf_blocks_powered_by_drupal_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -8,
      ),
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -8,
      ),
      'condor' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'condor',
        'weight' => -5,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 10,
      ),
      'zurb_foundation' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zurb_foundation',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
