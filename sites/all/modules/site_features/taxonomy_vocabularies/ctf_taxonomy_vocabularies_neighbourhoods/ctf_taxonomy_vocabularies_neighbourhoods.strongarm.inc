<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_neighbourhoods.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_taxonomy_vocabularies_neighbourhoods_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_neighbourhoods_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_neighbourhoods_pattern'] = $strongarm;

  return $export;
}
