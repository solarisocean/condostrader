<?php
/**
 * @file
 * ctf_configurations_smart_ip.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_configurations_smart_ip_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
