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

  // Exported role: FSU Administrator.
  $roles['FSU Administrator'] = (object) array(
    'name' => 'FSU Administrator',
    'weight' => 6,
  );

  // Exported role: FSU Editor.
  $roles['FSU Editor'] = (object) array(
    'name' => 'FSU Editor',
    'weight' => 7,
  );

  // Exported role: FSU Publisher.
  $roles['FSU Publisher'] = (object) array(
    'name' => 'FSU Publisher',
    'weight' => 8,
  );

  // Exported role: FSU Webmaster.
  $roles['FSU Webmaster'] = (object) array(
    'name' => 'FSU Webmaster',
    'weight' => 9,
  );

  // Exported role: Mail manager.
  $roles['Mail manager'] = (object) array(
    'name' => 'Mail manager',
    'weight' => 10,
  );

  // Exported role: administrator.
  $roles['administrator'] = (object) array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
