<?php

/**
 * @file
 * Install processes helpers for FARNET communities.
 */

/**
 * Set all content types as not required in communities function.
 */
function _farnet_communities_update_content_types() {
  // Do a harcoded update to avoid errors.
  $types_one = serialize([
    'myfarnet_cooperation_idea' => 1,
    'myfarnet_discussion' => 1,
    'myfarnet_event' => 1,
    'myfarnet_news' => 1,
    'nexteuropa_event' => 0,
    'nexteuropa_mediagallery' => 0,
    'nexteuropa_news' => 0,
    'page' => 0,
  ]);

  $types_zero  = serialize([
    'myfarnet_cooperation_idea' => 0,
    'myfarnet_discussion' => 0,
    'myfarnet_event' => 0,
    'myfarnet_news' => 0,
    'nexteuropa_event' => 0,
    'nexteuropa_mediagallery' => 0,
    'nexteuropa_news' => 0,
    'page' => 0,
  ]);

  db_update('og_content_type_admin')
    ->fields([
      'types_allowed' => $types_one,
      'types_active' => $types_zero,
    ])
    ->condition('name', 'Site Wide', '=')
    ->execute();

  db_update('og_content_type_admin')
    ->fields([
      'types_allowed' => $types_one,
      'types_active' => $types_one,
    ])
    ->condition('name', 'Default', '=')
    ->execute();
}

/**
 * Helper function of database schema for organisation import.
 */
function _farnet_communities_table_schema() {
  return [
    'description' => 'The list of users last action.',
    'fields' => [
      'uid' => [
        'description' => 'The user ID',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ],
      'nid' => [
        'description' => 'The targeted content.',
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ],
      'gid' => [
        'description' => "The targeted content's group.",
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ],
      'action' => [
        'description' => 'The action that was performed.',
        'type' => 'varchar',
        'length' => 32,
        'not null' => TRUE,
        'default' => '',
      ],
      'timestamp' => [
        'description' => 'The Unix timestamp of the contribution.',
        'type' => 'int',
        'not null' => TRUE,
        'default' => 0,
      ],
    ],
    'unique keys' => [
      'uid' => ['uid'],
    ],
    'primary key' => ['uid'],
  ];
}
