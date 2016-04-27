<?php
/**
 * @file
 * ctf_views_neighbourhoods_taxonomy_map.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_neighbourhoods_taxonomy_map_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tax_regions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Neighbourhoods taxonomy map view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Neighbourhoods (taxonomy)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'taxonomy_term';
  $handler->display->display_options['style_options']['data_source'] = 'field_community_geolocation';
  $handler->display->display_options['style_options']['name_field'] = 'name';
  $handler->display->display_options['style_options']['description_field'] = 'field_id';
  $handler->display->display_options['style_options']['map'] = 'bing';
  $handler->display->display_options['style_options']['height'] = '700';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke_override'] = 1;
  $handler->display->display_options['style_options']['vector_display']['color'] = '#8955A0';
  $handler->display->display_options['style_options']['vector_display']['weight'] = '2';
  $handler->display->display_options['style_options']['vector_display']['fillColor'] = '#584A55';
  $handler->display->display_options['style_options']['vector_display']['fillOpacity'] = '0.4';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Community geolocation */
  $handler->display->display_options['fields']['field_community_geolocation']['id'] = 'field_community_geolocation';
  $handler->display->display_options['fields']['field_community_geolocation']['table'] = 'field_data_field_community_geolocation';
  $handler->display->display_options['fields']['field_community_geolocation']['field'] = 'field_community_geolocation';
  $handler->display->display_options['fields']['field_community_geolocation']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_community_geolocation']['settings'] = array(
    'data' => 'full',
  );
  /* Field: Taxonomy term: id */
  $handler->display->display_options['fields']['field_id']['id'] = 'field_id';
  $handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
  $handler->display->display_options['fields']['field_id']['field'] = 'field_id';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'neighbourhoods' => 'neighbourhoods',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['exposed'] = TRUE;
  $handler->display->display_options['filters']['parent']['expose']['operator_id'] = 'parent_op';
  $handler->display->display_options['filters']['parent']['expose']['label'] = 'Parent term';
  $handler->display->display_options['filters']['parent']['expose']['operator'] = 'parent_op';
  $handler->display->display_options['filters']['parent']['expose']['identifier'] = 'parent';
  $handler->display->display_options['filters']['parent']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['parent']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['parent']['group_info']['label'] = 'Parent term';
  $handler->display->display_options['filters']['parent']['group_info']['identifier'] = 'parent';
  $handler->display->display_options['filters']['parent']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['parent']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'tax-regions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Neighbourhoods map (taxonomy)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['tax_regions'] = $view;

  return $export;
}
