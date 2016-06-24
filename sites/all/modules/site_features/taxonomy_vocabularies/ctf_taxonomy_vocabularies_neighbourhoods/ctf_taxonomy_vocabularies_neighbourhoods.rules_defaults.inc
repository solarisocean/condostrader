<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_neighbourhoods.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ctf_taxonomy_vocabularies_neighbourhoods_default_rules_configuration() {
  $items = array();
  $items['rules_update_regions_variable_after_taxonomy_term_change'] = entity_import('rules_config', '{ "rules_update_regions_variable_after_taxonomy_term_change" : {
      "LABEL" : "Update regions variable after taxonomy term change",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "taxonomy" ],
      "ON" : {
        "taxonomy_term_update--neighbourhoods" : { "bundle" : "neighbourhoods" },
        "taxonomy_term_delete--neighbourhoods" : { "bundle" : "neighbourhoods" },
        "taxonomy_term_insert--neighbourhoods" : { "bundle" : "neighbourhoods" }
      },
      "DO" : [
        { "drupal_message" : {
            "message" : "Update neighbourhoods json variable in DB\\r\\n(\\u003Ca href=\\u0022[site:url]\\/create-terms\\u0022\\u003Ego to page with update button\\u003C\\/a\\u003E)",
            "type" : "warning",
            "repeat" : "0"
          }
        }
      ]
    }
  }');
  return $items;
}
