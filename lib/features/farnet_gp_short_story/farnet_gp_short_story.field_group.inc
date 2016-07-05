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
      3 => 'field_term_region',
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
      0 => 'field_area',
      1 => 'field_organisation',
      2 => 'field_term_country',
      3 => 'field_term_region',
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
      0 => 'body',
      1 => 'field_farnet_abstract',
      2 => 'field_flag',
      3 => 'field_picture',
      4 => 'field_website',
      5 => 'title_field',
      6 => 'field_ne_body',
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
      0 => 'field_eu_contribution',
      1 => 'field_other_public_contribution',
      2 => 'field_private_contribution',
      3 => 'field_total_project_cost',
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
      0 => 'field_eu_contribution',
      1 => 'field_other_public_contribution',
      2 => 'field_private_contribution',
      3 => 'field_total_project_cost',
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
    'weight' => '6',
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
    'weight' => '7',
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
      0 => 'language',
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
        'classes' => 'group_short_story_publication field-group-tab',
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
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_term_theme',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'id' => 'group_short_story_taxonomy',
        'classes' => 'group_short_story_taxonomy field-group-tab',
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
  t('Funding');
  t('Media');
  t('Metadata');
  t('Project information');
  t('Publication');
  t('Quote');
  t('Taxonomy');
  t('Timeframe of implementation');

  return $field_groups;
}
