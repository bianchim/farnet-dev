<?php

/**
 * @file
 * farnet_faq.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_faq_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nexteuropa_faq content'.
  $permissions['create nexteuropa_faq content'] = array(
    'name' => 'create nexteuropa_faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nexteuropa_faq content'.
  $permissions['delete any nexteuropa_faq content'] = array(
    'name' => 'delete any nexteuropa_faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nexteuropa_faq content'.
  $permissions['delete own nexteuropa_faq content'] = array(
    'name' => 'delete own nexteuropa_faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in faq_categories'.
  $permissions['delete terms in faq_categories'] = array(
    'name' => 'delete terms in faq_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nexteuropa_faq content'.
  $permissions['edit any nexteuropa_faq content'] = array(
    'name' => 'edit any nexteuropa_faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nexteuropa_faq content'.
  $permissions['edit own nexteuropa_faq content'] = array(
    'name' => 'edit own nexteuropa_faq content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in faq_categories'.
  $permissions['edit terms in faq_categories'] = array(
    'name' => 'edit terms in faq_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
