<?php


/**
 * Implements hook_views_data().
 */
function ctrader_mls_views_data() {
  $data['ctrader']['table']['group'] = t('CTrader Flag integration');
  $data['ctrader']['table']['join'] = array(
    // #global is a special flag which let's a table appear all the time.
    '#global' => array(),
  );

  $data['ctrader']['ctrader_flag_handler'] = array(
    'title' => t('CTrader Flag'),
    'help' => t('flag integration'),
    'field' => array(
      'handler' => 'views_handler_ctrader_flag_int',
      'click sortable' => TRUE,
    ),
  );

  $data['drealty_listing']['days_on_market'] = array(
    'title' => t('Days on market'),
    'help' => t('Days on market'),
    'field' => array(
      'handler' => 'views_handler_field_ctrader_daysonmarket',
      'click sortable' => TRUE,
    ),
  );
  $data['drealty_listing']['mortgage_calculator'] = array(
    'title' => t('Mortgage calculator'),
    'help' => t('Mortgage calculator'),
    'field' => array(
      'handler' => 'views_handler_field_ctrader_mortgage_calculator',
      'click sortable' => TRUE,
    ),
  );
  $data['drealty_listing']['wrong_geopoint'] = array(
    'title' => t('wrong_geopoint'),
    'help' => t('wrong_geopoint'),
    'field' => array(
      'handler' => 'views_handler_wrong_geopoint',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
  );

  return $data;
}


/**
 * Implements hook_views_data_alter().
 */
function ctrader_mls_views_data_alter(&$data) {
  $data['search_api_index_toronto_condo_index']['field_old_price_value_torcond']['field'] = array(
    'entity type' => 'drealty_listing',
    'entity_tables' => array(),
    'field_name' => 'field_old_price_value__torcond',
    'handler' => 'views_handler_field_ctrader_discount',
    'click sortable' => TRUE,
//    'type' => 'decimal',
  );
  $data['search_api_index_toronto_condo_index']['field_old_price_value_torcond']['sort'] = array(
    'handler' => 'SearchApiViewsHandlerSort',
  );
}


/**
 * Implements hook_field_views_data_alter().
 */
function ctrader_mls_field_views_data_alter(&$result, $field, $module) {
  switch ($field['field_name']) {
    case 'field_old_price_value__torcond':
      $result['field_data_field_old_price_value__torcond']['field_old_price_value__torcond']['field']['handler'] = 'views_handler_field_ctrader_discount';
      break;
  }
}
