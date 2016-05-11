<?php
/**
 * @file
 * ctf_views_users_wish_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_users_wish_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flaged_condos_';
  $view->description = '';
  $view->tag = 'user';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Users wish list';
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
  /* Relationship: Flags: drealty_flag */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'drealty_listing';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'drealty_flag';
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['exclude'] = TRUE;
  /* Field: Drealty Listing: Ml_num */
  $handler->display->display_options['fields']['field_ml_num__torcond']['id'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['table'] = 'field_data_field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['field'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['label'] = 'MLS #';
  /* Field: Drealty Listing: Full address */
  $handler->display->display_options['fields']['field_address_full__torcond']['id'] = 'field_address_full__torcond';
  $handler->display->display_options['fields']['field_address_full__torcond']['table'] = 'field_data_field_address_full__torcond';
  $handler->display->display_options['fields']['field_address_full__torcond']['field'] = 'field_address_full__torcond';
  $handler->display->display_options['fields']['field_address_full__torcond']['label'] = '';
  $handler->display->display_options['fields']['field_address_full__torcond']['element_label_colon'] = FALSE;
  /* Field: Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'field_data_field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => '190x120',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Contextual filter: Flags: User uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'flagging';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_condo';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/%/wish-list';
  $export['flaged_condos_'] = $view;

  return $export;
}
