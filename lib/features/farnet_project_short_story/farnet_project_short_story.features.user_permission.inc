<?php
/**
 * @file
 * farnet_project_short_story.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_project_short_story_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create project_short_story content'.
  $permissions['create project_short_story content'] = array(
    'name' => 'create project_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_short_story content'.
  $permissions['delete any project_short_story content'] = array(
    'name' => 'delete any project_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_short_story content'.
  $permissions['delete own project_short_story content'] = array(
    'name' => 'delete own project_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_short_story content'.
  $permissions['edit any project_short_story content'] = array(
    'name' => 'edit any project_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_short_story content'.
  $permissions['edit own project_short_story content'] = array(
    'name' => 'edit own project_short_story content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
