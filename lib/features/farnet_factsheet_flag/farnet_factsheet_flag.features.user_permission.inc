<?php

/**
 * @file
 * farnet_factsheet_flag.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_factsheet_flag_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create factsheet_flag content'.
  $permissions['create factsheet_flag content'] = array(
    'name' => 'create factsheet_flag content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any factsheet_flag content'.
  $permissions['delete any factsheet_flag content'] = array(
    'name' => 'delete any factsheet_flag content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own factsheet_flag content'.
  $permissions['delete own factsheet_flag content'] = array(
    'name' => 'delete own factsheet_flag content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any factsheet_flag content'.
  $permissions['edit any factsheet_flag content'] = array(
    'name' => 'edit any factsheet_flag content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own factsheet_flag content'.
  $permissions['edit own factsheet_flag content'] = array(
    'name' => 'edit own factsheet_flag content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'moderate factsheet_flag state from draft to needs_review'.
  $permissions['moderate factsheet_flag state from draft to needs_review'] = array(
    'name' => 'moderate factsheet_flag state from draft to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from needs_review to draft'.
  $permissions['moderate factsheet_flag state from needs_review to draft'] = array(
    'name' => 'moderate factsheet_flag state from needs_review to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from needs_review to published'.
  $permissions['moderate factsheet_flag state from needs_review to published'] = array(
    'name' => 'moderate factsheet_flag state from needs_review to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from needs_review to validated'.
  $permissions['moderate factsheet_flag state from needs_review to validated'] = array(
    'name' => 'moderate factsheet_flag state from needs_review to validated',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from published to archived'.
  $permissions['moderate factsheet_flag state from published to archived'] = array(
    'name' => 'moderate factsheet_flag state from published to archived',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from published to draft'.
  $permissions['moderate factsheet_flag state from published to draft'] = array(
    'name' => 'moderate factsheet_flag state from published to draft',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from published to expired'.
  $permissions['moderate factsheet_flag state from published to expired'] = array(
    'name' => 'moderate factsheet_flag state from published to expired',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from published to needs_review'.
  $permissions['moderate factsheet_flag state from published to needs_review'] = array(
    'name' => 'moderate factsheet_flag state from published to needs_review',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate factsheet_flag state from validated to published'.
  $permissions['moderate factsheet_flag state from validated to published'] = array(
    'name' => 'moderate factsheet_flag state from validated to published',
    'roles' => array(),
    'module' => 'workbench_moderation',
  );

  return $permissions;
}
