<?php
/**
 * @file
 * farnet_factsheet_country.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_factsheet_country_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create factsheet_country content'.
  $permissions['create factsheet_country content'] = array(
    'name' => 'create factsheet_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any factsheet_country content'.
  $permissions['delete any factsheet_country content'] = array(
    'name' => 'delete any factsheet_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own factsheet_country content'.
  $permissions['delete own factsheet_country content'] = array(
    'name' => 'delete own factsheet_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any factsheet_country content'.
  $permissions['edit any factsheet_country content'] = array(
    'name' => 'edit any factsheet_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own factsheet_country content'.
  $permissions['edit own factsheet_country content'] = array(
    'name' => 'edit own factsheet_country content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
