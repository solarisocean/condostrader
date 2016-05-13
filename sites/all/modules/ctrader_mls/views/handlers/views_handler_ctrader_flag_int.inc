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

    $flag = flag_get_flag('drealty_flag');
    $flag_link = flag_create_link('drealty_flag', $values->_entity_properties['search_api_id']);
    if ($flag->is_flagged($values->_entity_properties['search_api_id'], $user->uid)) {
      return $flag_link;
    }
    elseif (user_is_anonymous()) {
      $options = array(
        'attributes' => array(
          'class' => array('colorbox-inline', 'flag-anonymous'),
        ),
      );
//      return l('wewewewe', '?width=500&height=500&inline=true#user-login-form', $options);
      return '<a class="colorbox-inline flag-anonymous" href="?width=500&height=500&inline=true#user-login-form">Anonymous</a>';
    }
    else {
      return $flag_link;
    }
  }
}
