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
  $field_group->identifier = 'group_factsheet_flag_area|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Area',
    'weight' => '1',
    'children' => array(
      0 => 'field_ff_aquaculture',
      1 => 'field_ff_description',
      2 => 'field_ff_fishing',
      3 => 'field_ff_population',
      4 => 'field_ff_population_density',
      5 => 'field_ff_processing',
      6 => 'field_ff_protected_areas',
      7 => 'field_ff_surface_area',
      8 => 'field_ff_total_employment',
      9 => 'field_ff_women_employment',
      10 => 'field_sea_basins',
      11 => 'field_type_of_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Area',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_area',
        'classes' => 'group-factsheet-flag-area field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_area|node|factsheet_flag|default'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_ff_aquaculture',
      1 => 'field_ff_description',
      2 => 'field_ff_fishing',
      3 => 'field_ff_population',
      4 => 'field_ff_population_density',
      5 => 'field_ff_processing',
      6 => 'field_ff_protected_areas',
      7 => 'field_ff_surface_area',
      8 => 'field_ff_total_employment',
      9 => 'field_ff_women_employment',
      10 => 'field_sea_basins',
      11 => 'field_type_of_area',
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
  $field_group->identifier = 'group_factsheet_flag_contact|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAG Contacts',
    'weight' => '12',
    'children' => array(
      0 => 'field_collection_language',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG Contacts',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_contact',
        'classes' => 'group-factsheet-flag-contact field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_contact|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'FLAG Contacts',
    'weight' => '11',
    'children' => array(
      0 => 'field_collection_language',
      1 => 'field_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'FLAG Contacts',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-contact field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_contact|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_content|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAG',
    'weight' => '0',
    'children' => array(
      0 => 'field_ff_code',
      1 => 'field_ff_programming_period',
      2 => 'field_term_country',
      3 => 'title_field',
      4 => 'field_collection_region',
      5 => 'field_picture',
      6 => 'field_title_official',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_content',
        'classes' => 'group-factsheet-flag-content field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_content|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'FLAG',
    'weight' => '0',
    'children' => array(
      0 => 'field_ff_code',
      1 => 'field_ff_programming_period',
      2 => 'field_ne_body',
      3 => 'title_field',
      4 => 'field_farnet_abstract',
      5 => 'field_picture',
      6 => 'field_title_official',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'FLAG',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_content|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_cooperation|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_cooperation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Expertise & cooperation',
    'weight' => '7',
    'children' => array(
      0 => 'field_ff_budget_cooperation',
      1 => 'field_ff_expertise_cooperation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Expertise & cooperation',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_cooperation',
        'classes' => 'group-factsheet-flag-cooperation field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_cooperation|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'Expertise & cooperation',
    'weight' => '7',
    'children' => array(
      0 => 'field_ff_budget_cooperation',
      1 => 'field_ff_expertise_cooperation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Expertise & cooperation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_cooperation|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_funding|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '3',
    'children' => array(
      0 => 'field_ff_emff',
      1 => 'field_ff_funds',
      2 => 'field_ff_ms_co_financing',
      3 => 'field_ff_multi_funding',
      4 => 'field_ff_multi_funding_txt',
      5 => 'field_ff_sources_co_funding',
      6 => 'field_ff_total_public_budget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_funding',
        'classes' => 'group-factsheet-flag-funding field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_funding|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_funding|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '3',
    'children' => array(
      0 => 'field_ff_emff',
      1 => 'field_ff_funds',
      2 => 'field_ff_ms_co_financing',
      3 => 'field_ff_multi_funding',
      4 => 'field_ff_multi_funding_txt',
      5 => 'field_ff_sources_co_funding',
      6 => 'field_ff_total_public_budget',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-funding field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_funding|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_ideas|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_ideas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cooperation ideas',
    'weight' => '8',
    'children' => array(
      0 => 'field_view_cooperation_ideas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Cooperation ideas',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_ideas',
        'classes' => 'group-factsheet-flag-ideas field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_ideas|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_links|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links with LEADER or other CLLD groups',
    'weight' => '9',
    'children' => array(
      0 => 'field_ff_links_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Links with LEADER or other CLLD groups',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_links',
        'classes' => 'group-factsheet-flag-links field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_links|node|factsheet_flag|default'] = $field_group;

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
    'weight' => '8',
    'children' => array(
      0 => 'field_ff_collaboration',
      1 => 'field_ff_links_description',
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
  $field_group->identifier = 'group_factsheet_flag_location|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '14',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_collection_region',
      2 => 'field_latitude',
      3 => 'field_longitude',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_location|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_map|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '14',
    'children' => array(
      0 => 'field_interactive_map',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Map',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_map',
        'classes' => 'group-factsheet-flag-map field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_map|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_map|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '12',
    'children' => array(
      0 => 'field_interactive_map',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-map field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_map|node|factsheet_flag|form'] = $field_group;

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
    'weight' => '16',
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
  $field_group->identifier = 'group_factsheet_flag_partnership|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_partnership';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partnership',
    'weight' => '10',
    'children' => array(
      0 => 'field_ff_accountable_body',
      1 => 'field_ff_environmental_actors',
      2 => 'field_ff_fisheries_actors',
      3 => 'field_ff_members_partnership',
      4 => 'field_ff_number_assembly',
      5 => 'field_ff_number_decision',
      6 => 'field_ff_number_staff',
      7 => 'field_ff_other_non_fisheries',
      8 => 'field_ff_public_actors',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Partnership',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_partnership',
        'classes' => 'group-factsheet-flag-partnership field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_partnership|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_partnership|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_partnership';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partnership',
    'weight' => '9',
    'children' => array(
      0 => 'field_ff_accountable_body',
      1 => 'field_ff_environmental_actors',
      2 => 'field_ff_fisheries_actors',
      3 => 'field_ff_members_partnership',
      4 => 'field_ff_number_assembly',
      5 => 'field_ff_number_decision',
      6 => 'field_ff_number_staff',
      7 => 'field_ff_other_non_fisheries',
      8 => 'field_ff_public_actors',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-flag-partnership field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_flag_partnership|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_practices|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_practices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Good Practice',
    'weight' => '5',
    'children' => array(
      0 => 'field_view_good_practices',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Good Practice',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_practices',
        'classes' => 'group-factsheet-flag-practices field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_practices|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_project_cal|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_project_cal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Calls for proposals',
    'weight' => '6',
    'children' => array(
      0 => 'field_ff_calls_for_projects',
      1 => 'field_ff_calls_for_projects_url',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Calls for proposals',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_project_cal',
        'classes' => 'group-factsheet-flag-project-cal field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_project_cal|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'Calls for proposals',
    'weight' => '6',
    'children' => array(
      0 => 'field_ff_calls_for_projects',
      1 => 'field_ff_calls_for_projects_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Calls for proposals',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_project_cal|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_project_ex|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_project_ex';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project examples',
    'weight' => '4',
    'children' => array(
      0 => 'field_ff_project_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Project examples',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_project_ex',
        'classes' => 'group-factsheet-flag-project-ex field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_project_ex|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'Project examples',
    'weight' => '4',
    'children' => array(
      0 => 'field_ff_project_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Project examples',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'weight' => '15',
    'children' => array(
      0 => 'field_term_publication_channels',
      1 => 'field_publication_abstract',
      2 => 'field_publication_date',
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
  $field_group->identifier = 'group_factsheet_flag_social|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_social';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social media',
    'weight' => '13',
    'children' => array(
      0 => 'field_ff_facebook',
      1 => 'field_ff_google',
      2 => 'field_ff_linkedin',
      3 => 'field_ff_twitter',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Social media',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_social',
        'classes' => 'group-factsheet-flag-social field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_social|node|factsheet_flag|default'] = $field_group;

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
    'weight' => '13',
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
  $field_group->identifier = 'group_factsheet_flag_strategy|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_strategy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAG strategy',
    'weight' => '2',
    'children' => array(
      0 => 'field_collection_strategy',
      1 => 'field_ff_summary',
      2 => 'field_term_theme',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG strategy',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_strategy',
        'classes' => 'group-factsheet-flag-strategy field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_strategy|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'FLAG Strategy',
    'weight' => '2',
    'children' => array(
      0 => 'field_collection_strategy',
      1 => 'field_ff_summary',
      2 => 'field_term_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'FLAG Strategy',
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
  $field_group->identifier = 'group_factsheet_flag_visuals|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_visuals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '11',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Visuals',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_visuals',
        'classes' => 'group-factsheet-flag-visuals group-visuals field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_visuals|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_visuals|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_visuals';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '10',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Visuals',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-visuals field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_visuals|node|factsheet_flag|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Area');
  t('Calls for proposals');
  t('Cooperation ideas');
  t('Expertise & cooperation');
  t('FLAG');
  t('FLAG Contacts');
  t('FLAG Strategy');
  t('FLAG strategy');
  t('Funding');
  t('Good Practice');
  t('Links with LEADER or other CLLD groups');
  t('Location');
  t('Map');
  t('Metadata');
  t('Partnership');
  t('Project examples');
  t('Publication');
  t('Social media');
  t('Visuals');

  return $field_groups;
}
