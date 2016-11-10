<?php
/**
 * @file
 * ctf_configurations_field_sql_norevisions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_configurations_field_sql_norevisions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
