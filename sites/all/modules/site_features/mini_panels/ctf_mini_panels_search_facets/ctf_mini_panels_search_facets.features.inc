<?php
/**
 * @file
 * ctf_mini_panels_search_facets.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_mini_panels_search_facets_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
