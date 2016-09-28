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
    'weight' => '2',
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
  $field_group->identifier = 'group_factsheet_flag_budget|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_budget';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Budget',
    'weight' => '10',
    'children' => array(
      0 => 'field_collection_budget',
      1 => 'field_ff_emff',
      2 => 'field_ff_ms_co_financing',
      3 => 'field_ff_multi_funding',
      4 => 'field_ff_total_public_budget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Budget',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_budget',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_budget|node|factsheet_flag|default'] = $field_group;

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
    'weight' => '13',
    'children' => array(
      0 => 'field_collection_budget',
      1 => 'field_ff_emff',
      2 => 'field_ff_ms_co_financing',
      3 => 'field_ff_multi_funding',
      4 => 'field_ff_total_public_budget',
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
      1 => 'field_ff_flag_manager',
      2 => 'field_ff_flag_president',
      3 => 'field_organisation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG Contacts',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_contact',
        'classes' => '',
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
    'weight' => '15',
    'children' => array(
      0 => 'field_collection_language',
      1 => 'field_ff_flag_manager',
      2 => 'field_ff_flag_president',
      3 => 'field_organisation',
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
      2 => 'field_region',
      3 => 'field_term_country',
      4 => 'title_field',
      5 => 'field_area',
      6 => 'field_title_official',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG',
      'instance_settings' => array(
        'id' => '',
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
      0 => 'field_ff_expertise_cooperation',
      1 => 'field_ff_budget_cooperation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Expertise & cooperation',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_cooperation',
        'classes' => '',
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
    'label' => 'Type of cooperation foreseen',
    'weight' => '10',
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
      1 => 'field_ff_ms_co_financing',
      2 => 'field_ff_multi_funding',
      3 => 'field_ff_total_public_budget',
      4 => 'field_ff_funds',
      5 => 'field_ff_multi_funding_txt',
      6 => 'field_ff_sources_co_funding',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding',
      'instance_settings' => array(
        'id' => '',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_ff_emff',
      1 => 'field_ff_ms_co_financing',
      2 => 'field_ff_multi_funding',
      3 => 'field_ff_total_public_budget',
      4 => 'field_ff_funds',
      5 => 'field_ff_multi_funding_txt',
      6 => 'field_ff_sources_co_funding',
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
  $field_group->identifier = 'group_factsheet_flag_language|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_language';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language information',
    'weight' => '14',
    'children' => array(
      0 => 'field_collection_language',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Language information',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_language',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_language|node|factsheet_flag|default'] = $field_group;

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
    'children' => array(
      0 => 'field_collection_language',
    ),
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
        'classes' => '',
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
    'weight' => '10',
    'children' => array(
      0 => 'field_ff_links_description',
      1 => 'field_ff_collaboration',
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
        'id' => '',
        'classes' => 'group-factsheet-flag-map field-group-fieldset',
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
    'weight' => '16',
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
  $field_group->identifier = 'group_factsheet_flag_media|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_media';
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
        'id' => '',
        'classes' => 'group-factsheet-flag-media field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_media|node|factsheet_flag|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_flag_media|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '14',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Visuals',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-media field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_media|node|factsheet_flag|form'] = $field_group;

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
    'weight' => '19',
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
  $field_group->identifier = 'group_factsheet_flag_partenrship|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_partenrship';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Partnership',
    'weight' => '10',
    'children' => array(
      0 => 'field_ff_environmental_actors',
      1 => 'field_ff_fisheries_actors',
      2 => 'field_ff_members_partnership',
      3 => 'field_ff_number_assembly',
      4 => 'field_ff_number_decision',
      5 => 'field_ff_number_staff',
      6 => 'field_ff_other_non_fisheries',
      7 => 'field_ff_public_actors',
      8 => 'field_ff_accountable_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Partnership',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_partenrship',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_partenrship|node|factsheet_flag|default'] = $field_group;

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
      2 => 'field_ff_members_partnership',
      3 => 'field_ff_number_assembly',
      4 => 'field_ff_number_decision',
      5 => 'field_ff_number_staff',
      6 => 'field_ff_other_non_fisheries',
      7 => 'field_ff_public_actors',
      8 => 'field_ff_accountable_body',
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
  $field_group->identifier = 'group_factsheet_flag_practice|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_practice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Good Practice',
    'weight' => '5',
    'children' => array(
      0 => 'field_ff_good_practice',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Good Practice',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-factsheet-flag-practice field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_practice|node|factsheet_flag|default'] = $field_group;

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
        'classes' => '',
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
    'weight' => '7',
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
        'classes' => '',
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
    'weight' => '5',
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
    'weight' => '18',
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
        'classes' => '',
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
  $field_group->identifier = 'group_factsheet_flag_staff|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '12',
    'children' => array(
      0 => 'field_ff_number_staff',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Staff',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_staff',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_staff|node|factsheet_flag|default'] = $field_group;

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
    'weight' => '3',
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
  $field_group->identifier = 'group_factsheet_flag_taxonomy|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_flag_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '2',
    'children' => array(),
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
  $field_group->identifier = 'group_factsheet_flag_thematic|node|factsheet_flag|default';
  $field_group->group_name = 'group_factsheet_flag_thematic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thematic expertise and cooperation',
    'weight' => '6',
    'children' => array(
      0 => 'field_ff_thematic_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Thematic expertise and cooperation',
      'instance_settings' => array(
        'id' => 'group_factsheet_flag_thematic',
        'classes' => 'group-factsheet-flag-thematic field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_flag_thematic|node|factsheet_flag|default'] = $field_group;

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
    'label' => 'Expertise & cooperation',
    'weight' => '8',
    'children' => array(
      0 => 'field_ff_expertise_cooperation',
      1 => 'field_ff_budget_cooperation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Expertise & cooperation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-factsheet-flag-thematic field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_factsheet_flag_thematic|node|factsheet_flag|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_good_practice|node|factsheet_flag|form';
  $field_group->group_name = 'group_factsheet_good_practice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_flag';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Good Practice',
    'weight' => '6',
    'children' => array(
      0 => 'field_ff_good_practice',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-good-practice field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_good_practice|node|factsheet_flag|form'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_region',
      1 => 'field_term_country',
      2 => 'field_area',
      3 => 'field_latitude',
      4 => 'field_longitude',
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
  t('Calls for proposals');
  t('Expertise & cooperation');
  t('FLAG');
  t('FLAG Contacts');
  t('FLAG Strategy');
  t('FLAG strategy');
  t('Funding');
  t('Good Practice');
  t('Language information');
  t('Links with LEADER or other CLLD groups');
  t('Location');
  t('Map');
  t('Metadata');
  t('Partnership');
  t('Project examples');
  t('Publication');
  t('Social media');
  t('Staff');
  t('Taxonomy');
  t('Thematic expertise and cooperation');
  t('Type of cooperation foreseen');
  t('Visuals');

  return $field_groups;
}
