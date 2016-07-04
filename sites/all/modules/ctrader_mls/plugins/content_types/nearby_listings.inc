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
  'required context' => new ctools_context_required(t('Drealty listing'), DREALTY_ENTITY_TYPE),
);

/**
 * Render the nearby listings content type.
 */
function nearby_listings_content_type_render($subtype, $conf, $args, $context) {
  $view_machine_name = 'nearby_listings_view';
  $view_title = '';

  $block = new stdClass();
  $block->title = '';

  if (drupal_is_front_page()) {
    $view_display = 'block_1';
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

    $view = views_get_view($view_machine_name);
    $view->init();
    $view->set_display($view_display);
    $view->set_arguments(array($latlon,));
    $view_output = $view->preview();
  }
  else {
    $view_display = 'block_2';
    $listing = $context->data->wrapper();

    $latlon = '';
    if ($listing->field_test_geofilld->value()) {
      $latlon = $listing->field_test_geofilld->lat->value() . ',' . $listing->field_test_geofilld->lon->value();
    }
    $block->title = t('<span>Comparable</span> nearby listings');

    $view = views_get_view($view_machine_name);
    $view->init();

    // Sets filters values.
    if ($listing->field_s_r__torcond->value()) {
      $view->display['block_2']->display_options['filters']['field_s_r_torcond']['value'] = $listing->field_s_r__torcond->value();
    }
    else {
      unset($view->display['block_2']->display_options['filters']['field_s_r_torcond']);
    }
    if ($listing->field_br__torcond->value()) {
      $view->display['block_2']->display_options['filters']['field_br_torcond']['value'] = round($listing->field_br__torcond->value());
    }
    else {
      unset($view->display['block_2']->display_options['filters']['field_br_torcond']);
    }
    if ($listing->field_lp_dol__torcond->value()) {
      $view->display['block_2']->display_options['filters']['field_lp_dol_torcond']['value'] = round($listing->field_lp_dol__torcond->value()) + 10000;
      $view->display['block_2']->display_options['filters']['field_lp_dol_torcond_1']['value'] = round($listing->field_lp_dol__torcond->value()) - 10000;
    }
    else {
      unset($view->display['block_2']->display_options['filters']['field_lp_dol_torcond']);
      unset($view->display['block_2']->display_options['filters']['field_lp_dol_torcond_1']);
    }
    if ($listing->field_pets__torcond->value()) {
      $view->display['block_2']->display_options['filters']['field_pets_torcond']['value'] = $listing->field_pets__torcond->value();
    }
    else {
      unset($view->display['block_2']->display_options['filters']['field_pets_torcond']);
    }
    if ($listing->field_prkg_inc__torcond->value()) {
      $view->display['block_2']->display_options['filters']['field_prkg_inc_torcond']['value'] = $listing->field_prkg_inc__torcond->value();
    }
    else {
      unset($view->display['block_2']->display_options['filters']['field_prkg_inc_torcond']);
    }
    if ($listing->id->value()) {
      $view->display['block_2']->display_options['filters']['id']['value'] = $listing->id->value();
    }
    else {
      unset($view->display['block_2']->display_options['filters']['id']);
    }
    $view->set_display($view_display);
    $view->set_arguments(array($latlon,));
    $view_output = $view->preview();
  }

  if (empty($view->result)) {
    $view_title = '';
    return NULL;
  }
  $block->content = $view_title . $view_output;
  return $block;
}
