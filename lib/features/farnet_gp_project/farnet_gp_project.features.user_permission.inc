<?php

/**
 * @file
 * farnet_gp_project.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_gp_project_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create gp_project content'.
  $permissions['create gp_project content'] = array(
    'name' => 'create gp_project content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gp_project content'.
  $permissions['delete any gp_project content'] = array(
    'name' => 'delete any gp_project content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gp_project content'.
  $permissions['delete own gp_project content'] = array(
    'name' => 'delete own gp_project content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gp_project content'.
  $permissions['edit any gp_project content'] = array(
    'name' => 'edit any gp_project content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gp_project content'.
  $permissions['edit own gp_project content'] = array(
    'name' => 'edit own gp_project content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate gp_project state from draft to needs_review'.
  $permissions['moderate gp_project state from draft to needs_review'] = array(
    'name' => 'moderate gp_project state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from needs_review to draft'.
  $permissions['moderate gp_project state from needs_review to draft'] = array(
    'name' => 'moderate gp_project state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from needs_review to published'.
  $permissions['moderate gp_project state from needs_review to published'] = array(
    'name' => 'moderate gp_project state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from needs_review to validated'.
  $permissions['moderate gp_project state from needs_review to validated'] = array(
    'name' => 'moderate gp_project state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from published to archived'.
  $permissions['moderate gp_project state from published to archived'] = array(
    'name' => 'moderate gp_project state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from published to draft'.
  $permissions['moderate gp_project state from published to draft'] = array(
    'name' => 'moderate gp_project state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from published to expired'.
  $permissions['moderate gp_project state from published to expired'] = array(
    'name' => 'moderate gp_project state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from published to needs_review'.
  $permissions['moderate gp_project state from published to needs_review'] = array(
    'name' => 'moderate gp_project state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate gp_project state from validated to published'.
  $permissions['moderate gp_project state from validated to published'] = array(
    'name' => 'moderate gp_project state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
