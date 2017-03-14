<?php

/**
 * @file
 * myfarnet_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function myfarnet_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myfarnet_news_content|node|myfarnet_news|form';
  $field_group->group_name = 'group_myfarnet_news_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myfarnet_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'field_farnet_abstract',
      2 => 'field_ne_body',
      3 => 'field_term_country',
      4 => 'field_term_theme',
      5 => 'field_picture',
      6 => 'field_related_documents',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myfarnet-news-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_myfarnet_news_content|node|myfarnet_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_myfarnet_news_metadata|node|myfarnet_news|form';
  $field_group->group_name = 'group_myfarnet_news_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'myfarnet_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-myfarnet-news-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_myfarnet_news_metadata|node|myfarnet_news|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');

  return $field_groups;
}
