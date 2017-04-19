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
    'primary key' => ['uid', 'gid'],
  ];
}

/**
 * Create myFARNET community.
 */
function _farnet_communities_update_create_myfarnet_support_node() {

  $node = new stdClass();
  $node->title = "myFARNET support";
  $node->type = "community_public";
  node_object_prepare($node);

  $node->language = 'en';
  $node->uid = 0;
  $node->status = NODE_PUBLISHED;
  $node->promote = FALSE;
  $node->comment = FALSE;
  $node->group_group[LANGUAGE_NONE][0]['value'] = TRUE;

  $node->title_field['en'][0]['value'] = "myFARNET support";
  $node->field_farnet_abstract['en'][0]['value'] = "Welcome on myFARNET support...";
  $node->field_ne_body['en'][0]['value'] = "Body on myFARNET support";

  $node = node_submit($node);
  node_save($node);

  return $node->nid;
}

/**
 * Create myFARNET menu item.
 */
function _farnet_communities_update_create_myfarnet_support_menu_item($nid) {
  $item = array(
    'link_title' => 'myFARNET support',
    'link_path' => 'node/' . $nid,
    'menu_name' => 'menu-myfarnet-menu',
    'weight' => 10,
    'expanded' => 0,
  );

  menu_link_save($item);
}

/**
 * Add all existing users on myFARNET community Support.
 */
function _farnet_communities_add_all_existing_users_on_myfarnet_support() {
  // Select users.
  $gid = variable_get('myfarnet_support', FALSE);

  if ($gid === FALSE) {
    throw new DrupalUpdateException('The myFARNET support community node is not defined in configuration.');
  }

  $uids = db_query('SELECT uid FROM {users} WHERE uid > 0')->fetchCol();

  $params = [':gid' => $gid, ':entity_type' => 'user'];
  $uids_used = db_query('SELECT etid FROM {og_membership} WHERE gid=:gid AND entity_type=:entity_type', $params)->fetchCol();

  foreach ($uids as $uid) {
    // Just in case, check that the user is not part of the group.
    if (in_array($uid, $uids_used)) {
      continue;
    }

    $entity = user_load($uid);

    // Wrong uid.
    if ($entity === FALSE) {
      continue;
    }

    // Set default values.
    $values = [
      'entity_type' => 'user',
      'entity' => $entity,
      'state' => OG_STATE_ACTIVE,
    ];

    og_group('node', $gid, $values);
  }
}