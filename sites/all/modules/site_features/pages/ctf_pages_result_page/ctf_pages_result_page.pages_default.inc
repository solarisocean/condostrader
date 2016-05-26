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
  $page->path = 'search-results';
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
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => TRUE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => '46.01825458855669',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 6,
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
        'class' => 'results-page-result',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'column',
        'width' => '28.981745411443306',
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
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'search_facets',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search_facets' => array(
        'type' => 'region',
        'title' => 'Search facets',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
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
      'search_facets' => NULL,
    ),
    'two' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82a89790-5aa5-40a6-b05a-867ad4628461';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b7247cf-1263-473a-ac52-dd88af77295f';
    $pane->panel = 'left_bottom';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_fct-result_tabs';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'result-tab-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b7247cf-1263-473a-ac52-dd88af77295f';
    $display->content['new-6b7247cf-1263-473a-ac52-dd88af77295f'] = $pane;
    $display->panels['left_bottom'][0] = 'new-6b7247cf-1263-473a-ac52-dd88af77295f';
    $pane = new stdClass();
    $pane->pid = 'new-e7fdb291-c2c8-45bd-9b76-2e48eb92fb17';
    $pane->panel = 'left_bottom';
    $pane->type = 'block';
    $pane->subtype = 'views-41247aa790e39013d6fa3ea38cc70fd4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'result-filter-block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e7fdb291-c2c8-45bd-9b76-2e48eb92fb17';
    $display->content['new-e7fdb291-c2c8-45bd-9b76-2e48eb92fb17'] = $pane;
    $display->panels['left_bottom'][1] = 'new-e7fdb291-c2c8-45bd-9b76-2e48eb92fb17';
    $pane = new stdClass();
    $pane->pid = 'new-96236e06-a9cb-4f95-8965-b3feced71f84';
    $pane->panel = 'left_bottom';
    $pane->type = 'views';
    $pane->subtype = 'search_results_ctrader';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '21',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '96236e06-a9cb-4f95-8965-b3feced71f84';
    $display->content['new-96236e06-a9cb-4f95-8965-b3feced71f84'] = $pane;
    $display->panels['left_bottom'][2] = 'new-96236e06-a9cb-4f95-8965-b3feced71f84';
    $pane = new stdClass();
    $pane->pid = 'new-95924812-6b3c-4d60-97fb-a8a9c0deb940';
    $pane->panel = 'left_bottom';
    $pane->type = 'views';
    $pane->subtype = 'search_results_ctrader';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '20',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_2',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '95924812-6b3c-4d60-97fb-a8a9c0deb940';
    $display->content['new-95924812-6b3c-4d60-97fb-a8a9c0deb940'] = $pane;
    $display->panels['left_bottom'][3] = 'new-95924812-6b3c-4d60-97fb-a8a9c0deb940';
    $pane = new stdClass();
    $pane->pid = 'new-f1c983eb-5d43-47c3-a960-a2f3a33b2237';
    $pane->panel = 'left_bottom';
    $pane->type = 'views';
    $pane->subtype = 'search_results_ctrader';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '20',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f1c983eb-5d43-47c3-a960-a2f3a33b2237';
    $display->content['new-f1c983eb-5d43-47c3-a960-a2f3a33b2237'] = $pane;
    $display->panels['left_bottom'][4] = 'new-f1c983eb-5d43-47c3-a960-a2f3a33b2237';
    $pane = new stdClass();
    $pane->pid = 'new-91c39202-bc98-408f-bd34-e41c984f2651';
    $pane->panel = 'map';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = FALSE;
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
    $pane->pid = 'new-e7d17b1b-860a-4eec-b7ce-c52987ce99f6';
    $pane->panel = 'search_facets';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet-search-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e7d17b1b-860a-4eec-b7ce-c52987ce99f6';
    $display->content['new-e7d17b1b-860a-4eec-b7ce-c52987ce99f6'] = $pane;
    $display->panels['search_facets'][0] = 'new-e7d17b1b-860a-4eec-b7ce-c52987ce99f6';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['search_with_jsmap'] = $page;

  return $pages;

}
