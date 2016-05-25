<?php
/**
 * @file
 * ctf_pages_drealty_listing_view_variant.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ctf_pages_drealty_listing_view_variant_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'drealty_listing__panel_context_960e634e-03ce-48ff-ad36-3e71d90a36c2';
  $handler->task = 'drealty_listing';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3718024-880a-44d9-8664-d7fa10608286';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2f4dba51-1fa3-4293-abed-ccfeeb6553b6';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'nearby_listings_view';
    $pane->shown = FALSE;
    $pane->access = array(
      'logic' => 'and',
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2f4dba51-1fa3-4293-abed-ccfeeb6553b6';
    $display->content['new-2f4dba51-1fa3-4293-abed-ccfeeb6553b6'] = $pane;
    $display->panels['center'][0] = 'new-2f4dba51-1fa3-4293-abed-ccfeeb6553b6';
    $pane = new stdClass();
    $pane->pid = 'new-a0e4d69c-b27a-458b-929f-94be1f752088';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_toronto_gallery';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'slideshow',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
        'slideshow_image_style' => '',
        'slideshow_link' => '',
        'slideshow_caption' => '',
        'slideshow_caption_link' => '',
        'slideshow_fx' => 'fade',
        'slideshow_speed' => '700',
        'slideshow_timeout' => '4000',
        'slideshow_order' => '',
        'slideshow_controls' => 0,
        'slideshow_controls_pause' => 0,
        'slideshow_controls_position' => 'before',
        'slideshow_pause' => 1,
        'slideshow_start_on_hover' => 0,
        'slideshow_pager' => 'carousel',
        'slideshow_pager_position' => 'after',
        'slideshow_pager_image_style' => 'thumbnail',
        'slideshow_carousel_image_style' => 'thumbnail',
        'slideshow_carousel_visible' => '4',
        'slideshow_carousel_scroll' => '1',
        'slideshow_carousel_speed' => '500',
        'slideshow_carousel_vertical' => 1,
        'slideshow_carousel_circular' => 1,
        'slideshow_carousel_follow' => 1,
        'slideshow_carousel_skin' => '',
      ),
      'context' => 'argument_entity_id:drealty_listing_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a0e4d69c-b27a-458b-929f-94be1f752088';
    $display->content['new-a0e4d69c-b27a-458b-929f-94be1f752088'] = $pane;
    $display->panels['center'][1] = 'new-a0e4d69c-b27a-458b-929f-94be1f752088';
    $pane = new stdClass();
    $pane->pid = 'new-5069fa9a-845e-4b26-97d7-be9f80e94062';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'single_condo_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'arg2',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5069fa9a-845e-4b26-97d7-be9f80e94062';
    $display->content['new-5069fa9a-845e-4b26-97d7-be9f80e94062'] = $pane;
    $display->panels['center'][2] = 'new-5069fa9a-845e-4b26-97d7-be9f80e94062';
    $pane = new stdClass();
    $pane->pid = 'new-ad3746d3-f914-486b-9ae6-29de200f60fa';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_test_geofilld';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'geofield_leaflet',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'leaflet_map' => 'google-high-res',
        'height' => '500',
        'popup' => array(
          'show' => 1,
          'text' => '',
        ),
        'zoom' => array(
          'initialZoom' => '14',
          'minZoom' => '-1',
          'maxZoom' => '-1',
          'scrollWheelZoom' => 1,
        ),
        'icon' => array(
          'iconType' => 'marker',
          'iconUrl' => '',
          'shadowUrl' => '',
          'html' => '',
          'iconImageStyle' => '',
          'htmlClass' => '',
          'iconSize' => array(
            'x' => '',
            'y' => '',
          ),
          'iconAnchor' => array(
            'x' => '',
            'y' => '',
          ),
          'shadowAnchor' => array(
            'x' => '',
            'y' => '',
          ),
          'popupAnchor' => array(
            'x' => '',
            'y' => '',
          ),
        ),
        'vector_display' => array(
          'stroke_override' => 1,
          'stroke' => 0,
          'color' => '',
          'weight' => '',
          'opacity' => '',
          'dashArray' => '',
          'fill' => 0,
          'fillColor' => '',
          'fillOpacity' => '',
          'clickable' => 0,
        ),
        'data' => 'centroid',
        'geofield_map_width' => '100%',
        'geofield_map_height' => '300px',
        'geofield_map_zoom' => '8',
        'geofield_map_min_zoom' => '0',
        'geofield_map_max_zoom' => '0',
        'geofield_map_controltype' => 'default',
        'geofield_map_mtc' => 'standard',
        'geofield_map_pancontrol' => 1,
        'geofield_map_maptype' => 'map',
        'geofield_map_baselayers_map' => 1,
        'geofield_map_baselayers_satellite' => 1,
        'geofield_map_baselayers_hybrid' => 1,
        'geofield_map_baselayers_physical' => 0,
        'geofield_map_scale' => 0,
        'geofield_map_overview' => 0,
        'geofield_map_overview_opened' => 0,
        'geofield_map_scrollwheel' => 0,
        'geofield_map_draggable' => 0,
        'geofield_map_streetview_show' => 0,
        'geofield_map_center' => array(
          'lat' => '50.7559493',
          'lon' => '25.3778699',
          'geocode' => 'Find my location',
        ),
        'map_width' => '100%',
        'map_height' => '300px',
        'map_zoomlevel' => '7',
        'map_maptype' => 'roadmap',
        'marker_icon' => '',
        'map_scrollwheel' => 0,
      ),
      'context' => 'argument_entity_id:drealty_listing_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'ad3746d3-f914-486b-9ae6-29de200f60fa';
    $display->content['new-ad3746d3-f914-486b-9ae6-29de200f60fa'] = $pane;
    $display->panels['center'][3] = 'new-ad3746d3-f914-486b-9ae6-29de200f60fa';
    $pane = new stdClass();
    $pane->pid = 'new-04518e64-9b3d-43c9-bd74-139a1fbb554d';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_mls-nearby_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '04518e64-9b3d-43c9-bd74-139a1fbb554d';
    $display->content['new-04518e64-9b3d-43c9-bd74-139a1fbb554d'] = $pane;
    $display->panels['center'][4] = 'new-04518e64-9b3d-43c9-bd74-139a1fbb554d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a0e4d69c-b27a-458b-929f-94be1f752088';
  $handler->conf['display'] = $display;
  $export['drealty_listing__panel_context_960e634e-03ce-48ff-ad36-3e71d90a36c2'] = $handler;

  return $export;
}
