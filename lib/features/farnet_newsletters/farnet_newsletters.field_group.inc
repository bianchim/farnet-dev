<?php

/**
 * @file
 * farnet_newsletters.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_newsletters_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_newsletter_content|node|simplenews|form';
  $field_group->group_name = 'group_newsletter_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'simplenews';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Newsletter Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_related_events',
      1 => 'field_related_news',
      2 => 'field_news_highlight_1',
      3 => 'field_news_highlight_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-newsletter-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_newsletter_content|node|simplenews|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Newsletter Content');

  return $field_groups;
}
