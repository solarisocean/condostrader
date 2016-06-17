<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_communities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_taxonomy_vocabularies_communities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
