<?php

/**
 * Implements template_preprocess_html().
 */
function condor_preprocess_html(&$variables) {
  $args = arg();
  if ($args[0] == 'user' &&  !empty($args[1]) && is_numeric($args[1])) {
    $variables['classes_array'][] = 'user-page';
  }
}


function check_active($tree, $current){
  foreach ($tree as $menuItem) {
    if (isset($menuItem['below']) && is_array($menuItem['below']) && !empty($menuItem['below'])) {
      $menuItem['link']['in_active_trail'] = check_active($menuItem['below'], $current);
    } else
      if (isset($menuItem['link']['link_path']) && $menuItem['link']['link_path'] == $current){
        return 1;
      }
  }
  return false;
}

function add_active_trail($tree) {
  $current = current_path();
  $newTree = array();
  foreach ($tree as $k=>$menuItem) {
    if (isset($menuItem['below']) && is_array($menuItem['below']) && !empty($menuItem['below'])) {
      $menuItem['link']['in_active_trail'] = check_active($menuItem['below'], $current);
    } else if (isset($menuItem['link']['link_path']) && $menuItem['link']['link_path'] == $current)
      $menuItem['link']['link_path'] = 1;
    $newTree[$k] = $menuItem;
  }
  return $newTree;
}

/**
 * Implements template_preprocess_page.
 */
function condor_preprocess_page(&$variables) {
  //Custom variables to header.
  $variables['condo_head']['sign_in_link'] = NULL;
  $is_anonymous = !user_is_logged_in();

  if (!$is_anonymous) {
    $variables['condo_head']['log_in_link'] = l(t('Log Out'), '/user/logout');
  }
  else {
    $variables['condo_head']['log_in_link'] = l(t('Log In'), '/user/login');
    $variables['condo_head']['sign_in_link'] = l(t('Sign Up'), '/user/register');
  }

  $condo_head_r = cache_get('condo_head_r');
  if (!$condo_head_r) {
    $variables['condo_head_r']['like_button'] = l('', '/user/wishlist', array('attributes' => array('class' => array('wishlist'))));
    $variables['condo_head_r']['search_button'] = l('', '/', array(
      'attributes' => array(
        'class' => array(
          'search',
          'left'
        ),
        'id' => 'search-button'
      )
    ));
    $variables['condo_head_r']['menu_button'] = l('', '/', array('attributes' => array('class' => array('menu-button'))));
    cache_set('condo_head_r', $variables['condo_head_r']);
  }
  else {
    $variables['condo_head_r'] = $condo_head_r->data;
  }

  $header_search_form_output = cache_get('condo_head_search_results_ctrader');
  if (!$header_search_form_output) {
    $view = views_get_view('search_results_ctrader');
    $display_id = 'page_3';
    $view->set_display($display_id);
    $view->init_handlers();
    $form_state = array(
      'view' => $view,
      'display' => $view->display_handler->display,
      'exposed_form_plugin' => $view->display_handler->get_plugin('exposed_form'),
      'method' => 'get',
      'rerender' => TRUE,
      'no_redirect' => TRUE,
    );
    $header_search_form = drupal_build_form('views_exposed_form', $form_state);
    $header_search_form_output = drupal_render($header_search_form);

    $variables['search_block'] = $header_search_form_output;
    cache_set('condo_head_search_results_ctrader', $header_search_form_output);
  }
  else {
    $variables['search_block'] = $header_search_form_output->data;
  }

  $condo_main_menu = cache_get('condo_main_menu');
  if (!$condo_main_menu) {
    // Build custom menu tree.
    $menu = menu_build_tree('main-menu');
    if (!empty($menu)) {
      $menu_output = menu_tree_output($menu);
      if (!empty($menu_output)) {
        $variables['menu_tree'] = drupal_render($menu_output);
      }
    }
    cache_set('condo_main_menu', $variables['menu_tree']);
  }
  else {
    $variables['menu_tree'] = $condo_main_menu->data;
  }

  // rewrites title for user/register page.
  $path = $_GET['q'];
  if (strpos($path,'user/register') !== false) {
    drupal_set_title(t('Sing up for free'));
  }

  $args = arg();
  if (isset($args[0]) && $args[0] == 'user') {
    if (isset($args[1]) && $args[1] == 'password' || $args[1] == 'login') {
      $variables['tabs'] = '';
    }
  }
}

/**
 * Implements template_preprocess_node.
 */
function condor_preprocess_node(&$variables) {
  if ($variables['type'] == 'blog_post') {
    $variables['header_image'] = file_create_url($variables['field_blog_image'][0]['uri']);
    $variables['submission_date'] = date('d F Y', $variables['created']);
    if (!empty($variables['user']->name)) {
      $variables['submission_author'] = $variables['user']->name;
    } else {
      $variables['submission_author'] =  $variables['user']->roles[1];
    }
  }
}

