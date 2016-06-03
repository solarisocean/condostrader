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
  $strongarm->name = 'smart_ip_ipinfodb_key';
  $strongarm->value = '17cfafb35936564f4aff9457cfa30ed5ea67ea3204663342dfe1820eafb5617b';
  $export['smart_ip_ipinfodb_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'smart_ip_test_ip_address';
  $strongarm->value = '204.11.50.131';
  $export['smart_ip_test_ip_address'] = $strongarm;

  return $export;
}
