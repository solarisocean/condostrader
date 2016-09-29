<?php
/**
 * @file
 * ctf_blocks_footer_top.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ctf_blocks_footer_top_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Top';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_top_block';
  $fe_block_boxes->body = 'Copyright 2016 All rights reserved. Toronto Real Estate Board (TREB) assumes no responsibility for the accuracy of any information shown. 

All MLS® Listing data provided herein must only be used by consumers that have a bona fide interest in the purchase, sale or lease of real estate and may not be used for any commercial purpose or any other purpose.';

  $export['footer_top_block'] = $fe_block_boxes;

  return $export;
}
