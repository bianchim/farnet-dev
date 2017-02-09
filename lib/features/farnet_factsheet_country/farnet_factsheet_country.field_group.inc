<?php

/**
 * @file
 * farnet_factsheet_country.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_factsheet_country_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_areas|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAGs',
    'weight' => '4',
    'children' => array(
      0 => 'field_flag_areas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAGs',
      'instance_settings' => array(
        'id' => 'group_factsheet_areas',
        'classes' => 'group_factsheet_areas field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_areas|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_areas|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_areas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Areas',
    'weight' => '3',
    'children' => array(
      0 => 'field_flag_areas',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-areas field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_areas|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_clld_budget|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_clld_budget';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CLLD Budget',
    'weight' => '3',
    'children' => array(
      0 => 'field_average_budget_per_flag',
      1 => 'field_co_funding',
      2 => 'field_emff_budget',
      3 => 'field_number_flags',
      4 => 'field_proportion_emff',
      5 => 'field_total_budget',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'CLLD Budget',
      'instance_settings' => array(
        'id' => 'group_factsheet_clld_budget',
        'classes' => 'group_factsheet_clld_budget field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_clld_budget|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_clld_budget|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_clld_budget';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CLLD Budget',
    'weight' => '2',
    'children' => array(
      0 => 'field_average_budget_per_flag',
      1 => 'field_co_funding',
      2 => 'field_emff_budget',
      3 => 'field_number_flags',
      4 => 'field_proportion_emff',
      5 => 'field_total_budget',
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
  $field_groups['group_factsheet_clld_budget|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_clld_programme|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_clld_programme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CLLD Programme',
    'weight' => '1',
    'children' => array(
      0 => 'field_axis_4',
      1 => 'field_clld_context',
      2 => 'field_clld_objectives',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'CLLD Programme',
      'instance_settings' => array(
        'id' => 'group_factsheet_clld_programme',
        'classes' => 'group_factsheet_clld_programme field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_clld_programme|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_clld_programme|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_clld_programme';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CLLD Programme',
    'weight' => '1',
    'children' => array(
      0 => 'field_axis_4',
      1 => 'field_clld_context',
      2 => 'field_clld_objectives',
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
  $field_groups['group_factsheet_clld_programme|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_content|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'field_picture',
      3 => 'field_term_country',
      4 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'id' => 'group_factsheet_content',
        'classes' => 'group_factsheet_content field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_content|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_content|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'field_organisations',
      3 => 'field_picture',
      4 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_content|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_cooperation|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_cooperation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cooperation',
    'weight' => '6',
    'children' => array(
      0 => 'field_cooperation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Cooperation',
      'instance_settings' => array(
        'id' => 'group_factsheet_cooperation',
        'classes' => 'group_factsheet_cooperation field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_cooperation|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_cooperation|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_cooperation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Cooperation',
    'weight' => '5',
    'children' => array(
      0 => 'field_cooperation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-cooperation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_cooperation|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_delivery_clld|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_delivery_clld';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Delivery of CLLD',
    'weight' => '7',
    'children' => array(
      0 => 'field_diagram_delivery',
      1 => 'field_funding_process',
      2 => 'field_key_actors_roles',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Delivery of CLLD',
      'instance_settings' => array(
        'id' => 'group_factsheet_delivery_clld',
        'classes' => 'group_factsheet_delivery_clld field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_delivery_clld|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_delivery_clld|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_delivery_clld';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Delivery of CLLD',
    'weight' => '6',
    'children' => array(
      0 => 'field_diagram_delivery',
      1 => 'field_funding_process',
      2 => 'field_key_actors_roles',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-delivery-clld field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_delivery_clld|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_key_documents|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_key_documents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Documents',
    'weight' => '8',
    'children' => array(
      0 => 'field_key_documents',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Key Documents',
      'instance_settings' => array(
        'id' => 'group-factsheet-key-documents',
        'classes' => 'group-factsheet-key-documents field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_key_documents|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_map|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '13',
    'children' => array(
      0 => 'field_interactive_map',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Map',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-factsheet-map field-group-div field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_map|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_map|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Map',
    'weight' => '9',
    'children' => array(
      0 => 'field_interactive_map',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-factsheet-map field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_factsheet_map|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_metadata|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '11',
    'children' => array(
      0 => 'field_tags',
      1 => 'group_content_access',
      2 => 'og_group_ref',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_factsheet_metadata|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_metadata|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '11',
    'children' => array(
      0 => 'field_tags',
      1 => 'group_content_access',
      2 => 'og_group_ref',
      3 => 'scheduler_settings',
      4 => 'language',
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
  $field_groups['group_factsheet_metadata|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_national_network|node|factsheet_country|default';
  $field_group->group_name = 'group_factsheet_national_network';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'National Network',
    'weight' => '5',
    'children' => array(
      0 => 'field_national_network',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'National Network',
      'instance_settings' => array(
        'id' => 'group_factsheet_national_network',
        'classes' => 'group_factsheet_national_network field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_factsheet_national_network|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_factsheet_national_network|node|factsheet_country|form';
  $field_group->group_name = 'group_factsheet_national_network';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'National Network',
    'weight' => '4',
    'children' => array(
      0 => 'field_national_network',
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
  $field_groups['group_factsheet_national_network|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_documents|node|factsheet_country|form';
  $field_group->group_name = 'group_key_documents';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Documents',
    'weight' => '8',
    'children' => array(
      0 => 'field_key_documents',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-key-documents field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_key_documents|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_factsheet_publication|node|factsheet_country|default';
  $field_group->group_name = 'group_ne_factsheet_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '10',
    'children' => array(
      0 => 'field_publication_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'id' => 'group_ne_factsheet_publication',
        'classes' => 'group_ne_factsheet_publication field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ne_factsheet_publication|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_factsheet_publication|node|factsheet_country|form';
  $field_group->group_name = 'group_ne_factsheet_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
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
        'classes' => 'group-ne-factsheet-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_factsheet_publication|node|factsheet_country|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_factsheet_taxonomy|node|factsheet_country|default';
  $field_group->group_name = 'group_ne_factsheet_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'id' => 'group_ne_factsheet_taxonomy',
        'classes' => 'group_ne_factsheet_taxonomy field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ne_factsheet_taxonomy|node|factsheet_country|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_factsheet_taxonomy|node|factsheet_country|form';
  $field_group->group_name = 'group_ne_factsheet_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'factsheet_country';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '7',
    'children' => array(
      0 => 'field_term_country',
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
  $field_groups['group_ne_factsheet_taxonomy|node|factsheet_country|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Areas');
  t('CLLD Budget');
  t('CLLD Programme');
  t('Content');
  t('Cooperation');
  t('Delivery of CLLD');
  t('Description');
  t('FLAGs');
  t('Key Documents');
  t('Map');
  t('Metadata');
  t('National Network');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
