<?php
/**
 * @file
 * farnet_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create farnet_article content'.
  $permissions['create farnet_article content'] = array(
    'name' => 'create farnet_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any farnet_article content'.
  $permissions['delete any farnet_article content'] = array(
    'name' => 'delete any farnet_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own farnet_article content'.
  $permissions['delete own farnet_article content'] = array(
    'name' => 'delete own farnet_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any farnet_article content'.
  $permissions['edit any farnet_article content'] = array(
    'name' => 'edit any farnet_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own farnet_article content'.
  $permissions['edit own farnet_article content'] = array(
    'name' => 'edit own farnet_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
