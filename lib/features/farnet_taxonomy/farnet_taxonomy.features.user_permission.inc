<?php
/**
 * @file
 * farnet_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in farnet_faq_category'.
  $permissions['delete terms in farnet_faq_category'] = array(
    'name' => 'delete terms in farnet_faq_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_theme'.
  $permissions['delete terms in farnet_theme'] = array(
    'name' => 'delete terms in farnet_theme',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_faq_category'.
  $permissions['edit terms in farnet_faq_category'] = array(
    'name' => 'edit terms in farnet_faq_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_theme'.
  $permissions['edit terms in farnet_theme'] = array(
    'name' => 'edit terms in farnet_theme',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
