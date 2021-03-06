<?php

/**
 * @file
 * myfarnet_cooperation_idea.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function myfarnet_cooperation_idea_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:community_hidden:approve comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_hidden:approve comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:create myfarnet_cooperation_idea content'
  $permissions['node:community_hidden:create myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete any myfarnet_cooperation_idea content'
  $permissions['node:community_hidden:delete any myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_hidden:delete comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_hidden:delete own comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own myfarnet_cooperation_idea content'
  $permissions['node:community_hidden:delete own myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:edit comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_hidden:edit comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:edit own comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_hidden:edit own comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:post comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_hidden:post comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any myfarnet_cooperation_idea content'
  $permissions['node:community_hidden:update any myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own myfarnet_cooperation_idea content'
  $permissions['node:community_hidden:update own myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:approve comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_private:approve comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:create myfarnet_cooperation_idea content'
  $permissions['node:community_private:create myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete any myfarnet_cooperation_idea content'
  $permissions['node:community_private:delete any myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_private:delete comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_private:delete own comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own myfarnet_cooperation_idea content'
  $permissions['node:community_private:delete own myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:edit comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_private:edit comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:edit own comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_private:edit own comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:post comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_private:post comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update any myfarnet_cooperation_idea content'
  $permissions['node:community_private:update any myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:update own myfarnet_cooperation_idea content'
  $permissions['node:community_private:update own myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:approve comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_public:approve comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:create myfarnet_cooperation_idea content'
  $permissions['node:community_public:create myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete any myfarnet_cooperation_idea content'
  $permissions['node:community_public:delete any myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_public:delete comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_public:delete own comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own myfarnet_cooperation_idea content'
  $permissions['node:community_public:delete own myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:edit comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_public:edit comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:edit own comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_public:edit own comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:post comment_node_myfarnet_cooperation_idea'
  $permissions['node:community_public:post comment_node_myfarnet_cooperation_idea'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update any myfarnet_cooperation_idea content'
  $permissions['node:community_public:update any myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update own myfarnet_cooperation_idea content'
  $permissions['node:community_public:update own myfarnet_cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
