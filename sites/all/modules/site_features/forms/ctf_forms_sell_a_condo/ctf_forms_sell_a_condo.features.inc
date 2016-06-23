<?php
/**
 * @file
 * ctf_forms_sell_a_condo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_forms_sell_a_condo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ctf_forms_sell_a_condo_default_entityform_type() {
  $items = array();
  $items['sell_a_condo'] = entity_import('entityform_type', '{
    "type" : "sell_a_condo",
    "label" : "Sell A Condo",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : {
        "value" : "\\u003Cb\\u003EThank you for submitting information for your bid.\\u003C\\/b\\u003E Please stand by. We will make an offer and contact you for signature ASAP.",
        "format" : "full_html"
      },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : "3" },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
