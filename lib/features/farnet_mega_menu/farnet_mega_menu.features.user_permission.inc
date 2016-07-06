<?php

/**
 * @file
 * farnet_mega_menu.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_mega_menu_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer fmm'.
  $permissions['administer fmm'] = array(
    'name' => 'administer fmm',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'farnet_mega_menu',
  );

  // Exported permission: 'administer om maximenu'.
  $permissions['administer om maximenu'] = array(
    'name' => 'administer om maximenu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'om_maximenu',
  );

  return $permissions;
}
