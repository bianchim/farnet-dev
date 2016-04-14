<?php
/**
 * @file
 * farnet_factsheet.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function farnet_factsheet_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:editorial_team:create country_factsheet content'
  $permissions['node:editorial_team:create country_factsheet content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete any country_factsheet content'
  $permissions['node:editorial_team:delete any country_factsheet content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete own country_factsheet content'
  $permissions['node:editorial_team:delete own country_factsheet content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update any country_factsheet content'
  $permissions['node:editorial_team:update any country_factsheet content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update own country_factsheet content'
  $permissions['node:editorial_team:update own country_factsheet content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
