<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Contact us form'),
  'description' => t('entityform: contact_us_form'),
  'single' => TRUE,
  'render callback' => 'contact_us_entity_form_content_type_render',
  'defaults' => array(),
  'category' => array(t('CondosTrader')),
);

/**
 * Render the nearby listings content type.
 */
function contact_us_entity_form_content_type_render($subtype, $conf, $args, $context) {
  module_load_include('inc', 'entityform', 'entityform.admin');
  $entity_form_name = 'contact_us_form';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), 'submit', 'embedded');


  $block = new stdClass();
  $block->title = '';
  $block->content = $render_estimate_form;

  return $block;
}
