<?php
/**
 * @file
 * ctf_forms_book_a_viewing.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ctf_forms_book_a_viewing_default_rules_configuration() {
  $items = array();
  $items['rules_book_a_viewing_entityform_submission'] = entity_import('rules_config', '{ "rules_book_a_viewing_entityform_submission" : {
      "LABEL" : "Book a viewing entityform submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "entityform" ], "field" : "field_time_to_contact" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : "\\u003Cn.sineok@gmail.com\\u003E",
            "subject" : " ([site:name] - user: [entityform:user])",
            "message" : "[entityform:user]\\r\\n[entityform:field-e-mail]\\r\\n[entityform:field-phone-number]\\r\\n[entityform:field-time-to-contact]\\r\\n[entityform:field-extra-notes]\\r\\n\\r\\n[entityform:entityform-id]",
            "from" : "[site:mail]",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
