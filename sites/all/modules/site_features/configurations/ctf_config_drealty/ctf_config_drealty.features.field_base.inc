<?php
/**
 * @file
 * ctf_config_drealty.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ctf_config_drealty_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_a_c'.
  $field_bases['field_a_c'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_a_c',
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

  // Exported field_base: 'field_ad_text'.
  $field_bases['field_ad_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_ad_text',
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

  // Exported field_base: 'field_addr'.
  $field_bases['field_addr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_addr',
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

  // Exported field_base: 'field_all_inc'.
  $field_bases['field_all_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_all_inc',
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

  // Exported field_base: 'field_apt_num'.
  $field_bases['field_apt_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_apt_num',
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

  // Exported field_base: 'field_area'.
  $field_bases['field_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_area',
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

  // Exported field_base: 'field_area_code'.
  $field_bases['field_area_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_area_code',
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

  // Exported field_base: 'field_ass_year'.
  $field_bases['field_ass_year'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_ass_year',
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

  // Exported field_base: 'field_bath_tot'.
  $field_bases['field_bath_tot'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bath_tot',
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

  // Exported field_base: 'field_bldg_amen1_out'.
  $field_bases['field_bldg_amen1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen1_out',
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

  // Exported field_base: 'field_bldg_amen2_out'.
  $field_bases['field_bldg_amen2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen2_out',
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

  // Exported field_base: 'field_bldg_amen3_out'.
  $field_bases['field_bldg_amen3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen3_out',
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

  // Exported field_base: 'field_bldg_amen4_out'.
  $field_bases['field_bldg_amen4_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen4_out',
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

  // Exported field_base: 'field_bldg_amen5_out'.
  $field_bases['field_bldg_amen5_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen5_out',
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

  // Exported field_base: 'field_bldg_amen6_out'.
  $field_bases['field_bldg_amen6_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bldg_amen6_out',
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

  // Exported field_base: 'field_br'.
  $field_bases['field_br'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_br',
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

  // Exported field_base: 'field_br_plus'.
  $field_bases['field_br_plus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_br_plus',
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

  // Exported field_base: 'field_bsmt1_out'.
  $field_bases['field_bsmt1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bsmt1_out',
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

  // Exported field_base: 'field_bsmt2_out'.
  $field_bases['field_bsmt2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_bsmt2_out',
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

  // Exported field_base: 'field_cable'.
  $field_bases['field_cable'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_cable',
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

  // Exported field_base: 'field_cac_inc'.
  $field_bases['field_cac_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_cac_inc',
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

  // Exported field_base: 'field_central_vac'.
  $field_bases['field_central_vac'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_central_vac',
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

  // Exported field_base: 'field_comel_inc'.
  $field_bases['field_comel_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_comel_inc',
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

  // Exported field_base: 'field_community'.
  $field_bases['field_community'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_community',
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

  // Exported field_base: 'field_community_code'.
  $field_bases['field_community_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_community_code',
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

  // Exported field_base: 'field_cond_txinc'.
  $field_bases['field_cond_txinc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_cond_txinc',
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

  // Exported field_base: 'field_condo_corp'.
  $field_bases['field_condo_corp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_condo_corp',
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

  // Exported field_base: 'field_condo_exp'.
  $field_bases['field_condo_exp'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_condo_exp',
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

  // Exported field_base: 'field_condo_gallery'.
  $field_bases['field_condo_gallery'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
    ),
    'field_name' => 'field_condo_gallery',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_constr1_out'.
  $field_bases['field_constr1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_constr1_out',
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

  // Exported field_base: 'field_constr2_out'.
  $field_bases['field_constr2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_constr2_out',
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

  // Exported field_base: 'field_corp_num'.
  $field_bases['field_corp_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_corp_num',
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

  // Exported field_base: 'field_county'.
  $field_bases['field_county'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_county',
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

  // Exported field_base: 'field_cross_st'.
  $field_bases['field_cross_st'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_cross_st',
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

  // Exported field_base: 'field_den_fr'.
  $field_bases['field_den_fr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_den_fr',
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

  // Exported field_base: 'field_disp_addr'.
  $field_bases['field_disp_addr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_disp_addr',
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

  // Exported field_base: 'field_elevator'.
  $field_bases['field_elevator'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_elevator',
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

  // Exported field_base: 'field_ens_lndry'.
  $field_bases['field_ens_lndry'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_ens_lndry',
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

  // Exported field_base: 'field_extras_n'.
  $field_bases['field_extras_n'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_extras_n',
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

  // Exported field_base: 'field_fpl_num'.
  $field_bases['field_fpl_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_fpl_num',
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

  // Exported field_base: 'field_fuel'.
  $field_bases['field_fuel'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_fuel',
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

  // Exported field_base: 'field_furnished'.
  $field_bases['field_furnished'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_furnished',
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

  // Exported field_base: 'field_gar'.
  $field_bases['field_gar'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_gar',
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

  // Exported field_base: 'field_gar_type'.
  $field_bases['field_gar_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_gar_type',
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

  // Exported field_base: 'field_heat_inc'.
  $field_bases['field_heat_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_heat_inc',
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

  // Exported field_base: 'field_heating'.
  $field_bases['field_heating'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_heating',
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

  // Exported field_base: 'field_hydro_inc'.
  $field_bases['field_hydro_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_hydro_inc',
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

  // Exported field_base: 'field_idx_dt'.
  $field_bases['field_idx_dt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_idx_dt',
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

  // Exported field_base: 'field_insur_bldg'.
  $field_bases['field_insur_bldg'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_insur_bldg',
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

  // Exported field_base: 'field_kit_plus'.
  $field_bases['field_kit_plus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_kit_plus',
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

  // Exported field_base: 'field_laundry'.
  $field_bases['field_laundry'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_laundry',
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

  // Exported field_base: 'field_laundry_lev'.
  $field_bases['field_laundry_lev'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_laundry_lev',
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

  // Exported field_base: 'field_lease_term'.
  $field_bases['field_lease_term'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_lease_term',
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

  // Exported field_base: 'field_level1'.
  $field_bases['field_level1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level1',
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

  // Exported field_base: 'field_level10'.
  $field_bases['field_level10'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level10',
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

  // Exported field_base: 'field_level11'.
  $field_bases['field_level11'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level11',
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

  // Exported field_base: 'field_level12'.
  $field_bases['field_level12'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level12',
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

  // Exported field_base: 'field_level2'.
  $field_bases['field_level2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level2',
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

  // Exported field_base: 'field_level3'.
  $field_bases['field_level3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level3',
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

  // Exported field_base: 'field_level4'.
  $field_bases['field_level4'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level4',
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

  // Exported field_base: 'field_level5'.
  $field_bases['field_level5'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level5',
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

  // Exported field_base: 'field_level6'.
  $field_bases['field_level6'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level6',
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

  // Exported field_base: 'field_level7'.
  $field_bases['field_level7'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level7',
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

  // Exported field_base: 'field_level8'.
  $field_bases['field_level8'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level8',
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

  // Exported field_base: 'field_level9'.
  $field_bases['field_level9'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_level9',
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

  // Exported field_base: 'field_locker_n'.
  $field_bases['field_locker_n'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_locker_n',
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

  // Exported field_base: 'field_locker_num'.
  $field_bases['field_locker_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_locker_num',
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

  // Exported field_base: 'field_lp_dol'.
  $field_bases['field_lp_dol'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_lp_dol',
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

  // Exported field_base: 'field_maint'.
  $field_bases['field_maint'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_maint',
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

  // Exported field_base: 'field_ml_num'.
  $field_bases['field_ml_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_ml_num',
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

  // Exported field_base: 'field_mmap_col'.
  $field_bases['field_mmap_col'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_mmap_col',
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

  // Exported field_base: 'field_mmap_page'.
  $field_bases['field_mmap_page'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_mmap_page',
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

  // Exported field_base: 'field_mmap_row'.
  $field_bases['field_mmap_row'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_mmap_row',
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

  // Exported field_base: 'field_municipality'.
  $field_bases['field_municipality'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_municipality',
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

  // Exported field_base: 'field_municipality_code'.
  $field_bases['field_municipality_code'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_municipality_code',
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

  // Exported field_base: 'field_municipality_district'.
  $field_bases['field_municipality_district'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_municipality_district',
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

  // Exported field_base: 'field_num_kit'.
  $field_bases['field_num_kit'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_num_kit',
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

  // Exported field_base: 'field_outof_area'.
  $field_bases['field_outof_area'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_outof_area',
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

  // Exported field_base: 'field_parcel_id'.
  $field_bases['field_parcel_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_parcel_id',
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

  // Exported field_base: 'field_park_chgs'.
  $field_bases['field_park_chgs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_chgs',
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

  // Exported field_base: 'field_park_desig'.
  $field_bases['field_park_desig'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_desig',
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

  // Exported field_base: 'field_park_desig_2'.
  $field_bases['field_park_desig_2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_desig_2',
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

  // Exported field_base: 'field_park_fac'.
  $field_bases['field_park_fac'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_fac',
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

  // Exported field_base: 'field_park_lgl_desc1'.
  $field_bases['field_park_lgl_desc1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_lgl_desc1',
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

  // Exported field_base: 'field_park_lgl_desc2'.
  $field_bases['field_park_lgl_desc2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_lgl_desc2',
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

  // Exported field_base: 'field_park_spc1'.
  $field_bases['field_park_spc1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_spc1',
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

  // Exported field_base: 'field_park_spc2'.
  $field_bases['field_park_spc2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_spc2',
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

  // Exported field_base: 'field_park_spcs'.
  $field_bases['field_park_spcs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_park_spcs',
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

  // Exported field_base: 'field_patio_ter'.
  $field_bases['field_patio_ter'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_patio_ter',
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

  // Exported field_base: 'field_pets'.
  $field_bases['field_pets'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_pets',
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

  // Exported field_base: 'field_pix_updt'.
  $field_bases['field_pix_updt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_pix_updt',
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

  // Exported field_base: 'field_prkg_inc'.
  $field_bases['field_prkg_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prkg_inc',
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

  // Exported field_base: 'field_prop_feat1_out'.
  $field_bases['field_prop_feat1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prop_feat1_out',
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

  // Exported field_base: 'field_prop_feat2_out'.
  $field_bases['field_prop_feat2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prop_feat2_out',
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

  // Exported field_base: 'field_prop_feat3_out'.
  $field_bases['field_prop_feat3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prop_feat3_out',
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

  // Exported field_base: 'field_prop_feat4_out'.
  $field_bases['field_prop_feat4_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prop_feat4_out',
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

  // Exported field_base: 'field_prop_feat5_out'.
  $field_bases['field_prop_feat5_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prop_feat5_out',
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

  // Exported field_base: 'field_prop_feat6_out'.
  $field_bases['field_prop_feat6_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_prop_feat6_out',
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

  // Exported field_base: 'field_pvt_ent'.
  $field_bases['field_pvt_ent'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_pvt_ent',
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

  // Exported field_base: 'field_retirement'.
  $field_bases['field_retirement'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_retirement',
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

  // Exported field_base: 'field_rltr'.
  $field_bases['field_rltr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rltr',
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

  // Exported field_base: 'field_rm10_dc1_out'.
  $field_bases['field_rm10_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm10_dc1_out',
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

  // Exported field_base: 'field_rm10_dc2_out'.
  $field_bases['field_rm10_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm10_dc2_out',
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

  // Exported field_base: 'field_rm10_dc3_out'.
  $field_bases['field_rm10_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm10_dc3_out',
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

  // Exported field_base: 'field_rm10_len'.
  $field_bases['field_rm10_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm10_len',
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

  // Exported field_base: 'field_rm10_out'.
  $field_bases['field_rm10_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm10_out',
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

  // Exported field_base: 'field_rm10_wth'.
  $field_bases['field_rm10_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm10_wth',
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

  // Exported field_base: 'field_rm11_dc1_out'.
  $field_bases['field_rm11_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm11_dc1_out',
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

  // Exported field_base: 'field_rm11_dc2_out'.
  $field_bases['field_rm11_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm11_dc2_out',
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

  // Exported field_base: 'field_rm11_dc3_out'.
  $field_bases['field_rm11_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm11_dc3_out',
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

  // Exported field_base: 'field_rm11_len'.
  $field_bases['field_rm11_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm11_len',
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

  // Exported field_base: 'field_rm11_out'.
  $field_bases['field_rm11_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm11_out',
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

  // Exported field_base: 'field_rm11_wth'.
  $field_bases['field_rm11_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm11_wth',
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

  // Exported field_base: 'field_rm12_dc1_out'.
  $field_bases['field_rm12_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm12_dc1_out',
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

  // Exported field_base: 'field_rm12_dc2_out'.
  $field_bases['field_rm12_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm12_dc2_out',
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

  // Exported field_base: 'field_rm12_dc3_out'.
  $field_bases['field_rm12_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm12_dc3_out',
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

  // Exported field_base: 'field_rm12_len'.
  $field_bases['field_rm12_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm12_len',
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

  // Exported field_base: 'field_rm12_out'.
  $field_bases['field_rm12_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm12_out',
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

  // Exported field_base: 'field_rm12_wth'.
  $field_bases['field_rm12_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm12_wth',
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

  // Exported field_base: 'field_rm1_dc1_out'.
  $field_bases['field_rm1_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm1_dc1_out',
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

  // Exported field_base: 'field_rm1_dc2_out'.
  $field_bases['field_rm1_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm1_dc2_out',
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

  // Exported field_base: 'field_rm1_dc3_out'.
  $field_bases['field_rm1_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm1_dc3_out',
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

  // Exported field_base: 'field_rm1_len'.
  $field_bases['field_rm1_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm1_len',
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

  // Exported field_base: 'field_rm1_out'.
  $field_bases['field_rm1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm1_out',
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

  // Exported field_base: 'field_rm1_wth'.
  $field_bases['field_rm1_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm1_wth',
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

  // Exported field_base: 'field_rm2_dc1_out'.
  $field_bases['field_rm2_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm2_dc1_out',
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

  // Exported field_base: 'field_rm2_dc2_out'.
  $field_bases['field_rm2_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm2_dc2_out',
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

  // Exported field_base: 'field_rm2_dc3_out'.
  $field_bases['field_rm2_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm2_dc3_out',
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

  // Exported field_base: 'field_rm2_len'.
  $field_bases['field_rm2_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm2_len',
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

  // Exported field_base: 'field_rm2_out'.
  $field_bases['field_rm2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm2_out',
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

  // Exported field_base: 'field_rm2_wth'.
  $field_bases['field_rm2_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm2_wth',
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

  // Exported field_base: 'field_rm3_dc1_out'.
  $field_bases['field_rm3_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm3_dc1_out',
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

  // Exported field_base: 'field_rm3_dc2_out'.
  $field_bases['field_rm3_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm3_dc2_out',
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

  // Exported field_base: 'field_rm3_dc3_out'.
  $field_bases['field_rm3_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm3_dc3_out',
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

  // Exported field_base: 'field_rm3_len'.
  $field_bases['field_rm3_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm3_len',
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

  // Exported field_base: 'field_rm3_out'.
  $field_bases['field_rm3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm3_out',
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

  // Exported field_base: 'field_rm3_wth'.
  $field_bases['field_rm3_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm3_wth',
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

  // Exported field_base: 'field_rm4_dc1_out'.
  $field_bases['field_rm4_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm4_dc1_out',
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

  // Exported field_base: 'field_rm4_dc2_out'.
  $field_bases['field_rm4_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm4_dc2_out',
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

  // Exported field_base: 'field_rm4_dc3_out'.
  $field_bases['field_rm4_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm4_dc3_out',
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

  // Exported field_base: 'field_rm4_len'.
  $field_bases['field_rm4_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm4_len',
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

  // Exported field_base: 'field_rm4_out'.
  $field_bases['field_rm4_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm4_out',
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

  // Exported field_base: 'field_rm4_wth'.
  $field_bases['field_rm4_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm4_wth',
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

  // Exported field_base: 'field_rm5_dc1_out'.
  $field_bases['field_rm5_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm5_dc1_out',
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

  // Exported field_base: 'field_rm5_dc2_out'.
  $field_bases['field_rm5_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm5_dc2_out',
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

  // Exported field_base: 'field_rm5_dc3_out'.
  $field_bases['field_rm5_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm5_dc3_out',
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

  // Exported field_base: 'field_rm5_len'.
  $field_bases['field_rm5_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm5_len',
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

  // Exported field_base: 'field_rm5_out'.
  $field_bases['field_rm5_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm5_out',
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

  // Exported field_base: 'field_rm5_wth'.
  $field_bases['field_rm5_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm5_wth',
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

  // Exported field_base: 'field_rm6_dc1_out'.
  $field_bases['field_rm6_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm6_dc1_out',
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

  // Exported field_base: 'field_rm6_dc2_out'.
  $field_bases['field_rm6_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm6_dc2_out',
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

  // Exported field_base: 'field_rm6_dc3_out'.
  $field_bases['field_rm6_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm6_dc3_out',
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

  // Exported field_base: 'field_rm6_len'.
  $field_bases['field_rm6_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm6_len',
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

  // Exported field_base: 'field_rm6_out'.
  $field_bases['field_rm6_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm6_out',
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

  // Exported field_base: 'field_rm6_wth'.
  $field_bases['field_rm6_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm6_wth',
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

  // Exported field_base: 'field_rm7_dc1_out'.
  $field_bases['field_rm7_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm7_dc1_out',
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

  // Exported field_base: 'field_rm7_dc2_out'.
  $field_bases['field_rm7_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm7_dc2_out',
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

  // Exported field_base: 'field_rm7_dc3_out'.
  $field_bases['field_rm7_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm7_dc3_out',
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

  // Exported field_base: 'field_rm7_len'.
  $field_bases['field_rm7_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm7_len',
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

  // Exported field_base: 'field_rm7_out'.
  $field_bases['field_rm7_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm7_out',
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

  // Exported field_base: 'field_rm7_wth'.
  $field_bases['field_rm7_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm7_wth',
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

  // Exported field_base: 'field_rm8_dc1_out'.
  $field_bases['field_rm8_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm8_dc1_out',
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

  // Exported field_base: 'field_rm8_dc2_out'.
  $field_bases['field_rm8_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm8_dc2_out',
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

  // Exported field_base: 'field_rm8_dc3_out'.
  $field_bases['field_rm8_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm8_dc3_out',
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

  // Exported field_base: 'field_rm8_len'.
  $field_bases['field_rm8_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm8_len',
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

  // Exported field_base: 'field_rm8_out'.
  $field_bases['field_rm8_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm8_out',
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

  // Exported field_base: 'field_rm8_wth'.
  $field_bases['field_rm8_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm8_wth',
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

  // Exported field_base: 'field_rm9_dc1_out'.
  $field_bases['field_rm9_dc1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm9_dc1_out',
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

  // Exported field_base: 'field_rm9_dc2_out'.
  $field_bases['field_rm9_dc2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm9_dc2_out',
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

  // Exported field_base: 'field_rm9_dc3_out'.
  $field_bases['field_rm9_dc3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm9_dc3_out',
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

  // Exported field_base: 'field_rm9_len'.
  $field_bases['field_rm9_len'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm9_len',
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

  // Exported field_base: 'field_rm9_out'.
  $field_bases['field_rm9_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm9_out',
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

  // Exported field_base: 'field_rm9_wth'.
  $field_bases['field_rm9_wth'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rm9_wth',
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

  // Exported field_base: 'field_rms'.
  $field_bases['field_rms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rms',
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

  // Exported field_base: 'field_rooms_plus'.
  $field_bases['field_rooms_plus'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_rooms_plus',
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

  // Exported field_base: 'field_s_r'.
  $field_bases['field_s_r'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_s_r',
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

  // Exported field_base: 'field_share_perc'.
  $field_bases['field_share_perc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_share_perc',
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

  // Exported field_base: 'field_spec_des1_out'.
  $field_bases['field_spec_des1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_spec_des1_out',
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

  // Exported field_base: 'field_spec_des2_out'.
  $field_bases['field_spec_des2_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_spec_des2_out',
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

  // Exported field_base: 'field_spec_des3_out'.
  $field_bases['field_spec_des3_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_spec_des3_out',
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

  // Exported field_base: 'field_spec_des4_out'.
  $field_bases['field_spec_des4_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_spec_des4_out',
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

  // Exported field_base: 'field_spec_des5_out'.
  $field_bases['field_spec_des5_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_spec_des5_out',
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

  // Exported field_base: 'field_spec_des6_out'.
  $field_bases['field_spec_des6_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_spec_des6_out',
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

  // Exported field_base: 'field_sqft'.
  $field_bases['field_sqft'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_sqft',
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

  // Exported field_base: 'field_st'.
  $field_bases['field_st'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_st',
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

  // Exported field_base: 'field_st_dir'.
  $field_bases['field_st_dir'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_st_dir',
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

  // Exported field_base: 'field_st_num'.
  $field_bases['field_st_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_st_num',
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

  // Exported field_base: 'field_st_sfx'.
  $field_bases['field_st_sfx'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_st_sfx',
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

  // Exported field_base: 'field_status'.
  $field_bases['field_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_status',
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

  // Exported field_base: 'field_stories'.
  $field_bases['field_stories'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_stories',
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

  // Exported field_base: 'field_style'.
  $field_bases['field_style'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_style',
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

  // Exported field_base: 'field_taxes_n_n'.
  $field_bases['field_taxes_n_n'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_taxes_n_n',
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

  // Exported field_base: 'field_timestamp_sql'.
  $field_bases['field_timestamp_sql'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_timestamp_sql',
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

  // Exported field_base: 'field_tour_url'.
  $field_bases['field_tour_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_tour_url',
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

  // Exported field_base: 'field_tttest'.
  $field_bases['field_tttest'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
    ),
    'field_name' => 'field_tttest',
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

  // Exported field_base: 'field_tv'.
  $field_bases['field_tv'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_tv',
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

  // Exported field_base: 'field_type_own1_out'.
  $field_bases['field_type_own1_out'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_type_own1_out',
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

  // Exported field_base: 'field_type_own_srch'.
  $field_bases['field_type_own_srch'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_type_own_srch',
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

  // Exported field_base: 'field_uffi'.
  $field_bases['field_uffi'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_uffi',
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

  // Exported field_base: 'field_unit_num'.
  $field_bases['field_unit_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_unit_num',
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

  // Exported field_base: 'field_vtour_updt'.
  $field_bases['field_vtour_updt'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_vtour_updt',
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

  // Exported field_base: 'field_water_inc'.
  $field_bases['field_water_inc'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_water_inc',
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

  // Exported field_base: 'field_wcloset_p1'.
  $field_bases['field_wcloset_p1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_p1',
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

  // Exported field_base: 'field_wcloset_p2'.
  $field_bases['field_wcloset_p2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_p2',
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

  // Exported field_base: 'field_wcloset_p3'.
  $field_bases['field_wcloset_p3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_p3',
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

  // Exported field_base: 'field_wcloset_p4'.
  $field_bases['field_wcloset_p4'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_p4',
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

  // Exported field_base: 'field_wcloset_p5'.
  $field_bases['field_wcloset_p5'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_p5',
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

  // Exported field_base: 'field_wcloset_t1'.
  $field_bases['field_wcloset_t1'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t1',
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

  // Exported field_base: 'field_wcloset_t1lvl'.
  $field_bases['field_wcloset_t1lvl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t1lvl',
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

  // Exported field_base: 'field_wcloset_t2'.
  $field_bases['field_wcloset_t2'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t2',
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

  // Exported field_base: 'field_wcloset_t2lvl'.
  $field_bases['field_wcloset_t2lvl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t2lvl',
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

  // Exported field_base: 'field_wcloset_t3'.
  $field_bases['field_wcloset_t3'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t3',
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

  // Exported field_base: 'field_wcloset_t3lvl'.
  $field_bases['field_wcloset_t3lvl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t3lvl',
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

  // Exported field_base: 'field_wcloset_t4'.
  $field_bases['field_wcloset_t4'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t4',
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

  // Exported field_base: 'field_wcloset_t4lvl'.
  $field_bases['field_wcloset_t4lvl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t4lvl',
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

  // Exported field_base: 'field_wcloset_t5'.
  $field_bases['field_wcloset_t5'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t5',
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

  // Exported field_base: 'field_wcloset_t5lvl'.
  $field_bases['field_wcloset_t5lvl'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_wcloset_t5lvl',
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

  // Exported field_base: 'field_yr'.
  $field_bases['field_yr'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_yr',
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

  // Exported field_base: 'field_yr_built'.
  $field_bases['field_yr_built'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_yr_built',
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

  // Exported field_base: 'field_zip'.
  $field_bases['field_zip'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_zip',
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

  // Exported field_base: 'field_zoning'.
  $field_bases['field_zoning'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'drealty_listing',
      1 => 'drealty_office',
      2 => 'drealty_agent',
      3 => 'drealty_openhouse',
    ),
    'field_name' => 'field_zoning',
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
