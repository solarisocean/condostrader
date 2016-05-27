<?php

/**
 * Embeds mortgage calculator.
 */
class views_handler_field_ctrader_mortgage_calculator extends views_handler_field {
  public function query() {
    // do nothing -- to override the parent query.
  }

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
    if (module_exists('mortgage_calculator')) {
      $mortgage_calculator_js_form = drupal_get_form('mortgage_calculator_js_form');
      if (isset($values->_field_data['id']['entity']->field_lp_dol__torcond[LANGUAGE_NONE][0]['value'])) {
        $price = round($values->_field_data['id']['entity']->field_lp_dol__torcond[LANGUAGE_NONE][0]['value']);
      }
      else {
        $price = 'no result';
      }
      if ($values->_field_data['id']['entity']->field_s_r__torcond[LANGUAGE_NONE][0]['value'] == 'Sale') {
        $mortgage_calculator_js_form['loan_amount_2']['#value'] = $price;
      }
      $mortgage_calculator_js_form['loan_amount_2']['#title'] = t('Principal:');
      $mortgage_calculator_js_form['years_to_pay_2']['#value'] = 25;
      $mortgage_calculator_js_form['years_to_pay_2']['#title'] = t('Amort. (Years):');
      $mortgage_calculator_js_form['mortgage_rate_2']['#value'] = 3.25;
      $mortgage_calculator_js_form['mortgage_rate_2']['#title'] = t('Interest rate (%):');
      $mortgage_calculator_js_form['calculate_2']['#value'] = t('Calculate payment');

      return $mortgage_calculator_js_form;
    }
    else {
      return 'No mortgage calculator found.';
    }
  }
}
