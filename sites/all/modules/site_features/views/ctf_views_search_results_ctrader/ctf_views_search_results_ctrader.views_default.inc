<?php
/**
 * @file
 * ctf_views_search_results_ctrader.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_search_results_ctrader_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_results_ctrader';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_toronto_condo_index';
  $view->human_name = 'Search results ctrader';
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
    'search_api_aggregation_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
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
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Showing @start - @end of @total';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, no results found...';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = '<span class="discount">Price -[field_old_price_value_torcond]%</span>';
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
[field_old_price_value_torcond]
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
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = '-';
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
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['expose']['label'] = 'Days on Market';
  /* Sort criterion: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['expose']['label'] = 'Price';
  /* Sort criterion: Indexed Drealty Listing: Sqft range min */
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['id'] = 'field_sqft_range_min_torcond';
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['field'] = 'field_sqft_range_min_torcond';
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['expose']['label'] = 'Size';
  /* Sort criterion: Indexed Drealty Listing: Br */
  $handler->display->display_options['sorts']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['sorts']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['sorts']['field_br_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_br_torcond']['expose']['label'] = 'Beds';
  /* Sort criterion: Indexed Drealty Listing: Bath_tot */
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['id'] = 'field_bath_tot_torcond';
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['field'] = 'field_bath_tot_torcond';
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['expose']['label'] = 'Bath_tot';
  /* Sort criterion: Indexed Drealty Listing: Price per sqft */
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['id'] = 'field_price_per_sqft_torcond';
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['field'] = 'field_price_per_sqft_torcond';
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['expose']['label'] = 'Price per SQFT';
  /* Sort criterion: Indexed Drealty Listing: Maint */
  $handler->display->display_options['sorts']['field_maint_torcond']['id'] = 'field_maint_torcond';
  $handler->display->display_options['sorts']['field_maint_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_maint_torcond']['field'] = 'field_maint_torcond';
  $handler->display->display_options['sorts']['field_maint_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_maint_torcond']['expose']['label'] = 'Maintenance Fees';
  /* Sort criterion: Indexed Drealty Listing: St */
  $handler->display->display_options['sorts']['field_st_torcond']['id'] = 'field_st_torcond';
  $handler->display->display_options['sorts']['field_st_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_st_torcond']['field'] = 'field_st_torcond';
  $handler->display->display_options['sorts']['field_st_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_st_torcond']['expose']['label'] = 'Street Name';
  /* Sort criterion: Indexed Drealty Listing: St_num */
  $handler->display->display_options['sorts']['field_st_num_torcond']['id'] = 'field_st_num_torcond';
  $handler->display->display_options['sorts']['field_st_num_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_st_num_torcond']['field'] = 'field_st_num_torcond';
  $handler->display->display_options['sorts']['field_st_num_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_st_num_torcond']['expose']['label'] = 'Street Number';
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: Search results block */
  $handler = $view->new_display('block', 'Search results block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['footer'] = FALSE;
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
    'image_style' => '286x160',
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
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = '<span class="discount">Price -[field_old_price_value_torcond]%</span>';
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
[field_old_price_value_torcond]
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
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = '-';
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
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['expose']['label'] = 'Days on Market';
  /* Sort criterion: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_lp_dol_torcond']['expose']['label'] = 'Price';
  /* Sort criterion: Indexed Drealty Listing: Sqft range min */
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['id'] = 'field_sqft_range_min_torcond';
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['field'] = 'field_sqft_range_min_torcond';
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_sqft_range_min_torcond']['expose']['label'] = 'Size';
  /* Sort criterion: Indexed Drealty Listing: Br */
  $handler->display->display_options['sorts']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['sorts']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['sorts']['field_br_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_br_torcond']['expose']['label'] = 'Beds';
  /* Sort criterion: Indexed Drealty Listing: Bath_tot */
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['id'] = 'field_bath_tot_torcond';
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['field'] = 'field_bath_tot_torcond';
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_bath_tot_torcond']['expose']['label'] = 'Bath_tot';
  /* Sort criterion: Indexed Drealty Listing: Price per sqft */
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['id'] = 'field_price_per_sqft_torcond';
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['field'] = 'field_price_per_sqft_torcond';
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_price_per_sqft_torcond']['expose']['label'] = 'Price per SQFT';
  /* Sort criterion: Indexed Drealty Listing: Maint */
  $handler->display->display_options['sorts']['field_maint_torcond']['id'] = 'field_maint_torcond';
  $handler->display->display_options['sorts']['field_maint_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_maint_torcond']['field'] = 'field_maint_torcond';
  $handler->display->display_options['sorts']['field_maint_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_maint_torcond']['expose']['label'] = 'Maintenance Fees';
  /* Sort criterion: Indexed Drealty Listing: St */
  $handler->display->display_options['sorts']['field_st_torcond']['id'] = 'field_st_torcond';
  $handler->display->display_options['sorts']['field_st_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_st_torcond']['field'] = 'field_st_torcond';
  $handler->display->display_options['sorts']['field_st_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_st_torcond']['expose']['label'] = 'Street Name';
  /* Sort criterion: Indexed Drealty Listing: St_num */
  $handler->display->display_options['sorts']['field_st_num_torcond']['id'] = 'field_st_num_torcond';
  $handler->display->display_options['sorts']['field_st_num_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_st_num_torcond']['field'] = 'field_st_num_torcond';
  $handler->display->display_options['sorts']['field_st_num_torcond']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_st_num_torcond']['expose']['label'] = 'Street Number';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Condo results page */
  $handler = $view->new_display('page', 'Condo results page', 'page_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'listing-result-page';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Go';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'ASC';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'DESC';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sorting',
        'combine_rewrite' => '',
        'reset' => 1,
        'reset_label' => ' ',
        'is_secondary' => 1,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'search_api_aggregation_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="total-quantity">@total</span>
<div>Showing <span class="start"><b>@start</b></span> - <span class="end"><b>@end</b></span> of <span class="sum><b>@total</b></span> Results</div>';
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
    'image_style' => '286x160',
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
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = '<span class="discount">Price -[field_old_price_value_torcond]%</span>';
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
[field_old_price_value_torcond]
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
  $handler->display->display_options['fields']['field_maint_torcond']['empty'] = '-';
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';
  /* Filter criterion: Indexed Drealty Listing: text search field */
  $handler->display->display_options['filters']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['operator_id'] = 'search_api_aggregation_1_op';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['label'] = 'Search by keywords:';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['operator'] = 'search_api_aggregation_1_op';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['identifier'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_condo';
  $handler->display->display_options['path'] = 'c-r-p';

  /* Display: Building results page */
  $handler = $view->new_display('page', 'Building results page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span>buildings</span>';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'building-result-page';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sort by:';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'ASC';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'DESC';
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'sort' => array(
      'bef_format' => 'default',
      'advanced' => array(
        'collapsible' => 0,
        'collapsible_label' => 'Sort options',
        'combine' => 1,
        'combine_param' => 'sorting',
        'combine_rewrite' => '',
        'reset' => 1,
        'reset_label' => ' ',
        'is_secondary' => 1,
        'secondary_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'search_api_aggregation_1' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '21';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<span class="total-quantity">@total</span>
<div>Showing <span class="start"><b>@start</b></span> - <span class="end"><b>@end</b></span> of <span class="sum><b>@total</b></span> Results</div>';
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
    'image_style' => '286x160',
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
  $handler->display->display_options['fields']['field_br_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_bath_tot_torcond']['empty'] = '-';
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
  $handler->display->display_options['fields']['field_old_price_value_torcond']['alter']['text'] = '<span class="discount">Price -[field_old_price_value_torcond]%</span>';
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
  /* Field: Building title (community or area) */
  $handler->display->display_options['fields']['field_community_torcond']['id'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_community_torcond']['field'] = 'field_community_torcond';
  $handler->display->display_options['fields']['field_community_torcond']['ui_name'] = 'Building title (community or area)';
  $handler->display->display_options['fields']['field_community_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_community_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_community_torcond']['alter']['text'] = '[field_community_torcond] Building';
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
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft_torcond]</span><span class="condo-info-element bed"><span></span>[nothing_3]</span><span class="condo-info-element bath"><span></span>[field_bath_tot_torcond]</span></div>
<div class="condo-info-line"><span class="condo-info-element pets"><span></span>[views_conditional_1]</span><span class="condo-info-element locker"><span></span>[views_conditional]</span><span class="condo-info-element parking"><span></span>[views_conditional_2]</span></div>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['value'] = 'now + 1 day';
  $handler->display->display_options['filters']['field_timestamp_sql_torcond']['year_range'] = '-0:+0';
  /* Filter criterion: Indexed Drealty Listing: text search field */
  $handler->display->display_options['filters']['search_api_aggregation_1']['id'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['search_api_aggregation_1']['field'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['operator_id'] = 'search_api_aggregation_1_op';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['label'] = 'text search field';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['operator'] = 'search_api_aggregation_1_op';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['identifier'] = 'search_api_aggregation_1';
  $handler->display->display_options['filters']['search_api_aggregation_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Indexed Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_building';
  $handler->display->display_options['path'] = 'b-r-p';
  $export['search_results_ctrader'] = $view;

  return $export;
}
