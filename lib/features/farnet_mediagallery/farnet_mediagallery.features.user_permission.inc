<?php

/**
 * @file
 * farnet_mediagallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_mediagallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nexteuropa_mediagallery content'.
  $permissions['create nexteuropa_mediagallery content'] = array(
    'name' => 'create nexteuropa_mediagallery content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nexteuropa_mediagallery content'.
  $permissions['delete any nexteuropa_mediagallery content'] = array(
    'name' => 'delete any nexteuropa_mediagallery content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nexteuropa_mediagallery content'.
  $permissions['delete own nexteuropa_mediagallery content'] = array(
    'name' => 'delete own nexteuropa_mediagallery content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nexteuropa_mediagallery content'.
  $permissions['edit any nexteuropa_mediagallery content'] = array(
    'name' => 'edit any nexteuropa_mediagallery content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nexteuropa_mediagallery content'.
  $permissions['edit own nexteuropa_mediagallery content'] = array(
    'name' => 'edit own nexteuropa_mediagallery content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
