<?php
/**
 * @file
 * feature_for_result_page_panel.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_for_result_page_panel_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'result_page_panel';
  $page->task = 'page';
  $page->admin_title = 'Result page panel';
  $page->admin_description = '';
  $page->path = 'result-page';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_result_page_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'result_page_panel';
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
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6a59b358-d8d2-4a0e-a7c2-25a41c22b176';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5ee48c55-f7a4-41f8-a6c0-314c84fcdfec';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'result_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
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
    $pane->uuid = '5ee48c55-f7a4-41f8-a6c0-314c84fcdfec';
    $display->content['new-5ee48c55-f7a4-41f8-a6c0-314c84fcdfec'] = $pane;
    $display->panels['left'][0] = 'new-5ee48c55-f7a4-41f8-a6c0-314c84fcdfec';
    $pane = new stdClass();
    $pane->pid = 'new-767f3c26-4512-4ee7-9367-2c372eaf1608';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'result_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
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
    $pane->uuid = '767f3c26-4512-4ee7-9367-2c372eaf1608';
    $display->content['new-767f3c26-4512-4ee7-9367-2c372eaf1608'] = $pane;
    $display->panels['right'][0] = 'new-767f3c26-4512-4ee7-9367-2c372eaf1608';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['result_page_panel'] = $page;

  return $pages;

}
