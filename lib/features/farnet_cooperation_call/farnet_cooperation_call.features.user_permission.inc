<?php

/**
 * @file
 * farnet_cooperation_call.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_cooperation_call_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create cooperation_call content'.
  $permissions['create cooperation_call content'] = array(
    'name' => 'create cooperation_call content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cooperation_call content'.
  $permissions['delete any cooperation_call content'] = array(
    'name' => 'delete any cooperation_call content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cooperation_call content'.
  $permissions['delete own cooperation_call content'] = array(
    'name' => 'delete own cooperation_call content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cooperation_call content'.
  $permissions['edit any cooperation_call content'] = array(
    'name' => 'edit any cooperation_call content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cooperation_call content'.
  $permissions['edit own cooperation_call content'] = array(
    'name' => 'edit own cooperation_call content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Editor' => 'FSU Editor',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'Mail manager' => 'Mail manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate cooperation_call state from draft to needs_review'.
  $permissions['moderate cooperation_call state from draft to needs_review'] = array(
    'name' => 'moderate cooperation_call state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from needs_review to draft'.
  $permissions['moderate cooperation_call state from needs_review to draft'] = array(
    'name' => 'moderate cooperation_call state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from needs_review to published'.
  $permissions['moderate cooperation_call state from needs_review to published'] = array(
    'name' => 'moderate cooperation_call state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from needs_review to validated'.
  $permissions['moderate cooperation_call state from needs_review to validated'] = array(
    'name' => 'moderate cooperation_call state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from published to archived'.
  $permissions['moderate cooperation_call state from published to archived'] = array(
    'name' => 'moderate cooperation_call state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from published to draft'.
  $permissions['moderate cooperation_call state from published to draft'] = array(
    'name' => 'moderate cooperation_call state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from published to expired'.
  $permissions['moderate cooperation_call state from published to expired'] = array(
    'name' => 'moderate cooperation_call state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from published to needs_review'.
  $permissions['moderate cooperation_call state from published to needs_review'] = array(
    'name' => 'moderate cooperation_call state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate cooperation_call state from validated to published'.
  $permissions['moderate cooperation_call state from validated to published'] = array(
    'name' => 'moderate cooperation_call state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
