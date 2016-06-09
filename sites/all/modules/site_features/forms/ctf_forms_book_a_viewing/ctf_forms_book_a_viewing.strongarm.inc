<?php
/**
 * @file
 * ctf_forms_book_a_viewing.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_forms_book_a_viewing_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ajax_form_entity_entityform_book_a_viewing';
  $strongarm->value = array(
    'id' => 'entityform_id',
    'activate' => 1,
    'edit_activate' => 0,
    'delete_activate' => 0,
    'message' => 1,
    'reload' => 0,
    'view_mode_region' => '0',
    'view_mode' => 'full',
  );
  $export['ajax_form_entity_entityform_book_a_viewing'] = $strongarm;

  return $export;
}
