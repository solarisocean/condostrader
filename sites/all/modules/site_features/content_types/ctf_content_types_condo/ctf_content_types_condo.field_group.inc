<?php
/**
 * @file
 * ctf_content_types_condo.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ctf_content_types_condo_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_about_this_listing|node|condo|default';
  $field_group->group_name = 'group_about_this_listing';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'condo';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About this listing',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_extras',
      2 => 'field_broker',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'About this listing',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-about-this-listing field-group-html-element',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_about_this_listing|node|condo|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_amenities_display|node|condo|default';
  $field_group->group_name = 'group_amenities_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'condo';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Amenities display',
    'weight' => '4',
    'children' => array(
      0 => 'field_pets_allowed',
      1 => 'field_parking',
      2 => 'field_locker',
      3 => 'field_fireplace',
      4 => 'field_european_style_kitchen',
      5 => 'field_stove',
      6 => 'field_washer_dryer',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Amenities display',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-amenities-display field-group-html-element',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_amenities_display|node|condo|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_amenities|node|condo|form';
  $field_group->group_name = 'group_amenities';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Amenities',
    'weight' => '7',
    'children' => array(
      0 => 'field_pets_allowed',
      1 => 'field_parking',
      2 => 'field_locker',
      3 => 'field_fireplace',
      4 => 'field_european_style_kitchen',
      5 => 'field_stove',
      6 => 'field_washer_dryer',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_amenities|node|condo|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_condo_details_display|node|condo|default';
  $field_group->group_name = 'group_condo_details_display';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'condo';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Condo Details Display',
    'weight' => '3',
    'children' => array(
      0 => 'field_asking_price',
      1 => 'field_mls_size',
      2 => 'field_days_on_market',
      3 => 'field_taxes',
      4 => 'field_maint_fees',
      5 => 'field_beds',
      6 => 'field_baths',
      7 => 'field_exposure',
      8 => 'field_balcony',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Condo Details Display',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-condo-details-display field-group-html-element',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_condo_details_display|node|condo|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_listing_details|node|condo|form';
  $field_group->group_name = 'group_listing_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'condo';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Condo listing Details',
    'weight' => '6',
    'children' => array(
      0 => 'field_asking_price',
      1 => 'field_mls_size',
      2 => 'field_days_on_market',
      3 => 'field_taxes',
      4 => 'field_maint_fees',
      5 => 'field_beds',
      6 => 'field_baths',
      7 => 'field_exposure',
      8 => 'field_balcony',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_listing_details|node|condo|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('About this listing');
  t('Amenities');
  t('Amenities display');
  t('Condo Details Display');
  t('Condo listing Details');

  return $field_groups;
}
