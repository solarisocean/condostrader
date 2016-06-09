<?php
/**
 * @file
 * ctf_forms_book_a_viewing.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_forms_book_a_viewing_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function ctf_forms_book_a_viewing_default_entityform_type() {
  $items = array();
  $items['book_a_viewing'] = entity_import('entityform_type', '{
    "type" : "book_a_viewing",
    "label" : "Book a viewing",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "submit_button_text" : "Book a viewing",
      "submit_confirm_msg" : "Change message (\\/admin\\/structure\\/entityform_types\\/manage\\/book_a_viewing)",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
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
