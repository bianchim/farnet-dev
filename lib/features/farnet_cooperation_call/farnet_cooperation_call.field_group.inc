<?php

/**
 * @file
 * farnet_cooperation_call.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_cooperation_call_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coop_call_flag|node|cooperation_call|form';
  $field_group->group_name = 'group_coop_call_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Flag',
    'weight' => '1',
    'children' => array(
      0 => 'field_flag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coop-call-flag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_coop_call_flag|node|cooperation_call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_coop_call_publication|node|cooperation_call|form';
  $field_group->group_name = 'group_coop_call_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '4',
    'children' => array(
      0 => 'field_publication_abstract',
      1 => 'field_publication_date',
      2 => 'field_term_publication_channels',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-coop-call-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_coop_call_publication|node|cooperation_call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_call_content|node|cooperation_call|form';
  $field_group->group_name = 'group_ne_coop_call_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_call',
      1 => 'field_farnet_abstract',
      2 => 'field_ne_body',
      3 => 'field_picture',
      4 => 'title_field',
      5 => 'field_deadline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-call-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_call_content|node|cooperation_call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_call_metadata|node|cooperation_call|form';
  $field_group->group_name = 'group_ne_coop_call_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '5',
    'children' => array(
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-call-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_call_metadata|node|cooperation_call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_call_organisation|node|cooperation_call|form';
  $field_group->group_name = 'group_ne_coop_call_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation',
    'weight' => '2',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-call-organisation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_call_organisation|node|cooperation_call|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_coop_call_taxonomy|node|cooperation_call|form';
  $field_group->group_name = 'group_ne_coop_call_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'cooperation_call';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '3',
    'children' => array(
      0 => 'field_sea_basins',
      1 => 'field_term_theme',
      2 => 'field_term_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-coop-call-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_coop_call_taxonomy|node|cooperation_call|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Flag');
  t('Metadata');
  t('Organisation');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
