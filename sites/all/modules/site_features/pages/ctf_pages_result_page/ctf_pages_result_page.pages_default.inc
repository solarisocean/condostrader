<?php
/**
 * @file
 * ctf_pages_result_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ctf_pages_result_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'search_with_jsmap';
  $page->task = 'page';
  $page->admin_title = 'Results page';
  $page->admin_description = '';
  $page->path = 'results';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Results',
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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 4,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => '47.542216053666436',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_bottom',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_bottom' => array(
        'type' => 'region',
        'title' => 'Left bottom',
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
          0 => 'two',
          1 => 'status',
          2 => 'left_top',
          3 => 'one',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_top' => array(
        'type' => 'region',
        'title' => 'two',
        'width' => '28.874739860092564',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'status' => array(
        'type' => 'region',
        'title' => 'one',
        'width' => '29.548746043093335',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'one' => array(
        'type' => 'region',
        'title' => 'three',
        'width' => '27.26541367460257',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'two' => array(
        'type' => 'region',
        'title' => 'status',
        'width' => '14.311100422211533',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => '27.45778394633356',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 5,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'map',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'map' => array(
        'type' => 'region',
        'title' => 'map',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_bottom' => NULL,
      'left_top' => NULL,
      'status' => NULL,
      'one' => NULL,
      'two' => NULL,
      'map' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82a89790-5aa5-40a6-b05a-867ad4628461';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec0b7e99-aab6-4ce6-b090-b3ad5918ef23';
    $pane->panel = 'left_bottom';
    $pane->type = 'views';
    $pane->subtype = 'condo_search_page';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 1,
      'nodes_per_page' => '50',
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
    $pane->uuid = 'ec0b7e99-aab6-4ce6-b090-b3ad5918ef23';
    $display->content['new-ec0b7e99-aab6-4ce6-b090-b3ad5918ef23'] = $pane;
    $display->panels['left_bottom'][0] = 'new-ec0b7e99-aab6-4ce6-b090-b3ad5918ef23';
    $pane = new stdClass();
    $pane->pid = 'new-775ec328-0a5e-451d-815f-920c7860a963';
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
      'display' => 'block_1',
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
    $pane->uuid = '775ec328-0a5e-451d-815f-920c7860a963';
    $display->content['new-775ec328-0a5e-451d-815f-920c7860a963'] = $pane;
    $display->panels['left_bottom'][1] = 'new-775ec328-0a5e-451d-815f-920c7860a963';
    $pane = new stdClass();
    $pane->pid = 'new-23a32edc-26f2-4d1d-ac2a-1ad0410febff';
    $pane->panel = 'left_top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-oZEgVBWVfRDQn2V0FjbhVS09wU6vTVGI';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Price:',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '23a32edc-26f2-4d1d-ac2a-1ad0410febff';
    $display->content['new-23a32edc-26f2-4d1d-ac2a-1ad0410febff'] = $pane;
    $display->panels['left_top'][0] = 'new-23a32edc-26f2-4d1d-ac2a-1ad0410febff';
    $pane = new stdClass();
    $pane->pid = 'new-e7739f3c-6188-4705-958e-3cd3a826f339';
    $pane->panel = 'left_top';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-j0v4L5FzfUE28j0igL5XV8Tm9UizEBY7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e7739f3c-6188-4705-958e-3cd3a826f339';
    $display->content['new-e7739f3c-6188-4705-958e-3cd3a826f339'] = $pane;
    $display->panels['left_top'][1] = 'new-e7739f3c-6188-4705-958e-3cd3a826f339';
    $pane = new stdClass();
    $pane->pid = 'new-91c39202-bc98-408f-bd34-e41c984f2651';
    $pane->panel = 'map';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '91c39202-bc98-408f-bd34-e41c984f2651';
    $display->content['new-91c39202-bc98-408f-bd34-e41c984f2651'] = $pane;
    $display->panels['map'][0] = 'new-91c39202-bc98-408f-bd34-e41c984f2651';
    $pane = new stdClass();
    $pane->pid = 'new-43303818-8edb-42e3-bf78-7459c3a57bb5';
    $pane->panel = 'map';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_map-main_map';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '43303818-8edb-42e3-bf78-7459c3a57bb5';
    $display->content['new-43303818-8edb-42e3-bf78-7459c3a57bb5'] = $pane;
    $display->panels['map'][1] = 'new-43303818-8edb-42e3-bf78-7459c3a57bb5';
    $pane = new stdClass();
    $pane->pid = 'new-593ed152-dbb7-45d9-96fb-c99feedfeeb6';
    $pane->panel = 'one';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-eIwbdvuKedBK9FAHgUC43QVuQh9WxXJr';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Size:',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '593ed152-dbb7-45d9-96fb-c99feedfeeb6';
    $display->content['new-593ed152-dbb7-45d9-96fb-c99feedfeeb6'] = $pane;
    $display->panels['one'][0] = 'new-593ed152-dbb7-45d9-96fb-c99feedfeeb6';
    $pane = new stdClass();
    $pane->pid = 'new-ed1c9f5a-0614-42c0-917b-dfc478d85df5';
    $pane->panel = 'one';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-8HnCPjdK00eWWGOJtvRhrewGWrlIL30U';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Beds:',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ed1c9f5a-0614-42c0-917b-dfc478d85df5';
    $display->content['new-ed1c9f5a-0614-42c0-917b-dfc478d85df5'] = $pane;
    $display->panels['one'][1] = 'new-ed1c9f5a-0614-42c0-917b-dfc478d85df5';
    $pane = new stdClass();
    $pane->pid = 'new-c0124519-b023-4272-89b7-df48f5d11a05';
    $pane->panel = 'one';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-wGjjrSELTNA51Ly91NMm6iKZAGV1031p';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c0124519-b023-4272-89b7-df48f5d11a05';
    $display->content['new-c0124519-b023-4272-89b7-df48f5d11a05'] = $pane;
    $display->panels['one'][2] = 'new-c0124519-b023-4272-89b7-df48f5d11a05';
    $pane = new stdClass();
    $pane->pid = 'new-becfc96e-e43e-4943-9152-626b61c8bb95';
    $pane->panel = 'status';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-xsNCDexPjpywTBiuQytW9Uh5vJzcVXhL';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'All parent regions:',
      'override_title_heading' => 'h5',
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
    $display->panels['status'][0] = 'new-becfc96e-e43e-4943-9152-626b61c8bb95';
    $pane = new stdClass();
    $pane->pid = 'new-a67ea7af-dfa7-4867-ae32-552b3f356b49';
    $pane->panel = 'status';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ae5s4uH2x1Bw3sdrLrNLnF5yKdamKxR4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Parent regions:',
      'override_title_heading' => 'h5',
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
    $display->panels['status'][1] = 'new-a67ea7af-dfa7-4867-ae32-552b3f356b49';
    $pane = new stdClass();
    $pane->pid = 'new-62aa8bd2-cff0-458e-b103-277afe23acd8';
    $pane->panel = 'status';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Nx6OMKmCFit0duct5Bl4O5Da0Z95ay4v';
    $pane->shown = FALSE;
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
    $display->panels['status'][2] = 'new-62aa8bd2-cff0-458e-b103-277afe23acd8';
    $pane = new stdClass();
    $pane->pid = 'new-45471c42-e259-4af6-b014-532551e6559c';
    $pane->panel = 'two';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-fL0rxPfIShG86nl01NvT2Mwy2pyYRoSa';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'sale/lease',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '45471c42-e259-4af6-b014-532551e6559c';
    $display->content['new-45471c42-e259-4af6-b014-532551e6559c'] = $pane;
    $display->panels['two'][0] = 'new-45471c42-e259-4af6-b014-532551e6559c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_with_jsmap'] = $page;

  return $pages;

}
