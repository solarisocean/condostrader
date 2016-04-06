<?php
/**
 * @file
 * ctf_pages_solr_result_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_solr_result_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'result_page_solr_panel';
  $page->task = 'page';
  $page->admin_title = 'Result page solr panel';
  $page->admin_description = '';
  $page->path = 'solr-result-page';
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
  $handler->name = 'page_result_page_solr_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'result_page_solr_panel';
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
  $display->uuid = 'd681ee92-8c2c-4da3-904d-c8768e9cd49d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4074f002-8c8f-4ce3-8af0-0ae6b9e0f5c9';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'result_page_solr';
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
    $pane->uuid = '4074f002-8c8f-4ce3-8af0-0ae6b9e0f5c9';
    $display->content['new-4074f002-8c8f-4ce3-8af0-0ae6b9e0f5c9'] = $pane;
    $display->panels['left'][0] = 'new-4074f002-8c8f-4ce3-8af0-0ae6b9e0f5c9';
    $pane = new stdClass();
    $pane->pid = 'new-4515a3d0-0f06-453d-b2e0-04dd67bcb79c';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'result_page_solr';
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
    $pane->uuid = '4515a3d0-0f06-453d-b2e0-04dd67bcb79c';
    $display->content['new-4515a3d0-0f06-453d-b2e0-04dd67bcb79c'] = $pane;
    $display->panels['right'][0] = 'new-4515a3d0-0f06-453d-b2e0-04dd67bcb79c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4074f002-8c8f-4ce3-8af0-0ae6b9e0f5c9';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['result_page_solr_panel'] = $page;

  return $pages;

}
