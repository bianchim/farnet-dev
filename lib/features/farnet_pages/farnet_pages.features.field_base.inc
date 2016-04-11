<?php
/**
 * @file
 * farnet_pages.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_pages_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_publication_abstract'.
  $field_bases['field_publication_abstract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_publication_abstract',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  return $field_bases;
}
