<?php
/**
 * @file
 * farnet_communities.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_communities_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ch_content|node|community_hidden|form';
  $field_group->group_name = 'group_ch_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community_hidden';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'title_field',
      3 => 'field_weight',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ch-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ch_content|node|community_hidden|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cp_content|node|community_private|form';
  $field_group->group_name = 'group_cp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community_private';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'title_field',
      3 => 'field_weight',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cp-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cp_content|node|community_private|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cp_content|node|community_public|form';
  $field_group->group_name = 'group_cp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'community_public';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'title_field',
      3 => 'field_weight',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cp-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_cp_content|node|community_public|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
