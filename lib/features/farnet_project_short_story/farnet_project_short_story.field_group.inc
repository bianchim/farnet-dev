<?php
/**
 * @file
 * farnet_project_short_story.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_project_short_story_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group__short_story_project_info|node|project_short_story|form';
  $field_group->group_name = 'group__short_story_project_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project information',
    'weight' => '5',
    'children' => array(
      0 => 'field_area',
      1 => 'field_term_country',
      2 => 'field_term_region',
      3 => 'field_organisation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group--short-story-project-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group__short_story_project_info|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_content|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_abstract',
      2 => 'field_flag',
      3 => 'field_picture',
      4 => 'field_website',
      5 => 'title_field',
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
  $field_groups['group_short_story_content|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_funding|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_funding';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_funding|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_media|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_media|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_metadata|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_metadata|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_publication|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_publication|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_quote|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_quote|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_taxonomy|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_taxonomy|node|project_short_story|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_short_story_timeframe|node|project_short_story|form';
  $field_group->group_name = 'group_short_story_timeframe';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project_short_story';
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
  $field_groups['group_short_story_timeframe|node|project_short_story|form'] = $field_group;

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
