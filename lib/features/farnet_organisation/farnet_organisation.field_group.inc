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
    'weight' => '2',
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
      0 => 'field_email',
      1 => 'field_fax',
      2 => 'field_ne_body',
      3 => 'field_telephone',
      4 => 'field_term_type_organisation',
      5 => 'field_website',
      6 => 'title_field',
      7 => 'field_latitude',
      8 => 'field_longitude',
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
    'weight' => '4',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_social_media',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_postal_address|node|organisation|form';
  $field_group->group_name = 'group_postal_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organisation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postal Address',
    'weight' => '1',
    'children' => array(
      0 => 'field_address_1',
      1 => 'field_address_2',
      2 => 'field_city',
      3 => 'field_term_country',
      4 => 'field_zip_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Postal Address',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-organisation-postaladdress field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_postal_address|node|organisation|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact person');
  t('Content');
  t('Metadata');
  t('Postal Address');
  t('Social Media');

  return $field_groups;
}
