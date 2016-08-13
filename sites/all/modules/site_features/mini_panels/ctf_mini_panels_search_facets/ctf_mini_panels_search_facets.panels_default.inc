<?php
/**
 * @file
 * ctf_mini_panels_search_facets.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function ctf_mini_panels_search_facets_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'search_facets_toronto_condos_';
  $mini->category = 'Mini panels';
  $mini->admin_title = 'Search facets (toronto condos)';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => 'facet-bottom',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '33.752993737583175',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => '33.18446634228363',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '33.0625399201332',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center_',
        ),
        'parent' => 'main',
        'class' => 'facet-top',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'center',
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
          0 => 'search_button_region',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'search_button_region' => array(
        'type' => 'region',
        'title' => 'search button region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center_' => NULL,
      'search_button_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '194988c7-e6f1-4119-96f1-de0feabdad9c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e91903b5-378f-4b99-946e-9f7372b73119';
    $pane->panel = 'center';
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
    $pane->uuid = 'e91903b5-378f-4b99-946e-9f7372b73119';
    $display->content['new-e91903b5-378f-4b99-946e-9f7372b73119'] = $pane;
    $display->panels['center'][0] = 'new-e91903b5-378f-4b99-946e-9f7372b73119';
    $pane = new stdClass();
    $pane->pid = 'new-e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-PLlmxCJ0pbkkpaHqi2GRYvds6FfojBRE';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c';
    $display->content['new-e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c'] = $pane;
    $display->panels['center'][1] = 'new-e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c';
    $pane = new stdClass();
    $pane->pid = 'new-bfe7bbf8-b439-405c-92db-7d72bf68b123';
    $pane->panel = 'center';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bfe7bbf8-b439-405c-92db-7d72bf68b123';
    $display->content['new-bfe7bbf8-b439-405c-92db-7d72bf68b123'] = $pane;
    $display->panels['center'][2] = 'new-bfe7bbf8-b439-405c-92db-7d72bf68b123';
    $pane = new stdClass();
    $pane->pid = 'new-a3b29ff8-9720-4cb4-9fde-fd7739a9d33e';
    $pane->panel = 'center_';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-fL0rxPfIShG86nl01NvT2Mwy2pyYRoSa';
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
    $pane->uuid = 'a3b29ff8-9720-4cb4-9fde-fd7739a9d33e';
    $display->content['new-a3b29ff8-9720-4cb4-9fde-fd7739a9d33e'] = $pane;
    $display->panels['center_'][0] = 'new-a3b29ff8-9720-4cb4-9fde-fd7739a9d33e';
    $pane = new stdClass();
    $pane->pid = 'new-97f6c741-e7e8-428b-b9f3-e17ea9c640bc';
    $pane->panel = 'center_';
    $pane->type = 'block';
    $pane->subtype = 'views-41247aa790e39013d6fa3ea38cc70fd4';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '97f6c741-e7e8-428b-b9f3-e17ea9c640bc';
    $display->content['new-97f6c741-e7e8-428b-b9f3-e17ea9c640bc'] = $pane;
    $display->panels['center_'][1] = 'new-97f6c741-e7e8-428b-b9f3-e17ea9c640bc';
    $pane = new stdClass();
    $pane->pid = 'new-e054d296-22ef-4494-bc68-15512ed41445';
    $pane->panel = 'center_';
    $pane->type = 'block';
    $pane->subtype = 'views-9ea7e31aa803b364710e15dcb5b51b66';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'front',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'inherit_path' => 1,
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
      'css_class' => 'sale-rent-radio',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e054d296-22ef-4494-bc68-15512ed41445';
    $display->content['new-e054d296-22ef-4494-bc68-15512ed41445'] = $pane;
    $display->panels['center_'][2] = 'new-e054d296-22ef-4494-bc68-15512ed41445';
    $pane = new stdClass();
    $pane->pid = 'new-4b8d81de-3ffb-439b-80f2-4e00b8c8e4a2';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_saf-neighbourhoods_hs';
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
    $pane->uuid = '4b8d81de-3ffb-439b-80f2-4e00b8c8e4a2';
    $display->content['new-4b8d81de-3ffb-439b-80f2-4e00b8c8e4a2'] = $pane;
    $display->panels['left'][0] = 'new-4b8d81de-3ffb-439b-80f2-4e00b8c8e4a2';
    $pane = new stdClass();
    $pane->pid = 'new-305d394f-8fb8-466e-b578-2c4db2a86de5';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_fct-facet_map';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '0',
            'paths' => '<front>',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
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
    $pane->uuid = '305d394f-8fb8-466e-b578-2c4db2a86de5';
    $display->content['new-305d394f-8fb8-466e-b578-2c4db2a86de5'] = $pane;
    $display->panels['left'][1] = 'new-305d394f-8fb8-466e-b578-2c4db2a86de5';
    $pane = new stdClass();
    $pane->pid = 'new-d310594e-4027-430b-9ab9-a8851662d219';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ctXwG6RtME0c2Q0upPnSA0Lmxy48ueR0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Type:',
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
    $pane->uuid = 'd310594e-4027-430b-9ab9-a8851662d219';
    $display->content['new-d310594e-4027-430b-9ab9-a8851662d219'] = $pane;
    $display->panels['left'][2] = 'new-d310594e-4027-430b-9ab9-a8851662d219';
    $pane = new stdClass();
    $pane->pid = 'new-bcc99212-b8d8-4cbb-8dbd-23abea5d7660';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-DdYKvDmVAYuJT1BFV12JeMDZcgY6r4VA';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Building Style',
      'override_title_heading' => 'h5',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bcc99212-b8d8-4cbb-8dbd-23abea5d7660';
    $display->content['new-bcc99212-b8d8-4cbb-8dbd-23abea5d7660'] = $pane;
    $display->panels['left'][3] = 'new-bcc99212-b8d8-4cbb-8dbd-23abea5d7660';
    $pane = new stdClass();
    $pane->pid = 'new-bd8f6555-30e2-4c18-9588-508f61166971';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-AQL3MKLS7xPgSYfh6Y2qs3fsjj1Rz00j';
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
    $pane->uuid = 'bd8f6555-30e2-4c18-9588-508f61166971';
    $display->content['new-bd8f6555-30e2-4c18-9588-508f61166971'] = $pane;
    $display->panels['right'][0] = 'new-bd8f6555-30e2-4c18-9588-508f61166971';
    $pane = new stdClass();
    $pane->pid = 'new-70debc3e-277b-41d6-a492-b8e81cf48749';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-j0v4L5FzfUE28j0igL5XV8Tm9UizEBY7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '70debc3e-277b-41d6-a492-b8e81cf48749';
    $display->content['new-70debc3e-277b-41d6-a492-b8e81cf48749'] = $pane;
    $display->panels['right'][1] = 'new-70debc3e-277b-41d6-a492-b8e81cf48749';
    $pane = new stdClass();
    $pane->pid = 'new-0e982622-5e2b-4897-9b93-392e81363abe';
    $pane->panel = 'right';
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
    $pane->uuid = '0e982622-5e2b-4897-9b93-392e81363abe';
    $display->content['new-0e982622-5e2b-4897-9b93-392e81363abe'] = $pane;
    $display->panels['right'][2] = 'new-0e982622-5e2b-4897-9b93-392e81363abe';
    $pane = new stdClass();
    $pane->pid = 'new-9fe937fe-684f-4197-8bb1-7fdd5919ebc3';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-wxQrIQ0ioM7RJIewLhWNWJqhjxPJLREY';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9fe937fe-684f-4197-8bb1-7fdd5919ebc3';
    $display->content['new-9fe937fe-684f-4197-8bb1-7fdd5919ebc3'] = $pane;
    $display->panels['right'][3] = 'new-9fe937fe-684f-4197-8bb1-7fdd5919ebc3';
    $pane = new stdClass();
    $pane->pid = 'new-4711e72e-cd19-46f9-8514-5a2b784ff921';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-hsCggDsq71sQtV7hiBNPCtjWH1g7f7wA';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h6',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4711e72e-cd19-46f9-8514-5a2b784ff921';
    $display->content['new-4711e72e-cd19-46f9-8514-5a2b784ff921'] = $pane;
    $display->panels['right'][4] = 'new-4711e72e-cd19-46f9-8514-5a2b784ff921';
    $pane = new stdClass();
    $pane->pid = 'new-d0c29e59-f17e-4a90-9b95-1a0ecd298fd4';
    $pane->panel = 'search_button_region';
    $pane->type = 'block';
    $pane->subtype = 'ctrader_saf-ctrader_search_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => ' ',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'facet-search-block-submit-button',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0c29e59-f17e-4a90-9b95-1a0ecd298fd4';
    $display->content['new-d0c29e59-f17e-4a90-9b95-1a0ecd298fd4'] = $pane;
    $display->panels['search_button_region'][0] = 'new-d0c29e59-f17e-4a90-9b95-1a0ecd298fd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['search_facets_toronto_condos_'] = $mini;

  return $export;
}
