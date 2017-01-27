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
  $batch = array(
    'operations' => array(
      array('_delete_inactive_listings_operation', array()),
    ),
    'finished' => '_delete_inactive_listings_finished',
    'title' => t('Delete all inactive listings and update buildings'),
    'init_message' => t('Starting.'),
    'progress_message' => t('Processed @current out of @total.'),
    'error_message' => t('Batch has encountered an error.'),
    'file' => 'ctrader_mls.module',
  );
  batch_set($batch);
  drush_backend_batch_process();
}