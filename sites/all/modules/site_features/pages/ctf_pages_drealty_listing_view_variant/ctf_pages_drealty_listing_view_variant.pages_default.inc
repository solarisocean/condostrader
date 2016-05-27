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
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:drealty_listing',
          'settings' => array(
            'type' => array(
              'toronto_condo' => 'toronto_condo',
            ),
          ),
          'context' => 'argument_entity_id:drealty_listing_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '79.41215003471814',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'right side',
        'width' => '20.58784996528187',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'gallery',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'gallery' => array(
        'type' => 'region',
        'title' => 'Gallery',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right_side' => NULL,
      'gallery' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3718024-880a-44d9-8664-d7fa10608286';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5069fa9a-845e-4b26-97d7-be9f80e94062';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'single_condo_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'arg2',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
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
    $pane->uuid = '5069fa9a-845e-4b26-97d7-be9f80e94062';
    $display->content['new-5069fa9a-845e-4b26-97d7-be9f80e94062'] = $pane;
    $display->panels['center'][0] = 'new-5069fa9a-845e-4b26-97d7-be9f80e94062';
    $pane = new stdClass();
    $pane->pid = 'new-b3792005-5fa8-41ce-834d-295a27971553';
    $pane->panel = 'center';
    $pane->type = 'single_condo_map';
    $pane->subtype = 'single_condo_map';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b3792005-5fa8-41ce-834d-295a27971553';
    $display->content['new-b3792005-5fa8-41ce-834d-295a27971553'] = $pane;
    $display->panels['center'][1] = 'new-b3792005-5fa8-41ce-834d-295a27971553';
    $pane = new stdClass();
    $pane->pid = 'new-8db1911e-c935-47be-b269-3dd928f21aff';
    $pane->panel = 'center';
    $pane->type = 'nearby_listings';
    $pane->subtype = 'nearby_listings';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8db1911e-c935-47be-b269-3dd928f21aff';
    $display->content['new-8db1911e-c935-47be-b269-3dd928f21aff'] = $pane;
    $display->panels['center'][2] = 'new-8db1911e-c935-47be-b269-3dd928f21aff';
    $pane = new stdClass();
    $pane->pid = 'new-4fd6280e-2267-4762-8900-a0240b2d666d';
    $pane->panel = 'gallery';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_toronto_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'slideshow',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'slideshow_image_style' => '',
        'slideshow_link' => '',
        'slideshow_colorbox_image_style' => '',
        'slideshow_colorbox_slideshow' => 'automatic',
        'slideshow_colorbox_slideshow_speed' => '4000',
        'slideshow_colorbox_transition' => 'elastic',
        'slideshow_colorbox_speed' => '350',
        'slideshow_caption' => '',
        'slideshow_caption_link' => '',
        'slideshow_fx' => 'fade',
        'slideshow_speed' => '1000',
        'slideshow_timeout' => '4000',
        'slideshow_order' => '',
        'slideshow_controls' => 0,
        'slideshow_controls_pause' => 0,
        'slideshow_controls_position' => 'after',
        'slideshow_pause' => 0,
        'slideshow_start_on_hover' => 0,
        'slideshow_pager' => '',
        'slideshow_pager_position' => 'after',
        'slideshow_pager_image_style' => '',
        'slideshow_carousel_image_style' => '',
        'slideshow_carousel_visible' => '3',
        'slideshow_carousel_scroll' => '1',
        'slideshow_carousel_speed' => '500',
        'slideshow_carousel_vertical' => 0,
        'slideshow_carousel_circular' => 0,
        'slideshow_carousel_follow' => 0,
        'slideshow_carousel_skin' => '',
      ),
      'context' => 'argument_entity_id:drealty_listing_1',
      'override_title' => 1,
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
    $pane->uuid = '4fd6280e-2267-4762-8900-a0240b2d666d';
    $display->content['new-4fd6280e-2267-4762-8900-a0240b2d666d'] = $pane;
    $display->panels['gallery'][0] = 'new-4fd6280e-2267-4762-8900-a0240b2d666d';
    $pane = new stdClass();
    $pane->pid = 'new-15807c17-317e-444a-8cd3-ad212ace10f1';
    $pane->panel = 'right_side';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_lp_dol__torcond';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => ',',
        'decimal_separator' => '.',
        'scale' => '0',
        'prefix_suffix' => 1,
      ),
      'context' => 'argument_entity_id:drealty_listing_1',
      'override_title' => 1,
      'override_title_text' => 'Asking price',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '15807c17-317e-444a-8cd3-ad212ace10f1';
    $display->content['new-15807c17-317e-444a-8cd3-ad212ace10f1'] = $pane;
    $display->panels['right_side'][0] = 'new-15807c17-317e-444a-8cd3-ad212ace10f1';
    $pane = new stdClass();
    $pane->pid = 'new-64c7be43-c6fc-4de3-89e3-8db4c2e67b39';
    $pane->panel = 'right_side';
    $pane->type = 'book_a_viewing_form';
    $pane->subtype = 'book_a_viewing_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '64c7be43-c6fc-4de3-89e3-8db4c2e67b39';
    $display->content['new-64c7be43-c6fc-4de3-89e3-8db4c2e67b39'] = $pane;
    $display->panels['right_side'][1] = 'new-64c7be43-c6fc-4de3-89e3-8db4c2e67b39';
    $pane = new stdClass();
    $pane->pid = 'new-fb25227e-3584-47e5-b098-7e7689fc43c2';
    $pane->panel = 'right_side';
    $pane->type = 'flag_link';
    $pane->subtype = 'drealty_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'drealty_flag',
      'context' => 'argument_entity_id:drealty_listing_1',
      'override_title' => 1,
      'override_title_text' => 'Flag (need to change link text)',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'fb25227e-3584-47e5-b098-7e7689fc43c2';
    $display->content['new-fb25227e-3584-47e5-b098-7e7689fc43c2'] = $pane;
    $display->panels['right_side'][2] = 'new-fb25227e-3584-47e5-b098-7e7689fc43c2';
    $pane = new stdClass();
    $pane->pid = 'new-c1100748-64f3-47ea-9e47-032a3fb2e682';
    $pane->panel = 'right_side';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Share:',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'c1100748-64f3-47ea-9e47-032a3fb2e682';
    $display->content['new-c1100748-64f3-47ea-9e47-032a3fb2e682'] = $pane;
    $display->panels['right_side'][3] = 'new-c1100748-64f3-47ea-9e47-032a3fb2e682';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['drealty_listing__panel_context_960e634e-03ce-48ff-ad36-3e71d90a36c2'] = $handler;

  return $export;
}
