<?php
/**
 * @file
 * ctf_pages_drealty_listing_buy_now.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ctf_pages_drealty_listing_buy_now_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
