<?php

/**
 * @file
 * farnet_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nexteuropa_event content'.
  $permissions['create nexteuropa_event content'] = array(
    'name' => 'create nexteuropa_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nexteuropa_event content'.
  $permissions['delete any nexteuropa_event content'] = array(
    'name' => 'delete any nexteuropa_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nexteuropa_event content'.
  $permissions['delete own nexteuropa_event content'] = array(
    'name' => 'delete own nexteuropa_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nexteuropa_event content'.
  $permissions['edit any nexteuropa_event content'] = array(
    'name' => 'edit any nexteuropa_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nexteuropa_event content'.
  $permissions['edit own nexteuropa_event content'] = array(
    'name' => 'edit own nexteuropa_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
