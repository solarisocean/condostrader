<?php

/**
 * @file
 * Views integration.
 */

/**
 * Implements hook_views_data().
 */
function entity_statistics_views_data() {

  $data['entity_counter']['table']['group'] = t('Entity statistics');

  $entity_types_enabled = variable_get('entity_statistics_count_entity_views_entity_types', array());
  $entity_types_enabled = array_filter($entity_types_enabled);
  foreach (array_keys($entity_types_enabled) as $entity_type) {
    $entity_info = entity_get_info($entity_type);
    $entity_id_field = $entity_info['entity keys']['id'];
    $data['entity_counter']['table']['join'][$entity_info['base table']] = array(
      'left_field' => $entity_id_field,
      'field' => 'entity_id',
    );
  }

  $data['entity_counter']['totalcount'] = array(
    'title' => t('Total views'),
    'help' => t('The total number of times the entity has been viewed.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['entity_counter']['daycount'] = array(
    'title' => t('Views today'),
    'help' => t('The total number of times the entity has been viewed today.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  $data['entity_counter']['timestamp'] = array(
    'title' => t('Most recent view'),
    'help' => t('The most recent time the entity has been viewed.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );
  return $data;
}
