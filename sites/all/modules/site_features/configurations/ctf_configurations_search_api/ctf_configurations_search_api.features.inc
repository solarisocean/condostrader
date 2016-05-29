<?php
/**
 * @file
 * ctf_configurations_search_api.features.inc
 */

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function ctf_configurations_search_api_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_search_results_ctrader'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_search_results_ctrader",
    "name" : "Search results ctrader",
    "index_id" : "toronto_condo_index",
    "suggester_id" : "server",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [ "search_api_aggregation_1" ] },
      "min_length" : "1",
      "results" : 1,
      "custom" : { "display" : "page_1" },
      "submit_button_selector" : ":submit",
      "autosubmit" : 1
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function ctf_configurations_search_api_default_search_api_index() {
  $items = array();
  $items['toronto_condo_index'] = entity_import('search_api_index', '{
    "name" : "Toronto condo index",
    "machine_name" : "toronto_condo_index",
    "description" : null,
    "server" : "solr_server",
    "item_type" : "drealty_listing",
    "options" : {
      "datasource" : { "bundles" : [ "toronto_condo", "toronto_building" ] },
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "active" : { "type" : "integer" },
        "field_a_c__torcond" : { "type" : "string" },
        "field_ad_text__torcond" : { "type" : "text" },
        "field_addr__torcond" : { "type" : "text" },
        "field_all_inc__torcond" : { "type" : "string" },
        "field_apt_num__torcond" : { "type" : "string" },
        "field_area__torcond" : { "type" : "string" },
        "field_area_code__torcond" : { "type" : "string" },
        "field_ass_year__torcond" : { "type" : "decimal" },
        "field_bath_tot__torcond" : { "type" : "decimal" },
        "field_bldg_amen1_out__torcond" : { "type" : "string" },
        "field_bldg_amen2_out__torcond" : { "type" : "string" },
        "field_bldg_amen3_out__torcond" : { "type" : "string" },
        "field_bldg_amen4_out__torcond" : { "type" : "string" },
        "field_bldg_amen5_out__torcond" : { "type" : "string" },
        "field_bldg_amen6_out__torcond" : { "type" : "string" },
        "field_br__torcond" : { "type" : "integer" },
        "field_br_plus__torcond" : { "type" : "integer" },
        "field_bsmt1_out__torcond" : { "type" : "string" },
        "field_bsmt2_out__torcond" : { "type" : "string" },
        "field_cable__torcond" : { "type" : "string" },
        "field_cac_inc__torcond" : { "type" : "string" },
        "field_central_vac__torcond" : { "type" : "string" },
        "field_city_region__torcond" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_city_region__torcond:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_city_region__torcond:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_city_region__torcond:parents_all" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_city_region__torcond:tid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_city_region__torcond:vocabulary" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "taxonomy_vocabulary"
        },
        "field_city_region__torcond:weight" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_comel_inc__torcond" : { "type" : "string" },
        "field_community__torcond" : { "type" : "string" },
        "field_community_code__torcond" : { "type" : "string" },
        "field_cond_txinc__torcond" : { "type" : "string" },
        "field_condo_corp__torcond" : { "type" : "string" },
        "field_condo_exp__torcond" : { "type" : "string" },
        "field_constr1_out__torcond" : { "type" : "string" },
        "field_constr2_out__torcond" : { "type" : "string" },
        "field_corp_num__torcond" : { "type" : "decimal" },
        "field_county__torcond" : { "type" : "string" },
        "field_cross_st__torcond" : { "type" : "string" },
        "field_den_fr__torcond" : { "type" : "string" },
        "field_disp_addr__torcond" : { "type" : "string" },
        "field_elevator__torcond" : { "type" : "string" },
        "field_ens_lndry__torcond" : { "type" : "string" },
        "field_extras__torcond" : { "type" : "text" },
        "field_fpl_num__torcond" : { "type" : "string" },
        "field_fuel__torcond" : { "type" : "string" },
        "field_furnished__torcond" : { "type" : "string" },
        "field_gar__torcond" : { "type" : "decimal" },
        "field_gar_type__torcond" : { "type" : "string" },
        "field_heat_inc__torcond" : { "type" : "string" },
        "field_heating__torcond" : { "type" : "string" },
        "field_hydro_inc__torcond" : { "type" : "string" },
        "field_idx_dt__torcond" : { "type" : "date" },
        "field_insur_bldg__torcond" : { "type" : "string" },
        "field_kit_plus__torcond" : { "type" : "string" },
        "field_laundry__torcond" : { "type" : "string" },
        "field_laundry_lev__torcond" : { "type" : "string" },
        "field_lease_term__torcond" : { "type" : "string" },
        "field_level10__torcond" : { "type" : "string" },
        "field_level11__torcond" : { "type" : "string" },
        "field_level12__torcond" : { "type" : "string" },
        "field_level1__torcond" : { "type" : "string" },
        "field_level2__torcond" : { "type" : "string" },
        "field_level3__torcond" : { "type" : "string" },
        "field_level4__torcond" : { "type" : "string" },
        "field_level5__torcond" : { "type" : "string" },
        "field_level6__torcond" : { "type" : "string" },
        "field_level7__torcond" : { "type" : "string" },
        "field_level8__torcond" : { "type" : "string" },
        "field_level9__torcond" : { "type" : "string" },
        "field_locker__torcond" : { "type" : "string" },
        "field_locker_num__torcond" : { "type" : "string" },
        "field_lp_dol__torcond" : { "type" : "decimal" },
        "field_maint__torcond" : { "type" : "decimal" },
        "field_ml_num__torcond" : { "type" : "text" },
        "field_mmap_col__torcond" : { "type" : "decimal" },
        "field_mmap_page__torcond" : { "type" : "string" },
        "field_mmap_row__torcond" : { "type" : "text" },
        "field_municipality__torcond" : { "type" : "string" },
        "field_municipality_code__torcond" : { "type" : "string" },
        "field_municipality_district__tor" : { "type" : "string" },
        "field_num_kit__torcond" : { "type" : "decimal" },
        "field_outof_area__torcond" : { "type" : "string" },
        "field_parcel_id__torcond" : { "type" : "string" },
        "field_park_chgs__torcond" : { "type" : "decimal" },
        "field_park_desig_2__torcond" : { "type" : "string" },
        "field_park_desig__torcond" : { "type" : "string" },
        "field_park_fac__torcond" : { "type" : "string" },
        "field_park_lgl_desc1__torcond" : { "type" : "string" },
        "field_park_lgl_desc2__torcond" : { "type" : "string" },
        "field_park_spc1__torcond" : { "type" : "string" },
        "field_park_spc2__torcond" : { "type" : "string" },
        "field_park_spcs__torcond" : { "type" : "decimal" },
        "field_patio_ter__torcond" : { "type" : "string" },
        "field_pets__torcond" : { "type" : "string" },
        "field_pix_updt__torcond" : { "type" : "date" },
        "field_price_per_sqft__torcond" : { "type" : "decimal" },
        "field_prkg_inc__torcond" : { "type" : "string" },
        "field_prop_feat1_out__torcond" : { "type" : "string" },
        "field_prop_feat2_out__torcond" : { "type" : "string" },
        "field_prop_feat3_out__torcond" : { "type" : "string" },
        "field_prop_feat4_out__torcond" : { "type" : "string" },
        "field_prop_feat5_out__torcond" : { "type" : "string" },
        "field_prop_feat6_out__torcond" : { "type" : "string" },
        "field_pvt_ent__torcond" : { "type" : "string" },
        "field_reference_to_condo" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "drealty_listing" },
        "field_reference_to_condo:field_lp_dol__torcond" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_reference_to_condo:field_price_per_sqft__torcond" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_reference_to_condo:field_reference_to_condo" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "drealty_listing"
        },
        "field_reference_to_condo:field_s_r__torcond" : { "type" : "list\\u003Cstring\\u003E" },
        "field_reference_to_condo:field_sqft__torcond" : { "type" : "list\\u003Cstring\\u003E" },
        "field_retirement__torcond" : { "type" : "string" },
        "field_rltr__torcond" : { "type" : "string" },
        "field_rm10_dc1_out__torcond" : { "type" : "string" },
        "field_rm10_dc2_out__torcond" : { "type" : "string" },
        "field_rm10_dc3_out__torcond" : { "type" : "string" },
        "field_rm10_len__torcond" : { "type" : "decimal" },
        "field_rm10_out__torcond" : { "type" : "string" },
        "field_rm10_wth__torcond" : { "type" : "decimal" },
        "field_rm11_dc1_out__torcond" : { "type" : "string" },
        "field_rm11_dc2_out__torcond" : { "type" : "string" },
        "field_rm11_dc3_out__torcond" : { "type" : "string" },
        "field_rm11_len__torcond" : { "type" : "decimal" },
        "field_rm11_out__torcond" : { "type" : "string" },
        "field_rm11_wth__torcond" : { "type" : "decimal" },
        "field_rm12_dc1_out__torcond" : { "type" : "string" },
        "field_rm12_dc2_out__torcond" : { "type" : "string" },
        "field_rm12_dc3_out__torcond" : { "type" : "string" },
        "field_rm12_len__torcond" : { "type" : "decimal" },
        "field_rm12_out__torcond" : { "type" : "string" },
        "field_rm12_wth__torcond" : { "type" : "decimal" },
        "field_rm1_dc1_out__torcond" : { "type" : "string" },
        "field_rm1_dc2_out__torcond" : { "type" : "string" },
        "field_rm1_dc3_out__torcond" : { "type" : "string" },
        "field_rm1_len__torcond" : { "type" : "decimal" },
        "field_rm1_out__torcond" : { "type" : "string" },
        "field_rm1_wth__torcond" : { "type" : "decimal" },
        "field_rm2_dc1_out__torcond" : { "type" : "string" },
        "field_rm2_dc2_out__torcond" : { "type" : "string" },
        "field_rm2_dc3_out__torcond" : { "type" : "string" },
        "field_rm2_len__torcond" : { "type" : "decimal" },
        "field_rm2_out__torcond" : { "type" : "string" },
        "field_rm2_wth__torcond" : { "type" : "decimal" },
        "field_rm3_dc1_out__torcond" : { "type" : "text" },
        "field_rm3_dc2_out__torcond" : { "type" : "string" },
        "field_rm3_dc3_out__torcond" : { "type" : "string" },
        "field_rm3_len__torcond" : { "type" : "decimal" },
        "field_rm3_out__torcond" : { "type" : "string" },
        "field_rm3_wth__torcond" : { "type" : "decimal" },
        "field_rm4_dc1_out__torcond" : { "type" : "string" },
        "field_rm4_dc2_out__torcond" : { "type" : "string" },
        "field_rm4_dc3_out__torcond" : { "type" : "string" },
        "field_rm4_len__torcond" : { "type" : "decimal" },
        "field_rm4_out__torcond" : { "type" : "string" },
        "field_rm4_wth__torcond" : { "type" : "decimal" },
        "field_rm5_dc1_out__torcond" : { "type" : "string" },
        "field_rm5_dc2_out__torcond" : { "type" : "string" },
        "field_rm5_dc3_out__torcond" : { "type" : "string" },
        "field_rm5_len__torcond" : { "type" : "decimal" },
        "field_rm5_out__torcond" : { "type" : "string" },
        "field_rm5_wth__torcond" : { "type" : "decimal" },
        "field_rm6_dc1_out__torcond" : { "type" : "string" },
        "field_rm6_dc2_out__torcond" : { "type" : "string" },
        "field_rm6_dc3_out__torcond" : { "type" : "string" },
        "field_rm6_len__torcond" : { "type" : "decimal" },
        "field_rm6_out__torcond" : { "type" : "text" },
        "field_rm6_wth__torcond" : { "type" : "decimal" },
        "field_rm7_dc1_out__torcond" : { "type" : "string" },
        "field_rm7_dc2_out__torcond" : { "type" : "string" },
        "field_rm7_dc3_out__torcond" : { "type" : "string" },
        "field_rm7_len__torcond" : { "type" : "decimal" },
        "field_rm7_out__torcond" : { "type" : "string" },
        "field_rm7_wth__torcond" : { "type" : "decimal" },
        "field_rm8_dc1_out__torcond" : { "type" : "string" },
        "field_rm8_dc2_out__torcond" : { "type" : "string" },
        "field_rm8_dc3_out__torcond" : { "type" : "string" },
        "field_rm8_len__torcond" : { "type" : "decimal" },
        "field_rm8_out__torcond" : { "type" : "string" },
        "field_rm8_wth__torcond" : { "type" : "decimal" },
        "field_rm9_dc1_out__torcond" : { "type" : "string" },
        "field_rm9_dc2_out__torcond" : { "type" : "decimal" },
        "field_rm9_dc3_out__torcond" : { "type" : "string" },
        "field_rm9_len__torcond" : { "type" : "decimal" },
        "field_rm9_out__torcond" : { "type" : "string" },
        "field_rm9_wth__torcond" : { "type" : "decimal" },
        "field_rms__torcond" : { "type" : "decimal" },
        "field_rooms_plus__torcond" : { "type" : "decimal" },
        "field_s_r__torcond" : { "type" : "string" },
        "field_search_point_string" : { "type" : "string" },
        "field_share_perc__torcond" : { "type" : "string" },
        "field_spec_des1_out__torcond" : { "type" : "string" },
        "field_spec_des2_out__torcond" : { "type" : "string" },
        "field_spec_des3_out__torcond" : { "type" : "string" },
        "field_spec_des4_out__torcond" : { "type" : "string" },
        "field_spec_des5_out__torcond" : { "type" : "string" },
        "field_spec_des6_out__torcond" : { "type" : "string" },
        "field_sqft__torcond" : { "type" : "string" },
        "field_sqft_range_max__torcond" : { "type" : "integer" },
        "field_sqft_range_min__torcond" : { "type" : "integer" },
        "field_st__torcond" : { "type" : "string" },
        "field_st_dir__torcond" : { "type" : "string" },
        "field_st_num__torcond" : { "type" : "integer" },
        "field_st_sfx__torcond" : { "type" : "string" },
        "field_status__torcond" : { "type" : "string" },
        "field_stories__torcond" : { "type" : "text" },
        "field_style__torcond" : { "type" : "string" },
        "field_taxes__torcond" : { "type" : "decimal" },
        "field_test_geofilld:latlon" : { "type" : "string", "real_type" : "location" },
        "field_timestamp_sql__torcond" : { "type" : "date" },
        "field_tour_url__torcond" : { "type" : "string" },
        "field_tv__torcond" : { "type" : "decimal" },
        "field_type_own1_out__torcond" : { "type" : "string" },
        "field_type_own_srch__torcond" : { "type" : "string" },
        "field_uffi__torcond" : { "type" : "string" },
        "field_unit_num__torcond" : { "type" : "string" },
        "field_vtour_updt__torcond" : { "type" : "date" },
        "field_water_inc__torcond" : { "type" : "string" },
        "field_wcloset_p1__torcond" : { "type" : "decimal" },
        "field_wcloset_p2__torcond" : { "type" : "decimal" },
        "field_wcloset_p3__torcond" : { "type" : "decimal" },
        "field_wcloset_p4__torcond" : { "type" : "decimal" },
        "field_wcloset_p5__torcond" : { "type" : "decimal" },
        "field_wcloset_t1__torcond" : { "type" : "decimal" },
        "field_wcloset_t1lvl__torcond" : { "type" : "text" },
        "field_wcloset_t2__torcond" : { "type" : "string" },
        "field_wcloset_t2lvl__torcond" : { "type" : "string" },
        "field_wcloset_t3__torcond" : { "type" : "decimal" },
        "field_wcloset_t3lvl__torcond" : { "type" : "text" },
        "field_wcloset_t4__torcond" : { "type" : "decimal" },
        "field_wcloset_t4lvl__torcond" : { "type" : "string" },
        "field_wcloset_t5__torcond" : { "type" : "decimal" },
        "field_wcloset_t5lvl__torcond" : { "type" : "text" },
        "field_yr__torcond" : { "type" : "decimal" },
        "field_yr_built__torcond" : { "type" : "string" },
        "field_zip__torcond" : { "type" : "string" },
        "field_zoning__torcond" : { "type" : "string" },
        "id" : { "type" : "integer" },
        "inactive_date" : { "type" : "integer" },
        "label" : { "type" : "text" },
        "last_reconciled" : { "type" : "integer" },
        "rets_id" : { "type" : "string" },
        "rets_key" : { "type" : "string" },
        "search_api_aggregation_1" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "type" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_city_region__torcond:parent" : "field_city_region__torcond:parent",
              "field_city_region__torcond:parents_all" : "field_city_region__torcond:parents_all",
              "field_reference_to_condo:field_reference_to_condo" : "field_reference_to_condo:field_reference_to_condo"
            }
          }
        },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "text search field",
                "type" : "fulltext",
                "fields" : [
                  "field_ml_num__torcond",
                  "field_addr__torcond",
                  "field_city_region__torcond:name"
                ],
                "description" : "A Fulltext aggregation of the following fields: Ml_num, Addr, City region \\u00bb Name."
              }
            }
          }
        },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_extras__torcond" : true,
              "field_stories__torcond" : true,
              "search_api_aggregation_1" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "field_extras__torcond" : true, "field_stories__torcond" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_extras__torcond" : true, "field_stories__torcond" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "field_extras__torcond" : true, "field_stories__torcond" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function ctf_configurations_search_api_default_search_api_server() {
  $items = array();
  $items['solr_server'] = entity_import('search_api_server', '{
    "name" : "Solr server",
    "machine_name" : "solr_server",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash" : true,
      "scheme" : "http",
      "host" : "localhost",
      "port" : "8983",
      "path" : "\\/solr\\/drupal",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO",
      "log_query" : 0,
      "log_response" : 0
    },
    "enabled" : "1"
  }');
  return $items;
}
