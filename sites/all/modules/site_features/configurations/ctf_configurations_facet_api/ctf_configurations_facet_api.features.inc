<?php
/**
 * @file
 * ctf_configurations_facet_api.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_configurations_facet_api_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
