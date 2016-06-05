<?php
/**
 * @file
 * ctf_pages_drealty_listing_buy_now.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_drealty_listing_buy_now_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'drealty_listing_buy_now';
  $page->task = 'page';
  $page->admin_title = 'Drealty listing buy now';
  $page->admin_description = '';
  $page->path = 'condo/%drealty_listing/buy';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'drealty_listing' => array(
      'id' => 1,
      'identifier' => 'Drealty Listing: ID',
      'name' => 'entity_id:drealty_listing',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_drealty_listing_buy_now__panel';
  $handler->task = 'page';
  $handler->subtask = 'drealty_listing_buy_now';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Condo\'s buy now page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
  $display->uuid = '61211c4b-4db4-4957-8628-ce6ab93b97e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d1c27872-019e-41a1-963d-7bfea19ef835';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_ml_num__torcond';
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
        'trim_link' => '1',
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
    $pane->uuid = 'd1c27872-019e-41a1-963d-7bfea19ef835';
    $display->content['new-d1c27872-019e-41a1-963d-7bfea19ef835'] = $pane;
    $display->panels['center'][0] = 'new-d1c27872-019e-41a1-963d-7bfea19ef835';
    $pane = new stdClass();
    $pane->pid = 'new-b9cf0ce6-7665-4d79-bddd-488fec759ec7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'drealty_listing:field_extras__torcond';
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
        'trim_type' => 'words',
        'trim_suffix' => '...',
        'trim_link' => '0',
        'more_link' => '1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b9cf0ce6-7665-4d79-bddd-488fec759ec7';
    $display->content['new-b9cf0ce6-7665-4d79-bddd-488fec759ec7'] = $pane;
    $display->panels['center'][1] = 'new-b9cf0ce6-7665-4d79-bddd-488fec759ec7';
    $pane = new stdClass();
    $pane->pid = 'new-4e7d6a96-52cf-418f-ad9c-47faea541bb1';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4e7d6a96-52cf-418f-ad9c-47faea541bb1';
    $display->content['new-4e7d6a96-52cf-418f-ad9c-47faea541bb1'] = $pane;
    $display->panels['center'][2] = 'new-4e7d6a96-52cf-418f-ad9c-47faea541bb1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['drealty_listing_buy_now'] = $page;

  return $pages;

}
