<?php
/**
 * @file
 * farnet_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer contact forms'.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
