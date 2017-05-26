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
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
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
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own farnet_article content'.
  $permissions['delete own farnet_article content'] = array(
    'name' => 'delete own farnet_article content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
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
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own farnet_article content'.
  $permissions['edit own farnet_article content'] = array(
    'name' => 'edit own farnet_article content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate farnet_article state from draft to needs_review'.
  $permissions['moderate farnet_article state from draft to needs_review'] = array(
    'name' => 'moderate farnet_article state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from needs_review to draft'.
  $permissions['moderate farnet_article state from needs_review to draft'] = array(
    'name' => 'moderate farnet_article state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from needs_review to published'.
  $permissions['moderate farnet_article state from needs_review to published'] = array(
    'name' => 'moderate farnet_article state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from needs_review to validated'.
  $permissions['moderate farnet_article state from needs_review to validated'] = array(
    'name' => 'moderate farnet_article state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from published to archived'.
  $permissions['moderate farnet_article state from published to archived'] = array(
    'name' => 'moderate farnet_article state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from published to draft'.
  $permissions['moderate farnet_article state from published to draft'] = array(
    'name' => 'moderate farnet_article state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from published to expired'.
  $permissions['moderate farnet_article state from published to expired'] = array(
    'name' => 'moderate farnet_article state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from published to needs_review'.
  $permissions['moderate farnet_article state from published to needs_review'] = array(
    'name' => 'moderate farnet_article state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate farnet_article state from validated to published'.
  $permissions['moderate farnet_article state from validated to published'] = array(
    'name' => 'moderate farnet_article state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
