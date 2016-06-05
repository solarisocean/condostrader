<?php
/**
 * @file
 * ctf_views_toronto_condos_list.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_toronto_condos_list_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'tc_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'drealty_listing';
  $view->human_name = 'Toronto condos list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Toronto condos list';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_ml_num__torcond_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'id' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_address_full__torcond_value' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'id' => 'id',
    'field_ml_num__torcond' => 'field_ml_num__torcond',
    'label' => 'label',
    'field_addr__torcond' => 'field_addr__torcond',
    'field_timestamp_sql__torcond' => 'field_timestamp_sql__torcond',
    'field_toronto_gallery' => 'field_toronto_gallery',
    'id_1' => 'id_1',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ml_num__torcond' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_addr__torcond' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_timestamp_sql__torcond' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_toronto_gallery' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Drealty Listing */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = '/drealty_listing/[id]';
  $handler->display->display_options['fields']['id']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  /* Field: Drealty Listing: Ml_num */
  $handler->display->display_options['fields']['field_ml_num__torcond']['id'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['table'] = 'field_data_field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['field'] = 'field_ml_num__torcond';
  $handler->display->display_options['fields']['field_ml_num__torcond']['label'] = 'MLS #';
  /* Field: Drealty Listing: Drealty Listing Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Title (label)';
  /* Field: Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr__torcond']['id'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['table'] = 'field_data_field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['field'] = 'field_addr__torcond';
  $handler->display->display_options['fields']['field_addr__torcond']['label'] = 'Address (Addr)';
  /* Field: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  /* Field: Drealty Listing: Timestamp_sql */
  $handler->display->display_options['fields']['field_timestamp_sql__torcond']['id'] = 'field_timestamp_sql__torcond';
  $handler->display->display_options['fields']['field_timestamp_sql__torcond']['table'] = 'field_data_field_timestamp_sql__torcond';
  $handler->display->display_options['fields']['field_timestamp_sql__torcond']['field'] = 'field_timestamp_sql__torcond';
  $handler->display->display_options['fields']['field_timestamp_sql__torcond']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'field_data_field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id_1']['id'] = 'id_1';
  $handler->display->display_options['fields']['id_1']['table'] = 'drealty_listing';
  $handler->display->display_options['fields']['id_1']['field'] = 'id';
  $handler->display->display_options['fields']['id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['id_1']['separator'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'EDIT';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '/drealty_listing/[id_1]/edit';
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
  /* Sort criterion: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['sorts']['id']['id'] = 'id';
  $handler->display->display_options['sorts']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['sorts']['id']['field'] = 'id';
  /* Sort criterion: Drealty Listing: Timestamp_sql (field_timestamp_sql__torcond) */
  $handler->display->display_options['sorts']['field_timestamp_sql__torcond_value']['id'] = 'field_timestamp_sql__torcond_value';
  $handler->display->display_options['sorts']['field_timestamp_sql__torcond_value']['table'] = 'field_data_field_timestamp_sql__torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql__torcond_value']['field'] = 'field_timestamp_sql__torcond_value';
  $handler->display->display_options['sorts']['field_timestamp_sql__torcond_value']['order'] = 'DESC';
  /* Filter criterion: Drealty Listing: Drealty Listing Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'toronto_condo';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Listing Type:';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_field'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['type']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['type']['group_info']['label'] = 'Listing Type:';
  $handler->display->display_options['filters']['type']['group_info']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['type']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'condo',
      'operator' => '=',
      'value' => 'toronto_condo',
    ),
    2 => array(
      'title' => 'building',
      'operator' => '=',
      'value' => 'toronto_building',
    ),
  );
  /* Filter criterion: Drealty Listing: Ml_num (field_ml_num__torcond) */
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['id'] = 'field_ml_num__torcond_value';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['table'] = 'field_data_field_ml_num__torcond';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['field'] = 'field_ml_num__torcond_value';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['operator_id'] = 'field_ml_num__torcond_value_op';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['label'] = 'MLS #:';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['operator'] = 'field_ml_num__torcond_value_op';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['identifier'] = 'field_ml_num__torcond_value';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['autocomplete_field'] = 'field_ml_num__torcond';
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_ml_num__torcond_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['filters']['id']['id'] = 'id';
  $handler->display->display_options['filters']['id']['table'] = 'drealty_listing';
  $handler->display->display_options['filters']['id']['field'] = 'id';
  $handler->display->display_options['filters']['id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['id']['expose']['operator_id'] = 'id_op';
  $handler->display->display_options['filters']['id']['expose']['label'] = 'Listing Id:';
  $handler->display->display_options['filters']['id']['expose']['operator'] = 'id_op';
  $handler->display->display_options['filters']['id']['expose']['identifier'] = 'id';
  $handler->display->display_options['filters']['id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['id']['group_info']['label'] = 'Drealty Listing Id';
  $handler->display->display_options['filters']['id']['group_info']['identifier'] = 'id';
  $handler->display->display_options['filters']['id']['group_info']['group_items'] = array(
    1 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Drealty Listing: Full address (field_address_full__torcond) */
  $handler->display->display_options['filters']['field_address_full__torcond_value']['id'] = 'field_address_full__torcond_value';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['table'] = 'field_data_field_address_full__torcond';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['field'] = 'field_address_full__torcond_value';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['operator_id'] = 'field_address_full__torcond_value_op';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['label'] = 'Full address (contains):';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['operator'] = 'field_address_full__torcond_value_op';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['identifier'] = 'field_address_full__torcond_value';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_address_full__torcond_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'toronto-condos-list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Toronto condos list';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['tc_list'] = $view;

  return $export;
}
