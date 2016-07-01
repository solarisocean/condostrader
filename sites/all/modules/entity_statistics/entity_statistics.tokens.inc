<?php
/**
 * @file
 * Builds placeholder replacement tokens for entity_statistics.
 */

/**
 * Implements hook_token_info().
 */
function entity_statistics_token_info() {
  $entity_types_enabled = entity_statistics_entity_types_enabled();
  $entity_statistics_tokens['total-count'] = array(
    'name' => t("Number of views"),
    'description' => t("The number of visitors who have read the entity."),
  );
  $entity_statistics_tokens['day-count'] = array(
    'name' => t("Views today"),
    'description' => t("The number of visitors who have read the entity today."),
  );
  $entity_statistics_tokens['last-view'] = array(
    'name' => t("Last view"),
    'description' => t("The date on which a visitor last read the entity."),
    'type' => 'date',
  );

  $tokens = array();
  foreach ($entity_types_enabled as $entity_type) {
    $tokens[$entity_type] = $entity_statistics_tokens;
  }

  return array(
    'tokens' => $tokens,
  );
}

/**
 * Implements hook_tokens().
 */
function entity_statistics_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();
  $entity_types_enabled = entity_statistics_entity_types_enabled();

  if (in_array($type, $entity_types_enabled) && !empty($data[$type])) {
    $entity_info = entity_get_info($type);
    $entity = $data[$type];
    $entity_id = $entity->{$entity_info['entity keys']['id']};

    foreach ($tokens as $name => $original) {
      if ($name == 'total-count') {
        $entity_statistics = entity_statistics_get($type, $entity_id);
        $replacements[$original] = $entity_statistics['totalcount'];
      }
      elseif ($name == 'day-count') {
        $entity_statistics = entity_statistics_get($type, $entity_id);
        $replacements[$original] = $entity_statistics['daycount'];
      }
      elseif ($name == 'last-view') {
        $entity_statistics = entity_statistics_get($type, $entity_id);
        $replacements[$original] = format_date($entity_statistics['timestamp']);
      }
    }

    if ($created_tokens = token_find_with_prefix($tokens, 'last-view')) {
      $entity_statistics = entity_statistics_get($type, $entity_id);
      $replacements += token_generate('date', $created_tokens, array('date' => $entity_statistics['timestamp']), $options);
    }
  }

  return $replacements;
}
