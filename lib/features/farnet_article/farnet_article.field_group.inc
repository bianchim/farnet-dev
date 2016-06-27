<?php

/**
 * @file
 * farnet_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farnet_article_publication|node|farnet_article|form';
  $field_group->group_name = 'group_farnet_article_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'farnet_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '6',
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
        'classes' => 'group-farnet-article-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farnet_article_publication|node|farnet_article|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_farnet_article_taxonomy|node|farnet_article|form';
  $field_group->group_name = 'group_farnet_article_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'farnet_article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '5',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_term_theme',
      2 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-farnet-article-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_farnet_article_taxonomy|node|farnet_article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
