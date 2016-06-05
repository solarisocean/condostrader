<?php
/**
 * @file
 * ctf_content_types_toronto_building.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_content_types_toronto_building_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_drealty_listing_toronto_building_pattern';
  $strongarm->value = 'building/[drealty_listing:id]';
  $export['pathauto_drealty_listing_toronto_building_pattern'] = $strongarm;

  return $export;
}
