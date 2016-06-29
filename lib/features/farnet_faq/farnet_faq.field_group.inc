<?php

/**
 * @file
 * farnet_faq.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_faq_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_publication|node|nexteuropa_faq|form';
  $field_group->group_name = 'group_faq_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '1',
    'children' => array(
      0 => 'field_publication_abstract',
      1 => 'field_term_publication_channels',
      2 => 'field_publication_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-faq-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_faq_publication|node|nexteuropa_faq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_faq_taxonomy|node|nexteuropa_faq|form';
  $field_group->group_name = 'group_faq_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '4',
    'children' => array(
      0 => 'field_term_country',
      1 => 'field_term_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-faq-taxonomy field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_faq_taxonomy|node|nexteuropa_faq|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
