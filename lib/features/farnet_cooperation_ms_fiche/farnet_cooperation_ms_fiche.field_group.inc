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
  $field_group->identifier = 'group_ms_fiche_more_information|node|ms_fiche|form';
  $field_group->group_name = 'group_ms_fiche_more_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Further information',
    'weight' => '6',
    'children' => array(
      0 => 'field_further_information',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Further information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ms-fiche-more-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_ms_fiche_more_information|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ms_fiche_organisations|node|ms_fiche|form';
  $field_group->group_name = 'group_ms_fiche_organisations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisations',
    'weight' => '1',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ms-fiche-organisations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ms_fiche_organisations|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ms_fiche_publication|node|ms_fiche|form';
  $field_group->group_name = 'group_ms_fiche_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '8',
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
        'classes' => 'group-ms-fiche-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ms_fiche_publication|node|ms_fiche|form'] = $field_group;

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
      0 => 'field_farnet_abstract',
      1 => 'field_picture',
      2 => 'title_field',
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
    'label' => 'Eligibility & financing rules',
    'weight' => '5',
    'children' => array(
      0 => 'field_financing_and_co_financing',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Eligibility & financing rules',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ne-ms-fiche-facfoycp field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'weight' => '2',
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
    'label' => 'Organising cooperation',
    'weight' => '3',
    'children' => array(
      0 => 'field_level_at_which_cooperation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Organising cooperation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ne-ms-fiche-lawoih field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_ne_ms_fiche_lawoih|node|ms_fiche|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_ms_fiche_metadata|node|ms_fiche|form';
  $field_group->group_name = 'group_ne_ms_fiche_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ms_fiche';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_metadata|node|ms_fiche|form'] = $field_group;

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
    'weight' => '4',
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
    'weight' => '7',
    'children' => array(
      0 => 'field_sea_basins',
      1 => 'field_term_country',
      2 => 'field_term_theme',
      3 => 'field_type_of_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-ms-fiche-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_ms_fiche_taxonomy|node|ms_fiche|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Eligibility & financing rules');
  t('Further information');
  t('Introduction');
  t('Metadata');
  t('Organisations');
  t('Organising cooperation');
  t('Possible partners');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
