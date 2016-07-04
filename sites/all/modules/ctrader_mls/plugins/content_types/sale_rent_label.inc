<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Sale/Rent label'),
  'description' => t('sale/rent label for single condo page'),
  'single' => TRUE,
  'render callback' => 'sale_rent_label_content_type_render',
  'defaults' => array(),
  'category' => array(t('CondosTrader')),
  'required context' => new ctools_context_required(t('Drealty listing'), 'drealty_listing'),
);

/**
 * Render the sale_rent_label content type.
 */
function sale_rent_label_content_type_render($subtype, $conf, $args, $context) {
  $block = new stdClass();
  $block->title = '';
  $listing = $context->data->wrapper();
  if ($listing->field_s_r__torcond->value()) {
    switch ($listing->field_s_r__torcond->value()) {
      case 'Sale':
        $block->content = 'For sale';
        return $block;
      case 'Lease':
        $block->content = 'For rent';
        return $block;
    }
  }
  return NULL;
}
