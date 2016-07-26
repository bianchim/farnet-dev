<?php

/**
 * @file
 * farnet_discussion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_discussion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create farnet_discussion content'.
  $permissions['create farnet_discussion content'] = array(
    'name' => 'create farnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any farnet_discussion content'.
  $permissions['delete any farnet_discussion content'] = array(
    'name' => 'delete any farnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own farnet_discussion content'.
  $permissions['delete own farnet_discussion content'] = array(
    'name' => 'delete own farnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any farnet_discussion content'.
  $permissions['edit any farnet_discussion content'] = array(
    'name' => 'edit any farnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own farnet_discussion content'.
  $permissions['edit own farnet_discussion content'] = array(
    'name' => 'edit own farnet_discussion content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
