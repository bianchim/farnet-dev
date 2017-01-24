<?php

/**
 * @file
 * farnet_mediagallery.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function farnet_mediagallery_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:editorial_team:create nexteuropa_mediagallery content'
  $permissions['node:editorial_team:create nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete any nexteuropa_mediagallery content'
  $permissions['node:editorial_team:delete any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete own nexteuropa_mediagallery content'
  $permissions['node:editorial_team:delete own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update any nexteuropa_mediagallery content'
  $permissions['node:editorial_team:update any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update own nexteuropa_mediagallery content'
  $permissions['node:editorial_team:update own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
