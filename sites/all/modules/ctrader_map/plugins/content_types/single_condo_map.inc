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
  $listing = $entity->wrapper();

  $geo_point = array(
    $listing->field_test_geofilld->lat->value(),
    $listing->field_test_geofilld->lon->value(),
  );

  drupal_add_js(array('singleCondoPoint' => $geo_point), 'setting');
  drupal_add_js(array('singleCondoNeighbourhood' => NULL), 'setting');
//  unset($_SESSION['neighbourhood_json']);
  if (!isset($_SESSION['neighbourhood_json'])) {
    _ctrader_map_prepare_neighbourhoods_json();
  }

  $map_legend_variables = array();
  $address = NULL;
  if ($listing->field_addr__torcond->value()) {
    $map_legend_variables['address'] = $listing->field_addr__torcond->value() . ', ';
    if ($listing->field_city_region__torcond->value()) {
      foreach ($_SESSION['neighbourhood_json'] as $key => $value) {
        if ($value['id'] == $listing->field_city_region__torcond[0]->tid->value()) {
          prepare_map_legend($value, $map_legend_variables);
        }
      }
    }
  }
  else { // if listings has no address so condo has no point.
    drupal_add_js(array('singleCondoPoint' => NULL), 'setting');
    if ($listing->field_community__torcond->value()) {
      foreach ($_SESSION['neighbourhood_json'] as $key => $value) {
        if ($value['properties']['name'] == $listing->field_community__torcond->value()) {
          prepare_map_legend($value, $map_legend_variables);
        }
      }
    }
  }

  if ($listing->field_county__torcond->value()) {
    $map_legend_variables['country_region'] = $listing->field_county__torcond->value() . ', ';
  }
  $map_legend_html = theme('ctrader_single_condo_map_legend', $map_legend_variables);
  drupal_add_js(array('mapLegend' => $map_legend_html), 'setting');

  $block = new stdClass();
  $block->title = '';
  $block->content = '<div id="condo-map"></div>';

  return $block;
}


/**
 * @param $value - neighbourhood data prepared for Leaflet map.
 * @param $map_legend_variables - single condo map legend theme.
 */
function prepare_map_legend($value, &$map_legend_variables) {
  $term_polygon = $value;
  drupal_add_js(array('singleCondoNeighbourhood' => $term_polygon), 'setting');

  $neighbourhood_term = taxonomy_term_load($value['id']);
  $neighbourhood_uri = taxonomy_term_uri($neighbourhood_term);
  $neighbourhood_link = l('Neighbourhood', url($neighbourhood_uri['path']));

  $parent_terms = taxonomy_get_parents_all($value['id']);
  $city_term = array_pop($parent_terms);
  $city_uri = taxonomy_term_uri($city_term);
  $city_link = l($city_term->name, url($city_uri['path']));

  $map_legend_variables += array(
    'neighbourhood_name' => $term_polygon['properties']['name'],
    'neighbourhood_link' => $neighbourhood_link,
    'city_name' => $city_term->name,
    'city_link' => $city_link,
  );
}
