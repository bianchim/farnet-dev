<?php
/**
 * @file
 * farnet_summary_sheet_method.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_summary_sheet_method_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create summary_sheet_method content'.
  $permissions['create summary_sheet_method content'] = array(
    'name' => 'create summary_sheet_method content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any summary_sheet_method content'.
  $permissions['delete any summary_sheet_method content'] = array(
    'name' => 'delete any summary_sheet_method content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own summary_sheet_method content'.
  $permissions['delete own summary_sheet_method content'] = array(
    'name' => 'delete own summary_sheet_method content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any summary_sheet_method content'.
  $permissions['edit any summary_sheet_method content'] = array(
    'name' => 'edit any summary_sheet_method content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own summary_sheet_method content'.
  $permissions['edit own summary_sheet_method content'] = array(
    'name' => 'edit own summary_sheet_method content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
