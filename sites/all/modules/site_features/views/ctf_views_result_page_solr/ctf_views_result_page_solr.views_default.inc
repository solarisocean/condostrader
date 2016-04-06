<?php
/**
 * @file
 * ctf_views_result_page_solr.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_result_page_solr_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'result_page_solr';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_node_index';
  $view->human_name = 'Result page (solr)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Result page (solr)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery']['delta_random'] = TRUE;
  /* Field: Indexed Node: Asking Price */
  $handler->display->display_options['fields']['field_asking_price']['id'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asking_price']['field'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['label'] = '';
  $handler->display->display_options['fields']['field_asking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asking_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Node: Maint Fees */
  $handler->display->display_options['fields']['field_maint_fees']['id'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_maint_fees']['field'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['label'] = '';
  $handler->display->display_options['fields']['field_maint_fees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maint_fees']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: MLS Size */
  $handler->display->display_options['fields']['field_mls_size']['id'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_mls_size']['field'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['label'] = '';
  $handler->display->display_options['fields']['field_mls_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mls_size']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Beds */
  $handler->display->display_options['fields']['field_beds']['id'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_beds']['field'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['label'] = '';
  $handler->display->display_options['fields']['field_beds']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['text'] = '[field_beds] Bed';
  $handler->display->display_options['fields']['field_beds']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beds']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Baths */
  $handler->display->display_options['fields']['field_baths']['id'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_baths']['field'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['label'] = '';
  $handler->display->display_options['fields']['field_baths']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_baths']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_baths']['alter']['text'] = '[field_baths] Bath';
  $handler->display->display_options['fields']['field_baths']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baths']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_mls_size] | [field_beds] | [field_baths]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Pets Allowed */
  $handler->display->display_options['fields']['field_pets_allowed']['id'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_pets_allowed']['field'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['label'] = '';
  $handler->display->display_options['fields']['field_pets_allowed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['alter']['text'] = 'pets: [field_pets_allowed]';
  $handler->display->display_options['fields']['field_pets_allowed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_allowed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_pets_allowed']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Indexed Node: Locker */
  $handler->display->display_options['fields']['field_locker']['id'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_locker']['field'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['label'] = '';
  $handler->display->display_options['fields']['field_locker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['alter']['text'] = 'locker: [field_locker] ';
  $handler->display->display_options['fields']['field_locker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locker']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_locker']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Indexed Node: Parking */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_parking']['field'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['label'] = '';
  $handler->display->display_options['fields']['field_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['alter']['text'] = 'parking: [field_parking]';
  $handler->display->display_options['fields']['field_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parking']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_parking']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = ' [field_pets_allowed] | [field_locker]  | [field_parking]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Filter criterion: Location: LatLong Pair (indexed) */
  $handler->display->display_options['filters']['field_location_latlon']['id'] = 'field_location_latlon';
  $handler->display->display_options['filters']['field_location_latlon']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['filters']['field_location_latlon']['field'] = 'field_location_latlon';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery']['delta_random'] = TRUE;
  /* Field: Indexed Node: Asking Price */
  $handler->display->display_options['fields']['field_asking_price']['id'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asking_price']['field'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['label'] = '';
  $handler->display->display_options['fields']['field_asking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asking_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Node: Maint Fees */
  $handler->display->display_options['fields']['field_maint_fees']['id'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_maint_fees']['field'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['label'] = '';
  $handler->display->display_options['fields']['field_maint_fees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maint_fees']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: MLS Size */
  $handler->display->display_options['fields']['field_mls_size']['id'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_mls_size']['field'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['label'] = '';
  $handler->display->display_options['fields']['field_mls_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mls_size']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Beds */
  $handler->display->display_options['fields']['field_beds']['id'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_beds']['field'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['label'] = '';
  $handler->display->display_options['fields']['field_beds']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['text'] = '[field_beds] Bed';
  $handler->display->display_options['fields']['field_beds']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beds']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Baths */
  $handler->display->display_options['fields']['field_baths']['id'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_baths']['field'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['label'] = '';
  $handler->display->display_options['fields']['field_baths']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_baths']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_baths']['alter']['text'] = '[field_baths] Bath';
  $handler->display->display_options['fields']['field_baths']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baths']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_mls_size] | [field_beds] | [field_baths]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Pets Allowed */
  $handler->display->display_options['fields']['field_pets_allowed']['id'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_pets_allowed']['field'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['label'] = '';
  $handler->display->display_options['fields']['field_pets_allowed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['alter']['text'] = 'pets: [field_pets_allowed]';
  $handler->display->display_options['fields']['field_pets_allowed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_allowed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_pets_allowed']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Indexed Node: Locker */
  $handler->display->display_options['fields']['field_locker']['id'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_locker']['field'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['label'] = '';
  $handler->display->display_options['fields']['field_locker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['alter']['text'] = 'locker: [field_locker] ';
  $handler->display->display_options['fields']['field_locker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locker']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_locker']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Indexed Node: Parking */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_parking']['field'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['label'] = '';
  $handler->display->display_options['fields']['field_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['alter']['text'] = 'parking: [field_parking]';
  $handler->display->display_options['fields']['field_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parking']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_parking']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = ' [field_pets_allowed] | [field_locker]  | [field_parking]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'result-page-solr';

  /* Display: map solr */
  $handler = $view->new_display('page', 'map solr', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'search_api_index';
  $handler->display->display_options['style_options']['data_source'] = 'field_location';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'field_gallery';
  $handler->display->display_options['style_options']['map'] = 'bing';
  $handler->display->display_options['style_options']['height'] = '700';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery']['delta_random'] = TRUE;
  /* Field: Indexed Node: Asking Price */
  $handler->display->display_options['fields']['field_asking_price']['id'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_asking_price']['field'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['label'] = '';
  $handler->display->display_options['fields']['field_asking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asking_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Indexed Node: Maint Fees */
  $handler->display->display_options['fields']['field_maint_fees']['id'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_maint_fees']['field'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['label'] = '';
  $handler->display->display_options['fields']['field_maint_fees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maint_fees']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: MLS Size */
  $handler->display->display_options['fields']['field_mls_size']['id'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_mls_size']['field'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['label'] = '';
  $handler->display->display_options['fields']['field_mls_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mls_size']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Beds */
  $handler->display->display_options['fields']['field_beds']['id'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_beds']['field'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['label'] = '';
  $handler->display->display_options['fields']['field_beds']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['text'] = '[field_beds] Bed';
  $handler->display->display_options['fields']['field_beds']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beds']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Baths */
  $handler->display->display_options['fields']['field_baths']['id'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_baths']['field'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['label'] = '';
  $handler->display->display_options['fields']['field_baths']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_baths']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_baths']['alter']['text'] = '[field_baths] Bath';
  $handler->display->display_options['fields']['field_baths']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_baths']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_mls_size] | [field_beds] | [field_baths]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Pets Allowed */
  $handler->display->display_options['fields']['field_pets_allowed']['id'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_pets_allowed']['field'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['label'] = '';
  $handler->display->display_options['fields']['field_pets_allowed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['alter']['text'] = 'pets: [field_pets_allowed]';
  $handler->display->display_options['fields']['field_pets_allowed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pets_allowed']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_pets_allowed']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_pets_allowed']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Indexed Node: Locker */
  $handler->display->display_options['fields']['field_locker']['id'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_locker']['field'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['label'] = '';
  $handler->display->display_options['fields']['field_locker']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['alter']['text'] = 'locker: [field_locker] ';
  $handler->display->display_options['fields']['field_locker']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_locker']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_locker']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_locker']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Indexed Node: Parking */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_parking']['field'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['label'] = '';
  $handler->display->display_options['fields']['field_parking']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['alter']['text'] = 'parking: [field_parking]';
  $handler->display->display_options['fields']['field_parking']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_parking']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_parking']['type'] = 'boolean_yes_no';
  $handler->display->display_options['fields']['field_parking']['settings'] = array(
    'format' => 'yes-no',
    'custom_on' => '',
    'custom_off' => '',
    'reverse' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = ' [field_pets_allowed] | [field_locker]  | [field_parking]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'search_api_index_default_node_index';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'leaflet_map' => 'bing',
    'height' => '400',
    'popup' => array(
      'show' => 0,
      'text' => '',
    ),
    'zoom' => array(
      'initialZoom' => '-1',
      'minZoom' => '1',
      'maxZoom' => '-1',
      'scrollWheelZoom' => 1,
    ),
    'icon' => array(
      'iconType' => 'marker',
      'iconUrl' => '',
      'shadowUrl' => '',
      'html' => '',
      'iconImageStyle' => '',
      'htmlClass' => '',
      'iconSize' => array(
        'x' => '',
        'y' => '',
      ),
      'iconAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'shadowAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'popupAnchor' => array(
        'x' => '',
        'y' => '',
      ),
    ),
    'vector_display' => array(
      'stroke_override' => 0,
      'stroke' => 1,
      'color' => '',
      'weight' => '',
      'opacity' => '',
      'dashArray' => '',
      'fill' => 1,
      'fillColor' => '',
      'fillOpacity' => '',
      'clickable' => 1,
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'result-page-solrmap';
  $export['result_page_solr'] = $view;

  return $export;
}
