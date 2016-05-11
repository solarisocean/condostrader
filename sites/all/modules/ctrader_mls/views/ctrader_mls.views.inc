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

  return $data;
}


/**
 * Implements hook_views_data_alter().
 */
function ctrader_mls_views_data_alter(&$data) {
  $stop_xdebug = "DELETE THIS LINE - THIS LINE NEEDS FOR X-DEBUG";
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
