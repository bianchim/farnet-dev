<?php

/**
 * @file
 * farnet_gp_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_gp_project_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_beneficiary|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_beneficiary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beneficiary',
    'weight' => '5',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Beneficiary',
      'instance_settings' => array(
        'id' => 'group_gp_project_beneficiary',
        'classes' => 'group_gp_project_beneficiary field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_beneficiary|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_beneficiary|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_beneficiary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Beneficiary',
    'weight' => '6',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-project-beneficiary field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_beneficiary|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_content|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_collection_region',
      1 => 'field_id_text',
      2 => 'field_picture',
      3 => 'field_term_country',
      4 => 'field_title_official',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => 'group_gp_project_content',
        'classes' => 'group_gp_project_content field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_content|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_content|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_id_text',
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
  $field_groups['group_gp_project_content|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_cost|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '3',
    'children' => array(
      0 => 'field_a5_public_contribution',
      1 => 'field_b1_other_contribution',
      2 => 'field_gpp_a1_eu_contribution',
      3 => 'field_gpp_a2_public_contribution',
      4 => 'field_gpp_a3_public_contribution',
      5 => 'field_gpp_a4_public_contribution',
      6 => 'field_gpp_a_flag_grant',
      7 => 'field_gpp_b2_lead_partner',
      8 => 'field_gpp_b_beneficiary',
      9 => 'field_gpp_total_project_cost',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding',
      'instance_settings' => array(
        'id' => 'group_gp_project_cost',
        'classes' => 'group_gp_project_cost field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_cost|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_cost|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_cost';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project cost / Funding',
    'weight' => '3',
    'children' => array(
      0 => 'field_a5_public_contribution',
      1 => 'field_b1_other_contribution',
      2 => 'field_gpp_a1_eu_contribution',
      3 => 'field_gpp_a2_public_contribution',
      4 => 'field_gpp_a3_public_contribution',
      5 => 'field_gpp_a4_public_contribution',
      6 => 'field_gpp_a_flag_grant',
      7 => 'field_gpp_b2_lead_partner',
      8 => 'field_gpp_b_beneficiary',
      9 => 'field_gpp_total_project_cost',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-project-cost field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_cost|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_dates|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '4',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_gp_project_dates|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_dates|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
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
        'classes' => 'group-gp-project-dates field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_dates|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_description|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_gpp_activities',
      1 => 'field_gpp_context_and_needs',
      2 => 'field_gpp_lessons',
      3 => 'field_gpp_objectives',
      4 => 'field_gpp_results',
      5 => 'field_gpp_transferability',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'id' => 'group_gp_project_description',
        'classes' => 'group_gp_project_description field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_description|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_description|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '2',
    'children' => array(
      0 => 'field_gpp_activities',
      1 => 'field_gpp_context_and_needs',
      2 => 'field_gpp_lessons',
      3 => 'field_gpp_objectives',
      4 => 'field_gpp_results',
      5 => 'field_gpp_transferability',
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
  $field_groups['group_gp_project_description|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_flag|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAG',
    'weight' => '5',
    'children' => array(
      0 => 'field_flag',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG',
      'instance_settings' => array(
        'id' => 'group_gp_project_flag',
        'classes' => 'group_gp_project_flag field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_flag|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_flag|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
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
        'classes' => 'group-gp-project-flag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_flag|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_location|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '8',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_gp_project_location|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_location|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '9',
    'children' => array(
      0 => 'field_collection_region',
      1 => 'field_term_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-project-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_location|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_media|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '6',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Visuals',
      'instance_settings' => array(
        'id' => 'group_gp_project_media',
        'classes' => 'group_gp_project_media field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_media|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_media|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '7',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-project-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_media|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_metatag|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_metatag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metatag',
    'weight' => '11',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'scheduler_settings',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-project-metatag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_metatag|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_publication|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '9',
    'children' => array(
      0 => 'field_publication_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'id' => 'group_gp_project_publication',
        'classes' => 'group_gp_project_publication field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_publication|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_publication|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '10',
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
        'classes' => 'group-gp-project-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_publication|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_taxonomy|node|gp_project|default';
  $field_group->group_name = 'group_gp_project_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '7',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'id' => 'group_gp_project_taxonomy',
        'classes' => 'group_gp_project_taxonomy field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_project_taxonomy|node|gp_project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_project_taxonomy|node|gp_project|form';
  $field_group->group_name = 'group_gp_project_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '8',
    'children' => array(
      0 => 'field_sea_basins',
      1 => 'field_tags',
      2 => 'field_term_theme',
      3 => 'field_type_of_area',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-project-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_project_taxonomy|node|gp_project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_information|node|gp_project|default';
  $field_group->group_name = 'group_project_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project information',
    'weight' => '4',
    'children' => array(
      0 => 'field_dates_start_end',
      1 => 'field_sea_basins',
      2 => 'field_tags',
      3 => 'field_term_theme',
      4 => 'field_type_of_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Project information',
      'instance_settings' => array(
        'id' => 'group_gp_project_information',
        'classes' => 'group_gp_project_information field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_project_information|node|gp_project|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Beneficiary');
  t('Content');
  t('Description');
  t('FLAG');
  t('Flag');
  t('Funding');
  t('Location');
  t('Media');
  t('Metatag');
  t('Project cost / Funding');
  t('Project information');
  t('Publication');
  t('Taxonomy');
  t('Timeframe of implementation');
  t('Visuals');

  return $field_groups;
}
