<?php
/**
 * @file
 * farnet_factsheet_flag.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function farnet_factsheet_flag_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:editorial_team:create factsheet_flag content'
  $permissions['node:editorial_team:create factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete any factsheet_flag content'
  $permissions['node:editorial_team:delete any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete own factsheet_flag content'
  $permissions['node:editorial_team:delete own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update any factsheet_flag content'
  $permissions['node:editorial_team:update any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update own factsheet_flag content'
  $permissions['node:editorial_team:update own factsheet_flag content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
