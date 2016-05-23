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

  // Exported field_base: 'field_reference_to_condo'.
  $field_bases['field_reference_to_condo'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
    ),
    'field_name' => 'field_reference_to_condo',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'toronto_condo' => 'toronto_condo',
        ),
      ),
      'target_type' => 'drealty_listing',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
