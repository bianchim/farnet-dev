<?php

/**
 * @file
 * farnet_gp_project.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_gp_project_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_a5_public_contribution'.
  $field_bases['field_a5_public_contribution'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_a5_public_contribution',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 1,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_b1_other_contribution'.
  $field_bases['field_b1_other_contribution'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_b1_other_contribution',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
    ),
    'locked' => 1,
    'module' => 'field_collection',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_blank_items' => 1,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_contribution_figure'.
  $field_bases['field_contribution_figure'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contribution_figure',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_contribution_label'.
  $field_bases['field_contribution_label'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contribution_label',
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
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_gpp_a1_eu_contribution'.
  $field_bases['field_gpp_a1_eu_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_a1_eu_contribution',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_a2_public_contribution'.
  $field_bases['field_gpp_a2_public_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_a2_public_contribution',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_a3_public_contribution'.
  $field_bases['field_gpp_a3_public_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_a3_public_contribution',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_a4_public_contribution'.
  $field_bases['field_gpp_a4_public_contribution'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_a4_public_contribution',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_a_flag_grant'.
  $field_bases['field_gpp_a_flag_grant'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_a_flag_grant',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_activities'.
  $field_bases['field_gpp_activities'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_activities',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_gpp_b2_lead_partner'.
  $field_bases['field_gpp_b2_lead_partner'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_b2_lead_partner',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_b_beneficiary'.
  $field_bases['field_gpp_b_beneficiary'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_b_beneficiary',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_context_and_needs'.
  $field_bases['field_gpp_context_and_needs'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_context_and_needs',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_gpp_lessons'.
  $field_bases['field_gpp_lessons'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_lessons',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_gpp_objectives'.
  $field_bases['field_gpp_objectives'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_objectives',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_gpp_results'.
  $field_bases['field_gpp_results'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_results',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_gpp_total_project_cost'.
  $field_bases['field_gpp_total_project_cost'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_total_project_cost',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => ',',
      'entity_translation_sync' => FALSE,
      'precision' => 20,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_gpp_transferability'.
  $field_bases['field_gpp_transferability'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_gpp_transferability',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  return $field_bases;
}
