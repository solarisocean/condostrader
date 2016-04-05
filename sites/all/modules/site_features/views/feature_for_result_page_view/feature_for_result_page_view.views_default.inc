<?php
/**
 * @file
 * feature_for_result_page_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_for_result_page_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'result_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Result page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Result page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
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
  /* Field: Content: Asking Price */
  $handler->display->display_options['fields']['field_asking_price']['id'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['table'] = 'field_data_field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['field'] = 'field_asking_price';
  $handler->display->display_options['fields']['field_asking_price']['label'] = '';
  $handler->display->display_options['fields']['field_asking_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_asking_price']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
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
  /* Field: Content: Maint Fees */
  $handler->display->display_options['fields']['field_maint_fees']['id'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['table'] = 'field_data_field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['field'] = 'field_maint_fees';
  $handler->display->display_options['fields']['field_maint_fees']['label'] = '';
  $handler->display->display_options['fields']['field_maint_fees']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_maint_fees']['alter']['text'] = 'Maint Fees: [field_maint_fees]';
  $handler->display->display_options['fields']['field_maint_fees']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_maint_fees']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_maint_fees']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Content: MLS Size */
  $handler->display->display_options['fields']['field_mls_size']['id'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['table'] = 'field_data_field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['field'] = 'field_mls_size';
  $handler->display->display_options['fields']['field_mls_size']['label'] = '';
  $handler->display->display_options['fields']['field_mls_size']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_mls_size']['element_label_colon'] = FALSE;
  /* Field: Content: Beds */
  $handler->display->display_options['fields']['field_beds']['id'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['table'] = 'field_data_field_beds';
  $handler->display->display_options['fields']['field_beds']['field'] = 'field_beds';
  $handler->display->display_options['fields']['field_beds']['label'] = '';
  $handler->display->display_options['fields']['field_beds']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beds']['alter']['text'] = '[field_beds] Bed';
  $handler->display->display_options['fields']['field_beds']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beds']['hide_empty'] = TRUE;
  /* Field: Content: Baths */
  $handler->display->display_options['fields']['field_baths']['id'] = 'field_baths';
  $handler->display->display_options['fields']['field_baths']['table'] = 'field_data_field_baths';
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
  /* Field: Content: Pets Allowed */
  $handler->display->display_options['fields']['field_pets_allowed']['id'] = 'field_pets_allowed';
  $handler->display->display_options['fields']['field_pets_allowed']['table'] = 'field_data_field_pets_allowed';
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
  /* Field: Content: Locker */
  $handler->display->display_options['fields']['field_locker']['id'] = 'field_locker';
  $handler->display->display_options['fields']['field_locker']['table'] = 'field_data_field_locker';
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
  /* Field: Content: Parking */
  $handler->display->display_options['fields']['field_parking']['id'] = 'field_parking';
  $handler->display->display_options['fields']['field_parking']['table'] = 'field_data_field_parking';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'condo' => 'condo',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'result-page-view';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_location';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'esri-world_street_map';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_location']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Content: Gallery */
  $handler->display->display_options['fields']['field_gallery']['id'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['table'] = 'field_data_field_gallery';
  $handler->display->display_options['fields']['field_gallery']['field'] = 'field_gallery';
  $handler->display->display_options['fields']['field_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_gallery']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_gallery']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_gallery]
[field_address]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'result-page-view';
  $export['result_page'] = $view;

  return $export;
}
