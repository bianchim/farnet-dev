<?php
/**
 * @file
 * farnet_mailchimp.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function farnet_mailchimp_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_newsletter_myfarnet'.
  $field_bases['field_newsletter_myfarnet'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_newsletter_myfarnet',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => 'a9a0dc78b9',
      'unsubscribe_action' => 'remove',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
