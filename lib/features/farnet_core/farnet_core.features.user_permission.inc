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

  // Exported permission: 'access private area'.
  $permissions['access private area'] = array(
    'name' => 'access private area',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'nexteuropa_communities',
  );

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
