<?php
/**
 * @file
 * ctf_views_result_page_solr.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ctf_views_result_page_solr_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function ctf_views_result_page_solr_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : "solr_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "title" : true,
              "field_mls_size" : true,
              "field_days_on_market" : true,
              "field_beds" : true,
              "field_baths" : true,
              "field_exposure" : true,
              "field_balcony" : true,
              "field_broker" : true,
              "body:value" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_mls_size" : true,
              "field_days_on_market" : true,
              "field_beds" : true,
              "field_baths" : true,
              "field_exposure" : true,
              "field_balcony" : true,
              "field_broker" : true,
              "body:value" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_mls_size" : true,
              "field_days_on_market" : true,
              "field_beds" : true,
              "field_baths" : true,
              "field_exposure" : true,
              "field_balcony" : true,
              "field_broker" : true,
              "body:value" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_mls_size" : true,
              "field_days_on_market" : true,
              "field_beds" : true,
              "field_baths" : true,
              "field_exposure" : true,
              "field_balcony" : true,
              "field_broker" : true,
              "body:value" : true
            },
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
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_asking_price" : { "type" : "decimal" },
        "field_balcony" : { "type" : "text" },
        "field_baths" : { "type" : "text" },
        "field_beds" : { "type" : "text" },
        "field_broker" : { "type" : "text" },
        "field_days_on_market" : { "type" : "text" },
        "field_european_style_kitchen" : { "type" : "boolean" },
        "field_exposure" : { "type" : "text" },
        "field_fireplace" : { "type" : "boolean" },
        "field_location:latlon" : { "type" : "string", "real_type" : "location" },
        "field_locker" : { "type" : "boolean" },
        "field_maint_fees" : { "type" : "decimal" },
        "field_mls_size" : { "type" : "text" },
        "field_parking" : { "type" : "boolean" },
        "field_pets_allowed" : { "type" : "boolean" },
        "field_sale_rent" : { "type" : "string" },
        "field_stove" : { "type" : "boolean" },
        "field_taxes" : { "type" : "decimal" },
        "field_washer_dryer" : { "type" : "boolean" },
        "promote" : { "type" : "boolean" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
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
function ctf_views_result_page_solr_default_search_api_server() {
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
