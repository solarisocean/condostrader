<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Single condo map'),
  'description' => t('Show map with condo point and neighbourhood polygon.'),
  'single' => TRUE,
  'render callback' => 'single_condo_map_content_type_render',
  'defaults' => array(),
  'category' => array(t('CondosTrader')),
);

/**
 * Render the single condo map content type.
 */
function single_condo_map_content_type_render($subtype, $conf, $args, $context) {
  $path = libraries_get_path('leaflet');
  drupal_add_js($path . '/leaflet-src.js');
  drupal_add_css($path . '/leaflet.css');
  drupal_add_js(drupal_get_path('module', 'ctrader_map') . '/js/single-condo-map.js');

  $entity = entity_load_single(DREALTY_ENTITY_TYPE, $args[0]);
  $geo_point = array(
    $entity->field_test_geofilld['und'][0]['lat'],
    $entity->field_test_geofilld['und'][0]['lon']
  );
  drupal_add_js(array('singleCondoPoint' => $geo_point), 'setting');

  if (!isset($_SESSION['neighbourhood_json'])) {
    _ctrader_map_prepare_neighbourhoods_json();
  }
  foreach ($_SESSION['neighbourhood_json'] as $key => $value) {
    if ($value['id'] == $entity->field_city_region__torcond['und'][0]['tid']) {
      $term_polygon = $value;
      drupal_add_js(array('singleCondoNeighbourhood' => $term_polygon), 'setting');
    }
  }

  $block = new stdClass();
  $block->title = t('Single condo map');
  $block->content = '<div id="condo-map"></div>';

  return $block;
}
