<?php
/**
 * @file
 * farnet_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_user_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_contact_details|user|user|form';
  $field_group->group_name = 'group_user_contact_details';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact details',
    'weight' => '2',
    'children' => array(
      0 => 'field_address_1',
      1 => 'field_address_2',
      2 => 'field_city',
      3 => 'field_phone_mobile',
      4 => 'field_telephone',
      5 => 'field_website',
      6 => 'field_zip_code',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-contact-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_contact_details|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_infos|user|user|form';
  $field_group->group_name = 'group_user_infos';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infos',
    'weight' => '0',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_gender',
      3 => 'field_preferred_email',
      4 => 'account',
      5 => 'picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-infos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_infos|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_language|user|user|form';
  $field_group->group_name = 'group_user_language';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Language',
    'weight' => '5',
    'children' => array(
      0 => 'field_preferred_language_1',
      1 => 'field_preferred_language_2',
      2 => 'field_preferred_language_3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-language field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_language|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_organisation|user|user|form';
  $field_group->group_name = 'group_user_organisation';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation',
    'weight' => '1',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_organisation',
      2 => 'field_organisation_other',
      3 => 'field_user_country',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-organisation field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_organisation|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_other|user|user|form';
  $field_group->group_name = 'group_user_other';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '7',
    'children' => array(
      0 => 'field_creator',
      1 => 'tmgmt_translation_skills',
      2 => 'og_user_node',
      3 => 'field_profile_completed',
      4 => 'timezone',
      5 => 'xmlsitemap',
      6 => 'contact',
      7 => 'locale',
      8 => 'wysiwyg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_other|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_privacy_settings|user|user|form';
  $field_group->group_name = 'group_user_privacy_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Privacy settings',
    'weight' => '4',
    'children' => array(
      0 => 'field_keep_my_email_private',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-privacy-settings field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_privacy_settings|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_social_media|user|user|form';
  $field_group->group_name = 'group_user_social_media';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
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
        'classes' => 'group-user-social-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_social_media|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_subscriptions|user|user|form';
  $field_group->group_name = 'group_user_subscriptions';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subscriptions',
    'weight' => '6',
    'children' => array(
      0 => 'field_farnet_magazine_paper',
      1 => 'field_farnet_magazine_subscribe',
      2 => 'field_keep_me_informed_on_farnet',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-user-subscriptions field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_user_subscriptions|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact details');
  t('Infos');
  t('Language');
  t('Organisation');
  t('Other');
  t('Privacy settings');
  t('Social Media');
  t('Subscriptions');

  return $field_groups;
}
