<?php
/**
 * @file
 * farnet_newsletters.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_newsletters_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any simplenews content'.
  $permissions['delete any simplenews content'] = array(
    'name' => 'delete any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any simplenews content'.
  $permissions['edit any simplenews content'] = array(
    'name' => 'edit any simplenews content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
