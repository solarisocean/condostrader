<?php
/**
 * @file
 * ctf_pages_sell_a_condo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_pages_sell_a_condo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
