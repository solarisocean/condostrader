<?php
/**
 * @file
 * ctf_pages_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_contact_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact us';
  $page->admin_description = '';
  $page->path = 'contact';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Contact Us',
    'name' => 'main-menu',
    'weight' => '400',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
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
  $display->title = '';
  $display->uuid = '5caf4d09-3230-42d9-890d-03bbc60597fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f2313181-1b9c-47e7-9b0c-883493a299f7';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Title',
      'title' => '<b>Contact</b> us:',
      'title_heading' => 'h3',
      'body' => 'info@condostrader.ca
tel. 416-828-4532',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f2313181-1b9c-47e7-9b0c-883493a299f7';
    $display->content['new-f2313181-1b9c-47e7-9b0c-883493a299f7'] = $pane;
    $display->panels['center'][0] = 'new-f2313181-1b9c-47e7-9b0c-883493a299f7';
    $pane = new stdClass();
    $pane->pid = 'new-1e21c031-7f0d-4d3b-a03d-db560609e0e2';
    $pane->panel = 'center';
    $pane->type = 'contact_us_entity_form';
    $pane->subtype = 'contact_us_entity_form';
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
    $pane->uuid = '1e21c031-7f0d-4d3b-a03d-db560609e0e2';
    $display->content['new-1e21c031-7f0d-4d3b-a03d-db560609e0e2'] = $pane;
    $display->panels['center'][1] = 'new-1e21c031-7f0d-4d3b-a03d-db560609e0e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  return $pages;

}
