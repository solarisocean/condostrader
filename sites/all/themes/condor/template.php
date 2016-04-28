<?php

/**
 * Implements template_preprocess_html().
 */
function condor_preprocess_html(&$variables) {
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
  //Custom variables to header menu.
  $variables['sign_in_link'] = l(t('Sign Up'), '/user/register');
  $variables['log_in_link'] = l(t('Log In'), '/user/login');
  $variables['like_button'] = l('', '/', array('attributes' => array('class' => array('wishlist'))));
  $variables['search_button'] = l('', '/', array('attributes' => array('class' => array('search', 'left'), 'id' => 'search-button')));
  $variables['menu_button'] = l('', '/', array('attributes' => array('class' => array('menu-button'))));

  // Custom search block from ctrader_searchmenu module..
  $search_block = drupal_get_form('searchmenu_form');
  $variables['search_block'] = drupal_render($search_block);

  // Build custom menu tree.
  $menu = menu_build_tree('main-menu');
  $variables['menu_tree'] = $menu_items = menu_tree_output($menu);
}

/**
 * Implements template_preprocess_node.
 */
function condor_preprocess_node(&$variables) {
}

/**
 * Implements template_menu_tree.
 */
function condor_menu_tree($variables) {
  // Add custom class to main menu.
  return '<ul class="menu-menu main-nav-tree">' . $variables['tree'] . '</ul>';
}