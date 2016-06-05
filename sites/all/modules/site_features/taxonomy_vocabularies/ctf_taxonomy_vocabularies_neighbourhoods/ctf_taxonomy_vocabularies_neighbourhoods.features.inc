<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_neighbourhoods.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_taxonomy_vocabularies_neighbourhoods_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
