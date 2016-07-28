<?php

/**
 * @file
 * farnet_gp_short_story.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_gp_short_story_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_collection_project_phase'.
  $field_bases['field_collection_project_phase'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_collection_project_phase',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_eu_contribution'.
  $field_bases['field_eu_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eu_contribution',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_eu_contribution_eardf'.
  $field_bases['field_eu_contribution_eardf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eu_contribution_eardf',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_eu_contribution_emff'.
  $field_bases['field_eu_contribution_emff'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eu_contribution_emff',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_eu_contribution_erdf'.
  $field_bases['field_eu_contribution_erdf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eu_contribution_erdf',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_eu_contribution_esf'.
  $field_bases['field_eu_contribution_esf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eu_contribution_esf',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_eu_contribution_oeu'.
  $field_bases['field_eu_contribution_oeu'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_eu_contribution_oeu',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_other_public_contribution'.
  $field_bases['field_other_public_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_other_public_contribution',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_phase'.
  $field_bases['field_phase'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_phase',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_private_contribution'.
  $field_bases['field_private_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_private_contribution',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_public_contrib_local'.
  $field_bases['field_public_contrib_local'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_public_contrib_local',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_public_contrib_national'.
  $field_bases['field_public_contrib_national'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_public_contrib_national',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_public_contrib_regional'.
  $field_bases['field_public_contrib_regional'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_public_contrib_regional',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  // Exported field_base: 'field_quote_author'.
  $field_bases['field_quote_author'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quote_author',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_quote_text'.
  $field_bases['field_quote_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_quote_text',
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

  // Exported field_base: 'field_total_cost'.
  $field_bases['field_total_cost'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_total_cost',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_float',
  );

  return $field_bases;
}
