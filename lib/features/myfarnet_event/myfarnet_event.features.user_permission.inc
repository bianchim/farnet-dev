<?php

/**
 * @file
 * myfarnet_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myfarnet_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myfarnet_event content'.
  $permissions['create myfarnet_event content'] = array(
    'name' => 'create myfarnet_event content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myfarnet_event content'.
  $permissions['delete any myfarnet_event content'] = array(
    'name' => 'delete any myfarnet_event content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myfarnet_event content'.
  $permissions['delete own myfarnet_event content'] = array(
    'name' => 'delete own myfarnet_event content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myfarnet_event content'.
  $permissions['edit any myfarnet_event content'] = array(
    'name' => 'edit any myfarnet_event content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myfarnet_event content'.
  $permissions['edit own myfarnet_event content'] = array(
    'name' => 'edit own myfarnet_event content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
