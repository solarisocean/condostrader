<?php
/**
 * @file
 * ctf_configurations_flag.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function ctf_configurations_flag_flag_default_flags() {
  $flags = array();
  // Exported flag: "Bookmarks".
  $flags['bookmarks'] = array(
    'entity_type' => 'node',
    'title' => 'Bookmarks',
    'global' => 0,
    'types' => array(
      0 => 'article',
    ),
    'flag_short' => 'Bookmark this',
    'flag_long' => 'Add this post to your bookmarks',
    'flag_message' => 'This post has been added to your bookmarks',
    'unflag_short' => 'Unbookmark this',
    'unflag_long' => 'Remove this post from your bookmarks',
    'unflag_message' => 'This post has been removed from your bookmarks',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 1,
      'teaser' => 1,
    ),
    'show_as_field' => FALSE,
    'show_on_form' => 1,
    'access_author' => '',
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'ctf_configurations_flag',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  // Exported flag: "Drealty flag".
  $flags['drealty_flag'] = array(
    'entity_type' => 'drealty_listing',
    'title' => 'Drealty flag',
    'global' => 0,
    'types' => array(
      0 => 'toronto_condo',
    ),
    'flag_short' => '&#13;',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => '&#13;',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'search' => 0,
      'list' => 0,
      'gallery' => 0,
      'diff_standard' => 0,
      'token' => 0,
    ),
    'show_as_field' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 1,
    'module' => 'ctf_configurations_flag',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
