<?php

/**
 * Field handler to count condo discount.
 */
class views_handler_field_ctrader_discount extends views_handler_field {
  public function query() {
    // do nothing -- to override the parent query.

    $this->field_alias = $this->query->addField('field_old_price_value__torcond');
    $this->field_alias = $this->query->addField('field_lp_dol__torcond');
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
    // Render your content.
    $current_price = isset($values->_entity_properties['field_lp_dol__torcond']) ? $values->_entity_properties['field_lp_dol__torcond'] : NULL;
    $old_price = isset(array_reverse($values->_entity_properties['field_old_price_value__torcond'])[1]) ? array_reverse($values->_entity_properties['field_old_price_value__torcond'])[1] : NULL;
    if (!empty($old_price) && !empty($current_price)) {
      $discount = (($old_price - $current_price) / $old_price);
      if ($discount > 0.009 && $discount < 1) {
        $discount = round(($discount * 100));
        return $discount;
      }
    }
    return NULL;
  }
}