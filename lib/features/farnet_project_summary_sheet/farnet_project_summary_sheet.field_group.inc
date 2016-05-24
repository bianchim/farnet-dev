<?php
/**
 * @file
 * farnet_project_summary_sheet.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_project_summary_sheet_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_beneficiary|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_beneficiary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beneficiary',
    'weight' => '5',
    'children' => array(
      0 => 'field_organisation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary-sheet-beneficiary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_beneficiary|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_content|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
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
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_content|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_cost|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project cost / Funding',
    'weight' => '3',
    'children' => array(
      0 => 'field_a5_public_contribution',
      1 => 'field_b1_other_contribution',
      2 => 'field_pss_a1_eu_contribution',
      3 => 'field_pss_a2_public_contribution',
      4 => 'field_pss_a3_public_contribution',
      5 => 'field_pss_a4_public_contribution',
      6 => 'field_pss_a_flag_grant',
      7 => 'field_pss_b2_lead_partner',
      8 => 'field_pss_b_beneficiary',
      9 => 'field_pss_total_project_cost',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary-sheet-cost field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_cost|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_dates|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '4',
    'children' => array(
      0 => 'field_dates_start_end',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary-sheet-dates field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_dates|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_description|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'field_pss_activities',
      1 => 'field_pss_context_and_needs',
      2 => 'field_pss_lessons',
      3 => 'field_pss_objectives',
      4 => 'field_pss_results',
      5 => 'field_pss_transferability',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_description|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_flag|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
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
        'classes' => 'group-summary-sheet-flag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_flag|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_media|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '7',
    'children' => array(
      0 => 'field_media_upload',
      1 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary-sheet-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_media|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_metatag|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_metatag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metatag',
    'weight' => '9',
    'children' => array(
      0 => 'scheduler_settings',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary-sheet-metatag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_metatag|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_publication|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
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
        'classes' => 'group-summary-sheet-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_publication|node|project_summary_sheet|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_sheet_taxonomy|node|project_summary_sheet|form';
  $field_group->group_name = 'group_summary_sheet_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_summary_sheet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '6',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_term_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-summary-sheet-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_summary_sheet_taxonomy|node|project_summary_sheet|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Beneficiary');
  t('Content');
  t('Description');
  t('Flag');
  t('Media');
  t('Metatag');
  t('Project cost / Funding');
  t('Publication');
  t('Taxonomy');
  t('Timeframe of implementation');

  return $field_groups;
}
