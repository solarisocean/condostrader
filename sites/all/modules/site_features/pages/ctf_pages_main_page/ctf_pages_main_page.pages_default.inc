<?php
/**
 * @file
 * ctf_pages_main_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_main_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'main_page';
  $page->task = 'page';
  $page->admin_title = 'Main page';
  $page->admin_description = '';
  $page->path = 'main-page';
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
  $handler->name = 'page_main_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'main_page';
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
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'search_facets',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search_facets' => array(
        'type' => 'region',
        'title' => 'Search facets',
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
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'search_facets' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb9cbae7-7016-4e17-bc92-60b54ac91eb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3d940d14-c69a-4f13-b005-815830acc684';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'condo_search_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '8',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
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
    $pane->uuid = '3d940d14-c69a-4f13-b005-815830acc684';
    $display->content['new-3d940d14-c69a-4f13-b005-815830acc684'] = $pane;
    $display->panels['center'][0] = 'new-3d940d14-c69a-4f13-b005-815830acc684';
    $pane = new stdClass();
    $pane->pid = 'new-24ca7d81-0361-4af6-82ed-b4ecf1440037';
    $pane->panel = 'search_facets';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_facets_toronto_condos_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '24ca7d81-0361-4af6-82ed-b4ecf1440037';
    $display->content['new-24ca7d81-0361-4af6-82ed-b4ecf1440037'] = $pane;
    $display->panels['search_facets'][0] = 'new-24ca7d81-0361-4af6-82ed-b4ecf1440037';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-24ca7d81-0361-4af6-82ed-b4ecf1440037';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_page'] = $page;

  return $pages;

}
