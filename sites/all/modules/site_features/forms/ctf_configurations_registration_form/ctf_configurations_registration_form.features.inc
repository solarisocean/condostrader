<?php
/**
 * @file
 * ctf_configurations_registration_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_configurations_registration_form_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
