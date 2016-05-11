<?php
/**
 * @file
 * ctf_views_homepage_view_blocks.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_homepage_view_blocks_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_view_blocks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_toronto_condo_index';
  $view->human_name = 'Homepage view blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<span>Homepage</span> blocks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'ASC';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'DESC';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sort_bef_combine',
        'combine_rewrite' => '',
        'reset' => 1,
        'reset_label' => ' ',
        'is_secondary' => 0,
        'secondary_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: view all link */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'view all link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/results">view all</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => 'large',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['text'] = '$[field_lp_dol_torcond]';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = 'Address';
  $handler->display->display_options['fields']['field_addr_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['text'] = '[field_addr_torcond], ';
  $handler->display->display_options['fields']['field_addr_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area_torcond']['id'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_area_torcond']['field'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['text'] = '[field_area_torcond]';
  $handler->display->display_options['fields']['field_area_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: County */
  $handler->display->display_options['fields']['field_county_torcond']['id'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_county_torcond']['field'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['text'] = ', [field_county_torcond]';
  /* Field: Indexed Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus_torcond']['id'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_plus_torcond']['field'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_plus_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['text'] = '+[field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_plus_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['text'] = '[field_br_torcond][field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_br_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft_torcond']['id'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_sqft_torcond']['field'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['text'] = '[field_sqft_torcond] sqft';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty'] = 'no results text ';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty_zero'] = TRUE;
  /* Field: Beds */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Beds';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_br_torcond] Bed';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot_torcond']['id'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['field'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['text'] = '[field_bath_tot_torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets_torcond']['id'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_pets_torcond']['field'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_pets_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_pets_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['hide_alter_empty'] = FALSE;
  /* Field: Pets (custom condition) */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Pets (custom condition)';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker_torcond']['id'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_locker_torcond']['field'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['exclude'] = TRUE;
  /* Field: Locker (custom condition) */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Locker (custom condition)';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['id'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['field'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['element_label_colon'] = FALSE;
  /* Field: Parking (custom condition) */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Parking (custom condition)';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: CTrader Flag integration: CTrader Flag */
  $handler->display->display_options['fields']['ctrader_flag_handler']['id'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['table'] = 'ctrader';
  $handler->display->display_options['fields']['ctrader_flag_handler']['field'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['label'] = '';
  $handler->display->display_options['fields']['ctrader_flag_handler']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ctrader_flag_handler']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['ctrader_flag_handler']['element_label_colon'] = FALSE;
  /* Field: Discount */
  $handler->display->display_options['fields']['field_old_price_value_torcond']['id'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['field'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['ui_name'] = 'Discount';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = 'Price -[field_old_price_value_torcond]%';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['empty_zero'] = TRUE;
  /* Field: Photo with price */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Photo with price';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_toronto_gallery]
<span class="price">[field_lp_dol_torcond]</span>
<span class="discount">[field_old_price_value_torcond]</span>
<span class="flag">[ctrader_flag_handler] </span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info block';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'field_community_torcond',
    1 => 'nothing',
    2 => 'field_maint_torcond',
    3 => 'nothing_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Condo title (community or area) */
  $handler->display->display_options['fields']['field_community_torcond']['id'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_community_torcond']['field'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['ui_name'] = 'Condo title (community or area)';
  $handler->display->display_options['fields']['field_community_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_community_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_community_torcond']['alter']['text'] = '[field_community_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['empty'] = '[field_area_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Full address */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Full address';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_addr_torcond][field_area_torcond][field_county_torcond]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint_torcond']['id'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_maint_torcond']['field'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['text'] = '$[field_maint_torcond]';
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_maint_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft_torcond]</span><span class="condo-info-element bed"><span></span>[nothing_3]</span><span class="condo-info-element bath"><span></span>[field_bath_tot_torcond]</span></div>
<div class="condo-info-line"><span class="condo-info-element pets"><span></span>[views_conditional_1]</span><span class="condo-info-element locker"><span></span>[views_conditional]</span><span class="condo-info-element parking"><span></span>[views_conditional_2]</span></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['order'] = 'DESC';
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';

  /* Display: newly listed */
  $handler = $view->new_display('page', 'newly listed', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span>Newly</span> listed';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'newly-listed-slider swiper-container';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'swiper-slide';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: view all link */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'view all link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/results">view all</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';
  $handler->display->display_options['path'] = 'newly-listed-condos';
  $handler->display->display_options['menu']['title'] = 'Search page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Most viewed */
  $handler = $view->new_display('page', 'Most viewed', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span>Most</span> viewed';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-most-viewed-block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: view all link */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'view all link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/results">view all</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => '190x120',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['text'] = '$[field_lp_dol_torcond]';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = 'Address';
  $handler->display->display_options['fields']['field_addr_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['text'] = '[field_addr_torcond], ';
  $handler->display->display_options['fields']['field_addr_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area_torcond']['id'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_area_torcond']['field'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['text'] = '[field_area_torcond]';
  $handler->display->display_options['fields']['field_area_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: County */
  $handler->display->display_options['fields']['field_county_torcond']['id'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_county_torcond']['field'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['text'] = ', [field_county_torcond]';
  /* Field: Indexed Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus_torcond']['id'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_plus_torcond']['field'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_plus_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['text'] = '+[field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_plus_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['text'] = '[field_br_torcond][field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_br_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft_torcond']['id'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_sqft_torcond']['field'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['text'] = '[field_sqft_torcond] sqft';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty'] = 'no results text ';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty_zero'] = TRUE;
  /* Field: Beds */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Beds';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_br_torcond] Bed';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot_torcond']['id'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['field'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['text'] = '[field_bath_tot_torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets_torcond']['id'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_pets_torcond']['field'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_pets_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_pets_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['hide_alter_empty'] = FALSE;
  /* Field: Pets (custom condition) */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Pets (custom condition)';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker_torcond']['id'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_locker_torcond']['field'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['exclude'] = TRUE;
  /* Field: Locker (custom condition) */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Locker (custom condition)';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['id'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['field'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['element_label_colon'] = FALSE;
  /* Field: Parking (custom condition) */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Parking (custom condition)';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: CTrader Flag integration: CTrader Flag */
  $handler->display->display_options['fields']['ctrader_flag_handler']['id'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['table'] = 'ctrader';
  $handler->display->display_options['fields']['ctrader_flag_handler']['field'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['label'] = '';
  $handler->display->display_options['fields']['ctrader_flag_handler']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ctrader_flag_handler']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['ctrader_flag_handler']['element_label_colon'] = FALSE;
  /* Field: Discount */
  $handler->display->display_options['fields']['field_old_price_value_torcond']['id'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['field'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['ui_name'] = 'Discount';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = 'Price -[field_old_price_value_torcond]%';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['empty_zero'] = TRUE;
  /* Field: Photo with price */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Photo with price';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_toronto_gallery]
<span class="price">[field_lp_dol_torcond]</span>
  <span class="discount">[field_old_price_value_torcond]</span>
<span class="flag">[ctrader_flag_handler] </span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info block';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_4',
    1 => 'field_community_torcond',
    2 => 'nothing',
    3 => 'field_maint_torcond',
    4 => 'nothing_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Condo title (community or area) */
  $handler->display->display_options['fields']['field_community_torcond']['id'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_community_torcond']['field'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['ui_name'] = 'Condo title (community or area)';
  $handler->display->display_options['fields']['field_community_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_community_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_community_torcond']['alter']['text'] = '[field_community_torcond] Condo
';
  $handler->display->display_options['fields']['field_community_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['empty'] = '[field_area_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Full address */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Full address';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_addr_torcond][field_area_torcond][field_county_torcond]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint_torcond']['id'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_maint_torcond']['field'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['text'] = '$[field_maint_torcond]';
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_maint_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft_torcond]</span><span class="condo-info-element bed"><span></span>[nothing_3]</span><span class="condo-info-element bath"><span></span>[field_bath_tot_torcond]</span></div>
<div class="condo-info-line"><span class="condo-info-element pets"><span></span>[views_conditional_1]</span><span class="condo-info-element locker"><span></span>[views_conditional]</span><span class="condo-info-element parking"><span></span>[views_conditional_2]</span></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';
  $handler->display->display_options['path'] = 'newly-listed-condos';
  $handler->display->display_options['menu']['title'] = 'Search page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Highest price */
  $handler = $view->new_display('page', 'Highest price', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span>Highest</span> price';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-highest-price-block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: view all link */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'view all link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/results">view all</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => '190x120',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['text'] = '$[field_lp_dol_torcond]';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = 'Address';
  $handler->display->display_options['fields']['field_addr_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['text'] = '[field_addr_torcond], ';
  $handler->display->display_options['fields']['field_addr_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area_torcond']['id'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_area_torcond']['field'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['text'] = '[field_area_torcond]';
  $handler->display->display_options['fields']['field_area_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: County */
  $handler->display->display_options['fields']['field_county_torcond']['id'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_county_torcond']['field'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['text'] = ', [field_county_torcond]';
  /* Field: Indexed Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus_torcond']['id'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_plus_torcond']['field'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_plus_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['text'] = '+[field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_plus_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['text'] = '[field_br_torcond][field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_br_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft_torcond']['id'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_sqft_torcond']['field'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['text'] = '[field_sqft_torcond] sqft';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty'] = 'no results text ';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty_zero'] = TRUE;
  /* Field: Beds */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Beds';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_br_torcond] Bed';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot_torcond']['id'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['field'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['text'] = '[field_bath_tot_torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets_torcond']['id'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_pets_torcond']['field'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_pets_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_pets_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['hide_alter_empty'] = FALSE;
  /* Field: Pets (custom condition) */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Pets (custom condition)';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker_torcond']['id'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_locker_torcond']['field'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['exclude'] = TRUE;
  /* Field: Locker (custom condition) */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Locker (custom condition)';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['id'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['field'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['element_label_colon'] = FALSE;
  /* Field: Parking (custom condition) */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Parking (custom condition)';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: CTrader Flag integration: CTrader Flag */
  $handler->display->display_options['fields']['ctrader_flag_handler']['id'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['table'] = 'ctrader';
  $handler->display->display_options['fields']['ctrader_flag_handler']['field'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['label'] = '';
  $handler->display->display_options['fields']['ctrader_flag_handler']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ctrader_flag_handler']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['ctrader_flag_handler']['element_label_colon'] = FALSE;
  /* Field: Discount */
  $handler->display->display_options['fields']['field_old_price_value_torcond']['id'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['field'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['ui_name'] = 'Discount';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = 'Price -[field_old_price_value_torcond]%';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['empty_zero'] = TRUE;
  /* Field: Photo with price */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Photo with price';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_toronto_gallery]
<span class="price">[field_lp_dol_torcond]</span>
<span class="discount">[field_old_price_value_torcond]</span>
<span class="flag">[ctrader_flag_handler] </span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info block';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_4',
    1 => 'field_community_torcond',
    2 => 'nothing',
    3 => 'field_maint_torcond',
    4 => 'nothing_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Condo title (community or area) */
  $handler->display->display_options['fields']['field_community_torcond']['id'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_community_torcond']['field'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['ui_name'] = 'Condo title (community or area)';
  $handler->display->display_options['fields']['field_community_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_community_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_community_torcond']['alter']['text'] = '[field_community_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['empty'] = '[field_area_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Full address */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Full address';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_addr_torcond][field_area_torcond][field_county_torcond]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint_torcond']['id'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_maint_torcond']['field'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['text'] = '$[field_maint_torcond]';
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_maint_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft_torcond]</span><span class="condo-info-element bed"><span></span>[nothing_3]</span><span class="condo-info-element bath"><span></span>[field_bath_tot_torcond]</span></div>
<div class="condo-info-line"><span class="condo-info-element pets"><span></span>[views_conditional_1]</span><span class="condo-info-element locker"><span></span>[views_conditional]</span><span class="condo-info-element parking"><span></span>[views_conditional_2]</span></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['order'] = 'DESC';
  /* Sort criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';
  $handler->display->display_options['path'] = 'newly-listed-condos';
  $handler->display->display_options['menu']['title'] = 'Search page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Lowest price */
  $handler = $view->new_display('page', 'Lowest price', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span>Lowest</span> price';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-lowest-price-block';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: view all link */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'view all link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/results">view all</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => '190x120',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['text'] = '$[field_lp_dol_torcond]';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = 'Address';
  $handler->display->display_options['fields']['field_addr_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['alter']['text'] = '[field_addr_torcond], ';
  $handler->display->display_options['fields']['field_addr_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area_torcond']['id'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_area_torcond']['field'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area_torcond']['alter']['text'] = '[field_area_torcond]';
  $handler->display->display_options['fields']['field_area_torcond']['hide_empty'] = TRUE;
  /* Field: Indexed Drealty Listing: County */
  $handler->display->display_options['fields']['field_county_torcond']['id'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_county_torcond']['field'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county_torcond']['alter']['text'] = ', [field_county_torcond]';
  /* Field: Indexed Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus_torcond']['id'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_plus_torcond']['field'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_plus_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['text'] = '+[field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_plus_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['text'] = '[field_br_torcond][field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_br_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft_torcond']['id'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_sqft_torcond']['field'] = 'field_sqft_torcond';
  $handler->display->display_options['fields']['field_sqft_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft_torcond']['alter']['text'] = '[field_sqft_torcond] sqft';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty'] = 'no results text ';
  $handler->display->display_options['fields']['field_sqft_torcond']['empty_zero'] = TRUE;
  /* Field: Beds */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['ui_name'] = 'Beds';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_br_torcond] Bed';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Bath_tot */
  $handler->display->display_options['fields']['field_bath_tot_torcond']['id'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['field'] = 'field_bath_tot_torcond';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['alter']['text'] = '[field_bath_tot_torcond] Bath';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_bath_tot_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 0,
  );
  /* Field: Indexed Drealty Listing: Pets */
  $handler->display->display_options['fields']['field_pets_torcond']['id'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_pets_torcond']['field'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['field_pets_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_pets_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['alter']['text'] = 'No';
  $handler->display->display_options['fields']['field_pets_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_torcond']['hide_alter_empty'] = FALSE;
  /* Field: Pets (custom condition) */
  $handler->display->display_options['fields']['views_conditional_1']['id'] = 'views_conditional_1';
  $handler->display->display_options['fields']['views_conditional_1']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_1']['ui_name'] = 'Pets (custom condition)';
  $handler->display->display_options['fields']['views_conditional_1']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_1']['if'] = 'field_pets_torcond';
  $handler->display->display_options['fields']['views_conditional_1']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_1']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_1']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_1']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_1']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Locker */
  $handler->display->display_options['fields']['field_locker_torcond']['id'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_locker_torcond']['field'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['field_locker_torcond']['exclude'] = TRUE;
  /* Field: Locker (custom condition) */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['ui_name'] = 'Locker (custom condition)';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_locker_torcond';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '2';
  $handler->display->display_options['fields']['views_conditional']['equalto'] = 'None';
  $handler->display->display_options['fields']['views_conditional']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Indexed Drealty Listing: Prkg_inc */
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['id'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['field'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_prkg_inc_torcond']['element_label_colon'] = FALSE;
  /* Field: Parking (custom condition) */
  $handler->display->display_options['fields']['views_conditional_2']['id'] = 'views_conditional_2';
  $handler->display->display_options['fields']['views_conditional_2']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional_2']['ui_name'] = 'Parking (custom condition)';
  $handler->display->display_options['fields']['views_conditional_2']['label'] = '';
  $handler->display->display_options['fields']['views_conditional_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional_2']['if'] = 'field_prkg_inc_torcond';
  $handler->display->display_options['fields']['views_conditional_2']['condition'] = '1';
  $handler->display->display_options['fields']['views_conditional_2']['equalto'] = 'N';
  $handler->display->display_options['fields']['views_conditional_2']['then'] = 'No';
  $handler->display->display_options['fields']['views_conditional_2']['or'] = 'Yes';
  $handler->display->display_options['fields']['views_conditional_2']['strip_tags'] = 0;
  /* Field: CTrader Flag integration: CTrader Flag */
  $handler->display->display_options['fields']['ctrader_flag_handler']['id'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['table'] = 'ctrader';
  $handler->display->display_options['fields']['ctrader_flag_handler']['field'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['label'] = '';
  $handler->display->display_options['fields']['ctrader_flag_handler']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ctrader_flag_handler']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['ctrader_flag_handler']['element_label_colon'] = FALSE;
  /* Field: Discount */
  $handler->display->display_options['fields']['field_old_price_value_torcond']['id'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['field'] = 'field_old_price_value_torcond';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['ui_name'] = 'Discount';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = 'Price -[field_old_price_value_torcond]%';
  $handler->display->display_options['fields']['field_old_price_value_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value_torcond']['empty_zero'] = TRUE;
  /* Field: Photo with price */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Photo with price';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_toronto_gallery]
<span class="price">[field_lp_dol_torcond]</span>
<span class="discount">[field_old_price_value_torcond]</span>
<span class="flag">[ctrader_flag_handler] </span>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info block';
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_4',
    1 => 'field_community_torcond',
    2 => 'nothing',
    3 => 'field_maint_torcond',
    4 => 'nothing_2',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Condo title (community or area) */
  $handler->display->display_options['fields']['field_community_torcond']['id'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_community_torcond']['field'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['ui_name'] = 'Condo title (community or area)';
  $handler->display->display_options['fields']['field_community_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_community_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_community_torcond']['alter']['text'] = '[field_community_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['empty'] = '[field_area_torcond] Condo';
  $handler->display->display_options['fields']['field_community_torcond']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_community_torcond']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Full address */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Full address';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_addr_torcond][field_area_torcond][field_county_torcond]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint_torcond']['id'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_maint_torcond']['field'] = 'field_maint_torcond';
  $handler->display->display_options['fields']['field_maint_torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['alter']['text'] = '$[field_maint_torcond]';
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = 'no results text';
  $handler->display->display_options['fields']['field_maint_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maint_torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft_torcond]</span><span class="condo-info-element bed"><span></span>[nothing_3]</span><span class="condo-info-element bath"><span></span>[field_bath_tot_torcond]</span></div>
<div class="condo-info-line"><span class="condo-info-element pets"><span></span>[views_conditional_1]</span><span class="condo-info-element locker"><span></span>[views_conditional]</span><span class="condo-info-element parking"><span></span>[views_conditional_2]</span></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  /* Sort criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';
  $handler->display->display_options['path'] = 'newly-listed-condos';
  $handler->display->display_options['menu']['title'] = 'Search page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $export['homepage_view_blocks'] = $view;

  return $export;
}
