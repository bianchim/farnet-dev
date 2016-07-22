<?php
/**
 * @file
 * farnet_discussion.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_discussion_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_discussion_content|node|farnet_discussion|form';
  $field_group->group_name = 'group_discussion_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'farnet_discussion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_ne_body',
      1 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-discussion-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_discussion_content|node|farnet_discussion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_discussion_metadata|node|farnet_discussion|form';
  $field_group->group_name = 'group_discussion_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'farnet_discussion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-discussion-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_discussion_metadata|node|farnet_discussion|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');

  return $field_groups;
}
