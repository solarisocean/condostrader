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
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center_' => NULL,
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
    $pane->pid = 'new-d310594e-4027-430b-9ab9-a8851662d219';
    $pane->panel = 'center';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd310594e-4027-430b-9ab9-a8851662d219';
    $display->content['new-d310594e-4027-430b-9ab9-a8851662d219'] = $pane;
    $display->panels['center'][1] = 'new-d310594e-4027-430b-9ab9-a8851662d219';
    $pane = new stdClass();
    $pane->pid = 'new-70debc3e-277b-41d6-a492-b8e81cf48749';
    $pane->panel = 'center';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '70debc3e-277b-41d6-a492-b8e81cf48749';
    $display->content['new-70debc3e-277b-41d6-a492-b8e81cf48749'] = $pane;
    $display->panels['center'][2] = 'new-70debc3e-277b-41d6-a492-b8e81cf48749';
    $pane = new stdClass();
    $pane->pid = 'new-ba1bb8e6-64d4-45e2-9955-4e03fb241e5e';
    $pane->panel = 'center_';
    $pane->type = 'block';
    $pane->subtype = 'current_search-standard';
    $pane->shown = FALSE;
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
    $pane->uuid = 'ba1bb8e6-64d4-45e2-9955-4e03fb241e5e';
    $display->content['new-ba1bb8e6-64d4-45e2-9955-4e03fb241e5e'] = $pane;
    $display->panels['center_'][0] = 'new-ba1bb8e6-64d4-45e2-9955-4e03fb241e5e';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a3b29ff8-9720-4cb4-9fde-fd7739a9d33e';
    $display->content['new-a3b29ff8-9720-4cb4-9fde-fd7739a9d33e'] = $pane;
    $display->panels['center_'][1] = 'new-a3b29ff8-9720-4cb4-9fde-fd7739a9d33e';
    $pane = new stdClass();
    $pane->pid = 'new-9df01984-7f1d-4c12-92b3-54bd864a0152';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-xsNCDexPjpywTBiuQytW9Uh5vJzcVXhL';
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
    $pane->uuid = '9df01984-7f1d-4c12-92b3-54bd864a0152';
    $display->content['new-9df01984-7f1d-4c12-92b3-54bd864a0152'] = $pane;
    $display->panels['left'][0] = 'new-9df01984-7f1d-4c12-92b3-54bd864a0152';
    $pane = new stdClass();
    $pane->pid = 'new-f99dcdc7-457d-4c77-8b9c-d929561c6b58';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-ae5s4uH2x1Bw3sdrLrNLnF5yKdamKxR4';
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
    $pane->uuid = 'f99dcdc7-457d-4c77-8b9c-d929561c6b58';
    $display->content['new-f99dcdc7-457d-4c77-8b9c-d929561c6b58'] = $pane;
    $display->panels['left'][1] = 'new-f99dcdc7-457d-4c77-8b9c-d929561c6b58';
    $pane = new stdClass();
    $pane->pid = 'new-330a8515-9824-4075-bf80-8e5d68f9555b';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'facetapi-Nx6OMKmCFit0duct5Bl4O5Da0Z95ay4v';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Region:',
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
    $pane->uuid = '330a8515-9824-4075-bf80-8e5d68f9555b';
    $display->content['new-330a8515-9824-4075-bf80-8e5d68f9555b'] = $pane;
    $display->panels['left'][2] = 'new-330a8515-9824-4075-bf80-8e5d68f9555b';
    $pane = new stdClass();
    $pane->pid = 'new-bd8f6555-30e2-4c18-9588-508f61166971';
    $pane->panel = 'left';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bd8f6555-30e2-4c18-9588-508f61166971';
    $display->content['new-bd8f6555-30e2-4c18-9588-508f61166971'] = $pane;
    $display->panels['left'][3] = 'new-bd8f6555-30e2-4c18-9588-508f61166971';
    $pane = new stdClass();
    $pane->pid = 'new-e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c';
    $pane->panel = 'right';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c';
    $display->content['new-e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c'] = $pane;
    $display->panels['right'][0] = 'new-e5fe58e5-cfb3-453b-bd7f-874ce2bdd25c';
    $pane = new stdClass();
    $pane->pid = 'new-bfe7bbf8-b439-405c-92db-7d72bf68b123';
    $pane->panel = 'right';
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
    $pane->uuid = 'bfe7bbf8-b439-405c-92db-7d72bf68b123';
    $display->content['new-bfe7bbf8-b439-405c-92db-7d72bf68b123'] = $pane;
    $display->panels['right'][1] = 'new-bfe7bbf8-b439-405c-92db-7d72bf68b123';
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
    $pane->pid = 'new-d0c29e59-f17e-4a90-9b95-1a0ecd298fd4';
    $pane->panel = 'right';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd0c29e59-f17e-4a90-9b95-1a0ecd298fd4';
    $display->content['new-d0c29e59-f17e-4a90-9b95-1a0ecd298fd4'] = $pane;
    $display->panels['right'][3] = 'new-d0c29e59-f17e-4a90-9b95-1a0ecd298fd4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ba1bb8e6-64d4-45e2-9955-4e03fb241e5e';
  $mini->display = $display;
  $export['search_facets_toronto_condos_'] = $mini;

  return $export;
}
