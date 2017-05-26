<?php

/**
 * @file
 * farnet_communities.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_communities_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_weight'.
  $field_bases['field_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_weight',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
