<?php

/**
 * Field handler to count condo's days on market.
 */
class views_handler_field_ctrader_daysonmarket extends views_handler_field {
  public function option_definition() {
    $options = parent::option_definition();

    // Override the alter text option to always alter the text.
    $options['alter']['contains']['alter_text'] = array('default' => TRUE);
    return $options;
  }

  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  public function render($values) {
    $mls_created = strtotime($values->_field_data['id']['entity']->field_timestamp_sql__torcond[LANGUAGE_NONE][0]['value']);
    $days_on_market = round((time() - $mls_created) / (24 * 60 * 60));
    return $days_on_market;
  }
}
