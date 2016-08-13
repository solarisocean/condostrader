<?php
/**
 * @file
 * ctf_configurations_image_lazyloader_module.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_configurations_image_lazyloader_module_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader_distance';
  $strongarm->value = '0';
  $export['lazyloader_distance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader_enabled';
  $strongarm->value = 1;
  $export['lazyloader_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader_exclude_option';
  $strongarm->value = 'exclude';
  $export['lazyloader_exclude_option'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader_icon';
  $strongarm->value = '8';
  $export['lazyloader_icon'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader_paths';
  $strongarm->value = 'media/*/format-form
admin/*
node/add/*
node/*/edit
build-point-popup';
  $export['lazyloader_paths'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'lazyloader_placeholder';
  $strongarm->value = '';
  $export['lazyloader_placeholder'] = $strongarm;

  return $export;
}
