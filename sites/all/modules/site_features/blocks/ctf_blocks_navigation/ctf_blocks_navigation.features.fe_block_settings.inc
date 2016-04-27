<?php
/**
 * @file
 * ctf_blocks_navigation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ctf_blocks_navigation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'hidden',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -5,
      ),
      'bartik' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -5,
      ),
      'condor' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'condor',
        'weight' => -15,
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
        'weight' => -5,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
