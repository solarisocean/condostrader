<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_communities.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ctf_taxonomy_vocabularies_communities_taxonomy_default_vocabularies() {
  return array(
    'communities' => array(
      'name' => 'Communities',
      'machine_name' => 'communities',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
