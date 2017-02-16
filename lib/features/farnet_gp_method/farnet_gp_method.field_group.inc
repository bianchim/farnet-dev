<?php

/**
 * @file
 * farnet_gp_method.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_gp_method_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_content|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Good Practice',
    'weight' => '0',
    'children' => array(
      0 => 'field_collection_region',
      1 => 'field_id_text',
      2 => 'field_picture',
      3 => 'field_term_country',
      4 => 'field_title_official',
      5 => 'title_field',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Good Practice',
      'instance_settings' => array(
        'id' => 'group_gp_method_content',
        'classes' => 'group_gp_method_content field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_content|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_content|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
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
        'classes' => 'group-gp-method-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_content|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_description|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_context',
      1 => 'field_gpm_activities',
      2 => 'field_gpm_lessons',
      3 => 'field_gpm_main_achievements',
      4 => 'field_gpm_transferability',
      5 => 'field_objective',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'id' => 'group_gp_method_description',
        'classes' => 'group_gp_method_description field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_description|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_description|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_context',
      1 => 'field_gpm_activities',
      2 => 'field_gpm_lessons',
      3 => 'field_gpm_main_achievements',
      4 => 'field_gpm_transferability',
      5 => 'field_objective',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_description|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_flag|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'FLAG',
    'weight' => '4',
    'children' => array(
      0 => 'field_flag',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FLAG',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-gp-method-flag field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_flag|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_flag|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
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
      'label' => 'Flag',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-gp-method-flag field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_gp_method_flag|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_location|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_gp_method_location|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_location|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '8',
    'children' => array(
      0 => 'field_collection_region',
      1 => 'field_latitude',
      2 => 'field_longitude',
      3 => 'field_term_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_location|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_media|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '7',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Visuals',
      'instance_settings' => array(
        'id' => 'group_gp_method_media',
        'classes' => 'group_gp_method_media field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_media|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_media|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Visuals',
    'weight' => '6',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_media|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_metadata|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '10',
    'children' => array(),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_gp_method_metadata|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_metadata|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '10',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_metadata|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_organisations|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_organisations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisations',
    'weight' => '3',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Organisations',
      'instance_settings' => array(
        'id' => 'group_gp_method_organisations',
        'classes' => 'group_gp_method_organisations field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_organisations|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_organisations|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_organisations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisations',
    'weight' => '2',
    'children' => array(
      0 => 'field_organisations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-organisations field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_organisations|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_publication|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
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
        'id' => 'group_gp_method_publication',
        'classes' => 'group_gp_method_publication field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_publication|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_publication|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '9',
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
        'classes' => 'group-gp-method-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_publication|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_resources|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '2',
    'children' => array(
      0 => 'field_gpm_financial_resources',
      1 => 'field_gpm_other_resources',
      2 => 'field_gpm_skills',
      3 => 'field_gpm_staff_resources',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Resources',
      'instance_settings' => array(
        'id' => 'group_gp_method_resources',
        'classes' => 'group_gp_method_resources field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_resources|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_resources|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_resources';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resources',
    'weight' => '4',
    'children' => array(
      0 => 'field_gpm_financial_resources',
      1 => 'field_gpm_other_resources',
      2 => 'field_gpm_skills',
      3 => 'field_gpm_staff_resources',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-resources field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_resources|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_taxonomy|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '9',
    'children' => array(
      0 => 'field_sea_basins',
      1 => 'field_tags',
      2 => 'field_term_theme',
      3 => 'field_type_of_area',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'id' => 'group_gp_method_taxonomy',
        'classes' => 'group_gp_method_taxonomy field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_gp_method_taxonomy|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_taxonomy|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '7',
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
        'classes' => 'group-gp-method-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_taxonomy|node|gp_method|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_timeframe|node|gp_method|default';
  $field_group->group_name = 'group_gp_method_timeframe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '6',
    'children' => array(
      0 => 'field_dates_start_end',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gp_method_timeframe|node|gp_method|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_method_timeframe|node|gp_method|form';
  $field_group->group_name = 'group_gp_method_timeframe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_method';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '5',
    'children' => array(
      0 => 'field_dates_start_end',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gp-method-timeframe field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_method_timeframe|node|gp_method|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Description');
  t('FLAG');
  t('Flag');
  t('Good Practice');
  t('Location');
  t('Metadata');
  t('Organisations');
  t('Publication');
  t('Resources');
  t('Taxonomy');
  t('Timeframe of implementation');
  t('Visuals');

  return $field_groups;
}
