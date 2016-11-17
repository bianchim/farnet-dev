<?php

/**
 * @file
 * farnet_cooperation_call.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_cooperation_call_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_call'.
  $field_bases['field_call'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_call',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  return $field_bases;
}
