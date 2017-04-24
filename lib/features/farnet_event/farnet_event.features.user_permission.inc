<?php

/**
 * @file
 * farnet_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nexteuropa_event content'.
  $permissions['create nexteuropa_event content'] = array(
    'name' => 'create nexteuropa_event content',
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

  // Exported permission: 'delete any nexteuropa_event content'.
  $permissions['delete any nexteuropa_event content'] = array(
    'name' => 'delete any nexteuropa_event content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'FSU Publisher' => 'FSU Publisher',
      'FSU Webmaster' => 'FSU Webmaster',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nexteuropa_event content'.
  $permissions['delete own nexteuropa_event content'] = array(
    'name' => 'delete own nexteuropa_event content',
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

  // Exported permission: 'edit any nexteuropa_event content'.
  $permissions['edit any nexteuropa_event content'] = array(
    'name' => 'edit any nexteuropa_event content',
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

  // Exported permission: 'edit own nexteuropa_event content'.
  $permissions['edit own nexteuropa_event content'] = array(
    'name' => 'edit own nexteuropa_event content',
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

  // Exported permission: 'moderate nexteuropa_event state from draft to needs_review'.
  $permissions['moderate nexteuropa_event state from draft to needs_review'] = array(
    'name' => 'moderate nexteuropa_event state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from needs_review to draft'.
  $permissions['moderate nexteuropa_event state from needs_review to draft'] = array(
    'name' => 'moderate nexteuropa_event state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from needs_review to published'.
  $permissions['moderate nexteuropa_event state from needs_review to published'] = array(
    'name' => 'moderate nexteuropa_event state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from needs_review to validated'.
  $permissions['moderate nexteuropa_event state from needs_review to validated'] = array(
    'name' => 'moderate nexteuropa_event state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from published to archived'.
  $permissions['moderate nexteuropa_event state from published to archived'] = array(
    'name' => 'moderate nexteuropa_event state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from published to draft'.
  $permissions['moderate nexteuropa_event state from published to draft'] = array(
    'name' => 'moderate nexteuropa_event state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from published to expired'.
  $permissions['moderate nexteuropa_event state from published to expired'] = array(
    'name' => 'moderate nexteuropa_event state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from published to needs_review'.
  $permissions['moderate nexteuropa_event state from published to needs_review'] = array(
    'name' => 'moderate nexteuropa_event state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate nexteuropa_event state from validated to published'.
  $permissions['moderate nexteuropa_event state from validated to published'] = array(
    'name' => 'moderate nexteuropa_event state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
