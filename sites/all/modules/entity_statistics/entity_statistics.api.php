<?php
/**
 * @file
 * Hooks provided by the entity_statistics module.
 */

/**
 * Allows alter which entity types are enabled for entity_statistics.
 *
 * @param array $types
 *   Entity types for entity_statistics is enabled.
 */
function hook_entity_statistics_entity_types_enabled_alter(&$types) {
  $types[] = 'custom_entity';
}
