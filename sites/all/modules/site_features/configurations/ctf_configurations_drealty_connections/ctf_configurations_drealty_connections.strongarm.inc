<?php
/**
 * @file
 * ctf_configurations_drealty_connections.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_configurations_drealty_connections_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_drealty_listing_toronto_condo_pattern';
  $strongarm->value = '[drealty_listing:field_municipality__torcond]/[drealty_listing:field_addr__torcond]/[drealty_listing:field_apt_num__torcond]-MLS[drealty_listing:field_ml_num__torcond]';
  $export['pathauto_drealty_listing_toronto_condo_pattern'] = $strongarm;

  return $export;
}
