<?php
/**
 * @file
 * farnet_mailchimp.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function farnet_mailchimp_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_newsletter_myfarnet'.
  $field_instances['user-user-field_newsletter_myfarnet'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_newsletter_myfarnet',
    'label' => 'Keep me informed on FARNET activities',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Interest Groups',
      'mergefields' => array(
        'EMAIL' => '[user:mail]',
        'FNAME' => '[user:field-firstname]',
        'LNAME' => '[user:field-lastname]',
        'advanced' => 0,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 0,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 10,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Keep me informed on FARNET activities');

  return $field_instances;
}
