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
  $field_group->identifier = 'group_ne_page_taxonomy|node|nexteuropa_faq|form';
  $field_group->group_name = 'group_ne_page_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_faq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '2',
    'children' => array(
      0 => 'field_term_theme',
      1 => 'field_term_country',
      2 => 'field_tags',
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
  $field_groups['group_ne_page_taxonomy|node|nexteuropa_faq|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Taxonomy');

  return $field_groups;
}
