<?php

/**
 * @file
 * farnet_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function farnet_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_contact|node|nexteuropa_event|default';
  $field_group->group_name = 'group_event_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_position',
      1 => 'field_contact_title',
      2 => 'field_email',
      3 => 'field_first_name',
      4 => 'field_last_name',
      5 => 'field_telephone',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'id' => 'group_event_contact',
        'classes' => 'group_event_contact field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_contact|node|nexteuropa_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_contact|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '4',
    'children' => array(
      0 => 'field_contact_position',
      1 => 'field_contact_title',
      2 => 'field_email',
      3 => 'field_first_name',
      4 => 'field_last_name',
      5 => 'field_telephone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-contact field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_contact|node|nexteuropa_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_multimedia|node|nexteuropa_event|default';
  $field_group->group_name = 'group_event_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '3',
    'children' => array(
      0 => 'field_documents',
      1 => 'field_gallery',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Multimedia',
      'instance_settings' => array(
        'id' => 'group_event_multimedia',
        'classes' => 'group_event_multimedia field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_multimedia|node|nexteuropa_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_multimedia|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '3',
    'children' => array(
      0 => 'field_documents',
      1 => 'field_gallery',
      2 => 'field_picture',
      3 => 'field_presentation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-multimedia field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_multimedia|node|nexteuropa_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_publication|node|nexteuropa_event|default';
  $field_group->group_name = 'group_event_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '6',
    'children' => array(
      0 => 'field_publication_abstract',
      1 => 'field_publication_date',
      2 => 'field_term_publication_channels',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Publication',
      'instance_settings' => array(
        'id' => 'group_event_publication',
        'classes' => 'group_event_publication field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_publication|node|nexteuropa_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_publication|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
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
        'classes' => 'group-event-publication field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_publication|node|nexteuropa_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_taxonomy|node|nexteuropa_event|default';
  $field_group->group_name = 'group_event_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_tags',
      2 => 'field_term_country',
      3 => 'field_term_theme',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Taxonomy',
      'instance_settings' => array(
        'id' => 'group_event_taxonomy',
        'classes' => 'group_event_taxonomy field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_event_taxonomy|node|nexteuropa_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_taxonomy|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_type',
      1 => 'field_tags',
      2 => 'field_term_country',
      3 => 'field_term_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-taxonomy field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_taxonomy|node|nexteuropa_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_event_agenda|node|nexteuropa_event|default';
  $field_group->group_name = 'group_ne_event_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agenda',
    'weight' => '2',
    'children' => array(
      0 => 'field_dates',
      1 => 'field_sessions',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-ne-event-agenda field-group-div',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ne_event_agenda|node|nexteuropa_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_event_agenda|node|nexteuropa_event|form';
  $field_group->group_name = 'group_ne_event_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agenda',
    'weight' => '1',
    'children' => array(
      0 => 'field_sessions',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ne-event-agenda field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_ne_event_agenda|node|nexteuropa_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ne_event_content|node|nexteuropa_event|default';
  $field_group->group_name = 'group_ne_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'field_ne_body',
      1 => 'field_city',
      2 => 'field_farnet_abstract',
      3 => 'field_registration',
      4 => 'field_twitter_hashtag',
      5 => 'field_website',
      6 => 'field_presentation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'id' => 'group_ne_event_content',
        'classes' => 'group_ne_event_content field-group-tab',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_ne_event_content|node|nexteuropa_event|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  t('Contact');
  t('Content');
  t('Multimedia');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
