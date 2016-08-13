<?php
/**
 * @file
 * ctf_configurations_registration_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ctf_configurations_registration_form_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sign_up_left|user|user|form';
  $field_group->group_name = 'group_sign_up_left';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sign Up Left',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_first_name',
      1 => 'field_user_last_name',
      2 => 'field_user_region',
      3 => 'field_mobile_phone_number',
      4 => 'field_looking_to',
      5 => 'field_receive_newsletters',
      6 => 'mimemail',
      7 => 'account',
      8 => 'timezone',
      9 => 'picture',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Sign Up Left',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'sign_up_left',
        'element' => 'div',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_sign_up_left|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sign Up Left');

  return $field_groups;
}
