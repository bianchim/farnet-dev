<?php
/**
 * @file
 * farnet_homepage_highlight.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_homepage_highlight_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create homepage_highlight content'.
  $permissions['create homepage_highlight content'] = array(
    'name' => 'create homepage_highlight content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage_highlight content'.
  $permissions['delete any homepage_highlight content'] = array(
    'name' => 'delete any homepage_highlight content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own homepage_highlight content'.
  $permissions['delete own homepage_highlight content'] = array(
    'name' => 'delete own homepage_highlight content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage_highlight content'.
  $permissions['edit any homepage_highlight content'] = array(
    'name' => 'edit any homepage_highlight content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage_highlight content'.
  $permissions['edit own homepage_highlight content'] = array(
    'name' => 'edit own homepage_highlight content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
