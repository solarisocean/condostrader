<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Book a viewing form'),
  'description' => t('entityform: book_a_viewing'),
  'single' => TRUE,
  'render callback' => 'book_a_viewing_form_content_type_render',
  'defaults' => array(),
  'category' => array(t('CondosTrader')),
);

/**
 * Render the nearby listings content type.
 */
function book_a_viewing_form_content_type_render($subtype, $conf, $args, $context) {
  module_load_include('inc', 'entityform', 'entityform.admin');
  $entity_form_name = 'book_a_viewing';
  $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), 'submit', 'embedded');

  $render_estimate_form['field_listing_link'][LANGUAGE_NONE][0]['title']['#value'] = 'Listing link';
  $render_estimate_form['field_listing_link'][LANGUAGE_NONE][0]['url']['#value'] = $_GET['q'];
  $render_estimate_form['field_listing_link']['#attributes']['class'][] = 'element-invisible';

  $block = new stdClass();
  $block->title = '';
  $block->content = $render_estimate_form;

  return $block;
}
