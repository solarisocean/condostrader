<?php


function _rets_xml_parser() {

  $rets_login_url = variable_get('rets_login_url', '');
  $rets_username = variable_get('rets_username', '');
  $rets_password = variable_get('rets_password', '');
  $rets_user_agent = variable_get('rets_user_agent', '');
  $rets_user_agent_password = variable_get('rets_user_agent_password', '');


  $xml = simplexml_load_file(drupal_get_path('module', 'ctrader_mls') . '/files/cnd_test_xml/test_condo.xml');
//  $xml = simplexml_load_file(drupal_get_path('module', 'ctrader_mls') . '/files/cnd_test_xml/cnd.xml');

  $connection = entity_load('drealty_connection_entity', array('toronto_rets_connection'));
  $connection = end($connection);
  $field_mappings = $connection->FetchFieldMappings();

  $rets = new phRETS;
  $rets->Connect($rets_login_url, $rets_username, $rets_password, $rets_user_agent_password);
  $fields_metadata = $rets->GetMetadataTable("Property", "CondoProperty");

  $items = array();
  foreach ($xml->REData->REProperties->CondoProperty as $condo) {

    $item = entity_create('drealty_listing', array(
      'id' => NULL,
      'type' => 'toronto_condo',
      'conid' => NULL,
      'hash' => NULL,
      'process_images' => NULL,
      'rets_imported' => FALSE,
      'status' => NULL,
      'rets_key' => $condo->Listing->MLS->__toString(),
      'rets_id' => $condo->Listing->MLS->__toString(),
      'class' => NULL,
      'active' => NULL,
      'label' => $condo->Listing->Address->__toString(),
      'created' => REQUEST_TIME,
      'changed' => REQUEST_TIME,
    ));
    foreach ($field_mappings as $mapping) {
      $ftype = $mapping->field_api_type;
      switch ($ftype) {
        case 'text':
          foreach ($fields_metadata as $field_data) {
            if ($mapping->systemname == $field_data['SystemName']) {
              $field_standart_name = $field_data['StandardName'];
              $field_value = $condo->Listing->{$field_standart_name}->__toString();

              $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = isset($field_value) ? $field_value : NULL;
            }
          }
          break;
        case 'number_integer':
        case 'number_decimal':
        case 'number_float':
          foreach ($fields_metadata as $field_data) {
            if ($mapping->systemname == $field_data['SystemName']) {
              $field_standart_name = $field_data['StandardName'];
              $field_value = $condo->Listing->{$field_standart_name}->__toString();

              $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = isset($field_value) ? $field_value : NULL;
            }
          }
          break;
        case 'text_long':
          foreach ($fields_metadata as $field_data) {
            if ($mapping->systemname == $field_data['SystemName']) {
              $field_standart_name = $field_data['StandardName'];
              $field_value = $condo->Listing->{$field_standart_name}->__toString();

              $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = isset($field_value) ? $field_value : NULL;
              $item->{$mapping->field_name}[LANGUAGE_NONE][0]['format'] = 'plain_text';
            }
          }
          break;
      }
    }
    $items[] = $item;
  }

  $i = 0;
  foreach ($items as $entity_presave) {
    $entity_presave->save();
    $i++;
  }

  return "Saved entities: <b>{$i}</b>";
}
