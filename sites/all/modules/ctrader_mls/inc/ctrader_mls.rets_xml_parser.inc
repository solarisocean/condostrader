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


/*function _set_field_data(&$item, $rets_item, $field_mappings, $entity_type, $class) {

  foreach ($field_mappings as $mapping) {
    switch ($mapping->field_api_type) {
      case 'addressfield':
        //get the default country code if one exists for the address
        $field_info = field_info_instance($entity_type, $mapping->field_name, $class->bundle);
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['country'] = isset($field_info['default_value'][0]['country']) ? $field_info['default_value'][0]['country'] : 'US';
        if (isset($mapping->data['address_1']) && isset($rets_item[$mapping->data['address_1']])) {
          $item->{$mapping->field_name}[LANGUAGE_NONE][0]['thoroughfare'] = $rets_item[$mapping->data['address_1']];
          if (isset($mapping->data['address_1_1']) && isset($rets_item[$mapping->data['address_1_1']])) {
            $item->{$mapping->field_name}[LANGUAGE_NONE][0]['thoroughfare'] .= " " . $rets_item[$mapping->data['address_1_1']];
          }
          if (isset($mapping->data['address_1_2']) && isset($rets_item[$mapping->data['address_1_2']])) {
            $item->{$mapping->field_name}[LANGUAGE_NONE][0]['thoroughfare'] .= " " . $rets_item[$mapping->data['address_1_2']];
          }
          if (isset($mapping->data['address_1_3']) && isset($rets_item[$mapping->data['address_1_3']])) {
            $item->{$mapping->field_name}[LANGUAGE_NONE][0]['thoroughfare'] .= " " . $rets_item[$mapping->data['address_1_3']];
          }
        }
        else {
          $item->{$mapping->field_name}[LANGUAGE_NONE][0]['thoroughfare'] = NULL;
        }
        if (isset($mapping->data['address_2']) && isset($rets_item[$mapping->data['address_2']])) {
          $item->{$mapping->field_name}[LANGUAGE_NONE][0]['premise'] = $rets_item[$mapping->data['address_2']];
          if (isset($mapping->data['address_2_1']) && isset($rets_item[$mapping->data['address_2_1']])) {
            $item->{$mapping->field_name}[LANGUAGE_NONE][0]['premise'] .= " " . $rets_item[$mapping->data['address_2_1']];
          }
          if (isset($mapping->data['address_2_2']) && isset($rets_item[$mapping->data['address_2_2']])) {
            $item->{$mapping->field_name}[LANGUAGE_NONE][0]['premise'] .= " " . $rets_item[$mapping->data['address_2_2']];
          }
          if (isset($mapping->data['address_2_3']) && isset($rets_item[$mapping->data['address_2_3']])) {
            $item->{$mapping->field_name}[LANGUAGE_NONE][0]['premise'] .= " " . $rets_item[$mapping->data['address_2_3']];
          }
        }
        else {
          $item->{$mapping->field_name}[LANGUAGE_NONE][0]['premise'] = NULL;
        }
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['premise'] = isset($mapping->data['address_2']) ? $rets_item[$mapping->data['address_2']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['locality'] = isset($mapping->data['city']) ? $rets_item[$mapping->data['city']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['administrative_area'] = isset($mapping->data['state']) ? $rets_item[$mapping->data['state']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['sub_administrative_area'] = isset($mapping->data['county']) ? $rets_item[$mapping->data['county']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['postal_code'] = isset($mapping->data['zip']) ? $rets_item[$mapping->data['zip']] : NULL;
        break;
      case 'location':
        //get the default country code if one exists for the address
        $field_info = field_info_instance($entity_type, $mapping->field_name, $class->bundle);
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['country'] = isset($field_info['default_value'][0]['country']) ? $field_info['default_value'][0]['country'] : 'CA';
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['street'] = isset($rets_item[$mapping->data['street']]) ? $rets_item[$mapping->data['street']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['additional'] = isset($mapping->data['additional']) ? $rets_item[$mapping->data['additional']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['city'] = isset($mapping->data['city']) ? $rets_item[$mapping->data['city']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['stateorprovince'] = isset($mapping->data['stateorprovince']) ? $rets_item[$mapping->data['stateorprovince']] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['postal_code'] = isset($mapping->data['postal_code']) ? $rets_item[$mapping->data['postal_code']] : NULL;
        break;
      case 'geofield':
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['wkt'] = GEOCODER_DUMMY_WKT;
        break;
      case 'text_long':
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = isset($rets_item[$mapping->systemname]) ? $rets_item[$mapping->systemname] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['format'] = 'plain_text';
        break;
      case 'number_integer':
      case 'number_decimal':
      case 'number_float':
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = empty($rets_item[$mapping->systemname]) ? 0 : is_numeric($rets_item[$mapping->systemname]) ? $rets_item[$mapping->systemname] : NULL;
        break;
      case 'list_boolean':
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = in_array($rets_item[$mapping->systemname], array(
          'true',
          'True',
          'TRUE',
          'yes',
          'Yes',
          'y',
          'Y',
          '1',
          'on',
          'On',
          'ON',
          TRUE,
          1
        ), TRUE) ? 1 : 0;
        break;
      case 'taxonomy_term_reference':
        $item->{$mapping->field_name}[LANGUAGE_NONE] = array();
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = isset($rets_item[$mapping->systemname]) ? $rets_item[$mapping->systemname] : NULL;
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['tid'] = '';
        break;
      case 'drealty':
        $item->{$mapping->field_name} = isset($rets_item[$mapping->systemname]) ? $rets_item[$mapping->systemname] : NULL;
        break;
      case 'datetime':
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = (isset($rets_item[$mapping->systemname]) && !empty($rets_item[$mapping->systemname])) ? $rets_item[$mapping->systemname] : '1960-01-01T00:00:00.000';
        break;
      default:
        $item->{$mapping->field_name}[LANGUAGE_NONE][0]['value'] = isset($rets_item[$mapping->systemname]) ? $rets_item[$mapping->systemname] : NULL;
    }
  }
}*/
