<?php
/**
 * @file
 * ctf_pages_search_jsmap.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_search_jsmap_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_with_jsmap';
  $page->task = 'page';
  $page->admin_title = 'search with JSmap';
  $page->admin_description = '';
  $page->path = 'js-search';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Search + JSmap ',
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
  $handler->name = 'page_search_with_jsmap__panel';
  $handler->task = 'page';
  $handler->subtask = 'search_with_jsmap';
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
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82a89790-5aa5-40a6-b05a-867ad4628461';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-becfc96e-e43e-4943-9152-626b61c8bb95';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-xsNCDexPjpywTBiuQytW9Uh5vJzcVXhL';
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
    $pane->uuid = 'becfc96e-e43e-4943-9152-626b61c8bb95';
    $display->content['new-becfc96e-e43e-4943-9152-626b61c8bb95'] = $pane;
    $display->panels['left'][0] = 'new-becfc96e-e43e-4943-9152-626b61c8bb95';
    $pane = new stdClass();
    $pane->pid = 'new-a67ea7af-dfa7-4867-ae32-552b3f356b49';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ae5s4uH2x1Bw3sdrLrNLnF5yKdamKxR4';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a67ea7af-dfa7-4867-ae32-552b3f356b49';
    $display->content['new-a67ea7af-dfa7-4867-ae32-552b3f356b49'] = $pane;
    $display->panels['left'][1] = 'new-a67ea7af-dfa7-4867-ae32-552b3f356b49';
    $pane = new stdClass();
    $pane->pid = 'new-62aa8bd2-cff0-458e-b103-277afe23acd8';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Nx6OMKmCFit0duct5Bl4O5Da0Z95ay4v';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '62aa8bd2-cff0-458e-b103-277afe23acd8';
    $display->content['new-62aa8bd2-cff0-458e-b103-277afe23acd8'] = $pane;
    $display->panels['left'][2] = 'new-62aa8bd2-cff0-458e-b103-277afe23acd8';
    $pane = new stdClass();
    $pane->pid = 'new-91c39202-bc98-408f-bd34-e41c984f2651';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '91c39202-bc98-408f-bd34-e41c984f2651';
    $display->content['new-91c39202-bc98-408f-bd34-e41c984f2651'] = $pane;
    $display->panels['left'][3] = 'new-91c39202-bc98-408f-bd34-e41c984f2651';
    $pane = new stdClass();
    $pane->pid = 'new-ed1c9f5a-0614-42c0-917b-dfc478d85df5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-8HnCPjdK00eWWGOJtvRhrewGWrlIL30U';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ed1c9f5a-0614-42c0-917b-dfc478d85df5';
    $display->content['new-ed1c9f5a-0614-42c0-917b-dfc478d85df5'] = $pane;
    $display->panels['left'][4] = 'new-ed1c9f5a-0614-42c0-917b-dfc478d85df5';
    $pane = new stdClass();
    $pane->pid = 'new-e7739f3c-6188-4705-958e-3cd3a826f339';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-j0v4L5FzfUE28j0igL5XV8Tm9UizEBY7';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e7739f3c-6188-4705-958e-3cd3a826f339';
    $display->content['new-e7739f3c-6188-4705-958e-3cd3a826f339'] = $pane;
    $display->panels['left'][5] = 'new-e7739f3c-6188-4705-958e-3cd3a826f339';
    $pane = new stdClass();
    $pane->pid = 'new-23a32edc-26f2-4d1d-ac2a-1ad0410febff';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-oZEgVBWVfRDQn2V0FjbhVS09wU6vTVGI';
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
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '23a32edc-26f2-4d1d-ac2a-1ad0410febff';
    $display->content['new-23a32edc-26f2-4d1d-ac2a-1ad0410febff'] = $pane;
    $display->panels['left'][6] = 'new-23a32edc-26f2-4d1d-ac2a-1ad0410febff';
    $pane = new stdClass();
    $pane->pid = 'new-064bcb00-191e-42bf-a729-6930b2bf27e2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-u8g6ZEQSj1rah1OLHwDPCt77S1gVto8Z';
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
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '064bcb00-191e-42bf-a729-6930b2bf27e2';
    $display->content['new-064bcb00-191e-42bf-a729-6930b2bf27e2'] = $pane;
    $display->panels['left'][7] = 'new-064bcb00-191e-42bf-a729-6930b2bf27e2';
    $pane = new stdClass();
    $pane->pid = 'new-593ed152-dbb7-45d9-96fb-c99feedfeeb6';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-eIwbdvuKedBK9FAHgUC43QVuQh9WxXJr';
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
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '593ed152-dbb7-45d9-96fb-c99feedfeeb6';
    $display->content['new-593ed152-dbb7-45d9-96fb-c99feedfeeb6'] = $pane;
    $display->panels['left'][8] = 'new-593ed152-dbb7-45d9-96fb-c99feedfeeb6';
    $pane = new stdClass();
    $pane->pid = 'new-c0124519-b023-4272-89b7-df48f5d11a05';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-wGjjrSELTNA51Ly91NMm6iKZAGV1031p';
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
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'c0124519-b023-4272-89b7-df48f5d11a05';
    $display->content['new-c0124519-b023-4272-89b7-df48f5d11a05'] = $pane;
    $display->panels['left'][9] = 'new-c0124519-b023-4272-89b7-df48f5d11a05';
    $pane = new stdClass();
    $pane->pid = 'new-86db0edf-6158-4515-8a5d-c206ff42d09b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-AQL3MKLS7xPgSYfh6Y2qs3fsjj1Rz00j';
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
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '86db0edf-6158-4515-8a5d-c206ff42d09b';
    $display->content['new-86db0edf-6158-4515-8a5d-c206ff42d09b'] = $pane;
    $display->panels['left'][10] = 'new-86db0edf-6158-4515-8a5d-c206ff42d09b';
    $pane = new stdClass();
    $pane->pid = 'new-ec0b7e99-aab6-4ce6-b090-b3ad5918ef23';
    $pane->panel = 'middle';
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
    $pane->uuid = 'ec0b7e99-aab6-4ce6-b090-b3ad5918ef23';
    $display->content['new-ec0b7e99-aab6-4ce6-b090-b3ad5918ef23'] = $pane;
    $display->panels['middle'][0] = 'new-ec0b7e99-aab6-4ce6-b090-b3ad5918ef23';
    $pane = new stdClass();
    $pane->pid = 'new-43303818-8edb-42e3-bf78-7459c3a57bb5';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_map-main_map';
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
    $pane->uuid = '43303818-8edb-42e3-bf78-7459c3a57bb5';
    $display->content['new-43303818-8edb-42e3-bf78-7459c3a57bb5'] = $pane;
    $display->panels['top'][0] = 'new-43303818-8edb-42e3-bf78-7459c3a57bb5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_with_jsmap'] = $page;

  return $pages;

}
