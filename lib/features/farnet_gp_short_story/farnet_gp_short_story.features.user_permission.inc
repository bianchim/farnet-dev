<?php

/**
 * @file
 * farnet_gp_short_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_gp_short_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gp_short_story content'.
  $permissions['create gp_short_story content'] = array(
    'name' => 'create gp_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any gp_short_story content'.
  $permissions['delete any gp_short_story content'] = array(
    'name' => 'delete any gp_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own gp_short_story content'.
  $permissions['delete own gp_short_story content'] = array(
    'name' => 'delete own gp_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gp_short_story content'.
  $permissions['edit any gp_short_story content'] = array(
    'name' => 'edit any gp_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own gp_short_story content'.
  $permissions['edit own gp_short_story content'] = array(
    'name' => 'edit own gp_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
