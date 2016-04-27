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
  $fe_block_boxes->body = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus quis metus tempor, pharetra ligula non, scelerisque dolor. 

Proin sed ligula orci. In convallis dignissim egestas. Maecenas magna tortor, elementum ac accumsan vitae, cursus non turpis. ';

  $export['footer_top_block'] = $fe_block_boxes;

  return $export;
}
