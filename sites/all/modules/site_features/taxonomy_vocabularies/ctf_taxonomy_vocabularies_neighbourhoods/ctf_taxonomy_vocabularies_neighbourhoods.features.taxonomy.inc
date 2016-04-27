<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_neighbourhoods.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ctf_taxonomy_vocabularies_neighbourhoods_taxonomy_default_vocabularies() {
  return array(
    'neighbourhoods' => array(
      'name' => 'Neighbourhoods',
      'machine_name' => 'neighbourhoods',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
