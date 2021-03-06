<?php

/**
 * @file
 * farnet_gp_method.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_gp_method_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gp_method content'.
  $permissions['create gp_method content'] = array(
    'name' => 'create gp_method content',
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

  // Exported permission: 'delete any gp_method content'.
  $permissions['delete any gp_method content'] = array(
    'name' => 'delete any gp_method content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gp_method content'.
  $permissions['delete own gp_method content'] = array(
    'name' => 'delete own gp_method content',
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

  // Exported permission: 'edit any gp_method content'.
  $permissions['edit any gp_method content'] = array(
    'name' => 'edit any gp_method content',
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

  // Exported permission: 'edit own gp_method content'.
  $permissions['edit own gp_method content'] = array(
    'name' => 'edit own gp_method content',
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

  // Exported permission: 'moderate gp_method state from draft to needs_review'.
  $permissions['moderate gp_method state from draft to needs_review'] = array(
    'name' => 'moderate gp_method state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from needs_review to draft'.
  $permissions['moderate gp_method state from needs_review to draft'] = array(
    'name' => 'moderate gp_method state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from needs_review to published'.
  $permissions['moderate gp_method state from needs_review to published'] = array(
    'name' => 'moderate gp_method state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from needs_review to validated'.
  $permissions['moderate gp_method state from needs_review to validated'] = array(
    'name' => 'moderate gp_method state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from published to archived'.
  $permissions['moderate gp_method state from published to archived'] = array(
    'name' => 'moderate gp_method state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from published to draft'.
  $permissions['moderate gp_method state from published to draft'] = array(
    'name' => 'moderate gp_method state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from published to expired'.
  $permissions['moderate gp_method state from published to expired'] = array(
    'name' => 'moderate gp_method state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from published to needs_review'.
  $permissions['moderate gp_method state from published to needs_review'] = array(
    'name' => 'moderate gp_method state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_method state from validated to published'.
  $permissions['moderate gp_method state from validated to published'] = array(
    'name' => 'moderate gp_method state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
