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
  $field_group->identifier = 'group_event_agenda|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_agenda';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Agenda',
    'weight' => '3',
    'children' => array(
      0 => 'field_agenda_sessions',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-event-agenda field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_event_agenda|node|nexteuropa_event|form'] = $field_group;

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
    'weight' => '5',
    'children' => array(
      0 => 'field_contact_first_name',
      1 => 'field_contact_last_name',
      2 => 'field_contact_position',
      3 => 'field_contact_title',
      4 => 'field_email',
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
  $field_group->identifier = 'group_event_multimedia|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '4',
    'children' => array(
      0 => 'field_documents',
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
  $field_group->identifier = 'group_event_publication|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_publication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publication',
    'weight' => '7',
    'children' => array(
      0 => 'field_publication_date',
      1 => 'field_teaser',
      2 => 'field_term_publication_channel',
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
  $field_group->identifier = 'group_event_taxonomy|node|nexteuropa_event|form';
  $field_group->group_name = 'group_event_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nexteuropa_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '6',
    'children' => array(
      0 => 'field_term_theme',
      1 => 'field_term_type_of_event',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Agenda');
  t('Contact');
  t('Multimedia');
  t('Publication');
  t('Taxonomy');

  return $field_groups;
}
