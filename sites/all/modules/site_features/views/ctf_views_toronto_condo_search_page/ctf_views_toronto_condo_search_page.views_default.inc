<?php
/**
 * @file
 * ctf_views_toronto_condo_search_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ctf_views_toronto_condo_search_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'condo_search_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_toronto_condo_index';
  $view->human_name = 'Toronto condo search page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Condos search page';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = 'Price';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = 'Address';
  /* Field: Indexed Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area_torcond']['id'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_area_torcond']['field'] = 'field_area_torcond';
  /* Field: Indexed Drealty Listing: County */
  $handler->display->display_options['fields']['field_county_torcond']['id'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_county_torcond']['field'] = 'field_county_torcond';
  /* Field: Indexed Drealty Listing: Ass_year */
  $handler->display->display_options['fields']['field_ass_year_torcond']['id'] = 'field_ass_year_torcond';
  $handler->display->display_options['fields']['field_ass_year_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_ass_year_torcond']['field'] = 'field_ass_year_torcond';
  $handler->display->display_options['fields']['field_ass_year_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ass_year_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ass_year_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Yr */
  $handler->display->display_options['fields']['field_yr_torcond']['id'] = 'field_yr_torcond';
  $handler->display->display_options['fields']['field_yr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_yr_torcond']['field'] = 'field_yr_torcond';
  $handler->display->display_options['fields']['field_yr_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_yr_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_yr_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Yr_built */
  $handler->display->display_options['fields']['field_yr_built_torcond']['id'] = 'field_yr_built_torcond';
  $handler->display->display_options['fields']['field_yr_built_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_yr_built_torcond']['field'] = 'field_yr_built_torcond';
  $handler->display->display_options['fields']['field_yr_built_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_yr_built_torcond']['empty_zero'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['path'] = 'condo-search-page';
  $handler->display->display_options['menu']['title'] = 'Search page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: newly listed */
  $handler = $view->new_display('page', 'newly listed', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<span>Newly</span> listed';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'view all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20, 40, 60, 80, 100';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Drealty Listing: Drealty Listing Id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['id']['alter']['path'] = '/drealty_listing/[id]';
  $handler->display->display_options['fields']['id']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['id']['separator'] = '';
  $handler->display->display_options['fields']['id']['link_to_entity'] = 0;
  /* Field: Indexed Drealty Listing: Toronto gallery */
  $handler->display->display_options['fields']['field_toronto_gallery']['id'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_toronto_gallery']['field'] = 'field_toronto_gallery';
  $handler->display->display_options['fields']['field_toronto_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_toronto_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_toronto_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_toronto_gallery']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_toronto_gallery']['delta_offset'] = '0';
  /* Field: Indexed Drealty Listing: Lp_dol */
  $handler->display->display_options['fields']['field_lp_dol_torcond']['id'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['field'] = 'field_lp_dol_torcond';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['label'] = 'Price';
  $handler->display->display_options['fields']['field_lp_dol_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Addr */
  $handler->display->display_options['fields']['field_addr_torcond']['id'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_addr_torcond']['field'] = 'field_addr_torcond';
  $handler->display->display_options['fields']['field_addr_torcond']['label'] = 'Address';
  /* Field: Indexed Drealty Listing: Area */
  $handler->display->display_options['fields']['field_area_torcond']['id'] = 'field_area_torcond';
  $handler->display->display_options['fields']['field_area_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_area_torcond']['field'] = 'field_area_torcond';
  /* Field: Indexed Drealty Listing: County */
  $handler->display->display_options['fields']['field_county_torcond']['id'] = 'field_county_torcond';
  $handler->display->display_options['fields']['field_county_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_county_torcond']['field'] = 'field_county_torcond';
  /* Field: Indexed Drealty Listing: Ass_year */
  $handler->display->display_options['fields']['field_ass_year_torcond']['id'] = 'field_ass_year_torcond';
  $handler->display->display_options['fields']['field_ass_year_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_ass_year_torcond']['field'] = 'field_ass_year_torcond';
  $handler->display->display_options['fields']['field_ass_year_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ass_year_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ass_year_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Yr */
  $handler->display->display_options['fields']['field_yr_torcond']['id'] = 'field_yr_torcond';
  $handler->display->display_options['fields']['field_yr_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_yr_torcond']['field'] = 'field_yr_torcond';
  $handler->display->display_options['fields']['field_yr_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_yr_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_yr_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Yr_built */
  $handler->display->display_options['fields']['field_yr_built_torcond']['id'] = 'field_yr_built_torcond';
  $handler->display->display_options['fields']['field_yr_built_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_yr_built_torcond']['field'] = 'field_yr_built_torcond';
  $handler->display->display_options['fields']['field_yr_built_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_yr_built_torcond']['empty_zero'] = TRUE;
  /* Field: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['fields']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['fields']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['fields']['field_timestamp_sql_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_timestamp_sql_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_timestamp_sql_torcond']['settings'] = array(
    'format_type' => 'search_api_facetapi_DAY',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Indexed Drealty Listing: Br_plus */
  $handler->display->display_options['fields']['field_br_plus_torcond']['id'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_plus_torcond']['field'] = 'field_br_plus_torcond';
  $handler->display->display_options['fields']['field_br_plus_torcond']['label'] = '';
  $handler->display->display_options['fields']['field_br_plus_torcond']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['alter']['text'] = '+[field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_plus_torcond']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_br_plus_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Drealty Listing: Br */
  $handler->display->display_options['fields']['field_br_torcond']['id'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['fields']['field_br_torcond']['field'] = 'field_br_torcond';
  $handler->display->display_options['fields']['field_br_torcond']['label'] = 'Bed';
  $handler->display->display_options['fields']['field_br_torcond']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_br_torcond']['alter']['text'] = '[field_br_torcond][field_br_plus_torcond]';
  $handler->display->display_options['fields']['field_br_torcond']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '0',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Drealty Listing: Timestamp_sql */
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['id'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['table'] = 'search_api_index_toronto_condo_index';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['field'] = 'field_timestamp_sql_torcond';
  $handler->display->display_options['sorts']['field_timestamp_sql_torcond']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'newly-listed-condos';
  $handler->display->display_options['menu']['title'] = 'Search page';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['condo_search_page'] = $view;

  return $export;
}
