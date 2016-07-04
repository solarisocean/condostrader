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
    'title' => 'Single condo Panel',
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
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_side',
          2 => 'details',
        ),
        'parent' => 'main',
        'class' => 'condo-center-row',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '39.85154038865339',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'condo-left-side',
        'hide_empty' => 0,
      ),
      'right_side' => array(
        'type' => 'region',
        'title' => 'details',
        'width' => '38.66034129856253',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'condo-center',
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
        'class' => 'condo-gallery',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'details' => array(
        'type' => 'region',
        'title' => 'right side',
        'width' => '21.488118312784216',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'condo-right-side',
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
      'bottom' => NULL,
      'details' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a3718024-880a-44d9-8664-d7fa10608286';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3792005-5fa8-41ce-834d-295a27971553';
    $pane->panel = 'bottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3792005-5fa8-41ce-834d-295a27971553';
    $display->content['new-b3792005-5fa8-41ce-834d-295a27971553'] = $pane;
    $display->panels['bottom'][0] = 'new-b3792005-5fa8-41ce-834d-295a27971553';
    $pane = new stdClass();
    $pane->pid = 'new-8db1911e-c935-47be-b269-3dd928f21aff';
    $pane->panel = 'bottom';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'centering',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8db1911e-c935-47be-b269-3dd928f21aff';
    $display->content['new-8db1911e-c935-47be-b269-3dd928f21aff'] = $pane;
    $display->panels['bottom'][1] = 'new-8db1911e-c935-47be-b269-3dd928f21aff';
    $pane = new stdClass();
    $pane->pid = 'new-e6f5c2fe-4a28-424a-87cf-c7f6139f164d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_lp_dol__torcond';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
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
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'condo-price',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e6f5c2fe-4a28-424a-87cf-c7f6139f164d';
    $display->content['new-e6f5c2fe-4a28-424a-87cf-c7f6139f164d'] = $pane;
    $display->panels['center'][0] = 'new-e6f5c2fe-4a28-424a-87cf-c7f6139f164d';
    $pane = new stdClass();
    $pane->pid = 'new-4a6218ae-d4cc-4a90-9bf7-8be6c5a57a64';
    $pane->panel = 'center';
    $pane->type = 'sale_rent_label';
    $pane->subtype = 'sale_rent_label';
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
    $pane->uuid = '4a6218ae-d4cc-4a90-9bf7-8be6c5a57a64';
    $display->content['new-4a6218ae-d4cc-4a90-9bf7-8be6c5a57a64'] = $pane;
    $display->panels['center'][1] = 'new-4a6218ae-d4cc-4a90-9bf7-8be6c5a57a64';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5069fa9a-845e-4b26-97d7-be9f80e94062';
    $display->content['new-5069fa9a-845e-4b26-97d7-be9f80e94062'] = $pane;
    $display->panels['center'][2] = 'new-5069fa9a-845e-4b26-97d7-be9f80e94062';
    $pane = new stdClass();
    $pane->pid = 'new-15807c17-317e-444a-8cd3-ad212ace10f1';
    $pane->panel = 'details';
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
    $display->panels['details'][0] = 'new-15807c17-317e-444a-8cd3-ad212ace10f1';
    $pane = new stdClass();
    $pane->pid = 'new-64c7be43-c6fc-4de3-89e3-8db4c2e67b39';
    $pane->panel = 'details';
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
    $display->panels['details'][1] = 'new-64c7be43-c6fc-4de3-89e3-8db4c2e67b39';
    $pane = new stdClass();
    $pane->pid = 'new-fb25227e-3584-47e5-b098-7e7689fc43c2';
    $pane->panel = 'details';
    $pane->type = 'flag_link';
    $pane->subtype = 'drealty_listing';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'flag_name' => 'drealty_flag',
      'context' => 'argument_entity_id:drealty_listing_1',
      'override_title' => 1,
      'override_title_text' => '',
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
    $display->panels['details'][2] = 'new-fb25227e-3584-47e5-b098-7e7689fc43c2';
    $pane = new stdClass();
    $pane->pid = 'new-c1100748-64f3-47ea-9e47-032a3fb2e682';
    $pane->panel = 'details';
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
    $display->panels['details'][3] = 'new-c1100748-64f3-47ea-9e47-032a3fb2e682';
    $pane = new stdClass();
    $pane->pid = 'new-4fd6280e-2267-4762-8900-a0240b2d666d';
    $pane->panel = 'gallery';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_toronto_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
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
        'colorbox_node_style' => '',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
        'image_style' => '',
        'image_link' => '',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'condo-page-gallery',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4fd6280e-2267-4762-8900-a0240b2d666d';
    $display->content['new-4fd6280e-2267-4762-8900-a0240b2d666d'] = $pane;
    $display->panels['gallery'][0] = 'new-4fd6280e-2267-4762-8900-a0240b2d666d';
    $pane = new stdClass();
    $pane->pid = 'new-398fe4b9-283c-4c2b-ba30-b7a7d56114fd';
    $pane->panel = 'gallery';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_toronto_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'image',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'colorbox_node_style' => '',
        'colorbox_node_style_first' => '',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'post',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
        'image_style' => '',
        'image_link' => '',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'condo-page-pagination',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '398fe4b9-283c-4c2b-ba30-b7a7d56114fd';
    $display->content['new-398fe4b9-283c-4c2b-ba30-b7a7d56114fd'] = $pane;
    $display->panels['gallery'][1] = 'new-398fe4b9-283c-4c2b-ba30-b7a7d56114fd';
    $pane = new stdClass();
    $pane->pid = 'new-e0de6759-ae32-47a2-a343-9593bfe7136b';
    $pane->panel = 'right_side';
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
      'display' => 'page_1',
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
    $pane->uuid = 'e0de6759-ae32-47a2-a343-9593bfe7136b';
    $display->content['new-e0de6759-ae32-47a2-a343-9593bfe7136b'] = $pane;
    $display->panels['right_side'][0] = 'new-e0de6759-ae32-47a2-a343-9593bfe7136b';
    $pane = new stdClass();
    $pane->pid = 'new-668f4450-c603-489a-b7cf-858f02c6b166';
    $pane->panel = 'right_side';
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
      'display' => 'page_2',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '668f4450-c603-489a-b7cf-858f02c6b166';
    $display->content['new-668f4450-c603-489a-b7cf-858f02c6b166'] = $pane;
    $display->panels['right_side'][1] = 'new-668f4450-c603-489a-b7cf-858f02c6b166';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['drealty_listing__panel_context_960e634e-03ce-48ff-ad36-3e71d90a36c2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'drealty_listing__panel_context_f36f85d6-d09d-496b-8e0d-77563b7e1172';
  $handler->task = 'drealty_listing';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Building Panel',
    'no_blocks' => 0,
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
              'toronto_building' => 'toronto_building',
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
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'building_info',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'condos_in_building',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'building_info' => array(
        'type' => 'region',
        'title' => 'Building info',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'condos_in_building' => array(
        'type' => 'region',
        'title' => 'Condos in building',
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
      'building_info' => NULL,
      'condos_in_building' => NULL,
    ),
    'condos_in_building' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a4075876-d23f-41a9-871f-eb0ad33ad4f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13748279-3929-4991-9b51-ebd836826cb1';
    $pane->panel = 'building_info';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_address_full__torcond';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'smart_trim_format',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '300',
        'trim_type' => 'chars',
        'trim_suffix' => '...',
        'trim_link' => '0',
        'more_link' => '0',
        'more_text' => 'Read more',
        'trim_options' => array(
          'text' => 0,
        ),
        'trim_preserve_tags' => '',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13748279-3929-4991-9b51-ebd836826cb1';
    $display->content['new-13748279-3929-4991-9b51-ebd836826cb1'] = $pane;
    $display->panels['building_info'][0] = 'new-13748279-3929-4991-9b51-ebd836826cb1';
    $pane = new stdClass();
    $pane->pid = 'new-98900a44-f258-48cd-9216-871f858281fa';
    $pane->panel = 'condos_in_building';
    $pane->type = 'views';
    $pane->subtype = 'condos_in_building';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'arg2',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Sale',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '98900a44-f258-48cd-9216-871f858281fa';
    $display->content['new-98900a44-f258-48cd-9216-871f858281fa'] = $pane;
    $display->panels['condos_in_building'][0] = 'new-98900a44-f258-48cd-9216-871f858281fa';
    $pane = new stdClass();
    $pane->pid = 'new-f800ac0e-a915-4755-9180-4210873ad856';
    $pane->panel = 'condos_in_building';
    $pane->type = 'views';
    $pane->subtype = 'condos_in_building';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => 'arg2',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 1,
      'override_title_text' => 'Rent',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f800ac0e-a915-4755-9180-4210873ad856';
    $display->content['new-f800ac0e-a915-4755-9180-4210873ad856'] = $pane;
    $display->panels['condos_in_building'][1] = 'new-f800ac0e-a915-4755-9180-4210873ad856';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['drealty_listing__panel_context_f36f85d6-d09d-496b-8e0d-77563b7e1172'] = $handler;

  return $export;
}
