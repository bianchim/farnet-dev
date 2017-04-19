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

  // Exported permission: 'create community_hidden content'.
  $permissions['create community_hidden content'] = array(
    'name' => 'create community_hidden content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create community_private content'.
  $permissions['create community_private content'] = array(
    'name' => 'create community_private content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create community_public content'.
  $permissions['create community_public content'] = array(
    'name' => 'create community_public content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any community_hidden content'.
  $permissions['delete any community_hidden content'] = array(
    'name' => 'delete any community_hidden content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any community_private content'.
  $permissions['delete any community_private content'] = array(
    'name' => 'delete any community_private content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any community_public content'.
  $permissions['delete any community_public content'] = array(
    'name' => 'delete any community_public content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own community_hidden content'.
  $permissions['delete own community_hidden content'] = array(
    'name' => 'delete own community_hidden content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own community_private content'.
  $permissions['delete own community_private content'] = array(
    'name' => 'delete own community_private content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own community_public content'.
  $permissions['delete own community_public content'] = array(
    'name' => 'delete own community_public content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any community_hidden content'.
  $permissions['edit any community_hidden content'] = array(
    'name' => 'edit any community_hidden content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any community_private content'.
  $permissions['edit any community_private content'] = array(
    'name' => 'edit any community_private content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any community_public content'.
  $permissions['edit any community_public content'] = array(
    'name' => 'edit any community_public content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own community_hidden content'.
  $permissions['edit own community_hidden content'] = array(
    'name' => 'edit own community_hidden content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own community_private content'.
  $permissions['edit own community_private content'] = array(
    'name' => 'edit own community_private content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own community_public content'.
  $permissions['edit own community_public content'] = array(
    'name' => 'edit own community_public content',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

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
