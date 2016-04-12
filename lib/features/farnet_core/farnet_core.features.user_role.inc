<?php
/**
 * @file
 * farnet_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function farnet_core_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = (object) array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
