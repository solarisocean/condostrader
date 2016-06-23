<?php
/**
 * @file
 * ctf_forms_sell_a_condo.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ctf_forms_sell_a_condo_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_2nd_bedroom|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_2nd_bedroom';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => '2nd bedroom',
    'weight' => '52',
    'children' => array(
      0 => 'field_2nd_bedroom_length',
      1 => 'field_2nd_bedroom_width',
      2 => 'field_2nd_bedroom_floor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '2nd bedroom',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-2nd-bedroom field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_2nd_bedroom|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_3rd_bedroom|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_3rd_bedroom';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => '3rd bedroom',
    'weight' => '53',
    'children' => array(
      0 => 'field_3rd_bedroom_length',
      1 => 'field_3rd_bedroom_width',
      2 => 'field_3rd_bedroom_floor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '3rd bedroom',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-3rd-bedroom field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_3rd_bedroom|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_condo_address_group|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_condo_address_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '2',
    'children' => array(
      0 => 'field_street',
      1 => 'field_unit',
      2 => 'field_level',
      3 => 'field_about_condo_city',
      4 => 'field_about_condo_postal_code',
      5 => 'field_main_intesection',
      6 => 'field_locker_',
      7 => 'field_about_condo_locker',
      8 => 'field_garage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-condo-address-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_condo_address_group|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_condo_condo_info|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_condo_condo_info';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo';
  $field_group->data = array(
    'label' => 'Condo Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_rooms_total',
      1 => 'field_bedrooms_total',
      2 => 'field_washrooms_total',
      3 => 'field_property_management_compan',
      4 => 'field_kitchens',
      5 => 'field_family_room',
      6 => 'field_basement',
      7 => 'field_about_condo_fireplace',
      8 => 'field_heat',
      9 => 'field_approximate_age',
      10 => 'field_approximate_square_feet',
      11 => 'field_pets_permitted',
      12 => 'field_maintenance',
      13 => 'field_air_conditioner',
      14 => 'field_elevator',
      15 => 'field_taxes_included',
      16 => 'field_heat_included',
      17 => 'field_water_included',
      18 => 'field_hydro_included',
      19 => 'field_cable_included',
      20 => 'field_cac_included',
      21 => 'field_bldg_ins_included',
      22 => 'field_prkg_included',
      23 => 'field_common_elements_included',
      24 => 'field_about_condo_balcony',
      25 => 'field_ensuite_laundry',
      26 => 'field_exterior_finishing',
      27 => 'field_about_condo_garage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-condo-condo-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_condo_condo_info|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_condo_measurements|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_condo_measurements';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo';
  $field_group->data = array(
    'label' => 'Measurements',
    'weight' => '4',
    'children' => array(
      0 => 'group_living_room',
      1 => 'group_dining_room',
      2 => 'group_kitchen',
      3 => 'group_master_bedroom',
      4 => 'group_2nd_bedroom',
      5 => 'group_3rd_bedroom',
      6 => 'group_den',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-condo-measurements field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_condo_measurements|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_condo|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_condo';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Condo',
    'weight' => '1',
    'children' => array(
      0 => 'field_chattels_included',
      1 => 'field_taxes_annual_',
      2 => 'field_about_condo_asking_price',
      3 => 'field_possession',
      4 => 'field_photos_upload',
      5 => 'group_about_condo_address_group',
      6 => 'group_about_condo_condo_info',
      7 => 'group_about_condo_measurements',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-condo field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_condo|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_you_address_group|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_you_address_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_you';
  $field_group->data = array(
    'label' => 'Address',
    'weight' => '4',
    'children' => array(
      0 => 'field_street_unit',
      1 => 'field_about_you_city',
      2 => 'field_postal_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-you-address-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_you_address_group|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_you_name_group|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_you_name_group';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_you';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '3',
    'children' => array(
      0 => 'field_your_name',
      1 => 'field_your_middle_name',
      2 => 'field_your_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-about-you-name-group field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_about_you_name_group|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_you|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_about_you';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About You',
    'weight' => '0',
    'children' => array(
      0 => 'field_tel',
      1 => 'field_about_you_e_mail',
      2 => 'field_resident',
      3 => 'field_buyer_representation',
      4 => 'group_about_you_name_group',
      5 => 'group_about_you_address_group',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About You',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-about-you field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_about_you|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_den|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_den';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => 'Den',
    'weight' => '55',
    'children' => array(
      0 => 'field_den_length',
      1 => 'field_den_width',
      2 => 'field_den_floor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Den',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-den field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_den|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dining_room|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_dining_room';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => 'Dining Room',
    'weight' => '49',
    'children' => array(
      0 => 'field_dining_length',
      1 => 'field_dining_width',
      2 => 'field_dining_field',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dining Room',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-dining-room field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_dining_room|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kitchen|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_kitchen';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => 'Kitchen',
    'weight' => '50',
    'children' => array(
      0 => 'field_kitchen_length',
      1 => 'field_kitchen_width',
      2 => 'field_kitchen_floor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kitchen',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-kitchen field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_kitchen|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_living_room|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_living_room';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => 'Living Room',
    'weight' => '48',
    'children' => array(
      0 => 'field_length',
      1 => 'field_width',
      2 => 'field_living_floor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Living Room',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-living-room field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_living_room|entityform|sell_a_condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_master_bedroom|entityform|sell_a_condo|form';
  $field_group->group_name = 'group_master_bedroom';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sell_a_condo';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_about_condo_measurements';
  $field_group->data = array(
    'label' => 'Master bedroom',
    'weight' => '51',
    'children' => array(
      0 => 'field_master_bedroom_length',
      1 => 'field_master_bedroom_width',
      2 => 'field_master_bedroom_floor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Master bedroom',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-master-bedroom field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_master_bedroom|entityform|sell_a_condo|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('2nd bedroom');
  t('3rd bedroom');
  t('About Condo');
  t('About You');
  t('Address');
  t('Condo Info');
  t('Den');
  t('Dining Room');
  t('Kitchen');
  t('Living Room');
  t('Master bedroom');
  t('Measurements');
  t('Name');

  return $field_groups;
}
