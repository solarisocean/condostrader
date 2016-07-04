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
  'required context' => new ctools_context_required(t('Drealty listing'), 'drealty_listing'),
);

/**
 * Render the single condo map content type.
 */
function single_condo_map_content_type_render($subtype, $conf, $args, $context) {
  $path = libraries_get_path('leaflet');
  drupal_add_js($path . '/leaflet-src.js');
  drupal_add_css($path . '/leaflet.css');
  drupal_add_js(drupal_get_path('module', 'ctrader_map') . '/js/single-condo-map.js');

  $entity = $context->data;
  $listing = $entity->wrapper();

  if ($listing->field_test_geofilld->value() && $listing->field_addr__torcond->value()) {
    $geo_point = array(
      $listing->field_test_geofilld->lat->value(),
      $listing->field_test_geofilld->lon->value(),
    );
  }
  else {
    $geo_point = NULL;
  }

  drupal_add_js(array('singleCondoPoint' => $geo_point), 'setting');
  drupal_add_js(array('singleCondoNeighbourhood' => NULL), 'setting');
  $all_neighbourhoods_json = _ctrader_map_prepare_neighbourhoods_json();

  $map_legend_variables = array();
  $address = NULL;
  if ($listing->field_addr__torcond->value()) {
    if ($listing->field_unit_num__torcond->value()) {
      $map_legend_variables['unit'] = '#' . $listing->field_unit_num__torcond->value() . ', ';
    }
    $map_legend_variables['address'] = $listing->field_addr__torcond->value() . ', ';
  }

  if ($listing->field_community_code__torcond->value()) {
    foreach ($all_neighbourhoods_json as $key => $value) {
      if ($value['properties']['community_code'] == $listing->field_community_code__torcond->value()) {
        prepare_map_legend($value, $map_legend_variables);
        $url = prepare_region_query_url($value['properties']['name']);
        $map_legend_variables['community_link'] = 'Community: ' . l($listing->field_community__torcond->value(), $url);
      }
    }
  }

  if ($listing->field_zip__torcond->value()) {
    $map_legend_variables['zip_code'] = $listing->field_zip__torcond->value() . ', ';
  }
  if ($listing->field_county__torcond->value()) {
    $map_legend_variables['country_region'] = $listing->field_county__torcond->value() . ', ';
  }

  if ($listing->field_area__torcond->value()) {
    $url = prepare_region_query_url($listing->field_area__torcond->value());
    $map_legend_variables['area_link'] = 'Area: ' . l($listing->field_area__torcond->value(), $url);
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

  $neighbourhood_url = prepare_region_query_url($value['properties']['name']);
  $neighbourhood_link = l($term_polygon['properties']['name'], $neighbourhood_url);

  $parent_terms = taxonomy_get_parents_all($value['id']);
  $city_term = end($parent_terms);
  $city_uri = taxonomy_term_uri($city_term);
  $city_link = l($city_term->name, url($city_uri['path']));

  $region_query_string = array();
  $region_query_string[] = array_pop($parent_terms)->name;
  $municipality_term = array_pop($parent_terms);
  $region_query_string[] = $municipality_term->name;
  $region_query_string = implode('/', $region_query_string);
  $url = url(CTRADER_SEARCH_RESULT_PAGE . '/' . $region_query_string, array(
    'absolute' => TRUE
  ));
  $municipality_link = l($municipality_term->name, $url);

  $map_legend_variables += array(
    'neighbourhood_name' => $term_polygon['properties']['name'] . ', ',
    'neighbourhood_link' => $neighbourhood_link,
    'city_name' => $city_term->name,
    'city_link' => $city_link,
    'municipality_name' => $municipality_term->name,
    'municipality_link' => "Municipality: {$municipality_link}",
  );
}


/**
 * @param $region_name
 * @return string url for region search.
 */
function prepare_region_query_url($region_name, $second_level = FALSE) {
  $term = taxonomy_get_term_by_name($region_name);
  if ($term) {
    $term = reset($term);
    $parents = taxonomy_get_parents_all($term->tid);
    $parents = array_reverse($parents);
    $region_query_string = array();
    if (ENABLE_PRETTY_PATH_FOR_REGION_DROPDOWN_FACET) {
      foreach ($parents as $parent) {
        $region_query_string[] = $parent->name;
      }
      $region_query_string = implode('/', $region_query_string);
      $url = url(CTRADER_SEARCH_RESULT_PAGE . '/' . $region_query_string, array(
        'absolute' => TRUE
      ));
      return $url;
    }
    else {
      foreach ($parents as $parent) {
        $region_query_string[] = $parent->tid;
      }
      $region_query_string = implode('>', $region_query_string);
      $url = url(CTRADER_SEARCH_RESULT_PAGE, array(
        'query' => array('region' => $region_query_string),
        'absolute' => TRUE
      ));
      return $url;
    }
  }
}

