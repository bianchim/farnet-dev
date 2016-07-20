<?php

/**
 * @file
 * farnet_factsheet_flag.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_factsheet_flag_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create factsheet_flag content'.
  $permissions['create factsheet_flag content'] = array(
    'name' => 'create factsheet_flag content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any factsheet_flag content'.
  $permissions['delete any factsheet_flag content'] = array(
    'name' => 'delete any factsheet_flag content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own factsheet_flag content'.
  $permissions['delete own factsheet_flag content'] = array(
    'name' => 'delete own factsheet_flag content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any factsheet_flag content'.
  $permissions['edit any factsheet_flag content'] = array(
    'name' => 'edit any factsheet_flag content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own factsheet_flag content'.
  $permissions['edit own factsheet_flag content'] = array(
    'name' => 'edit own factsheet_flag content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
