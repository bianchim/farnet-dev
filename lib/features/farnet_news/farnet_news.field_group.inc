<?php

/**
 * @file
 * farnet_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_more_information|node|nexteuropa_news|form';
  $field_group->group_name = 'group_news_more_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More information',
    'weight' => '2',
    'children' => array(
      0 => 'field_page',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-more-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_more_information|node|nexteuropa_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_publication|node|nexteuropa_news|form';
  $field_group->group_name = 'group_news_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '3',
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
        'classes' => 'group-news-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_publication|node|nexteuropa_news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news_taxonomy|node|nexteuropa_news|form';
  $field_group->group_name = 'group_news_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '1',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_term_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-news-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_news_taxonomy|node|nexteuropa_news|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('More information');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
