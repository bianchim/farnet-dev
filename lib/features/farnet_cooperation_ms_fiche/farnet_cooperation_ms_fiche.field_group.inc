<?php

/**
 * @file
 * farnet_cooperation_ms_fiche.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_cooperation_ms_fiche_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_content|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_farnet_abstract',
      2 => 'field_picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_content|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_facfoycp|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_facfoycp';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Financing and co-financing of your cooperation project',
    'weight' => '4',
    'children' => array(
      0 => 'field_financing_and_co_financing',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-facfoycp field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_facfoycp|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_introduction|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_introduction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '1',
    'children' => array(
      0 => 'field_ne_body',
      1 => 'field_number_flags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-introduction field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_introduction|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_lawoih|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_lawoih';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Level at which cooperation is handled',
    'weight' => '3',
    'children' => array(
      0 => 'field_level_at_which_cooperation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-lawoih field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_lawoih|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_pa|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_pa';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Possible partners',
    'weight' => '2',
    'children' => array(
      0 => 'field_possible_partners',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-pa field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_pa|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_taxonomy|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '5',
    'children' => array(
      0 => 'field_term_theme',
      1 => 'field_sea_basins',
      2 => 'field_type_of_area',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-taxonomy field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_taxonomy|node|ms_fiche|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Financing and co-financing of your cooperation project');
  t('Introduction');
  t('Level at which cooperation is handled');
  t('Possible partners');
  t('Taxonomy');

  return $field_groups;
}
