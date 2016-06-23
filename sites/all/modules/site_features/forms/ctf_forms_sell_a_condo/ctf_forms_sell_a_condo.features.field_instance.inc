<?php
/**
 * @file
 * ctf_forms_sell_a_condo.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ctf_forms_sell_a_condo_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-sell_a_condo-field_2nd_bedroom_floor'.
  $field_instances['entityform-sell_a_condo-field_2nd_bedroom_floor'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 67,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_2nd_bedroom_floor',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_2nd_bedroom_length'.
  $field_instances['entityform-sell_a_condo-field_2nd_bedroom_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 59,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_2nd_bedroom_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_2nd_bedroom_width'.
  $field_instances['entityform-sell_a_condo-field_2nd_bedroom_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 63,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_2nd_bedroom_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_3rd_bedroom_floor'.
  $field_instances['entityform-sell_a_condo-field_3rd_bedroom_floor'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 68,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_3rd_bedroom_floor',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 58,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_3rd_bedroom_length'.
  $field_instances['entityform-sell_a_condo-field_3rd_bedroom_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 60,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_3rd_bedroom_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 56,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_3rd_bedroom_width'.
  $field_instances['entityform-sell_a_condo-field_3rd_bedroom_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 64,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_3rd_bedroom_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 57,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_about_condo_asking_price'.
  $field_instances['entityform-sell_a_condo-field_about_condo_asking_price'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 72,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_asking_price',
    'label' => 'Asking price',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_about_condo_balcony'.
  $field_instances['entityform-sell_a_condo-field_about_condo_balcony'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_balcony',
    'label' => 'Balcony',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_about_condo_city'.
  $field_instances['entityform-sell_a_condo-field_about_condo_city'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_city',
    'label' => 'City',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_about_condo_fireplace'.
  $field_instances['entityform-sell_a_condo-field_about_condo_fireplace'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_fireplace',
    'label' => 'Fireplace',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_about_condo_garage'.
  $field_instances['entityform-sell_a_condo-field_about_condo_garage'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_garage',
    'label' => 'Garage',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 45,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_about_condo_locker'.
  $field_instances['entityform-sell_a_condo-field_about_condo_locker'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_locker',
    'label' => 'Locker',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_about_condo_postal_code'.
  $field_instances['entityform-sell_a_condo-field_about_condo_postal_code'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_condo_postal_code',
    'label' => 'Postal Code',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_about_you_city'.
  $field_instances['entityform-sell_a_condo-field_about_you_city'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_you_city',
    'label' => 'City',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_about_you_e_mail'.
  $field_instances['entityform-sell_a_condo-field_about_you_e_mail'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_about_you_e_mail',
    'label' => 'E-mail',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_air_conditioner'.
  $field_instances['entityform-sell_a_condo-field_air_conditioner'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_air_conditioner',
    'label' => 'Air Conditioner',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_approximate_age'.
  $field_instances['entityform-sell_a_condo-field_approximate_age'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_approximate_age',
    'label' => 'Approximate age',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_approximate_square_feet'.
  $field_instances['entityform-sell_a_condo-field_approximate_square_feet'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_approximate_square_feet',
    'label' => 'Approximate square feet',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_basement'.
  $field_instances['entityform-sell_a_condo-field_basement'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_basement',
    'label' => 'Basement',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_bedrooms_total'.
  $field_instances['entityform-sell_a_condo-field_bedrooms_total'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bedrooms_total',
    'label' => 'Bedrooms Total',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_bldg_ins_included'.
  $field_instances['entityform-sell_a_condo-field_bldg_ins_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_bldg_ins_included',
    'label' => 'Bldg ins included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_buyer_representation'.
  $field_instances['entityform-sell_a_condo-field_buyer_representation'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_buyer_representation',
    'label' => 'Are in Buyer Representation with any Agent',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_cable_included'.
  $field_instances['entityform-sell_a_condo-field_cable_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cable_included',
    'label' => 'Cable included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_cac_included'.
  $field_instances['entityform-sell_a_condo-field_cac_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cac_included',
    'label' => 'CAC included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_chattels_included'.
  $field_instances['entityform-sell_a_condo-field_chattels_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 70,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_chattels_included',
    'label' => 'Chattels included',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_common_elements_included'.
  $field_instances['entityform-sell_a_condo-field_common_elements_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_common_elements_included',
    'label' => 'Common elements included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_den_floor'.
  $field_instances['entityform-sell_a_condo-field_den_floor'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 69,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_den_floor',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 59,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_den_length'.
  $field_instances['entityform-sell_a_condo-field_den_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_den_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_den_width'.
  $field_instances['entityform-sell_a_condo-field_den_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 65,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_den_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_dining_field'.
  $field_instances['entityform-sell_a_condo-field_dining_field'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dining_field',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 50,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_dining_length'.
  $field_instances['entityform-sell_a_condo-field_dining_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dining_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_dining_width'.
  $field_instances['entityform-sell_a_condo-field_dining_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dining_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_elevator'.
  $field_instances['entityform-sell_a_condo-field_elevator'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_elevator',
    'label' => 'Elevator',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_ensuite_laundry'.
  $field_instances['entityform-sell_a_condo-field_ensuite_laundry'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ensuite_laundry',
    'label' => 'Ensuite laundry',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 43,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_exterior_finishing'.
  $field_instances['entityform-sell_a_condo-field_exterior_finishing'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_exterior_finishing',
    'label' => 'Exterior finishing',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_family_room'.
  $field_instances['entityform-sell_a_condo-field_family_room'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_family_room',
    'label' => 'Family Room',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_garage'.
  $field_instances['entityform-sell_a_condo-field_garage'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_garage',
    'label' => 'Garage',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_heat'.
  $field_instances['entityform-sell_a_condo-field_heat'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_heat',
    'label' => 'Heat',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_heat_included'.
  $field_instances['entityform-sell_a_condo-field_heat_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_heat_included',
    'label' => 'Heat included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_hydro_included'.
  $field_instances['entityform-sell_a_condo-field_hydro_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_hydro_included',
    'label' => 'Hydro included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_kitchen_floor'.
  $field_instances['entityform-sell_a_condo-field_kitchen_floor'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_kitchen_floor',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_kitchen_length'.
  $field_instances['entityform-sell_a_condo-field_kitchen_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_kitchen_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 51,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_kitchen_width'.
  $field_instances['entityform-sell_a_condo-field_kitchen_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_kitchen_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 52,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_kitchens'.
  $field_instances['entityform-sell_a_condo-field_kitchens'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_kitchens',
    'label' => 'Kitchens',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_length'.
  $field_instances['entityform-sell_a_condo-field_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_level'.
  $field_instances['entityform-sell_a_condo-field_level'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_level',
    'label' => 'Level',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_living_floor'.
  $field_instances['entityform-sell_a_condo-field_living_floor'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_living_floor',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_locker_'.
  $field_instances['entityform-sell_a_condo-field_locker_'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_locker_',
    'label' => 'Locker #',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_main_intesection'.
  $field_instances['entityform-sell_a_condo-field_main_intesection'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_main_intesection',
    'label' => 'Main Intesection',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_maintenance'.
  $field_instances['entityform-sell_a_condo-field_maintenance'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_maintenance',
    'label' => 'Maintenance',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_master_bedroom_floor'.
  $field_instances['entityform-sell_a_condo-field_master_bedroom_floor'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 66,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_master_bedroom_floor',
    'label' => 'floor',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 56,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_master_bedroom_length'.
  $field_instances['entityform-sell_a_condo-field_master_bedroom_length'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_master_bedroom_length',
    'label' => 'length',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 54,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_master_bedroom_width'.
  $field_instances['entityform-sell_a_condo-field_master_bedroom_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 62,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_master_bedroom_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 55,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_pets_permitted'.
  $field_instances['entityform-sell_a_condo-field_pets_permitted'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_pets_permitted',
    'label' => 'Pets Permitted',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_photos_upload'.
  $field_instances['entityform-sell_a_condo-field_photos_upload'] = array(
    'bundle' => 'sell_a_condo',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 74,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_photos_upload',
    'label' => 'Photos Upload',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'multiupload_imagefield_widget',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_miw',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_possession'.
  $field_instances['entityform-sell_a_condo-field_possession'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_possession',
    'label' => 'Possession',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_postal_code'.
  $field_instances['entityform-sell_a_condo-field_postal_code'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_postal_code',
    'label' => 'Postal Code',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => '',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_prkg_included'.
  $field_instances['entityform-sell_a_condo-field_prkg_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_prkg_included',
    'label' => 'Prkg included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'entityform-sell_a_condo-field_property_management_compan'.
  $field_instances['entityform-sell_a_condo-field_property_management_compan'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_property_management_compan',
    'label' => 'Property Management Company Name',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_resident'.
  $field_instances['entityform-sell_a_condo-field_resident'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_resident',
    'label' => 'Resident',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_rooms_total'.
  $field_instances['entityform-sell_a_condo-field_rooms_total'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rooms_total',
    'label' => 'Rooms Total',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_street'.
  $field_instances['entityform-sell_a_condo-field_street'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_street',
    'label' => 'Street',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_street_unit'.
  $field_instances['entityform-sell_a_condo-field_street_unit'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_street_unit',
    'label' => 'Street, Unit #',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_taxes_annual_'.
  $field_instances['entityform-sell_a_condo-field_taxes_annual_'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 71,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_taxes_annual_',
    'label' => 'Taxes (annual)',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_taxes_included'.
  $field_instances['entityform-sell_a_condo-field_taxes_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_taxes_included',
    'label' => 'Taxes included',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_tel'.
  $field_instances['entityform-sell_a_condo-field_tel'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'phone',
        'settings' => array(),
        'type' => 'phone',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tel',
    'label' => 'Tel',
    'placeholder' => '',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_unit'.
  $field_instances['entityform-sell_a_condo-field_unit'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_unit',
    'label' => 'Unit #',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_washrooms_total'.
  $field_instances['entityform-sell_a_condo-field_washrooms_total'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_washrooms_total',
    'label' => 'Washrooms Total',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_water_included'.
  $field_instances['entityform-sell_a_condo-field_water_included'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_water_included',
    'label' => 'Water included in maintenance',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_width'.
  $field_instances['entityform-sell_a_condo-field_width'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_width',
    'label' => 'width',
    'placeholder' => '',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 47,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_your_last_name'.
  $field_instances['entityform-sell_a_condo-field_your_last_name'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_your_last_name',
    'label' => 'Your Last Name',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_your_middle_name'.
  $field_instances['entityform-sell_a_condo-field_your_middle_name'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_your_middle_name',
    'label' => 'Your Middle Name',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-sell_a_condo-field_your_name'.
  $field_instances['entityform-sell_a_condo-field_your_name'] = array(
    'bundle' => 'sell_a_condo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_your_name',
    'label' => 'Your Name',
    'placeholder' => '',
    'required' => 0,
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Air Conditioner');
  t('Approximate age');
  t('Approximate square feet');
  t('Are in Buyer Representation with any Agent');
  t('Asking price');
  t('Balcony');
  t('Basement');
  t('Bedrooms Total');
  t('Bldg ins included in maintenance');
  t('CAC included in maintenance');
  t('Cable included in maintenance');
  t('Chattels included');
  t('City');
  t('Common elements included in maintenance');
  t('E-mail');
  t('Elevator');
  t('Ensuite laundry');
  t('Exterior finishing');
  t('Family Room');
  t('Fireplace');
  t('Garage');
  t('Heat');
  t('Heat included in maintenance');
  t('Hydro included in maintenance');
  t('Kitchens');
  t('Level');
  t('Locker');
  t('Locker #');
  t('Main Intesection');
  t('Maintenance');
  t('Pets Permitted');
  t('Photos Upload');
  t('Possession');
  t('Postal Code');
  t('Prkg included in maintenance');
  t('Property Management Company Name');
  t('Resident');
  t('Rooms Total');
  t('Street');
  t('Street, Unit #');
  t('Taxes (annual)');
  t('Taxes included');
  t('Tel');
  t('Unit #');
  t('Washrooms Total');
  t('Water included in maintenance');
  t('Your Last Name');
  t('Your Middle Name');
  t('Your Name');
  t('floor');
  t('length');
  t('width');

  return $field_instances;
}
