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
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['drealty_listing__panel_context_960e634e-03ce-48ff-ad36-3e71d90a36c2'] = $handler;

  return $export;
}
