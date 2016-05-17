<?php
/**
 * @file
 * ctf_blocks_header_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ctf_blocks_header_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header Block';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'header_block';
  $fe_block_boxes->body = 'Lorem ipsum is simply dummy text of printing';

  $export['header_block'] = $fe_block_boxes;

  return $export;
}
