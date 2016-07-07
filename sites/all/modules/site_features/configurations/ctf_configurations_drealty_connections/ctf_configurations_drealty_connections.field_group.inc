<?php
/**
 * @file
 * ctf_configurations_drealty_connections.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ctf_configurations_drealty_connections_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location_fields|drealty_listing|toronto_condo|form';
  $field_group->group_name = 'group_location_fields';
  $field_group->entity_type = 'drealty_listing';
  $field_group->bundle = 'toronto_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Address  fields (from MLS)',
    'weight' => '203',
    'children' => array(
      0 => 'field_zip__torcond',
      1 => 'field_st__torcond',
      2 => 'field_st_dir__torcond',
      3 => 'field_st_num__torcond',
      4 => 'field_st_sfx__torcond',
      5 => 'field_tour_url__torcond',
      6 => 'field_community_code__torcond',
      7 => 'field_area_code__torcond',
      8 => 'field_unit_num__torcond',
      9 => 'field_outof_area__torcond',
      10 => 'field_disp_addr__torcond',
      11 => 'field_area__torcond',
      12 => 'field_community__torcond',
      13 => 'field_municipality_code__torcond',
      14 => 'field_municipality_district__tor',
      15 => 'field_municipality__torcond',
      16 => 'field_addr__torcond',
      17 => 'field_apt_num__torcond',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Address  fields (from MLS)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_location_fields|drealty_listing|toronto_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mls_fields|drealty_listing|toronto_condo|form';
  $field_group->group_name = 'group_mls_fields';
  $field_group->entity_type = 'drealty_listing';
  $field_group->bundle = 'toronto_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'MLS fields',
    'weight' => '0',
    'children' => array(
      0 => 'field_toronto_gallery',
      1 => 'field_laundry__torcond',
      2 => 'field_laundry_lev__torcond',
      3 => 'field_lease_term__torcond',
      4 => 'field_level1__torcond',
      5 => 'field_level10__torcond',
      6 => 'field_level11__torcond',
      7 => 'field_level12__torcond',
      8 => 'field_level2__torcond',
      9 => 'field_level3__torcond',
      10 => 'field_level4__torcond',
      11 => 'field_level5__torcond',
      12 => 'field_level6__torcond',
      13 => 'field_level7__torcond',
      14 => 'field_level8__torcond',
      15 => 'field_level9__torcond',
      16 => 'field_locker__torcond',
      17 => 'field_locker_num__torcond',
      18 => 'field_lp_dol__torcond',
      19 => 'field_maint__torcond',
      20 => 'field_comel_inc__torcond',
      21 => 'field_cond_txinc__torcond',
      22 => 'field_condo_corp__torcond',
      23 => 'field_condo_exp__torcond',
      24 => 'field_constr1_out__torcond',
      25 => 'field_constr2_out__torcond',
      26 => 'field_corp_num__torcond',
      27 => 'field_county__torcond',
      28 => 'field_cross_st__torcond',
      29 => 'field_elevator__torcond',
      30 => 'field_ens_lndry__torcond',
      31 => 'field_extras__torcond',
      32 => 'field_fpl_num__torcond',
      33 => 'field_fuel__torcond',
      34 => 'field_furnished__torcond',
      35 => 'field_gar__torcond',
      36 => 'field_heat_inc__torcond',
      37 => 'field_heating__torcond',
      38 => 'field_hydro_inc__torcond',
      39 => 'field_insur_bldg__torcond',
      40 => 'field_kit_plus__torcond',
      41 => 'field_mmap_page__torcond',
      42 => 'field_wcloset_t2__torcond',
      43 => 'field_wcloset_t2lvl__torcond',
      44 => 'field_wcloset_t3__torcond',
      45 => 'field_wcloset_t3lvl__torcond',
      46 => 'field_wcloset_t4__torcond',
      47 => 'field_wcloset_t4lvl__torcond',
      48 => 'field_wcloset_t5__torcond',
      49 => 'field_wcloset_t5lvl__torcond',
      50 => 'field_yr__torcond',
      51 => 'field_yr_built__torcond',
      52 => 'field_zoning__torcond',
      53 => 'field_a_c__torcond',
      54 => 'field_prop_feat3_out__torcond',
      55 => 'field_prop_feat4_out__torcond',
      56 => 'field_prop_feat5_out__torcond',
      57 => 'field_prop_feat6_out__torcond',
      58 => 'field_rm9_len__torcond',
      59 => 'field_rm9_wth__torcond',
      60 => 'field_pets__torcond',
      61 => 'field_prkg_inc__torcond',
      62 => 'field_prop_feat1_out__torcond',
      63 => 'field_prop_feat2_out__torcond',
      64 => 'field_pvt_ent__torcond',
      65 => 'field_retirement__torcond',
      66 => 'field_rltr__torcond',
      67 => 'field_rm1_dc1_out__torcond',
      68 => 'field_rm1_dc2_out__torcond',
      69 => 'field_ml_num__torcond',
      70 => 'field_rm1_dc3_out__torcond',
      71 => 'field_rm1_len__torcond',
      72 => 'field_rm1_out__torcond',
      73 => 'field_rm1_wth__torcond',
      74 => 'field_rm10_dc1_out__torcond',
      75 => 'field_rm10_dc2_out__torcond',
      76 => 'field_rm10_dc3_out__torcond',
      77 => 'field_rm10_len__torcond',
      78 => 'field_rm10_out__torcond',
      79 => 'field_rm10_wth__torcond',
      80 => 'field_rm11_dc1_out__torcond',
      81 => 'field_rm11_dc2_out__torcond',
      82 => 'field_spec_des6_out__torcond',
      83 => 'field_sqft__torcond',
      84 => 'field_status__torcond',
      85 => 'field_stories__torcond',
      86 => 'field_style__torcond',
      87 => 'field_taxes__torcond',
      88 => 'field_tv__torcond',
      89 => 'field_type_own_srch__torcond',
      90 => 'field_type_own1_out__torcond',
      91 => 'field_uffi__torcond',
      92 => 'field_water_inc__torcond',
      93 => 'field_wcloset_p1__torcond',
      94 => 'field_wcloset_p2__torcond',
      95 => 'field_wcloset_p3__torcond',
      96 => 'field_wcloset_p4__torcond',
      97 => 'field_wcloset_p5__torcond',
      98 => 'field_wcloset_t1__torcond',
      99 => 'field_wcloset_t1lvl__torcond',
      100 => 'field_mmap_row__torcond',
      101 => 'field_num_kit__torcond',
      102 => 'field_parcel_id__torcond',
      103 => 'field_park_chgs__torcond',
      104 => 'field_park_desig__torcond',
      105 => 'field_park_desig_2__torcond',
      106 => 'field_park_fac__torcond',
      107 => 'field_park_lgl_desc1__torcond',
      108 => 'field_park_lgl_desc2__torcond',
      109 => 'field_park_spc1__torcond',
      110 => 'field_park_spcs__torcond',
      111 => 'field_patio_ter__torcond',
      112 => 'field_rm7_dc3_out__torcond',
      113 => 'field_rm7_len__torcond',
      114 => 'field_rm7_out__torcond',
      115 => 'field_rm7_wth__torcond',
      116 => 'field_rm8_dc1_out__torcond',
      117 => 'field_rm8_dc2_out__torcond',
      118 => 'field_rm8_dc3_out__torcond',
      119 => 'field_rm8_len__torcond',
      120 => 'field_rm8_out__torcond',
      121 => 'field_rm8_wth__torcond',
      122 => 'field_rm9_dc1_out__torcond',
      123 => 'field_rm9_dc2_out__torcond',
      124 => 'field_rm9_dc3_out__torcond',
      125 => 'field_rm9_out__torcond',
      126 => 'field_rms__torcond',
      127 => 'field_rooms_plus__torcond',
      128 => 'field_s_r__torcond',
      129 => 'field_share_perc__torcond',
      130 => 'field_spec_des1_out__torcond',
      131 => 'field_spec_des2_out__torcond',
      132 => 'field_spec_des3_out__torcond',
      133 => 'field_spec_des4_out__torcond',
      134 => 'field_spec_des5_out__torcond',
      135 => 'field_park_spc2__torcond',
      136 => 'field_rm11_dc3_out__torcond',
      137 => 'field_rm11_len__torcond',
      138 => 'field_rm11_out__torcond',
      139 => 'field_rm11_wth__torcond',
      140 => 'field_rm12_dc1_out__torcond',
      141 => 'field_rm12_dc2_out__torcond',
      142 => 'field_rm12_dc3_out__torcond',
      143 => 'field_rm12_len__torcond',
      144 => 'field_rm12_out__torcond',
      145 => 'field_rm12_wth__torcond',
      146 => 'field_rm2_dc2_out__torcond',
      147 => 'field_rm2_dc3_out__torcond',
      148 => 'field_rm2_len__torcond',
      149 => 'field_rm2_out__torcond',
      150 => 'field_rm2_wth__torcond',
      151 => 'field_rm3_dc1_out__torcond',
      152 => 'field_rm3_dc2_out__torcond',
      153 => 'field_rm3_dc3_out__torcond',
      154 => 'field_rm3_len__torcond',
      155 => 'field_rm3_out__torcond',
      156 => 'field_rm3_wth__torcond',
      157 => 'field_rm4_dc1_out__torcond',
      158 => 'field_rm4_dc2_out__torcond',
      159 => 'field_rm4_dc3_out__torcond',
      160 => 'field_rm4_len__torcond',
      161 => 'field_rm4_out__torcond',
      162 => 'field_rm4_wth__torcond',
      163 => 'field_rm5_dc1_out__torcond',
      164 => 'field_rm5_dc2_out__torcond',
      165 => 'field_rm5_dc3_out__torcond',
      166 => 'field_rm5_len__torcond',
      167 => 'field_rm5_out__torcond',
      168 => 'field_rm5_wth__torcond',
      169 => 'field_rm6_dc1_out__torcond',
      170 => 'field_rm6_dc2_out__torcond',
      171 => 'field_rm6_dc3_out__torcond',
      172 => 'field_rm6_len__torcond',
      173 => 'field_rm6_out__torcond',
      174 => 'field_rm6_wth__torcond',
      175 => 'field_rm7_dc1_out__torcond',
      176 => 'field_rm7_dc2_out__torcond',
      177 => 'field_den_fr__torcond',
      178 => 'field_all_inc__torcond',
      179 => 'field_ass_year__torcond',
      180 => 'field_bath_tot__torcond',
      181 => 'field_bldg_amen1_out__torcond',
      182 => 'field_bldg_amen2_out__torcond',
      183 => 'field_bldg_amen3_out__torcond',
      184 => 'field_bldg_amen4_out__torcond',
      185 => 'field_bldg_amen5_out__torcond',
      186 => 'field_bldg_amen6_out__torcond',
      187 => 'field_br__torcond',
      188 => 'field_br_plus__torcond',
      189 => 'field_bsmt1_out__torcond',
      190 => 'field_cable__torcond',
      191 => 'field_cac_inc__torcond',
      192 => 'field_central_vac__torcond',
      193 => 'field_mmap_col__torcond',
      194 => 'field_gar_type__torcond',
      195 => 'field_rm2_dc1_out__torcond',
      196 => 'field_bsmt2_out__torcond',
      197 => 'field_ad_text__torcond',
      198 => 'field_vtour_updt__torcond',
      199 => 'field_timestamp_sql__torcond',
      200 => 'field_idx_dt__torcond',
      201 => 'field_pix_updt__torcond',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'MLS fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-mls-fields field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_mls_fields|drealty_listing|toronto_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_not_mls|drealty_listing|toronto_condo|form';
  $field_group->group_name = 'group_not_mls';
  $field_group->entity_type = 'drealty_listing';
  $field_group->bundle = 'toronto_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Fields not from MLS',
    'weight' => '204',
    'children' => array(
      0 => 'field_test_geofilld',
      1 => 'field_address_full__torcond',
      2 => 'field_city_region__torcond',
      3 => 'field_price_per_sqft__torcond',
      4 => 'field_sqft_range_max__torcond',
      5 => 'field_sqft_range_min__torcond',
      6 => 'field_old_price_value__torcond',
      7 => 'field_search_point_string',
      8 => 'field_change_full_address_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_not_mls|drealty_listing|toronto_condo|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Address  fields (from MLS)');
  t('Fields not from MLS');
  t('MLS fields');

  return $field_groups;
}
