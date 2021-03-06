<?php
/**
 * @file
 * ctf_forms_book_a_viewing.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ctf_forms_book_a_viewing_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-book_a_viewing-field_buy_now_button'.
  $field_instances['entityform-book_a_viewing-field_buy_now_button'] = array(
    'bundle' => 'book_a_viewing',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'markup',
        'settings' => array(),
        'type' => 'markup_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_buy_now_button',
    'label' => 'Buy now',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-book_a_viewing-field_e_mail'.
  $field_instances['entityform-book_a_viewing-field_e_mail'] = array(
    'bundle' => 'book_a_viewing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_e_mail',
    'label' => 'E-mail:',
    'placeholder' => 'example@mail.com',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'entityform-book_a_viewing-field_extra_notes'.
  $field_instances['entityform-book_a_viewing-field_extra_notes'] = array(
    'bundle' => 'book_a_viewing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_extra_notes',
    'label' => 'Comments:',
    'placeholder' => 'Pellentesque libero tortor tincidunt et ...',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'use_title_as_placeholder' => 0,
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 7,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-book_a_viewing-field_listing_link'.
  $field_instances['entityform-book_a_viewing-field_listing_link'] = array(
    'bundle' => 'book_a_viewing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_listing_link',
    'label' => 'Listing link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-book_a_viewing-field_name'.
  $field_instances['entityform-book_a_viewing-field_name'] = array(
    'bundle' => 'book_a_viewing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_name',
    'label' => 'Name:',
    'placeholder' => '',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'entityform-book_a_viewing-field_phone_number'.
  $field_instances['entityform-book_a_viewing-field_phone_number'] = array(
    'bundle' => 'book_a_viewing',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_phone_number',
    'label' => 'Phone number:',
    'placeholder' => 'example: 555-777-9999',
    'required' => 0,
    'settings' => array(
      'ca_phone_parentheses' => 1,
      'ca_phone_separator' => '-',
      'phone_country_code' => 0,
      'phone_default_country_code' => 1,
      'phone_int_max_length' => 15,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'phone',
      'settings' => array(),
      'type' => 'phone_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-book_a_viewing-field_time_to_contact'.
  $field_instances['entityform-book_a_viewing-field_time_to_contact'] = array(
    'bundle' => 'book_a_viewing',
    'default_value' => array(
      0 => array(
        'value' => 'anytime',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_time_to_contact',
    'label' => 'Best time to contact you:',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Best time to contact you:');
  t('Buy now');
  t('Comments:');
  t('E-mail:');
  t('Listing link');
  t('Name:');
  t('Phone number:');

  return $field_instances;
}
