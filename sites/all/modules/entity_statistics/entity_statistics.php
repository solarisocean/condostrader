<?php

/**
 * @file
 * Handles counts of entity views via Ajax with minimal bootstrap.
 */

/**
 * Root directory of Drupal installation.
 */

define('DRUPAL_ROOT', substr($_SERVER['SCRIPT_FILENAME'], 0, strpos($_SERVER['SCRIPT_FILENAME'], $_SERVER['REQUEST_URI'])));
// Change the directory to the Drupal root.
chdir(DRUPAL_ROOT);

include_once DRUPAL_ROOT . '/includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_VARIABLES);
if (variable_get('entity_statistics_count_entity_views_ajax', 0)) {
  if (isset($_POST['entity_id'])) {
    $entity_id = $_POST['entity_id'];
    $entity_type = $_POST['entity_type'];
    if (is_numeric($entity_id)) {
      db_merge('entity_counter')->key(array('entity_id' => $entity_id))->fields(array(
        'entity_type' => $entity_type,
        'daycount' => 1,
        'totalcount' => 1,
        'timestamp' => REQUEST_TIME,
      ))->expression('daycount', 'daycount + 1')->expression('totalcount', 'totalcount + 1')->execute();
    }
  }
}
