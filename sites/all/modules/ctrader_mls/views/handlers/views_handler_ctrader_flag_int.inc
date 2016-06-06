<?php

/**
 * Field handler to count condo discount.
 */
class views_handler_ctrader_flag_int extends views_handler_field {
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

    // Remove the checkbox
//    unset($form['alter']['alter_text']);
//    unset($form['alter']['text']['#dependency']);
//    unset($form['alter']['text']['#process']);
  }

  public function render($values) {
    global $user;

    $entity_id = NULL;
    if (isset($values->_entity_properties['search_api_id'])) {
      $entity_id = $values->_entity_properties['search_api_id'];
    }
    elseif (isset($values->_field_data['drealty_listing_field_data_field_reference_to_condo_id']['entity']->id)) {
      $entity_id = $values->_field_data['drealty_listing_field_data_field_reference_to_condo_id']['entity']->id;
    }
    
    $flag = flag_get_flag('drealty_flag');
    $flag_link = flag_create_link('drealty_flag', $entity_id);
    if ($flag->is_flagged($entity_id, $user->uid)) {
      return $flag_link;
    }
    elseif (user_is_anonymous()) {
//      return '<a class="colorbox-inline flag-anonymous" href="?width=500&height=500&inline=true#user-login-form">Anonymous</a>';
      return NULL;
    }
    else {
      return $flag_link;
    }
  }
}
