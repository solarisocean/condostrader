<?php
/**
 * @file
 * ctf_configurations_field_sql_norevisions.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_configurations_field_sql_norevisions_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_sql_norevisions_entities';
  $strongarm->value = array(
    'drealty_listing' => array(
      'basic_drealty_listing' => 1,
      'toronto_condo' => 1,
      'toronto_building' => 1,
    ),
  );
  $export['field_sql_norevisions_entities'] = $strongarm;

  return $export;
}