/**
 * Implements template_menu_tree.
 */
function condor_menu_tree__main_menu($variables) {
  // Add custom class to main menu.
  return '<ul class="menu-menu main-nav-tree">' . $variables['tree'] . '</ul>';
}

/**
 * Implements template_menu_link.
 */
function condor_menu_link(array $variables) {
  // Add classes with depth level to menu link.
  $element = $variables['element'];
  $sub_menu = '';
  switch ($element['#original_link']['depth']) {
    case "1":
      $element['#attributes']['class'][] = 'first-menu-nav';
      break;
    case "2":
      $element['#attributes']['class'][] = 'second-menu-nav';
      break;
    case "3":
      $element['#attributes']['class'][] = 'third-menu-nav';
      break;
    case "4":
      $element['#attributes']['class'][] = 'fourth-menu-nav';
      break;
    case "5":
      $element['#attributes']['class'][] = 'fifth-menu-nav';
      break;
  }

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


/**
 * Returns HTML for an inactive facet item.
 *
 * @param $variables
 *   An associative array containing the keys 'text', 'path', 'options', and
 *   'count'. See the l() and theme_facetapi_count() functions for information
 *   about these variables.
 *
 * @ingroup themeable
 * https://www.drupal.org/node/1615430
 */
function condor_facetapi_link_inactive($variables) {
  // Builds accessible markup.
  // @see http://drupal.org/node/1316580
  $accessible_vars = array(
    'text' => $variables['text'],
    'active' => FALSE,
  );
  $accessible_markup = theme('facetapi_accessible_markup', $accessible_vars);

  // Sanitizes the link text if necessary.
  $sanitize = empty($variables['options']['html']);
  $variables['text'] = ($sanitize) ? check_plain($variables['text']) : $variables['text'];

  // Adds count to link if one was passed.
  /*if (isset($variables['count'])) {
    $variables['text'] .= ' ' . theme('facetapi_count', $variables);
  }*/

  // Resets link text, sets to options to HTML since we already sanitized the
  // link text and are providing additional markup for accessibility.
  $variables['text'] .= $accessible_markup;
  $variables['options']['html'] = TRUE;
  return theme_link($variables);
}


/**
 * Implementation theme_form_views_exposed_form_alter().
 * @param $form
 * @param $form_state
 */
function condor_form_views_exposed_form_alter(&$form, &$form_state) {

  //Have changed views-exposed-form-search-results-ctrader-block-1 default value.
  switch ($form['#id']) {
    case 'views-exposed-form-search-results-ctrader-block-1':
    case 'views-exposed-form-search-results-ctrader-page-1':
      $form['sorting']['#default_value'] = 'field_timestamp_sql_torcond ASC';
      break;
  }
}

/**
 * Implements template_preprocess_field().
 */
function condor_preprocess_field(&$variables) {

  //Have added dollar symbol to field.
  if ($variables['element']['#field_name'] == 'field_lp_dol__torcond') {
    $variables['items'][0]['#prefix'] = '<span class="dol">$</span>';
  }
}

/**
 * Implements template_menu_local_task().
 */
function condor_menu_local_task($variables) {
  $args = arg();
  $link = $variables['element']['#link'];
  $link_text = $link['title'];
  $link['localized_options']['attributes'] = array(
    'class' => array(
      'small',
      'button',
      'secondary',
    ),
  );
  $link['localized_options']['html'] = TRUE;

  //Hide menu local task on register page.
  if (!empty($args[0]) && !empty($args[1]) && $args[1] == 'register') {
    return '';
  } else {
    return '<li' . (!empty($variables['element']['#active']) ? ' class="active"' : '') . '>' . l($link_text, $link['href'], $link['localized_options']) . "</li>\n";
  }
}

function condor_preprocess_entity(&$variables) {
  if (!empty($variables['elements']['#bundle']) && $variables['elements']['#bundle'] == 'contact_us_form') {
    unset($variables['content']['info']);
  }
}

function condor_status_messages($variables) {
  $args = arg();
  $require_field = array();
  $require_message = 'Please fill required fields below';
  $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages $type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        if ($args[0] == 'sell-a-condo' && empty($args[1]) && strpos($message, 'field is required.')) {
          array_push($require_field, $message);
        }
        else {
          $output .= '  <li>' . $message . "</li>\n";
        }
      }
      $output .= !empty($require_field) ? '  <li>' . $require_message . "</li>\n" : '';
      $output .= " </ul>\n";
    }
    else {
      $output .= reset($messages);
    }
    $output .= "</div>\n";
  }
  return $output;
}