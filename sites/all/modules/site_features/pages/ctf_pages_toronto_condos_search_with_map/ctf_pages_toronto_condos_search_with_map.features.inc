<?php
/**
 * @file
 * ctf_pages_toronto_condos_search_with_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_pages_toronto_condos_search_with_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
