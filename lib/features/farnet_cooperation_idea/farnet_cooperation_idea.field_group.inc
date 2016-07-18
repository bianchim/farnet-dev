<?php

/**
 * @file
 * farnet_cooperation_idea.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_cooperation_idea_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_idea_content|node|cooperation_idea|form';
  $field_group->group_name = 'group_ne_coop_idea_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'field_picture',
      3 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-idea-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_idea_content|node|cooperation_idea|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_idea_flag|node|cooperation_idea|form';
  $field_group->group_name = 'group_ne_coop_idea_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAG',
    'weight' => '2',
    'children' => array(
      0 => 'field_flag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-idea-flag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_idea_flag|node|cooperation_idea|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_idea_metadata|node|cooperation_idea|form';
  $field_group->group_name = 'group_ne_coop_idea_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-idea-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_idea_metadata|node|cooperation_idea|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_idea_organisation|node|cooperation_idea|form';
  $field_group->group_name = 'group_ne_coop_idea_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation',
    'weight' => '3',
    'children' => array(
      0 => 'field_organisation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-idea-organisation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_idea_organisation|node|cooperation_idea|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_idea_taxonomy|node|cooperation_idea|form';
  $field_group->group_name = 'group_ne_coop_idea_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_idea';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '4',
    'children' => array(
      0 => 'field_sea_basins',
      1 => 'field_term_theme',
      2 => 'field_type_of_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-idea-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_idea_taxonomy|node|cooperation_idea|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('FLAG');
  t('Metadata');
  t('Organisation');
  t('Taxonomy');

  return $field_groups;
}
