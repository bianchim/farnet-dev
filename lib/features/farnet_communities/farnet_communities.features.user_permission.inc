<?php
/**
 * @file
 * farnet_communities.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_communities_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format myfarnet_html'.
  $permissions['use text format myfarnet_html'] = array(
    'name' => 'use text format myfarnet_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
