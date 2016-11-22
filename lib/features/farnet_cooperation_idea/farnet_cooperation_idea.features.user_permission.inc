<?php

/**
 * @file
 * farnet_cooperation_idea.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_cooperation_idea_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cooperation_idea content'.
  $permissions['create cooperation_idea content'] = array(
    'name' => 'create cooperation_idea content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cooperation_idea content'.
  $permissions['delete any cooperation_idea content'] = array(
    'name' => 'delete any cooperation_idea content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cooperation_idea content'.
  $permissions['delete own cooperation_idea content'] = array(
    'name' => 'delete own cooperation_idea content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cooperation_idea content'.
  $permissions['edit any cooperation_idea content'] = array(
    'name' => 'edit any cooperation_idea content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cooperation_idea content'.
  $permissions['edit own cooperation_idea content'] = array(
    'name' => 'edit own cooperation_idea content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
