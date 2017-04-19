<?php

/**
 * @file
 * myfarnet_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function myfarnet_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create myfarnet_news content'.
  $permissions['create myfarnet_news content'] = array(
    'name' => 'create myfarnet_news content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any myfarnet_news content'.
  $permissions['delete any myfarnet_news content'] = array(
    'name' => 'delete any myfarnet_news content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own myfarnet_news content'.
  $permissions['delete own myfarnet_news content'] = array(
    'name' => 'delete own myfarnet_news content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any myfarnet_news content'.
  $permissions['edit any myfarnet_news content'] = array(
    'name' => 'edit any myfarnet_news content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own myfarnet_news content'.
  $permissions['edit own myfarnet_news content'] = array(
    'name' => 'edit own myfarnet_news content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
