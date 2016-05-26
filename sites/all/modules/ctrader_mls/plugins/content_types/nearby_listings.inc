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
  $listing_id = $args[0];
  $entity = entity_load_single(DREALTY_ENTITY_TYPE, $listing_id);
  $latlon = $entity->field_test_geofilld[LANGUAGE_NONE][0]['lat'] . ',' . $entity->field_test_geofilld[LANGUAGE_NONE][0]['lon'];
  $view = views_embed_view('nearby_listings_view', 'block_1', $latlon);

  $block = new stdClass();
  $block->title = t('Comparable nearby listings');
  $block->content = $view;

  return $block;
}
