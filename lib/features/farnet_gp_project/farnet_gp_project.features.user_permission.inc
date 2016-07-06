<?php
/**
 * @file
 * farnet_gp_project.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_gp_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gp_project content'.
  $permissions['create gp_project content'] = array(
    'name' => 'create gp_project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any gp_project content'.
  $permissions['delete any gp_project content'] = array(
    'name' => 'delete any gp_project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own gp_project content'.
  $permissions['delete own gp_project content'] = array(
    'name' => 'delete own gp_project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any gp_project content'.
  $permissions['edit any gp_project content'] = array(
    'name' => 'edit any gp_project content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own gp_project content'.
  $permissions['edit own gp_project content'] = array(
    'name' => 'edit own gp_project content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
