<?php

/**
 * @file
 * farnet_cooperation_call.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_cooperation_call_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cooperation_call content'.
  $permissions['create cooperation_call content'] = array(
    'name' => 'create cooperation_call content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cooperation_call content'.
  $permissions['delete any cooperation_call content'] = array(
    'name' => 'delete any cooperation_call content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cooperation_call content'.
  $permissions['delete own cooperation_call content'] = array(
    'name' => 'delete own cooperation_call content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cooperation_call content'.
  $permissions['edit any cooperation_call content'] = array(
    'name' => 'edit any cooperation_call content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cooperation_call content'.
  $permissions['edit own cooperation_call content'] = array(
    'name' => 'edit own cooperation_call content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
