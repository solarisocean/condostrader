<?php
/**
 * @file
 * ctf_forms_contact_us_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ctf_forms_contact_us_form_default_rules_configuration() {
  $items = array();
  $items['rules_contact_us_entityform_submission'] = entity_import('rules_config', '{ "rules_contact_us_entityform_submission" : {
      "LABEL" : "Contact us entityform submission",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail", "entityform" ],
      "ON" : { "entityform_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "entityform:type" ], "value" : "contact_us_form" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "[entityform:field_e_mail]",
            "to" : "\\u003Cn.sineok@gmail.com\\u003E, \\u003C[entityform:field-e-mail]\\u003E",
            "from_name" : "[site:name]",
            "subject" : "[entityform:type] ([entityform:user] \\u003C[entityform:field-e-mail]\\u003E)",
            "body" : "**********************************\\r\\n\\u003Cem\\u003E\\r\\n\\u003Ch3\\u003E\\r\\n[entityform:user]\\r\\n\\u003C\\/h3\\u003E\\r\\n[entityform:field_e_mail]\\r\\n[entityform:field_phone_number]\\r\\n\\u003Cb\\u003E\\r\\n[entityform:field_extra_notes]\\r\\n\\u003C\\/b\\u003E\\r\\n[entityform:entityform_id]\\r\\n\\u003C\\/em\\u003E\\r\\n*************************************",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
