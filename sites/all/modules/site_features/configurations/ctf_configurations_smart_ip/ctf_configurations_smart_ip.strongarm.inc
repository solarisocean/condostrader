<?php
/**
 * @file
 * ctf_configurations_smart_ip.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ctf_configurations_smart_ip_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_allowed_pages';
  $strongarm->value = '';
  $export['smart_ip_allowed_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_auto_update';
  $strongarm->value = '1';
  $export['smart_ip_auto_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_blocks_csv_last_pointer';
  $strongarm->value = 0;
  $export['smart_ip_blocks_csv_last_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_blocks_csv_pointer';
  $strongarm->value = 0;
  $export['smart_ip_blocks_csv_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_correct_ipinfodb_key';
  $strongarm->value = FALSE;
  $export['smart_ip_correct_ipinfodb_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_db_update_busy';
  $strongarm->value = FALSE;
  $export['smart_ip_db_update_busy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_debug';
  $strongarm->value = 1;
  $export['smart_ip_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_extract_zip_done';
  $strongarm->value = FALSE;
  $export['smart_ip_extract_zip_done'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_get_zip_done';
  $strongarm->value = FALSE;
  $export['smart_ip_get_zip_done'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_ip2location_bin_cache';
  $strongarm->value = 'no_cache';
  $export['smart_ip_ip2location_bin_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_ip2location_bin_path';
  $strongarm->value = '';
  $export['smart_ip_ip2location_bin_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_ipinfodb_key';
  $strongarm->value = '17cfafb35936564f4aff9457cfa30ed5ea67ea3204663342dfe1820eafb5617b';
  $export['smart_ip_ipinfodb_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_location_csv_last_pointer';
  $strongarm->value = 0;
  $export['smart_ip_location_csv_last_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_location_csv_pointer';
  $strongarm->value = 0;
  $export['smart_ip_location_csv_pointer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_custom_path';
  $strongarm->value = '';
  $export['smart_ip_maxmind_bin_custom_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_db_auto_update';
  $strongarm->value = '1';
  $export['smart_ip_maxmind_bin_db_auto_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_db_update_error';
  $strongarm->value = 'Maxmind bin database does not exist (you can download the database now to get rid of this message).';
  $export['smart_ip_maxmind_bin_db_update_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_edition';
  $strongarm->value = '133';
  $export['smart_ip_maxmind_bin_edition'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_bin_version';
  $strongarm->value = '1';
  $export['smart_ip_maxmind_bin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_key';
  $strongarm->value = '';
  $export['smart_ip_maxmind_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_license';
  $strongarm->value = '';
  $export['smart_ip_maxmind_license'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_maxmind_service';
  $strongarm->value = 'country';
  $export['smart_ip_maxmind_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_roles_to_geolocate';
  $strongarm->value = array(
    0 => 1,
    1 => 2,
    2 => 3,
  );
  $export['smart_ip_roles_to_geolocate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_save_user_location_creation';
  $strongarm->value = 1;
  $export['smart_ip_save_user_location_creation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_source';
  $strongarm->value = 'ipinfodb_service';
  $export['smart_ip_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_store_location_csv_done';
  $strongarm->value = FALSE;
  $export['smart_ip_store_location_csv_done'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_test_ip_address';
  $strongarm->value = '204.11.50.131';
  $export['smart_ip_test_ip_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_use_ipinfodb_api_version';
  $strongarm->value = '3';
  $export['smart_ip_use_ipinfodb_api_version'] = $strongarm;

  return $export;
}
