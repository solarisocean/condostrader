<?php

/**
 * Field handler to count condo discount.
 */
class views_handler_field_ctrader_discount extends views_handler_field {
  public function query() {
    // do nothing -- to override the parent query.
//    $this->field_alias = $this->query->addField('field_old_price_value__torcond');
//    $this->field_alias = $this->query->addField('field_lp_dol__torcond');
  }

  public function option_definition() {
    $options = parent::option_definition();

    // Override the alter text option to always alter the text.
    $options['alter']['contains']['alter_text'] = array('default' => TRUE);
    return $options;
  }

  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Remove the checkbox
//    unset($form['alter']['alter_text']);
//    unset($form['alter']['text']['#dependency']);
//    unset($form['alter']['text']['#process']);
  }

  public function render($values) {
//    if (strpos($this->table, 'search_api_index_toronto_condo_index') !== FALSE) {
//      // Render your content.
//      $current_price = isset($values->_entity_properties['entity object']->field_lp_dol__torcond[LANGUAGE_NONE][0]['value']) ? $values->_entity_properties['entity object']->field_lp_dol__torcond[LANGUAGE_NONE][0]['value'] : NULL;
//      $old_price = NULL;
//      if (!empty($values->_entity_properties['entity object']->field_old_price_value__torcond[LANGUAGE_NONE])) {
//        $old_prices_array = $values->_entity_properties['entity object']->field_old_price_value__torcond[LANGUAGE_NONE];
//        $old_prices_array = array_reverse($old_prices_array);
//        $old_price = isset($old_prices_array[1]) ? $old_prices_array[1] : NULL;
//      }
//    }
//    else {
//      $current_price = isset($values->_field_data['id']['entity']->field_lp_dol__torcond[LANGUAGE_NONE][0]['value']) ? $values->_field_data['id']['entity']->field_lp_dol__torcond[LANGUAGE_NONE][0]['value'] : NULL;
//      $old_price = NULL;
//      if (!empty($values->_field_data['id']['entity']->field_old_price_value__torcond[LANGUAGE_NONE])) {
//        $old_prices_array = $values->_field_data['id']['entity']->field_old_price_value__torcond[LANGUAGE_NONE];
//        $old_prices_array = array_reverse($old_prices_array);
//        $old_price = isset($old_prices_array[1]) ? $old_prices_array[1] : NULL;
//      }
//    }
//
//    if (!empty($old_price) && !empty($current_price)) {
//      $discount = (($old_price - $current_price) / $old_price);
//      if ($discount > 0.009 && $discount < 1) {
//        $discount = round(($discount * 100));
//        return $discount;
//      }
//    }
    return NULL;
  }
}
