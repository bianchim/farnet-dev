<?php
/**
 * @file
 * farnet_factsheet_flag.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_factsheet_flag_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_area|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Area',
    'weight' => '6',
    'children' => array(
      0 => 'field_ff_aquaculture',
      1 => 'field_ff_coastal_inland',
      2 => 'field_ff_description',
      3 => 'field_ff_fishing',
      4 => 'field_ff_population',
      5 => 'field_ff_population_density',
      6 => 'field_ff_processing',
      7 => 'field_ff_protected_areas',
      8 => 'field_ff_surface_area',
      9 => 'field_ff_total_employment',
      10 => 'field_ff_women_employment',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Area',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-area field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_area|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_budget|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_budget';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Budget',
    'weight' => '14',
    'children' => array(
      0 => 'field_ff_emff',
      1 => 'field_ff_ms_co_financing',
      2 => 'field_ff_multi_funding',
      3 => 'field_ff_total_public_budget',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-budget field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_budget|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_contact|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '15',
    'children' => array(
      0 => 'field_ff_flag_manager',
      1 => 'field_ff_flag_president',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_contact|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_content|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_ff_code',
      2 => 'field_ff_programming_period',
      3 => 'title_field',
      4 => 'field_title_official',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_content|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_cooperation|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_cooperation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Type of cooperation foreseen',
    'weight' => '11',
    'children' => array(
      0 => 'field_ff_budget_available',
      1 => 'field_ff_tc_interterritorial',
      2 => 'field_ff_tc_other',
      3 => 'field_ff_tc_sea_basin',
      4 => 'field_ff_tc_transnational',
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
  $field_groups['group_factsheet_flag_cooperation|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_language|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language information',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-language field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_language|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_links|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links with LEADER or other CLLD groups',
    'weight' => '13',
    'children' => array(
      0 => 'field_ff_flag_cooperates',
      1 => 'field_ff_flag_cooperates_details',
      2 => 'field_ff_flag_lag',
      3 => 'field_ff_flag_lag_details',
      4 => 'field_ff_flag_legal',
      5 => 'field_ff_flag_legal_details',
      6 => 'field_ff_flag_shares',
      7 => 'field_ff_flag_shares_details',
      8 => 'field_ff_flag_territory',
      9 => 'field_ff_flag_territory_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_links|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_metadata|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'group_content_access',
      1 => 'og_group_ref',
      2 => 'language',
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
  $field_groups['group_factsheet_flag_metadata|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_partenrship|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_partenrship';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partnership',
    'weight' => '12',
    'children' => array(
      0 => 'field_ff_environmental_actors',
      1 => 'field_ff_fisheries_actors',
      2 => 'field_ff_lead_partner',
      3 => 'field_ff_members_partnership',
      4 => 'field_ff_number_assembly',
      5 => 'field_ff_number_decision',
      6 => 'field_ff_other_non_fisheries',
      7 => 'field_ff_public_actors',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-partenrship field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_partenrship|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_project_cal|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_project_cal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Calls for projects',
    'weight' => '9',
    'children' => array(
      0 => 'field_ff_calls_for_projects',
      1 => 'field_ff_calls_for_projects_url',
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
  $field_groups['group_factsheet_flag_project_cal|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_project_ex|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_project_ex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project examples and ideas',
    'weight' => '8',
    'children' => array(),
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
  $field_groups['group_factsheet_flag_project_ex|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_publication|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
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
        'classes' => 'group-factsheet-flag-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_publication|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_social|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social media',
    'weight' => '17',
    'children' => array(
      0 => 'field_ff_facebook',
      1 => 'field_ff_google',
      2 => 'field_ff_linkedin',
      3 => 'field_ff_twitter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-social field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_social|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_staff|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '16',
    'children' => array(
      0 => 'field_ff_number_staff',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-staff field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_staff|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_strategy|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_strategy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Strategy',
    'weight' => '7',
    'children' => array(
      0 => 'field_ff_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Strategy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-strategy field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_strategy|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_taxonomy|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '3',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_term_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_taxonomy|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_thematic|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_thematic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thematic expertise and cooperation',
    'weight' => '10',
    'children' => array(
      0 => 'field_ff_thematic_text',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-thematic field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_thematic|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ff_location|node|factsheet_flag|form';
  $field_group->group_name = 'group_ff_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '5',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_term_region',
      2 => 'field_area',
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
  $field_groups['group_ff_location|node|factsheet_flag|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Area');
  t('Budget');
  t('Calls for projects');
  t('Contact');
  t('Content');
  t('Language information');
  t('Links with LEADER or other CLLD groups');
  t('Location');
  t('Metadata');
  t('Partnership');
  t('Project examples and ideas');
  t('Publication');
  t('Social media');
  t('Staff');
  t('Strategy');
  t('Taxonomy');
  t('Thematic expertise and cooperation');
  t('Type of cooperation foreseen');

  return $field_groups;
}
