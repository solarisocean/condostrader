<?php
/**
 * @file
 * ctf_content_types_toronto_building.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ctf_content_types_toronto_building_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_bldg_amen4_out__torcond'.
  $field_bases['field_bldg_amen4_out__torcond'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen4_out__torcond',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
