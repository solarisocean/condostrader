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
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
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
        'class' => '',
        'hide_empty' => 0,
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
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center_',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => 'centering front-center-block',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => '33.20734394818964',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'center',
        'width' => '33.43013761622149',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '33.362518435588875',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'blog',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'blog' => array(
        'type' => 'region',
        'title' => 'blog nodes',
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
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'search_facets' => array(
        'image' => 'sites/all/themes/condor/images/header-picture.jpg',
        'image_style' => '',
        'class' => 'panels-background-image',
      ),
      'left' => NULL,
      'center_' => NULL,
      'right' => NULL,
      'blog' => NULL,
    ),
    'search_facets' => array(
      'style' => 'background_picture',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cb9cbae7-7016-4e17-bc92-60b54ac91eb1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9947cb7c-ea49-44a9-bf1c-1c4d156a14ad';
    $pane->panel = 'blog';
    $pane->type = 'views';
    $pane->subtype = 'blog_post_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '4',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
      'css_class' => 'centering recent-post-front',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9947cb7c-ea49-44a9-bf1c-1c4d156a14ad';
    $display->content['new-9947cb7c-ea49-44a9-bf1c-1c4d156a14ad'] = $pane;
    $display->panels['blog'][0] = 'new-9947cb7c-ea49-44a9-bf1c-1c4d156a14ad';
    $pane = new stdClass();
    $pane->pid = 'new-2350e68a-e317-4c4a-a7cc-79f8973541cf';
    $pane->panel = 'center';
    $pane->type = 'nearby_listings';
    $pane->subtype = 'nearby_listings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'centering nearby-listed',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2350e68a-e317-4c4a-a7cc-79f8973541cf';
    $display->content['new-2350e68a-e317-4c4a-a7cc-79f8973541cf'] = $pane;
    $display->panels['center'][0] = 'new-2350e68a-e317-4c4a-a7cc-79f8973541cf';
    $pane = new stdClass();
    $pane->pid = 'new-8d1038b3-92d9-4531-ac75-2ba5f63aa294';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'homepage_view_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
      'use_pager' => 0,
      'nodes_per_page' => '40',
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'centering newly-listed',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8d1038b3-92d9-4531-ac75-2ba5f63aa294';
    $display->content['new-8d1038b3-92d9-4531-ac75-2ba5f63aa294'] = $pane;
    $display->panels['center'][1] = 'new-8d1038b3-92d9-4531-ac75-2ba5f63aa294';
    $pane = new stdClass();
    $pane->pid = 'new-4a61666d-46df-4cda-a96e-d8f5aaafea84';
    $pane->panel = 'center_';
    $pane->type = 'views';
    $pane->subtype = 'homepage_view_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
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
      'display' => 'page_3',
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
    $pane->uuid = '4a61666d-46df-4cda-a96e-d8f5aaafea84';
    $display->content['new-4a61666d-46df-4cda-a96e-d8f5aaafea84'] = $pane;
    $display->panels['center_'][0] = 'new-4a61666d-46df-4cda-a96e-d8f5aaafea84';
    $pane = new stdClass();
    $pane->pid = 'new-8daaa5c6-59bc-4aa7-a87d-bf55e7cceec1';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'homepage_view_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
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
    $pane->uuid = '8daaa5c6-59bc-4aa7-a87d-bf55e7cceec1';
    $display->content['new-8daaa5c6-59bc-4aa7-a87d-bf55e7cceec1'] = $pane;
    $display->panels['left'][0] = 'new-8daaa5c6-59bc-4aa7-a87d-bf55e7cceec1';
    $pane = new stdClass();
    $pane->pid = 'new-7a14b39d-90fc-46fe-b593-4bd56b7f0c38';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'homepage_view_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 1,
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
      'display' => 'page_4',
      'override_title' => 0,
      'override_title_text' => 'TestTestTestTestTest',
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
    $pane->uuid = '7a14b39d-90fc-46fe-b593-4bd56b7f0c38';
    $display->content['new-7a14b39d-90fc-46fe-b593-4bd56b7f0c38'] = $pane;
    $display->panels['right'][0] = 'new-7a14b39d-90fc-46fe-b593-4bd56b7f0c38';
    $pane = new stdClass();
    $pane->pid = 'new-6a911481-856e-4bf4-97e5-cbebdaffad30';
    $pane->panel = 'search_facets';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Header Block',
      'title' => 'Find Your Dream Condo Today',
      'title_heading' => 'h2',
      'body' => 'Your new perfect home is just a click away',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'front-header-block',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6a911481-856e-4bf4-97e5-cbebdaffad30';
    $display->content['new-6a911481-856e-4bf4-97e5-cbebdaffad30'] = $pane;
    $display->panels['search_facets'][0] = 'new-6a911481-856e-4bf4-97e5-cbebdaffad30';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet-search-block',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '24ca7d81-0361-4af6-82ed-b4ecf1440037';
    $display->content['new-24ca7d81-0361-4af6-82ed-b4ecf1440037'] = $pane;
    $display->panels['search_facets'][1] = 'new-24ca7d81-0361-4af6-82ed-b4ecf1440037';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-24ca7d81-0361-4af6-82ed-b4ecf1440037';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['main_page'] = $page;

  return $pages;

}
