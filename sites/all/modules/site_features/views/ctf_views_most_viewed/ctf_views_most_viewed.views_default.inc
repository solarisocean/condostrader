<?php
/**
 * @file
 * ctf_views_most_viewed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_most_viewed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'most_viewed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Most viewed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<span>Most</span> viewed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_s_r__torcond_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: view all link */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['ui_name'] = 'view all link';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/search-results">view all</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Relationship: Drealty Listing: City region (field_city_region__torcond) */
  $handler->display->display_options['relationships']['field_city_region__torcond_tid']['id'] = 'field_city_region__torcond_tid';
  $handler->display->display_options['relationships']['field_city_region__torcond_tid']['table'] = 'field_data_field_city_region__torcond';
  $handler->display->display_options['relationships']['field_city_region__torcond_tid']['field'] = 'field_city_region__torcond_tid';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent']['relationship'] = 'field_city_region__torcond_tid';
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_reference_to_condo_target_id';
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
    'image_style' => '190x120',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol__torcond']['id'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['table'] = 'field_data_field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['field'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['relationship'] = 'field_reference_to_condo_target_id';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr__torcond']['id'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['table'] = 'field_data_field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['field'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addr__torcond']['alter']['text'] = '[field_addr__torcond], ';
  /* Field: Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area__torcond']['id'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['table'] = 'field_data_field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['field'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['text'] = ', [field_area__torcond]';
  /* Field: Drealty Listing: Community */
  $handler->display->display_options['fields']['field_community__torcond']['id'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['table'] = 'field_data_field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['field'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: County */
  $handler->display->display_options['fields']['field_county__torcond']['id'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['table'] = 'field_data_field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['field'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_county__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county__torcond']['alter']['text'] = ', [field_county__torcond]';
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
  /* Field: Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft__torcond']['id'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['table'] = 'field_data_field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['field'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['text'] = '[field_sqft__torcond] sqft';
  /* Field: Drealty Listing: Apt_num */
  $handler->display->display_options['fields']['field_apt_num__torcond']['id'] = 'field_apt_num__torcond';
  $handler->display->display_options['fields']['field_apt_num__torcond']['table'] = 'field_data_field_apt_num__torcond';
  $handler->display->display_options['fields']['field_apt_num__torcond']['field'] = 'field_apt_num__torcond';
  $handler->display->display_options['fields']['field_apt_num__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apt_num__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apt_num__torcond']['alter']['text'] = '#[field_apt_num__torcond-value], ';
  $handler->display->display_options['fields']['field_apt_num__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apt_num__torcond']['empty_zero'] = TRUE;
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
  /* Field: Drealty Listing: Zip */
  $handler->display->display_options['fields']['field_zip__torcond']['id'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['table'] = 'field_data_field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['field'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['text'] = ', [field_zip__torcond]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Drealty Listing: Old price value */
  $handler->display->display_options['fields']['field_old_price_value__torcond']['id'] = 'field_old_price_value__torcond';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['table'] = 'field_data_field_old_price_value__torcond';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['field'] = 'field_old_price_value__torcond';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['label'] = '';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value__torcond']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_old_price_value__torcond']['alter']['text'] = '<span class="discount">Price -[field_old_price_value__torcond]%</span>';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['element_label_colon'] = FALSE;
  /* Field: CTrader Flag integration: CTrader Flag */
  $handler->display->display_options['fields']['ctrader_flag_handler']['id'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['table'] = 'ctrader';
  $handler->display->display_options['fields']['ctrader_flag_handler']['field'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ctrader_flag_handler']['alter']['alter_text'] = 1;
  /* Field: Photo with price */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Photo with price';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_toronto_gallery]
<span class="price">[field_lp_dol__torcond]</span>
[field_old_price_value__torcond]
<span class="flag">[ctrader_flag_handler]</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info block';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_7',
    1 => 'nothing_8',
    2 => 'field_maint__torcond',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Title (address) */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['ui_name'] = 'Title (address)';
  $handler->display->display_options['fields']['nothing_7']['label'] = '';
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = '[field_addr__torcond] [field_apt_num__torcond][field_community__torcond]';
  $handler->display->display_options['fields']['nothing_7']['element_label_colon'] = FALSE;
  /* Field: Regions */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['ui_name'] = 'Regions';
  $handler->display->display_options['fields']['nothing_8']['label'] = '';
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = '[name][field_area__torcond][field_county__torcond]';
  $handler->display->display_options['fields']['nothing_8']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint__torcond']['id'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['table'] = 'field_data_field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['field'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['relationship'] = 'field_reference_to_condo_target_id';
  $handler->display->display_options['fields']['field_maint__torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['text'] = '$[field_maint__torcond]';
  $handler->display->display_options['fields']['field_maint__torcond']['empty'] = '<span class="no-results-text">-</span>';
  $handler->display->display_options['fields']['field_maint__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maint__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft__torcond]</span><span
    class="condo-info-element bed"><span></span>[nothing_1]</span><span
    class="condo-info-element bath"><span></span>[nothing_6]</span>
</div>
<div class="condo-info-line">
<span
  class="condo-info-element pets"><span></span>[views_conditional]</span><span
    class="condo-info-element locker"><span></span>[views_conditional_1]</span><span
    class="condo-info-element parking"><span></span>[views_conditional_2]</span>
</div>';
  /* Field: Entity statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'entity_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  /* Sort criterion: Entity statistics: Total views */
  $handler->display->display_options['sorts']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['table'] = 'entity_counter';
  $handler->display->display_options['sorts']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['sorts']['totalcount']['order'] = 'DESC';
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
  /* Filter criterion: Drealty Listing: Drealty Active Status */
  $handler->display->display_options['filters']['active']['id'] = 'active';
  $handler->display->display_options['filters']['active']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['active']['field'] = 'active';
  $handler->display->display_options['filters']['active']['value']['value'] = '1';

  /* Display: Most viewed page */
  $handler = $view->new_display('page', 'Most viewed page', 'page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_s_r__torcond_value' => array(
      'bef_format' => 'bef_hidden',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_reference_to_condo_target_id';
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
    'image_style' => '190x120',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol__torcond']['id'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['table'] = 'field_data_field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['field'] = 'field_lp_dol__torcond';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['relationship'] = 'field_reference_to_condo_target_id';
  $handler->display->display_options['fields']['field_lp_dol__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr__torcond']['id'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['table'] = 'field_data_field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['field'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_addr__torcond']['alter']['text'] = '[field_addr__torcond], ';
  /* Field: Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area__torcond']['id'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['table'] = 'field_data_field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['field'] = 'field_area__torcond';
  $handler->display->display_options['fields']['field_area__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_area__torcond']['alter']['text'] = ', [field_area__torcond]';
  /* Field: Drealty Listing: Community */
  $handler->display->display_options['fields']['field_community__torcond']['id'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['table'] = 'field_data_field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['field'] = 'field_community__torcond';
  $handler->display->display_options['fields']['field_community__torcond']['exclude'] = TRUE;
  /* Field: Drealty Listing: County */
  $handler->display->display_options['fields']['field_county__torcond']['id'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['table'] = 'field_data_field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['field'] = 'field_county__torcond';
  $handler->display->display_options['fields']['field_county__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_county__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_county__torcond']['alter']['text'] = ', [field_county__torcond]';
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
  /* Field: Drealty Listing: Sqft */
  $handler->display->display_options['fields']['field_sqft__torcond']['id'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['table'] = 'field_data_field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['field'] = 'field_sqft__torcond';
  $handler->display->display_options['fields']['field_sqft__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sqft__torcond']['alter']['text'] = '[field_sqft__torcond] sqft';
  /* Field: Drealty Listing: Apt_num */
  $handler->display->display_options['fields']['field_apt_num__torcond']['id'] = 'field_apt_num__torcond';
  $handler->display->display_options['fields']['field_apt_num__torcond']['table'] = 'field_data_field_apt_num__torcond';
  $handler->display->display_options['fields']['field_apt_num__torcond']['field'] = 'field_apt_num__torcond';
  $handler->display->display_options['fields']['field_apt_num__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apt_num__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_apt_num__torcond']['alter']['text'] = '#[field_apt_num__torcond-value], ';
  $handler->display->display_options['fields']['field_apt_num__torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_apt_num__torcond']['empty_zero'] = TRUE;
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
  /* Field: Drealty Listing: Zip */
  $handler->display->display_options['fields']['field_zip__torcond']['id'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['table'] = 'field_data_field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['field'] = 'field_zip__torcond';
  $handler->display->display_options['fields']['field_zip__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zip__torcond']['alter']['text'] = ', [field_zip__torcond]';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Drealty Listing: Old price value */
  $handler->display->display_options['fields']['field_old_price_value__torcond']['id'] = 'field_old_price_value__torcond';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['table'] = 'field_data_field_old_price_value__torcond';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['field'] = 'field_old_price_value__torcond';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['label'] = '';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_price_value__torcond']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_old_price_value__torcond']['alter']['text'] = '<span class="discount">Price -[field_old_price_value__torcond]%</span>';
  $handler->display->display_options['fields']['field_old_price_value__torcond']['element_label_colon'] = FALSE;
  /* Field: CTrader Flag integration: CTrader Flag */
  $handler->display->display_options['fields']['ctrader_flag_handler']['id'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['table'] = 'ctrader';
  $handler->display->display_options['fields']['ctrader_flag_handler']['field'] = 'ctrader_flag_handler';
  $handler->display->display_options['fields']['ctrader_flag_handler']['exclude'] = TRUE;
  $handler->display->display_options['fields']['ctrader_flag_handler']['alter']['alter_text'] = 1;
  /* Field: Photo with price */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Photo with price';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_toronto_gallery]
<span class="price">[field_lp_dol__torcond]</span>
[field_old_price_value__torcond]
<span class="flag">[ctrader_flag_handler]</span>';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Fieldset */
  $handler->display->display_options['fields']['fieldset']['id'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['table'] = 'views';
  $handler->display->display_options['fields']['fieldset']['field'] = 'fieldset';
  $handler->display->display_options['fields']['fieldset']['label'] = 'Info block';
  $handler->display->display_options['fields']['fieldset']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['fieldset']['children'] = array(
    0 => 'nothing_7',
    1 => 'nothing_8',
    2 => 'field_maint__torcond',
    3 => 'nothing',
  );
  $handler->display->display_options['fields']['fieldset']['fieldset']['type'] = 'div';
  /* Field: Title (address) */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['ui_name'] = 'Title (address)';
  $handler->display->display_options['fields']['nothing_7']['label'] = '';
  $handler->display->display_options['fields']['nothing_7']['alter']['text'] = '[field_addr__torcond] [field_apt_num__torcond][field_community__torcond]';
  $handler->display->display_options['fields']['nothing_7']['element_label_colon'] = FALSE;
  /* Field: Regions */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['ui_name'] = 'Regions';
  $handler->display->display_options['fields']['nothing_8']['label'] = '';
  $handler->display->display_options['fields']['nothing_8']['alter']['text'] = '[name][field_area__torcond][field_county__torcond]';
  $handler->display->display_options['fields']['nothing_8']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Maint */
  $handler->display->display_options['fields']['field_maint__torcond']['id'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['table'] = 'field_data_field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['field'] = 'field_maint__torcond';
  $handler->display->display_options['fields']['field_maint__torcond']['relationship'] = 'field_reference_to_condo_target_id';
  $handler->display->display_options['fields']['field_maint__torcond']['label'] = 'Maint Fees';
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint__torcond']['alter']['text'] = '$[field_maint__torcond]';
  $handler->display->display_options['fields']['field_maint__torcond']['empty'] = '<span class="no-results-text">-</span>';
  $handler->display->display_options['fields']['field_maint__torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_maint__torcond']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Condo info */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Condo info';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="condo-info-line"><span class="condo-info-element sqft"><span></span>[field_sqft__torcond]</span><span
    class="condo-info-element bed"><span></span>[nothing_1]</span><span
    class="condo-info-element bath"><span></span>[nothing_6]</span>
</div>
<div class="condo-info-line">
<span
  class="condo-info-element pets"><span></span>[views_conditional]</span><span
    class="condo-info-element locker"><span></span>[views_conditional_1]</span><span
    class="condo-info-element parking"><span></span>[views_conditional_2]</span>
</div>';
  /* Field: Entity statistics: Total views */
  $handler->display->display_options['fields']['totalcount']['id'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['table'] = 'entity_counter';
  $handler->display->display_options['fields']['totalcount']['field'] = 'totalcount';
  $handler->display->display_options['fields']['totalcount']['label'] = 'Total views count';
  $handler->display->display_options['fields']['totalcount']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Drealty Listing: S_r (field_s_r__torcond) */
  $handler->display->display_options['filters']['field_s_r__torcond_value']['id'] = 'field_s_r__torcond_value';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['table'] = 'field_data_field_s_r__torcond';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['field'] = 'field_s_r__torcond_value';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['value'] = 'Sale';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_s_r__torcond_value']['expose']['operator_id'] = 'field_s_r__torcond_value_op';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['expose']['label'] = 'S_r (field_s_r__torcond)';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['expose']['operator'] = 'field_s_r__torcond_value_op';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['expose']['identifier'] = 'field_s_r__torcond_value';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_s_r__torcond_value']['group_info']['label'] = 'S_r';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['group_info']['identifier'] = 'sale-rent';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['field_s_r__torcond_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'sale',
      'operator' => '=',
      'value' => 'Sale',
    ),
    2 => array(
      'title' => 'rent',
      'operator' => '=',
      'value' => 'Lease',
    ),
  );
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_condo';
  /* Filter criterion: Drealty Listing: Drealty Active Status */
  $handler->display->display_options['filters']['active']['id'] = 'active';
  $handler->display->display_options['filters']['active']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['active']['field'] = 'active';
  $handler->display->display_options['filters']['active']['value']['value'] = '1';
  $handler->display->display_options['path'] = 'mvp-mvv';
  $export['most_viewed'] = $view;

  return $export;
}
