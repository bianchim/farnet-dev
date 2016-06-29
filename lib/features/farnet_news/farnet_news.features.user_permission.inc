<?php
/**
 * @file
 * farnet_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nexteuropa_news content'.
  $permissions['create nexteuropa_news content'] = array(
    'name' => 'create nexteuropa_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nexteuropa_news content'.
  $permissions['delete any nexteuropa_news content'] = array(
    'name' => 'delete any nexteuropa_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nexteuropa_news content'.
  $permissions['delete own nexteuropa_news content'] = array(
    'name' => 'delete own nexteuropa_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nexteuropa_news content'.
  $permissions['edit any nexteuropa_news content'] = array(
    'name' => 'edit any nexteuropa_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nexteuropa_news content'.
  $permissions['edit own nexteuropa_news content'] = array(
    'name' => 'edit own nexteuropa_news content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
