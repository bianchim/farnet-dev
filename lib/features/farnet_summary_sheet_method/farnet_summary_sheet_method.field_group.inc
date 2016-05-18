<?php
/**
 * @file
 * farnet_summary_sheet_method.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_summary_sheet_method_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_content|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_abstract',
      1 => 'field_id',
      2 => 'field_picture',
      3 => 'field_title_official',
      4 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_content|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_description|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '8',
    'children' => array(
      0 => 'field_ne_body',
      1 => 'field_objective',
      2 => 'field_ssm_activities',
      3 => 'field_ssm_lessons',
      4 => 'field_ssm_main_achievements',
      5 => 'field_ssm_transferability',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_description|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_location|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '7',
    'children' => array(
      0 => 'field_area',
      1 => 'field_term_country',
      2 => 'field_term_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_location|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_media|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '11',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_media|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_metadata|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'group_content_access',
      2 => 'og_group_ref',
      3 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_metadata|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_organisations|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_organisations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisations',
    'weight' => '5',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-organisations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_organisations|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_publication|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '1',
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
        'classes' => 'group-ssm-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_publication|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_resources|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '9',
    'children' => array(
      0 => 'field_ssm_financial_resources',
      1 => 'field_ssm_other_resources',
      2 => 'field_ssm_skills',
      3 => 'field_ssm_staff_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_resources|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_taxonomy|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '12',
    'children' => array(
      0 => 'field_term_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_taxonomy|node|summary_sheet_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ssm_timeframe|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_timeframe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '10',
    'children' => array(
      0 => 'field_dates_start_end',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ssm-timeframe field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ssm_timeframe|node|summary_sheet_method|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Description');
  t('Location');
  t('Media');
  t('Metadata');
  t('Organisations');
  t('Publication');
  t('Resources');
  t('Taxonomy');
  t('Timeframe of implementation');

  return $field_groups;
}
