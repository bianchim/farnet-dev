<?php

/**
 * @file
 * myfarnet_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myfarnet_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myfarnet_event_content|node|myfarnet_event|form';
  $field_group->group_name = 'group_myfarnet_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myfarnet_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_term_country',
      2 => 'field_picture',
      3 => 'field_ne_body',
      4 => 'field_term_theme',
      5 => 'field_related_documents',
      6 => 'title_field',
      7 => 'field_dates',
      8 => 'field_city',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myfarnet-event-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_myfarnet_event_content|node|myfarnet_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myfarnet_event_metadata|node|myfarnet_event|form';
  $field_group->group_name = 'group_myfarnet_event_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myfarnet_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myfarnet-event-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_myfarnet_event_metadata|node|myfarnet_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');

  return $field_groups;
}
