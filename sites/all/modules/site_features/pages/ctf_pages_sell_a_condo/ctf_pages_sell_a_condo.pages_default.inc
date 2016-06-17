<?php
/**
 * @file
 * ctf_pages_sell_a_condo.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_sell_a_condo_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'sell_a_condo';
  $page->task = 'page';
  $page->admin_title = 'Sell A Condo';
  $page->admin_description = '';
  $page->path = 'sell-a-condo';
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
  $handler->name = 'page_sell_a_condo__panel';
  $handler->task = 'page';
  $handler->subtask = 'sell_a_condo';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->title = 'Sell A Condo';
  $display->uuid = '9eef7a91-cd95-4c71-8541-7be7a330b080';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b06574b1-7ece-4320-a22b-af9e96d26562';
    $pane->panel = 'center';
    $pane->type = 'sell_condo';
    $pane->subtype = 'sell_condo';
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
    $pane->uuid = 'b06574b1-7ece-4320-a22b-af9e96d26562';
    $display->content['new-b06574b1-7ece-4320-a22b-af9e96d26562'] = $pane;
    $display->panels['center'][0] = 'new-b06574b1-7ece-4320-a22b-af9e96d26562';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['sell_a_condo'] = $page;

  return $pages;

}
