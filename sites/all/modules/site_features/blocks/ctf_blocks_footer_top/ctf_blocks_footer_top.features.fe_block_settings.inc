<?php
/**
 * @file
 * ctf_blocks_footer_top.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ctf_blocks_footer_top_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-footer_top_block'] = array(
    'cache' => -1,
    'css_class' => 'footer-top-block',
    'custom' => 0,
    'machine_name' => 'footer_top_block',
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
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'condor',
        'weight' => -16,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
