<?php
/**
 * @file
 * ctf_views_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_toronto_condo_index';
  $view->human_name = 'Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Toronto condos map';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '250';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'drealty_listing';
  $handler->display->display_options['style_options']['data_source'] = 'field_test_geofilld';
  $handler->display->display_options['style_options']['name_field'] = 'field_toronto_gallery';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '800';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke_override'] = 1;
  $handler->display->display_options['style_options']['vector_display']['opacity'] = '1';
  $handler->display->display_options['style_options']['vector_display']['fillOpacity'] = '0.8';
  /* Field: Indexed Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = '';
  $handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['id']['link_to_entity'] = 0;
  /* Field: Indexed Drealty Listing: Geolocation */
  $handler->display->display_options['fields']['field_test_geofilld']['id'] = 'field_test_geofilld';
  $handler->display->display_options['fields']['field_test_geofilld']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_test_geofilld']['field'] = 'field_test_geofilld';
  $handler->display->display_options['fields']['field_test_geofilld']['label'] = '';
  $handler->display->display_options['fields']['field_test_geofilld']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_test_geofilld']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_test_geofilld']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_test_geofilld']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 0,
  );
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_addr_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_addr_torcond']['element_label_colon'] = FALSE;
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['alter']['text'] = '$[field_lp_dol_torcond]';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Drealty Listing RETS ID */
  $handler->display->display_options['fields']['rets_id']['id'] = 'rets_id';
  $handler->display->display_options['fields']['rets_id']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['rets_id']['field'] = 'rets_id';
  $handler->display->display_options['fields']['rets_id']['label'] = 'MLS #';
  $handler->display->display_options['fields']['rets_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rets_id']['link_to_entity'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<br>[field_addr_torcond]<br>
[field_lp_dol_torcond]<br>
[rets_id]';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'toronto-condos-map';
  $export['map'] = $view;

  return $export;
}
