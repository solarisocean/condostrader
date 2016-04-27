<?php
/**
 * @file
 * ctf_pages_toronto_condos_search_with_map.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_toronto_condos_search_with_map_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'toronto_condos_serch_with_map_';
  $page->task = 'page';
  $page->admin_title = 'Toronto condos search (with map)';
  $page->admin_description = '';
  $page->path = 'search-condos';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Map',
    'name' => 'main-menu',
    'weight' => '0',
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
  $handler->name = 'page_toronto_condos_serch_with_map___panel';
  $handler->task = 'page';
  $handler->subtask = 'toronto_condos_serch_with_map_';
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
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
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
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
          1 => 3,
        ),
        'class' => 'Left',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left',
        ),
        'parent' => '1',
        'class' => 'Top left',
        'hide_empty' => 0,
      ),
      'top_left' => array(
        'type' => 'region',
        'title' => 'Top left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom',
        ),
        'parent' => '1',
        'class' => 'Left bottom',
        'hide_empty' => 0,
      ),
      'left_bottom' => array(
        'type' => 'region',
        'title' => 'Left bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'center' => NULL,
      'top_left' => NULL,
      'left_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f8d2ee8f-4cf6-4908-9d5b-0c812075972b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13b7a4d0-e01b-4106-856c-9e75312ef906';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'map';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '250',
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
    $pane->cache = array(
      'method' => 'simple',
      'settings' => array(
        'lifetime' => '15',
        'granularity' => 'none',
      ),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '13b7a4d0-e01b-4106-856c-9e75312ef906';
    $display->content['new-13b7a4d0-e01b-4106-856c-9e75312ef906'] = $pane;
    $display->panels['center'][0] = 'new-13b7a4d0-e01b-4106-856c-9e75312ef906';
    $pane = new stdClass();
    $pane->pid = 'new-2ddb8b7e-e741-494c-a7d2-a8b8c016e298';
    $pane->panel = 'left_bottom';
    $pane->type = 'views';
    $pane->subtype = 'condo_search_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '12',
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
    $pane->uuid = '2ddb8b7e-e741-494c-a7d2-a8b8c016e298';
    $display->content['new-2ddb8b7e-e741-494c-a7d2-a8b8c016e298'] = $pane;
    $display->panels['left_bottom'][0] = 'new-2ddb8b7e-e741-494c-a7d2-a8b8c016e298';
    $pane = new stdClass();
    $pane->pid = 'new-9913068d-4aa1-45e1-a4d7-0084d6565a5c';
    $pane->panel = 'top_left';
    $pane->type = 'panels_mini';
    $pane->subtype = 'search_facets_toronto_condos_';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9913068d-4aa1-45e1-a4d7-0084d6565a5c';
    $display->content['new-9913068d-4aa1-45e1-a4d7-0084d6565a5c'] = $pane;
    $display->panels['top_left'][0] = 'new-9913068d-4aa1-45e1-a4d7-0084d6565a5c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['toronto_condos_serch_with_map_'] = $page;

  return $pages;

}
