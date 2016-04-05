<?php
/**
 * @file
 * farnet_news.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_news_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_farnet_abstract'.
  $field_bases['field_farnet_abstract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_farnet_abstract',
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
