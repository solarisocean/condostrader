<?php

/**
 * Field handler to count condo discount.
 */
class views_handler_ctrader_flag_int extends views_handler_field {
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
    $flag = flag_get_flag('bookmarks');
    if ( $flag->is_flagged($values->_entity_properties['search_api_id'], $GLOBALS['user']->uid) ) {
      return FALSE;
    } else {
      return 'aaaaaaaaa';
    }
  }
}
