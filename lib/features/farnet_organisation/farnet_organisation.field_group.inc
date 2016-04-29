<?php
/**
 * @file
 * farnet_organisation.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_organisation_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation_contact|node|organisation|form';
  $field_group->group_name = 'group_organisation_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact person',
    'weight' => '1',
    'children' => array(
      0 => 'field_organisation_contacts',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organisation-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organisation_contact|node|organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation_content|node|organisation|form';
  $field_group->group_name = 'group_organisation_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_address_1',
      2 => 'field_address_2',
      3 => 'field_city',
      4 => 'field_email',
      5 => 'field_fax',
      6 => 'field_telephone',
      7 => 'field_term_country',
      8 => 'field_term_type_organisation',
      9 => 'field_website',
      10 => 'field_zip_code',
      11 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organisation-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organisation_content|node|organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation_metadata|node|organisation|form';
  $field_group->group_name = 'group_organisation_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'scheduler_settings',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organisation-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organisation_metadata|node|organisation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation_socialmedia|node|organisation|form';
  $field_group->group_name = 'group_organisation_socialmedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Social Media',
    'weight' => '2',
    'children' => array(
      0 => 'field_url_twitter',
      1 => 'field_url_facebook',
      2 => 'field_url_linkedin',
      3 => 'field_url_google',
      4 => 'field_url_pinterest',
      5 => 'field_url_youtube',
      6 => 'field_url_vimeo',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-organisation-socialmedia field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organisation_socialmedia|node|organisation|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact person');
  t('Content');
  t('Metadata');
  t('Social Media');

  return $field_groups;
}
