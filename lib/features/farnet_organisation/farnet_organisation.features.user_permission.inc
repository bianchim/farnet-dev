<?php
/**
 * @file
 * farnet_organisation.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_organisation_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create organisation content'.
  $permissions['create organisation content'] = array(
    'name' => 'create organisation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any organisation content'.
  $permissions['delete any organisation content'] = array(
    'name' => 'delete any organisation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own organisation content'.
  $permissions['delete own organisation content'] = array(
    'name' => 'delete own organisation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any organisation content'.
  $permissions['edit any organisation content'] = array(
    'name' => 'edit any organisation content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own organisation content'.
  $permissions['edit own organisation content'] = array(
    'name' => 'edit own organisation content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
