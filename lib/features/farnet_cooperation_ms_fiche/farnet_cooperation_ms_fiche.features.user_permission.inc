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
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ms_fiche content'.
  $permissions['delete any ms_fiche content'] = array(
    'name' => 'delete any ms_fiche content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ms_fiche content'.
  $permissions['delete own ms_fiche content'] = array(
    'name' => 'delete own ms_fiche content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ms_fiche content'.
  $permissions['edit any ms_fiche content'] = array(
    'name' => 'edit any ms_fiche content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ms_fiche content'.
  $permissions['edit own ms_fiche content'] = array(
    'name' => 'edit own ms_fiche content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate ms_fiche state from draft to needs_review'.
  $permissions['moderate ms_fiche state from draft to needs_review'] = array(
    'name' => 'moderate ms_fiche state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from needs_review to draft'.
  $permissions['moderate ms_fiche state from needs_review to draft'] = array(
    'name' => 'moderate ms_fiche state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from needs_review to published'.
  $permissions['moderate ms_fiche state from needs_review to published'] = array(
    'name' => 'moderate ms_fiche state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from needs_review to validated'.
  $permissions['moderate ms_fiche state from needs_review to validated'] = array(
    'name' => 'moderate ms_fiche state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from published to archived'.
  $permissions['moderate ms_fiche state from published to archived'] = array(
    'name' => 'moderate ms_fiche state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from published to draft'.
  $permissions['moderate ms_fiche state from published to draft'] = array(
    'name' => 'moderate ms_fiche state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from published to expired'.
  $permissions['moderate ms_fiche state from published to expired'] = array(
    'name' => 'moderate ms_fiche state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from published to needs_review'.
  $permissions['moderate ms_fiche state from published to needs_review'] = array(
    'name' => 'moderate ms_fiche state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate ms_fiche state from validated to published'.
  $permissions['moderate ms_fiche state from validated to published'] = array(
    'name' => 'moderate ms_fiche state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
