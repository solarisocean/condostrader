<?php
/**
 * @file
 * ctf_views_single_condo_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_single_condo_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'single_condo_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Single condo view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Single condo view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'field_data_field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Drealty Listing: Community */
  $handler->display->display_options['fields']['field_community__torcond']['id'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['table'] = 'field_data_field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['field'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Unit_num */
  $handler->display->display_options['fields']['field_unit_num__torcond']['id'] = 'field_unit_num__torcond';
  $handler->display->display_options['fields']['field_unit_num__torcond']['table'] = 'field_data_field_unit_num__torcond';
  $handler->display->display_options['fields']['field_unit_num__torcond']['field'] = 'field_unit_num__torcond';
  $handler->display->display_options['fields']['field_unit_num__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft__torcond']['id'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['table'] = 'field_data_field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['field'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['text'] = '[field_sqft__torcond] sqft';
  /* Field: Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus__torcond']['id'] = 'field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['table'] = 'field_data_field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['field'] = 'field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['alter']['text'] = '+[field_br_plus__torcond]';
  $handler->display->display_options['fields']['field_br_plus__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br__torcond']['id'] = 'field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['table'] = 'field_data_field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['field'] = 'field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['alter']['text'] = '[field_br__torcond][field_br_plus__torcond]';
  $handler->display->display_options['fields']['field_br__torcond']['empty'] = '-';
  $handler->display->display_options['fields']['field_br__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Bed';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_br__torcond] Bed';
  /* Field: Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot__torcond']['id'] = 'field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['table'] = 'field_data_field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['field'] = 'field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot__torcond']['alter']['text'] = '[field_bath_tot__torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['empty'] = '-';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Bath info 1 */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Bath info 1';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Baths (info 1)';
  $handler->display->display_options['fields']['nothing_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '[field_bath_tot__torcond] Bath';
  /* Field: Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets__torcond']['id'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['table'] = 'field_data_field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['field'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker__torcond']['id'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['table'] = 'field_data_field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['field'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['id'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['table'] = 'field_data_field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['field'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr__torcond']['id'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['table'] = 'field_data_field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['field'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area__torcond']['id'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['table'] = 'field_data_field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['field'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['text'] = ', [field_area__torcond]';
  /* Field: Drealty Listing: County */
  $handler->display->display_options['fields']['field_county__torcond']['id'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['table'] = 'field_data_field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['field'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Zip */
  $handler->display->display_options['fields']['field_zip__torcond']['id'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['table'] = 'field_data_field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['field'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['text'] = ', [field_zip__torcond]';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'About this listing (n-f)';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_7',
    1 => 'nothing_8',
    2 => 'nothing',
    3 => 'field_ad_text__torcond',
    4 => 'field_extras__torcond',
    5 => 'field_rltr__torcond',
    6 => 'field_ml_num__torcond',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'info-fieldset fieldset-left';
  /* Field: Title */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['nothing_7']['label'] = '';
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = '[field_community__torcond] Condo, Unit [field_unit_num__torcond]';
  $handler->display->display_options['fields']['nothing_7']['element_type'] = 'h1';
  $handler->display->display_options['fields']['nothing_7']['element_label_colon'] = FALSE;
  /* Field: Address */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['ui_name'] = 'Address';
  $handler->display->display_options['fields']['nothing_8']['label'] = '';
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = '[field_addr__torcond] [field_community__torcond][field_area__torcond][field_zip__torcond]';
  $handler->display->display_options['fields']['nothing_8']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '    <div class="condo-info-line"><span        class="condo-info-element sqft"><span></span>[field_sqft__torcond]</span><span
        class="condo-info-element bed"><span></span>[nothing_1]</span><span
        class="condo-info-element bath"><span></span>[nothing_6]</span><span
        class="condo-info-element pets"><span></span>[views_conditional]</span><span
        class="condo-info-element locker"><span></span>[views_conditional_1]</span><span
        class="condo-info-element parking"><span></span>[views_conditional_2]</span>
    </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Ad_text */
  $handler->display->display_options['fields']['field_ad_text__torcond']['id'] = 'field_ad_text__torcond';
  $handler->display->display_options['fields']['field_ad_text__torcond']['table'] = 'field_data_field_ad_text__torcond';
  $handler->display->display_options['fields']['field_ad_text__torcond']['field'] = 'field_ad_text__torcond';
  $handler->display->display_options['fields']['field_ad_text__torcond']['label'] = 'About this listing';
  $handler->display->display_options['fields']['field_ad_text__torcond']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Extras */
  $handler->display->display_options['fields']['field_extras__torcond']['id'] = 'field_extras__torcond';
  $handler->display->display_options['fields']['field_extras__torcond']['table'] = 'field_data_field_extras__torcond';
  $handler->display->display_options['fields']['field_extras__torcond']['field'] = 'field_extras__torcond';
  /* Field: Drealty Listing: Rltr */
  $handler->display->display_options['fields']['field_rltr__torcond']['id'] = 'field_rltr__torcond';
  $handler->display->display_options['fields']['field_rltr__torcond']['table'] = 'field_data_field_rltr__torcond';
  $handler->display->display_options['fields']['field_rltr__torcond']['field'] = 'field_rltr__torcond';
  $handler->display->display_options['fields']['field_rltr__torcond']['label'] = 'Broker';
  /* Field: Drealty Listing: Ml_num */
  $handler->display->display_options['fields']['field_ml_num__torcond']['id'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['table'] = 'field_data_field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['field'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['label'] = '';
  $handler->display->display_options['fields']['field_ml_num__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ml_num__torcond']['alter']['text'] = 'MLS# [field_ml_num__torcond]';
  $handler->display->display_options['fields']['field_ml_num__torcond']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol__torcond']['id'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['table'] = 'field_data_field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['field'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Condo Listing Details';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'nothing_2',
    1 => 'nothing_3',
    2 => 'days_on_market_2',
    3 => 'field_taxes__torcond',
    4 => 'field_maint__torcond',
    5 => 'nothing_4',
    6 => 'nothing_5',
    7 => 'field_condo_exp__torcond',
    8 => 'field_patio_ter__torcond',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'info-fieldset top-center-fieldset';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Asking Price';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '$[field_lp_dol__torcond]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'MLS Size';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_sqft__torcond]';
  /* Field: Drealty Listing: Days on market */
  $handler->display->display_options['fields']['days_on_market_2']['id'] = 'days_on_market_2';
  $handler->display->display_options['fields']['days_on_market_2']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['days_on_market_2']['field'] = 'days_on_market';
  $handler->display->display_options['fields']['days_on_market_2']['alter']['alter_text'] = 1;
  /* Field: Drealty Listing: Taxes */
  $handler->display->display_options['fields']['field_taxes__torcond']['id'] = 'field_taxes__torcond';
  $handler->display->display_options['fields']['field_taxes__torcond']['table'] = 'field_data_field_taxes__torcond';
  $handler->display->display_options['fields']['field_taxes__torcond']['field'] = 'field_taxes__torcond';
  $handler->display->display_options['fields']['field_taxes__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_taxes__torcond']['alter']['text'] = '$[field_taxes__torcond]';
  $handler->display->display_options['fields']['field_taxes__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_taxes__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_taxes__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint__torcond']['id'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['table'] = 'field_data_field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['field'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['text'] = '$[field_maint__torcond]';
  $handler->display->display_options['fields']['field_maint__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Beds';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[field_br__torcond] ';
  /* Field: Bath info 2 */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'Bath info 2';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Baths';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[field_bath_tot__torcond]';
  /* Field: Drealty Listing: Condo_exp */
  $handler->display->display_options['fields']['field_condo_exp__torcond']['id'] = 'field_condo_exp__torcond';
  $handler->display->display_options['fields']['field_condo_exp__torcond']['table'] = 'field_data_field_condo_exp__torcond';
  $handler->display->display_options['fields']['field_condo_exp__torcond']['field'] = 'field_condo_exp__torcond';
  $handler->display->display_options['fields']['field_condo_exp__torcond']['label'] = 'Exposure';
  /* Field: Drealty Listing: Patio_ter */
  $handler->display->display_options['fields']['field_patio_ter__torcond']['id'] = 'field_patio_ter__torcond';
  $handler->display->display_options['fields']['field_patio_ter__torcond']['table'] = 'field_data_field_patio_ter__torcond';
  $handler->display->display_options['fields']['field_patio_ter__torcond']['field'] = 'field_patio_ter__torcond';
  $handler->display->display_options['fields']['field_patio_ter__torcond']['label'] = 'Balcony';
  /* Field: Drealty Listing: Fpl_num */
  $handler->display->display_options['fields']['field_fpl_num__torcond']['id'] = 'field_fpl_num__torcond';
  $handler->display->display_options['fields']['field_fpl_num__torcond']['table'] = 'field_data_field_fpl_num__torcond';
  $handler->display->display_options['fields']['field_fpl_num__torcond']['field'] = 'field_fpl_num__torcond';
  $handler->display->display_options['fields']['field_fpl_num__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Ens_lndry */
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['id'] = 'field_ens_lndry__torcond';
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['table'] = 'field_data_field_ens_lndry__torcond';
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['field'] = 'field_ens_lndry__torcond';
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Amenities';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'views_conditional_3',
    1 => 'views_conditional_4',
    2 => 'views_conditional_5',
    3 => 'views_conditional_6',
    4 => 'views_conditional_7',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'info-fieldset amentities-fieldset';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_3']['element_class'] = 'condo-info-element pets';
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional_3']['or'] = 'Pets Allowed';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_4']['element_class'] = 'condo-info-element parking';
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_4']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = 'Parking';
  $handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
  $handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_5']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_5']['element_class'] = 'condo-info-element locker';
  $handler->display->display_options['fields']['views_conditional_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_5']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_5']['element_wrapper_class'] = 'condo-info-element locker';
  $handler->display->display_options['fields']['views_conditional_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['if'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['views_conditional_5']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional_5']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional_5']['then'] = 'Locker';
  $handler->display->display_options['fields']['views_conditional_5']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_5']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_6']['id'] = 'views_conditional_6';
  $handler->display->display_options['fields']['views_conditional_6']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_6']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_6']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_6']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_6']['element_class'] = 'condo-info-element fireplace';
  $handler->display->display_options['fields']['views_conditional_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_6']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_6']['if'] = 'field_fpl_num__torcond';
  $handler->display->display_options['fields']['views_conditional_6']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_6']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_6']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional_6']['or'] = 'Fireplace/Stove';
  $handler->display->display_options['fields']['views_conditional_6']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_7']['id'] = 'views_conditional_7';
  $handler->display->display_options['fields']['views_conditional_7']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_7']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_7']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_7']['if'] = 'field_ens_lndry__torcond';
  $handler->display->display_options['fields']['views_conditional_7']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional_7']['equalto'] = 'Y';
  $handler->display->display_options['fields']['views_conditional_7']['or'] = 'Washer/Dryer';
  $handler->display->display_options['fields']['views_conditional_7']['strip_tags'] = 0;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Mortgage Calculator';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'mortgage_calculator',
  );
  /* Field: Drealty Listing: Mortgage calculator */
  $handler->display->display_options['fields']['mortgage_calculator']['id'] = 'mortgage_calculator';
  $handler->display->display_options['fields']['mortgage_calculator']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['mortgage_calculator']['field'] = 'mortgage_calculator';
  $handler->display->display_options['fields']['mortgage_calculator']['label'] = '';
  $handler->display->display_options['fields']['mortgage_calculator']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['mortgage_calculator']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_4']['id'] = 'fieldset_4';
  $handler->display->display_options['fields']['fieldset_4']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_4']['field'] = 'fieldset';
  /* Contextual filter: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_condo';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'field_data_field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Drealty Listing: Community */
  $handler->display->display_options['fields']['field_community__torcond']['id'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['table'] = 'field_data_field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['field'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Unit_num */
  $handler->display->display_options['fields']['field_unit_num__torcond']['id'] = 'field_unit_num__torcond';
  $handler->display->display_options['fields']['field_unit_num__torcond']['table'] = 'field_data_field_unit_num__torcond';
  $handler->display->display_options['fields']['field_unit_num__torcond']['field'] = 'field_unit_num__torcond';
  $handler->display->display_options['fields']['field_unit_num__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft__torcond']['id'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['table'] = 'field_data_field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['field'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['text'] = '[field_sqft__torcond] sqft';
  /* Field: Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus__torcond']['id'] = 'field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['table'] = 'field_data_field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['field'] = 'field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['alter']['text'] = '+[field_br_plus__torcond]';
  $handler->display->display_options['fields']['field_br_plus__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br__torcond']['id'] = 'field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['table'] = 'field_data_field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['field'] = 'field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['alter']['text'] = '[field_br__torcond][field_br_plus__torcond]';
  $handler->display->display_options['fields']['field_br__torcond']['empty'] = '-';
  $handler->display->display_options['fields']['field_br__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Bed';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_br__torcond] Bed';
  /* Field: Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot__torcond']['id'] = 'field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['table'] = 'field_data_field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['field'] = 'field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot__torcond']['alter']['text'] = '[field_bath_tot__torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['empty'] = '-';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Bath info 1 */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Bath info 1';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Baths (info 1)';
  $handler->display->display_options['fields']['nothing_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '[field_bath_tot__torcond] Bath';
  /* Field: Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets__torcond']['id'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['table'] = 'field_data_field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['field'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker__torcond']['id'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['table'] = 'field_data_field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['field'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['id'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['table'] = 'field_data_field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['field'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr__torcond']['id'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['table'] = 'field_data_field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['field'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area__torcond']['id'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['table'] = 'field_data_field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['field'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['text'] = ', [field_area__torcond]';
  /* Field: Drealty Listing: County */
  $handler->display->display_options['fields']['field_county__torcond']['id'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['table'] = 'field_data_field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['field'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Zip */
  $handler->display->display_options['fields']['field_zip__torcond']['id'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['table'] = 'field_data_field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['field'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['text'] = ', [field_zip__torcond]';
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'About this listing (n-f)';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_7',
    1 => 'nothing_8',
    2 => 'nothing',
    3 => 'field_ad_text__torcond',
    4 => 'field_extras__torcond',
    5 => 'field_rltr__torcond',
    6 => 'field_ml_num__torcond',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  $handler->display->display_options['fields']['fieldset']['fieldset']['classes'] = 'info-fieldset fieldset-left';
  /* Field: Title */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['nothing_7']['label'] = '';
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = '[field_community__torcond] Condo, Unit [field_unit_num__torcond]';
  $handler->display->display_options['fields']['nothing_7']['element_type'] = 'h1';
  $handler->display->display_options['fields']['nothing_7']['element_class'] = 'condo-title';
  $handler->display->display_options['fields']['nothing_7']['element_label_colon'] = FALSE;
  /* Field: Address */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['ui_name'] = 'Address';
  $handler->display->display_options['fields']['nothing_8']['label'] = '';
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = '[field_addr__torcond] [field_community__torcond][field_area__torcond][field_zip__torcond]';
  $handler->display->display_options['fields']['nothing_8']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '    <div class="condo-info-line"><span        class="condo-info-element sqft"><span></span>[field_sqft__torcond]</span><span
        class="condo-info-element bed"><span></span>[nothing_1]</span><span
        class="condo-info-element bath"><span></span>[nothing_6]</span><span
        class="condo-info-element pets"><span></span>[views_conditional]</span><span
        class="condo-info-element locker"><span></span>[views_conditional_1]</span><span
        class="condo-info-element parking"><span></span>[views_conditional_2]</span>
    </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Ad_text */
  $handler->display->display_options['fields']['field_ad_text__torcond']['id'] = 'field_ad_text__torcond';
  $handler->display->display_options['fields']['field_ad_text__torcond']['table'] = 'field_data_field_ad_text__torcond';
  $handler->display->display_options['fields']['field_ad_text__torcond']['field'] = 'field_ad_text__torcond';
  $handler->display->display_options['fields']['field_ad_text__torcond']['label'] = 'About this listing';
  $handler->display->display_options['fields']['field_ad_text__torcond']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Extras */
  $handler->display->display_options['fields']['field_extras__torcond']['id'] = 'field_extras__torcond';
  $handler->display->display_options['fields']['field_extras__torcond']['table'] = 'field_data_field_extras__torcond';
  $handler->display->display_options['fields']['field_extras__torcond']['field'] = 'field_extras__torcond';
  /* Field: Drealty Listing: Rltr */
  $handler->display->display_options['fields']['field_rltr__torcond']['id'] = 'field_rltr__torcond';
  $handler->display->display_options['fields']['field_rltr__torcond']['table'] = 'field_data_field_rltr__torcond';
  $handler->display->display_options['fields']['field_rltr__torcond']['field'] = 'field_rltr__torcond';
  $handler->display->display_options['fields']['field_rltr__torcond']['label'] = 'Broker';
  /* Field: Drealty Listing: Ml_num */
  $handler->display->display_options['fields']['field_ml_num__torcond']['id'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['table'] = 'field_data_field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['field'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['label'] = '';
  $handler->display->display_options['fields']['field_ml_num__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ml_num__torcond']['alter']['text'] = 'MLS# [field_ml_num__torcond]';
  $handler->display->display_options['fields']['field_ml_num__torcond']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol__torcond']['id'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['table'] = 'field_data_field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['field'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'single-condo-view/%';

  /* Display: Details */
  $handler = $view->new_display('page', 'Details', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Single condo view details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft__torcond']['id'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['table'] = 'field_data_field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['field'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['text'] = '[field_sqft__torcond] sqft';
  /* Field: Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus__torcond']['id'] = 'field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['table'] = 'field_data_field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['field'] = 'field_br_plus__torcond';
  $handler->display->display_options['fields']['field_br_plus__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['alter']['text'] = '+[field_br_plus__torcond]';
  $handler->display->display_options['fields']['field_br_plus__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br__torcond']['id'] = 'field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['table'] = 'field_data_field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['field'] = 'field_br__torcond';
  $handler->display->display_options['fields']['field_br__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['alter']['text'] = '[field_br__torcond][field_br_plus__torcond]';
  $handler->display->display_options['fields']['field_br__torcond']['empty'] = '-';
  $handler->display->display_options['fields']['field_br__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Bed';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_br__torcond] Bed';
  /* Field: Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot__torcond']['id'] = 'field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['table'] = 'field_data_field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['field'] = 'field_bath_tot__torcond';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot__torcond']['alter']['text'] = '[field_bath_tot__torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['empty'] = '-';
  $handler->display->display_options['fields']['field_bath_tot__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Bath info 1 */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['ui_name'] = 'Bath info 1';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Baths (info 1)';
  $handler->display->display_options['fields']['nothing_6']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_6']['alter']['text'] = '[field_bath_tot__torcond] Bath';
  /* Field: Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets__torcond']['id'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['table'] = 'field_data_field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['field'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['field_pets__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker__torcond']['id'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['table'] = 'field_data_field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['field'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['field_locker__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['id'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['table'] = 'field_data_field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['field'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['field_prkg_inc__torcond']['exclude'] = TRUE;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol__torcond']['id'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['table'] = 'field_data_field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['field'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_1']['id'] = 'fieldset_1';
  $handler->display->display_options['fields']['fieldset_1']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_1']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_1']['label'] = 'Condo Listing Details';
  $handler->display->display_options['fields']['fieldset_1']['children'] = array(
    0 => 'nothing_2',
    1 => 'nothing_3',
    2 => 'days_on_market_2',
    3 => 'field_taxes__torcond',
    4 => 'field_maint__torcond',
    5 => 'nothing_4',
    6 => 'nothing_5',
    7 => 'field_condo_exp__torcond',
    8 => 'field_patio_ter__torcond',
  );
  $handler->display->display_options['fields']['fieldset_1']['fieldset']['classes'] = 'info-fieldset top-center-fieldset';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Asking Price';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '$[field_lp_dol__torcond]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'MLS Size';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_sqft__torcond]';
  /* Field: Drealty Listing: Days on market */
  $handler->display->display_options['fields']['days_on_market_2']['id'] = 'days_on_market_2';
  $handler->display->display_options['fields']['days_on_market_2']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['days_on_market_2']['field'] = 'days_on_market';
  $handler->display->display_options['fields']['days_on_market_2']['alter']['alter_text'] = 1;
  /* Field: Drealty Listing: Taxes */
  $handler->display->display_options['fields']['field_taxes__torcond']['id'] = 'field_taxes__torcond';
  $handler->display->display_options['fields']['field_taxes__torcond']['table'] = 'field_data_field_taxes__torcond';
  $handler->display->display_options['fields']['field_taxes__torcond']['field'] = 'field_taxes__torcond';
  $handler->display->display_options['fields']['field_taxes__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_taxes__torcond']['alter']['text'] = '$[field_taxes__torcond]';
  $handler->display->display_options['fields']['field_taxes__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_taxes__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_taxes__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint__torcond']['id'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['table'] = 'field_data_field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['field'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['text'] = '$[field_maint__torcond]';
  $handler->display->display_options['fields']['field_maint__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Beds';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[field_br__torcond] ';
  /* Field: Bath info 2 */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['ui_name'] = 'Bath info 2';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Baths';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[field_bath_tot__torcond]';
  /* Field: Drealty Listing: Condo_exp */
  $handler->display->display_options['fields']['field_condo_exp__torcond']['id'] = 'field_condo_exp__torcond';
  $handler->display->display_options['fields']['field_condo_exp__torcond']['table'] = 'field_data_field_condo_exp__torcond';
  $handler->display->display_options['fields']['field_condo_exp__torcond']['field'] = 'field_condo_exp__torcond';
  $handler->display->display_options['fields']['field_condo_exp__torcond']['label'] = 'Exposure';
  /* Field: Drealty Listing: Patio_ter */
  $handler->display->display_options['fields']['field_patio_ter__torcond']['id'] = 'field_patio_ter__torcond';
  $handler->display->display_options['fields']['field_patio_ter__torcond']['table'] = 'field_data_field_patio_ter__torcond';
  $handler->display->display_options['fields']['field_patio_ter__torcond']['field'] = 'field_patio_ter__torcond';
  $handler->display->display_options['fields']['field_patio_ter__torcond']['label'] = 'Balcony';
  /* Field: Drealty Listing: Fpl_num */
  $handler->display->display_options['fields']['field_fpl_num__torcond']['id'] = 'field_fpl_num__torcond';
  $handler->display->display_options['fields']['field_fpl_num__torcond']['table'] = 'field_data_field_fpl_num__torcond';
  $handler->display->display_options['fields']['field_fpl_num__torcond']['field'] = 'field_fpl_num__torcond';
  $handler->display->display_options['fields']['field_fpl_num__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: Ens_lndry */
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['id'] = 'field_ens_lndry__torcond';
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['table'] = 'field_data_field_ens_lndry__torcond';
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['field'] = 'field_ens_lndry__torcond';
  $handler->display->display_options['fields']['field_ens_lndry__torcond']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_2']['id'] = 'fieldset_2';
  $handler->display->display_options['fields']['fieldset_2']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_2']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_2']['label'] = 'Amenities';
  $handler->display->display_options['fields']['fieldset_2']['children'] = array(
    0 => 'views_conditional_3',
    1 => 'views_conditional_4',
    2 => 'views_conditional_5',
    3 => 'views_conditional_6',
    4 => 'views_conditional_7',
  );
  $handler->display->display_options['fields']['fieldset_2']['fieldset']['classes'] = 'info-fieldset amentities-fieldset';
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_3']['id'] = 'views_conditional_3';
  $handler->display->display_options['fields']['views_conditional_3']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_3']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_3']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_3']['element_class'] = 'condo-info-element pets';
  $handler->display->display_options['fields']['views_conditional_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_3']['if'] = 'field_pets__torcond';
  $handler->display->display_options['fields']['views_conditional_3']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_3']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_3']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional_3']['or'] = 'Pets Allowed';
  $handler->display->display_options['fields']['views_conditional_3']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_4']['id'] = 'views_conditional_4';
  $handler->display->display_options['fields']['views_conditional_4']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_4']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_4']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_4']['element_class'] = 'condo-info-element parking';
  $handler->display->display_options['fields']['views_conditional_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_4']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_4']['if'] = 'field_prkg_inc__torcond';
  $handler->display->display_options['fields']['views_conditional_4']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_4']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_4']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional_4']['or'] = 'Parking';
  $handler->display->display_options['fields']['views_conditional_4']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_5']['id'] = 'views_conditional_5';
  $handler->display->display_options['fields']['views_conditional_5']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_5']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_5']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_5']['element_class'] = 'condo-info-element locker';
  $handler->display->display_options['fields']['views_conditional_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_5']['element_wrapper_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_5']['element_wrapper_class'] = 'condo-info-element locker';
  $handler->display->display_options['fields']['views_conditional_5']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_5']['if'] = 'field_locker__torcond';
  $handler->display->display_options['fields']['views_conditional_5']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional_5']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional_5']['then'] = 'Locker';
  $handler->display->display_options['fields']['views_conditional_5']['or'] = '0';
  $handler->display->display_options['fields']['views_conditional_5']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_6']['id'] = 'views_conditional_6';
  $handler->display->display_options['fields']['views_conditional_6']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_6']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_6']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_6']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_6']['element_class'] = 'condo-info-element fireplace';
  $handler->display->display_options['fields']['views_conditional_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_6']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_6']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_6']['if'] = 'field_fpl_num__torcond';
  $handler->display->display_options['fields']['views_conditional_6']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_6']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_6']['then'] = '0';
  $handler->display->display_options['fields']['views_conditional_6']['or'] = 'Fireplace/Stove';
  $handler->display->display_options['fields']['views_conditional_6']['strip_tags'] = 0;
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional_7']['id'] = 'views_conditional_7';
  $handler->display->display_options['fields']['views_conditional_7']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_7']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_7']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_7']['element_type'] = 'span';
  $handler->display->display_options['fields']['views_conditional_7']['element_class'] = 'condo-info-element washer';
  $handler->display->display_options['fields']['views_conditional_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_7']['if'] = 'field_ens_lndry__torcond';
  $handler->display->display_options['fields']['views_conditional_7']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional_7']['equalto'] = 'Y';
  $handler->display->display_options['fields']['views_conditional_7']['or'] = 'Washer/Dryer';
  $handler->display->display_options['fields']['views_conditional_7']['strip_tags'] = 0;
  $handler->display->display_options['path'] = 'single-condo-view-details/%';

  /* Display: Mortgage */
  $handler = $view->new_display('page', 'Mortgage', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mortgage';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol__torcond']['id'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['table'] = 'field_data_field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['field'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol__torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: S_r */
  $handler->display->display_options['fields']['field_s_r__torcond']['id'] = 'field_s_r__torcond';
  $handler->display->display_options['fields']['field_s_r__torcond']['table'] = 'field_data_field_s_r__torcond';
  $handler->display->display_options['fields']['field_s_r__torcond']['field'] = 'field_s_r__torcond';
  $handler->display->display_options['fields']['field_s_r__torcond']['exclude'] = TRUE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset_3']['id'] = 'fieldset_3';
  $handler->display->display_options['fields']['fieldset_3']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset_3']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset_3']['label'] = 'Mortgage Calculator';
  $handler->display->display_options['fields']['fieldset_3']['children'] = array(
    0 => 'mortgage_calculator',
  );
  /* Field: Drealty Listing: Mortgage calculator */
  $handler->display->display_options['fields']['mortgage_calculator']['id'] = 'mortgage_calculator';
  $handler->display->display_options['fields']['mortgage_calculator']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['mortgage_calculator']['field'] = 'mortgage_calculator';
  $handler->display->display_options['fields']['mortgage_calculator']['label'] = '';
  $handler->display->display_options['fields']['mortgage_calculator']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['mortgage_calculator']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'single-condo-view-mortgage/%';
  $export['single_condo_view'] = $view;

  return $export;
}
