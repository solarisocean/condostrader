<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Comparable nearby listings'),
  'description' => t('Show nearby listings on singl condo page.'),
  'single' => TRUE,
  'render callback' => 'nearby_listings_content_type_render',
  'defaults' => array(),
  'category' => array(t('CondosTrader')),
);

/**
 * Render the nearby listings content type.
 */
function nearby_listings_content_type_render($subtype, $conf, $args, $context) {
  $view_machine_name = 'nearby_listings_view';
  $view_display = 'block_1';
  $view_title = '';

  $block = new stdClass();
  $block->title = '';

  if (drupal_is_front_page()) {
    $current_place = '';
    $current_place .= isset($_SESSION['user_geoloc_detect']['location']['city']) ? $_SESSION['user_geoloc_detect']['location']['city'] : '';
    $current_place .= isset($_SESSION['user_geoloc_detect']['location']['region']) ? ' ' . $_SESSION['user_geoloc_detect']['location']['region'] : '';
    if (empty($current_place)) {
      $current_place = t('not detected');
    }
    if (isset($_SESSION['user_geoloc_detect']['location']['latitude']) && isset($_SESSION['user_geoloc_detect']['location']['longitude'])) {
      $latlon = $_SESSION['user_geoloc_detect']['location']['latitude'] . ',' . $_SESSION['user_geoloc_detect']['location']['longitude'];
      $view_title = '<h2 class="pane-title changed-view-title">' . t('<span>Condos</span> near me') . " <span class='current-place'>({$current_place})</span>" . '</h2>';
    }
    else {
      $latlon = NULL;
    }
  }
  else {
    $listing_id = $args[0];
    $entity = entity_load_single(DREALTY_ENTITY_TYPE, $listing_id);
    $latlon = $entity->field_test_geofilld[LANGUAGE_NONE][0]['lat'] . ',' . $entity->field_test_geofilld[LANGUAGE_NONE][0]['lon'];
    $block->title = t('<span>Comparable</span> nearby listings');
  }

  $view = views_get_view($view_machine_name);
  $view->init();
  $view->set_display($view_display);
  $view->set_arguments(array($latlon,));
  $view_output = $view->preview();
  if (empty($view->result)) {
    $view_title = '';
    return NULL;
  }
  $block->content = $view_title . $view_output;
  return $block;
}
