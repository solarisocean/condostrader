<?php
/**
 * @file
 * ctf_views_listings_with_wrong_geopoint.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_listings_with_wrong_geopoint_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'listings_with_wrong_geopoint';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Listings with wrong geopoint';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Listings with wrong geopoint';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_addr__torcond' => 'field_addr__torcond',
    'wrong_geopoint' => 'wrong_geopoint',
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_addr__torcond' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'wrong_geopoint' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr__torcond']['id'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['table'] = 'field_data_field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['field'] = 'field_addr__torcond';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['wrong_geopoint']['id'] = 'wrong_geopoint';
  $handler->display->display_options['fields']['wrong_geopoint']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['wrong_geopoint']['field'] = 'wrong_geopoint';
  $handler->display->display_options['fields']['wrong_geopoint']['label'] = 'wrong_geopoint';
  $handler->display->display_options['fields']['wrong_geopoint']['alter']['alter_text'] = TRUE;
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = 'drealty_listing/[id]';
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Drealty Listing: City region */
  $handler->display->display_options['fields']['field_city_region__torcond']['id'] = 'field_city_region__torcond';
  $handler->display->display_options['fields']['field_city_region__torcond']['table'] = 'field_data_field_city_region__torcond';
  $handler->display->display_options['fields']['field_city_region__torcond']['field'] = 'field_city_region__torcond';
  $handler->display->display_options['fields']['field_city_region__torcond']['delta_offset'] = '0';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_condo';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'listings-with-wrong-geopoint';
  $export['listings_with_wrong_geopoint'] = $view;

  return $export;
}
