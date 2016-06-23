<?php
/**
 * @file
 * ctf_forms_sell_a_condo.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ctf_forms_sell_a_condo_default_rules_configuration() {
  $items = array();
  $items['rules_sell_a_condo_entityform_submission'] = entity_import('rules_config', '{ "rules_sell_a_condo_entityform_submission" : {
      "LABEL" : "Sell a condo entityform submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "\\u003Cfulminantd@gmail.com\\u003E",
            "subject" : "[entityform:type] ([entityform:user])",
            "message" : "New listing [entityform:url]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
