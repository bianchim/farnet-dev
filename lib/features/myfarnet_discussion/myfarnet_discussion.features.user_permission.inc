<?php

/**
 * @file
 * myfarnet_discussion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myfarnet_discussion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myfarnet_discussion content'.
  $permissions['create myfarnet_discussion content'] = array(
    'name' => 'create myfarnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myfarnet_discussion content'.
  $permissions['delete any myfarnet_discussion content'] = array(
    'name' => 'delete any myfarnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myfarnet_discussion content'.
  $permissions['delete own myfarnet_discussion content'] = array(
    'name' => 'delete own myfarnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myfarnet_discussion content'.
  $permissions['edit any myfarnet_discussion content'] = array(
    'name' => 'edit any myfarnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myfarnet_discussion content'.
  $permissions['edit own myfarnet_discussion content'] = array(
    'name' => 'edit own myfarnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
