<?php
/**
 * Implements hook_drush_command().
 */
function ctrader_mls_drush_command() {
  $items['delete-inactive-listings'] = array(
    'description' => 'Delete all inactive listings and update buildings',
    'aliases' => array('dil'),
  );
  return $items;
}

/**
 * Callback for the delete-inactive-listings command
 */
function drush_ctrader_mls_delete_inactive_listings() {
  _delete_inactive_listings_operation($context);
}