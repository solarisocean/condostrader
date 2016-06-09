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
      "REQUIRES" : [ "rules", "mimemail", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "book_a_viewing" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "[site:current-date]",
            "to" : "\\u003Cn.sineok@gmail.com\\u003E",
            "cc" : "[site:mail]",
            "from_name" : "[site:name]",
            "from_mail" : "[site:mail]",
            "subject" : "[entityform:type] ([entityform:user])",
            "body" : "**********************************\\r\\n\\u003Cem\\u003E\\r\\n\\u003Ch3\\u003E\\r\\n[entityform:user]\\r\\n\\u003C\\/h3\\u003E\\r\\n[entityform:field_e_mail]\\r\\n[entityform:field_phone_number]\\r\\n\\u003Cp\\u003E\\r\\n[entityform:field_time_to_contact]\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cb\\u003E\\r\\n[entityform:field_extra_notes]\\r\\n\\u003C\\/b\\u003E\\r\\n[entityform:entityform_id]\\r\\n\\u003C\\/em\\u003E\\r\\n*************************************",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
