<?php

/**
 * @file
 * myfarnet_cooperation_idea.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myfarnet_cooperation_idea_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myfarnet_cp_idea_content|node|myfarnet_cooperation_idea|form';
  $field_group->group_name = 'group_myfarnet_cp_idea_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myfarnet_cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'field_ne_body',
      2 => 'field_picture',
      3 => 'field_farnet_abstract',
      4 => 'field_related_documents',
      5 => 'field_term_country',
      6 => 'field_preferred_countries',
      7 => 'field_term_theme',
      8 => 'field_sea_basins',
      9 => 'field_type_of_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myfarnet-cp-idea-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_myfarnet_cp_idea_content|node|myfarnet_cooperation_idea|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myfarnet_cp_idea_metadata|node|myfarnet_cooperation_idea|form';
  $field_group->group_name = 'group_myfarnet_cp_idea_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myfarnet_cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
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
        'classes' => 'group-myfarnet-cp-idea-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_myfarnet_cp_idea_metadata|node|myfarnet_cooperation_idea|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');

  return $field_groups;
}
