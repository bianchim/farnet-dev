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
      0 => 'body',
      1 => 'field_abstract',
      2 => 'title',
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
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_tags',
      3 => 'scheduler_settings',
      4 => 'language',
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
      1 => 'field_term_publication_channels',
      2 => 'field_publication_date',
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
  $field_group->identifier = 'group_ssm_taxonomy|node|summary_sheet_method|form';
  $field_group->group_name = 'group_ssm_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'summary_sheet_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '8',
    'children' => array(
      0 => 'field_term_theme',
      1 => 'field_term_country',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
