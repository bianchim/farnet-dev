<?php

/**
 * @file
 * myfarnet_cooperation_idea.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myfarnet_cooperation_idea_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myfarnet_cooperation_idea content'.
  $permissions['create myfarnet_cooperation_idea content'] = array(
    'name' => 'create myfarnet_cooperation_idea content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myfarnet_cooperation_idea content'.
  $permissions['delete any myfarnet_cooperation_idea content'] = array(
    'name' => 'delete any myfarnet_cooperation_idea content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myfarnet_cooperation_idea content'.
  $permissions['delete own myfarnet_cooperation_idea content'] = array(
    'name' => 'delete own myfarnet_cooperation_idea content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myfarnet_cooperation_idea content'.
  $permissions['edit any myfarnet_cooperation_idea content'] = array(
    'name' => 'edit any myfarnet_cooperation_idea content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myfarnet_cooperation_idea content'.
  $permissions['edit own myfarnet_cooperation_idea content'] = array(
    'name' => 'edit own myfarnet_cooperation_idea content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
