<?php

/**
 * @file
 * farnet_gp_short_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_gp_short_story_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__gp_short_story_info|node|gp_short_story|default';
  $field_group->group_name = 'group__gp_short_story_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project information',
    'weight' => '4',
    'children' => array(
      0 => 'field_area',
      1 => 'field_organisation',
      2 => 'field_term_country',
      3 => 'field_region',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Project information',
      'instance_settings' => array(
        'id' => 'group__gp_short_story_info',
        'classes' => 'group__gp_short_story_info field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group__gp_short_story_info|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__gp_short_story_info|node|gp_short_story|form';
  $field_group->group_name = 'group__gp_short_story_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project information',
    'weight' => '5',
    'children' => array(
      0 => 'field_collection_region',
      1 => 'field_latitude',
      2 => 'field_longitude',
      3 => 'field_organisation',
      4 => 'field_term_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group--gp-short-story-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group__gp_short_story_info|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eu_contribution|field_collection_item|field_collection_project_phase|default';
  $field_group->group_name = 'group_eu_contribution';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_project_phase';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_phase';
  $field_group->data = array(
    'label' => 'Eu Contribution',
    'weight' => '4',
    'children' => array(
      0 => 'field_eu_contribution_eardf',
      1 => 'field_eu_contribution_emff',
      2 => 'field_eu_contribution_erdf',
      3 => 'field_eu_contribution_esf',
      4 => 'field_eu_contribution_oeu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-eu-contribution field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_eu_contribution|field_collection_item|field_collection_project_phase|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_eu_contribution|field_collection_item|field_collection_project_phase|form';
  $field_group->group_name = 'group_eu_contribution';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_project_phase';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phase';
  $field_group->data = array(
    'label' => 'Eu Contribution',
    'weight' => '3',
    'children' => array(
      0 => 'field_eu_contribution_emff',
      1 => 'field_eu_contribution_esf',
      2 => 'field_eu_contribution_erdf',
      3 => 'field_eu_contribution_eardf',
      4 => 'field_eu_contribution_oeu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Eu Contribution',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'group-eu-contribution',
        'classes' => 'group-eu-contribution field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_eu_contribution|field_collection_item|field_collection_project_phase|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gp_short_story_flag|node|gp_short_story|form';
  $field_group->group_name = 'group_gp_short_story_flag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
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
        'classes' => 'group-gp-short-story-flag field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_gp_short_story_flag|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_public_contribution|field_collection_item|field_collection_project_phase|default';
  $field_group->group_name = 'group_other_public_contribution';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_project_phase';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_phase';
  $field_group->data = array(
    'label' => 'Other public contribution',
    'weight' => '6',
    'children' => array(
      0 => 'field_public_contrib_local',
      1 => 'field_public_contrib_national',
      2 => 'field_public_contrib_regional',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-other-public-contribution field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_other_public_contribution|field_collection_item|field_collection_project_phase|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_public_contribution|field_collection_item|field_collection_project_phase|form';
  $field_group->group_name = 'group_other_public_contribution';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_project_phase';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_phase';
  $field_group->data = array(
    'label' => 'Other public contribution',
    'weight' => '5',
    'children' => array(
      0 => 'field_public_contrib_national',
      1 => 'field_public_contrib_regional',
      2 => 'field_public_contrib_local',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Other public contribution',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'group-other-public-contribution',
        'classes' => 'group-other-public-contribution field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_other_public_contribution|field_collection_item|field_collection_project_phase|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phase|field_collection_item|field_collection_project_phase|default';
  $field_group->group_name = 'group_phase';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_project_phase';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phase',
    'weight' => '1',
    'children' => array(
      0 => 'field_eu_contribution',
      1 => 'field_other_public_contribution',
      2 => 'field_private_contribution',
      3 => 'field_total_cost',
      4 => 'group_eu_contribution',
      5 => 'group_other_public_contribution',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-phase field-group-fieldset',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_phase|field_collection_item|field_collection_project_phase|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phase|field_collection_item|field_collection_project_phase|form';
  $field_group->group_name = 'group_phase';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_collection_project_phase';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Phase',
    'weight' => '1',
    'children' => array(
      0 => 'field_total_cost',
      1 => 'field_eu_contribution',
      2 => 'field_private_contribution',
      3 => 'field_other_public_contribution',
      4 => 'group_eu_contribution',
      5 => 'group_other_public_contribution',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Phase',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'group-phase',
        'classes' => 'group-phase field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_phase|field_collection_item|field_collection_project_phase|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_content|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_flag',
      2 => 'field_ne_body',
      3 => 'field_picture',
      4 => 'field_website',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => 'group_short_story_content',
        'classes' => 'group-short-story-content field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_content|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_content|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_farnet_abstract',
      1 => 'field_ne_body',
      2 => 'field_picture',
      3 => 'field_website',
      4 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-short-story-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_short_story_content|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_funding|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '3',
    'children' => array(
      0 => 'field_collection_project_phase',
      1 => 'field_eu_contribution',
      2 => 'field_other_public_contribution',
      3 => 'field_private_contribution',
      4 => 'field_total_cost',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Funding',
      'instance_settings' => array(
        'id' => 'group_short_story_funding',
        'classes' => 'group_short_story_funding  field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_funding|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_funding|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Funding',
    'weight' => '4',
    'children' => array(
      0 => 'field_budget',
      1 => 'field_eardf',
      2 => 'field_emff',
      3 => 'field_erdf',
      4 => 'field_esf',
      5 => 'field_eu_contribution',
      6 => 'field_funding_details',
      7 => 'field_funding_local',
      8 => 'field_funding_national',
      9 => 'field_funding_regional',
      10 => 'field_other_eu_funding',
      11 => 'field_other_public_contribution',
      12 => 'field_private_contribution',
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
  $field_groups['group_short_story_funding|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_media|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '5',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Media',
      'instance_settings' => array(
        'id' => 'group_short_story_media',
        'classes' => 'group_short_story_media field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_media|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_media|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '6',
    'children' => array(
      0 => 'field_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-short-story-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_short_story_media|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_metadata|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '9',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'metatags',
      2 => 'path',
      3 => 'xmlsitemap',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-short-story-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_short_story_metadata|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_publication|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '7',
    'children' => array(
      0 => 'field_publication_abstract',
      1 => 'field_publication_date',
      2 => 'field_term_publication_channels',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'id' => 'group_short_story_publication',
        'classes' => 'group_short_story_publication field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_publication|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_publication|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
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
        'classes' => 'group-short-story-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_short_story_publication|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_quote|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quote',
    'weight' => '1',
    'children' => array(
      0 => 'field_quote_author',
      1 => 'field_quote_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Quote',
      'instance_settings' => array(
        'id' => 'group_short_story_quote',
        'classes' => 'group_short_story_quote  field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_quote|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_quote|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Quote',
    'weight' => '2',
    'children' => array(
      0 => 'field_quote_author',
      1 => 'field_quote_text',
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
  $field_groups['group_short_story_quote|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_taxonomy|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '6',
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
        'id' => 'group_short_story_taxonomy',
        'classes' => 'group_short_story_taxonomy field-group-tab no-menu-content',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_taxonomy|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_taxonomy|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
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
        'classes' => 'group-short-story-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_short_story_taxonomy|node|gp_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_timeframe|node|gp_short_story|default';
  $field_group->group_name = 'group_short_story_timeframe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '2',
    'children' => array(
      0 => 'field_dates_start_end',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Timeframe of implementation',
      'instance_settings' => array(
        'id' => 'group_short_story_timeframe',
        'classes' => 'group_short_story_timeframe file-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_short_story_timeframe|node|gp_short_story|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_timeframe|node|gp_short_story|form';
  $field_group->group_name = 'group_short_story_timeframe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gp_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Timeframe of implementation',
    'weight' => '3',
    'children' => array(
      0 => 'field_dates_start_end',
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
  $field_groups['group_short_story_timeframe|node|gp_short_story|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Eu Contribution');
  t('Flag');
  t('Funding');
  t('Media');
  t('Metadata');
  t('Other public contribution');
  t('Phase');
  t('Project information');
  t('Publication');
  t('Quote');
  t('Taxonomy');
  t('Timeframe of implementation');

  return $field_groups;
}
