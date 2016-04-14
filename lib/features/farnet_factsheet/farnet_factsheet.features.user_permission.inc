<?php
/**
 * @file
 * farnet_factsheet.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_factsheet_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create country_factsheet content'.
  $permissions['create country_factsheet content'] = array(
    'name' => 'create country_factsheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any country_factsheet content'.
  $permissions['delete any country_factsheet content'] = array(
    'name' => 'delete any country_factsheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own country_factsheet content'.
  $permissions['delete own country_factsheet content'] = array(
    'name' => 'delete own country_factsheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any country_factsheet content'.
  $permissions['edit any country_factsheet content'] = array(
    'name' => 'edit any country_factsheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own country_factsheet content'.
  $permissions['edit own country_factsheet content'] = array(
    'name' => 'edit own country_factsheet content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
