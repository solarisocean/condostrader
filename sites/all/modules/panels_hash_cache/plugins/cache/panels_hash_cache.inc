<?php

/**
 * @file
 * Provides hash caching for panels
 *
 * Copyright (c) 2010-2011 Board of Trustees, Leland Stanford Jr. University
 * This software is open-source licensed under the GNU Public License Version 2 or later
 * The full license is available at http://www.gnu.org/licenses/gpl-2.0.html
 */

// Plugin definition
$plugin = array(
  'title' => t("Hash Cache"),
  'description' => t('Hash-based cache with automated or triggered expiration'),
  'cache get' => 'panels_hash_cache_get_cache',
  'cache set' => 'panels_hash_cache_set_cache',
  'cache clear' => 'panels_hash_cache_clear_cache',
  'settings form' => 'panels_hash_cache_settings_form',
  'settings form submit' => 'panels_hash_cache_settings_form_submit',
  'defaults' => array(
    'lifetime' => 15,
    'granularity' => array(),
  ),
);

/**
 * Get cached content.
 */
function panels_hash_cache_get_cache($conf, $display, $args, $contexts, $pane = NULL) {
  
  // If panels hash cache is totally disabled, return false;
  if (variable_get('panels_hash_cache_disabled', FALSE)) {
    return FALSE;
  }

  // Optionally allow us to clear the cache from the URL using a key,
  // This lets us, for example, to automatically re-generate a cache using cron
  // hitting a url. This way users never see uncached content.
  if ($key = variable_get('panels_hash_cache_reset_key', FALSE)) {
    if (isset($_GET['panels-hash-cache-reset']) && $_GET['panels-hash-cache-reset'] == $key) {
      return FALSE;
    }
  }

  $cid = panels_hash_cache_get_id($conf, $display, $args, $contexts, $pane);

  $cache = cache_get($cid, 'cache_panels');

  // Check to see if cache missed, is empty, or is expired
  if (!$cache) {
    return FALSE;
  }
  if (empty($cache->data)) {
    return FALSE;
  }
  if ((REQUEST_TIME - $cache->created) > $conf['lifetime']) {
    return FALSE;
  }

  return $cache->data;
}

/**
 * Set cached content.
 */
function panels_hash_cache_set_cache($conf, $content, $display, $args, $contexts, $pane = NULL) {
  if (!empty($content)) {
    $cid = panels_hash_cache_get_id($conf, $display, $args, $contexts, $pane);
    cache_set($cid, $content, 'cache_panels');
  }
}

/**
 * Clear cached content.
 *
 * Cache clears are always for an entire display, regardless of arguments.
 */
function panels_hash_cache_clear_cache($display) {
  $base_cid = panels_hash_cache_get_base_cid($display);

  cache_clear_all($base_cid, 'cache_panels', TRUE);
}

/**
 * Construct base cid for display.
 */
function panels_hash_cache_get_base_cid($display) {
  $base_id = 'panels-hash-cache';

  // This is used in case this is an in-code display, which means did will be something like 'new-1'.
  if (isset($display->owner) && isset($display->owner->id)) {
    $base_id .= '-' . $display->owner->id;
  }
  if (isset($display->cache_key)) {
    $base_id .= '-' . $display->cache_key;
  }
  elseif (isset($display->css_id)) {
    $base_id .= '-' . $display->css_id;
  }

  return $base_id;
}

/**
 * Figure out an id for our cache based upon input and settings.
 */
