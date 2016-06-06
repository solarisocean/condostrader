<?php
/**
 * @file
 * ctf_views_condos_in_building.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_condos_in_building_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'condos_in_building';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Condos in building';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reference_to_condo_target_id']['id'] = 'field_reference_to_condo_target_id';
  $handler->display->display_options['relationships']['field_reference_to_condo_target_id']['table'] = 'field_data_field_reference_to_condo';
  $handler->display->display_options['relationships']['field_reference_to_condo_target_id']['field'] = 'field_reference_to_condo_target_id';
  $handler->display->display_options['relationships']['field_reference_to_condo_target_id']['required'] = TRUE;
  /* Field: Drealty Listing: Ml_num */
  $handler->display->display_options['fields']['field_ml_num__torcond']['id'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['table'] = 'field_data_field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['field'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['relationship'] = 'field_reference_to_condo_target_id';
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['relationship'] = 'field_reference_to_condo_target_id';
  /* Field: Drealty Listing: Drealty Listing Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_reference_to_condo_target_id';
  /* Contextual filter: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['arguments']['id']['id'] = 'id';
  $handler->display->display_options['arguments']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['arguments']['id']['field'] = 'id';
  $handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['condos_in_building'] = $view;

  return $export;
}
