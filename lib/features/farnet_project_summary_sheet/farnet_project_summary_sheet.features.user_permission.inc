<?php
/**
 * @file
 * farnet_project_summary_sheet.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_project_summary_sheet_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create project_summary_sheet content'.
  $permissions['create project_summary_sheet content'] = array(
    'name' => 'create project_summary_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any project_summary_sheet content'.
  $permissions['delete any project_summary_sheet content'] = array(
    'name' => 'delete any project_summary_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own project_summary_sheet content'.
  $permissions['delete own project_summary_sheet content'] = array(
    'name' => 'delete own project_summary_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any project_summary_sheet content'.
  $permissions['edit any project_summary_sheet content'] = array(
    'name' => 'edit any project_summary_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own project_summary_sheet content'.
  $permissions['edit own project_summary_sheet content'] = array(
    'name' => 'edit own project_summary_sheet content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