function panels_hash_cache_get_id($conf, $display, $args, $contexts, $pane) {
  $id = panels_hash_cache_get_base_cid($display);

  if ($pane) {
    $id .= '-' . $pane->pid;
  }

  if (user_access('view pane admin links')) {
    $id .= '-admin';
  }

  // For each selected ganularity situation, add it to the "hashable-string"
  // This hashable string becomes our cache-key (after it's hashed to shorten it)
  $hashable_string = '';

  if ($conf['granularity']['args']) {
    foreach ($args as $arg) {
      $hashable_string .= $arg;
    }
  }
  if ($conf['granularity']['context']) {
    if (!is_array($contexts)) {
      $contexts = array($contexts);
    }
    foreach ($contexts as $context) {
      // Avoid problems with Panelizer.
      if (is_object($context->data) && isset($context->data->panelizer)) {
        $data = clone $context->data;
        unset($data->panelizer);
        $hashable_string .= serialize($data);
      }
      else {
        $hashable_string .= serialize($context->data);
      }
    }
  }
  if ($conf['granularity']['path']) {
    $hashable_string .= implode('/', arg());
  }

  if ($conf['granularity']['url']) {
    $url = 'http://' . $_SERVER['HTTP_HOST'] . request_uri(TRUE);
    
    $get = $_GET;
    unset($get['q']);

    // If panels-hash-cache-reset is set, then unset it from the query to hash
    if (isset($_GET['panels-hash-cache-reset'])) {
      unset($get['panels-hash-cache-reset']);
    }
    
    if (!empty($get)) {
      $url .= '&' . http_build_query($get);
    }
    
    $hashable_string .= $url;
  }

  // Support for the Domain Access module.
  if (module_exists('domain') && $conf['granularity']['domain']) {
    $current_domain = domain_get_domain();
    $hashable_string .= '-domain' . $current_domain['domain_id'];
  }

  if ($conf['granularity']['user']) {
    // For user we hash on their UID which is unique.
    global $user;
    $hashable_string .= $user->uid;
  }

  // Granularity: Current page's user roles.
  if ($conf['granularity']['user_role']) {
    global $user;
 
    // Anonymous.
    if (isset($user->roles[DRUPAL_ANONYMOUS_RID])) {
      $hashable_string .= ':anon';
    }
 
    // Admin.
    elseif ($user->uid == 1) {
      $hashable_string .= ':admin';
    }
 
    // Authenticated roles.
    else {
      // Clean up the settings.
      if (!empty($conf['granularity_roles_as_anon']) && is_array($conf['granularity_roles_as_anon'])) {
        // Filter out the empty values.
        $conf['granularity_roles_as_anon'] = array_filter($conf['granularity_roles_as_anon']);
      }
 
      // User only has one role, i.e. 'authenticated user'.
      if (count($user->roles) == 1) {
        // Optionally consider authenticated users who have no other roles to be
        // the same as anonymous users.
        if (!empty($conf['granularity_roles_as_anon'][DRUPAL_AUTHENTICATED_RID])) {
          $hashable_string .= ':anon';
        }
        else {
          $hashable_string .= ':auth';
        }
      }
 
      // The user has more than one role.
      else {
        $users_roles = $user->roles;
 
        // Make sure the "authenticated user" role isn't caught by mistake.
        unset($users_roles[DRUPAL_AUTHENTICATED_RID]);
        $users_roles = array_keys($users_roles);
 
        // Check if one of the user's other roles is flagged as anonymous.
        if (array_intersect($users_roles, $conf['granularity_roles_as_anon'])) {
          $hashable_string .= ':anon';
        }
 
        // The user has more than one role and none of them are marked as
        // 'anonymous'.
        else {
          // Optionally index against the first role.
          if (isset($conf['granularity_role_selection']) && $conf['granularity_role_selection'] == 'first') {
            $hashable_string .= ':role_' . array_shift($users_roles);
          }
          // Optionally index against the last role.
          elseif (isset($conf['granularity_role_selection']) && $conf['granularity_role_selection'] == 'last') {
            $hashable_string .= ':role_' . array_pop($users_roles);
          }
          // By default index against the user's concatenated roles.
          else {
            $hashable_string .= ':roles_' . implode(',', $users_roles);
          }
        }
      }
    }
  }

  if ($hashable_string) {
    $id .= '-' . sha1($hashable_string);
  }

  if (module_exists('locale')) {
    global $language;
    $id .= '-' . $language->language;
  }

  if (isset($pane->configuration['use_pager']) && $pane->configuration['use_pager'] == 1 && isset($_GET['page'])) {
    $id .= '-p' . check_plain($_GET['page']);
  }

  return $id;
}

function panels_hash_cache_settings_form($conf, $display, $pid) {
  ctools_include('dependent');

  $options = drupal_map_assoc(array(15, 30, 60, 120, 180, 240, 300, 600, 900, 1200, 1800, 3600, 7200, 14400, 28800, 43200, 86400, 172800, 259200, 345600, 604800), 'format_interval');
  $form['lifetime'] = array(
    '#title' => t('Maximum Lifetime'),
    '#type' => 'select',
    '#options' => $options,
    '#default_value' => $conf['lifetime'],
    '#description' => t('The cache will be expired after this amount of time elapses. Note that the cache will also automatically be rotated (expired) if any of the granularity-circumstances (set below) are changed or updated.')
  );

  $form['granularity'] = array(
    '#title' => t('Granularity'),
    '#type' => 'checkboxes',
    '#options' => array(
      'args' => t('Arguments'),
      'context' => t('Context'),
      'url' => t('Full URL (including query strings)'),
      'path' => t('Drupal Menu Path and Arguments'),
      'user' => t('Active User'),
      'user_role' => t('Active User\'s Role'),
    ),
    '#description' => t('The methods in which you wish to store and expire the cache. A change in any of these things will result in a new cache being generated. If more than one is selected, a unique cache will be created for that combination and the cache expires upon a change if any of the components.'),
    '#default_value' => $conf['granularity'],
  );

  $roles = user_roles(TRUE);
  $roles[DRUPAL_AUTHENTICATED_RID] .= ' ' . t('(all logged in users with no additional roles)');
  $form['granularity_roles_as_anon'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Treat users with these role(s) as anonymous'),
    '#options' => $roles,
    '#default_value' => !empty($conf['granularity_roles_as_anon']) ? $conf['granularity_roles_as_anon'] : array(),
    '#description' => t("If the user is logged in and has one of these roles, cache the pane as if the user is anonymous. The 'authenticated user' role is only used if the user does not have any other role."),
    '#dependency' => array(
      'edit-settings-granularity-user-role' => array(1),
    ),
  );

  $form['granularity_role_selection'] = array(
    '#type' => 'radios',
    '#title' => t('How to handle multiple roles:'),
    '#default_value' => !empty($conf['granularity_role_selection']) ? $conf['granularity_role_selection'] : 'all',
    '#options' => array(
      'all' => t('Use all matching roles; this can lead to a huge number of cache objects due to the possible combinations of roles.'),
      'first' => t('Only use first matching role; useful when roles decrease in permissiveness, e.g. Admin, Editor, Author.'),
      'last' => t('Only use last matching role; useful when roles increase in permissiveness, e.g. Author, Editor, Admin.'),
    ),
    '#description' => t('If the user has more than one role, control how the additional roles are considered. This selection does not take into consideration the automatic "authenticated user" role.'),
    '#dependency' => array(
      'edit-settings-granularity-user-role' => array(1),
    ),
  );

  // Add support for the Domain Access module.
  if (module_exists('domain')) {
    $form['granularity']['#options']['domain'] = t('Current domain (Domain Access)');
  }

  return $form;
}
