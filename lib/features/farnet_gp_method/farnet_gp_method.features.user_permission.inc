<?php

/**
 * @file
 * farnet_gp_method.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_gp_method_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gp_method content'.
  $permissions['create gp_method content'] = array(
    'name' => 'create gp_method content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gp_method content'.
  $permissions['delete any gp_method content'] = array(
    'name' => 'delete any gp_method content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gp_method content'.
  $permissions['delete own gp_method content'] = array(
    'name' => 'delete own gp_method content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gp_method content'.
  $permissions['edit any gp_method content'] = array(
    'name' => 'edit any gp_method content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gp_method content'.
  $permissions['edit own gp_method content'] = array(
    'name' => 'edit own gp_method content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
