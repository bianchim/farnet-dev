<?php

/**
 * @file
 * farnet_publication.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_publication_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create publication content'.
  $permissions['create publication content'] = array(
    'name' => 'create publication content',
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

  // Exported permission: 'delete any publication content'.
  $permissions['delete any publication content'] = array(
    'name' => 'delete any publication content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publication content'.
  $permissions['delete own publication content'] = array(
    'name' => 'delete own publication content',
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

  // Exported permission: 'edit any publication content'.
  $permissions['edit any publication content'] = array(
    'name' => 'edit any publication content',
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

  // Exported permission: 'edit own publication content'.
  $permissions['edit own publication content'] = array(
    'name' => 'edit own publication content',
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
