<?php
/**
 * @file
 * farnet_cooperation_ms_fiche.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_cooperation_ms_fiche_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create ms_fiche content'.
  $permissions['create ms_fiche content'] = array(
    'name' => 'create ms_fiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ms_fiche content'.
  $permissions['delete any ms_fiche content'] = array(
    'name' => 'delete any ms_fiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ms_fiche content'.
  $permissions['delete own ms_fiche content'] = array(
    'name' => 'delete own ms_fiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ms_fiche content'.
  $permissions['edit any ms_fiche content'] = array(
    'name' => 'edit any ms_fiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ms_fiche content'.
  $permissions['edit own ms_fiche content'] = array(
    'name' => 'edit own ms_fiche content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
