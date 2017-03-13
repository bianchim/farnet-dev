<?php

/**
 * @file
 * myfarnet_discussion.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function myfarnet_discussion_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:community:approve comment_node_myfarnet_discussion'
  $permissions['node:community:approve comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:create myfarnet_discussion content'
  $permissions['node:community:create myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:delete any myfarnet_discussion content'
  $permissions['node:community:delete any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:delete comment_node_myfarnet_discussion'
  $permissions['node:community:delete comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:delete own comment_node_myfarnet_discussion'
  $permissions['node:community:delete own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:delete own myfarnet_discussion content'
  $permissions['node:community:delete own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:edit comment_node_myfarnet_discussion'
  $permissions['node:community:edit comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:edit own comment_node_myfarnet_discussion'
  $permissions['node:community:edit own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:post comment_node_myfarnet_discussion'
  $permissions['node:community:post comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community:update any myfarnet_discussion content'
  $permissions['node:community:update any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community:update own myfarnet_discussion content'
  $permissions['node:community:update own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:approve comment_node_myfarnet_discussion'
  $permissions['node:community_hidden:approve comment_node_myfarnet_discussion'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create myfarnet_discussion content'
  $permissions['node:community_hidden:create myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete any myfarnet_discussion content'
  $permissions['node:community_hidden:delete any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete comment_node_myfarnet_discussion'
  $permissions['node:community_hidden:delete comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own comment_node_myfarnet_discussion'
  $permissions['node:community_hidden:delete own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own myfarnet_discussion content'
  $permissions['node:community_hidden:delete own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:edit comment_node_myfarnet_discussion'
  $permissions['node:community_hidden:edit comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:edit own comment_node_myfarnet_discussion'
  $permissions['node:community_hidden:edit own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:post comment_node_myfarnet_discussion'
  $permissions['node:community_hidden:post comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any myfarnet_discussion content'
  $permissions['node:community_hidden:update any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own myfarnet_discussion content'
  $permissions['node:community_hidden:update own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:approve comment_node_myfarnet_discussion'
  $permissions['node:community_private:approve comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:create myfarnet_discussion content'
  $permissions['node:community_private:create myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete any myfarnet_discussion content'
  $permissions['node:community_private:delete any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete comment_node_myfarnet_discussion'
  $permissions['node:community_private:delete comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own comment_node_myfarnet_discussion'
  $permissions['node:community_private:delete own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own myfarnet_discussion content'
  $permissions['node:community_private:delete own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:edit comment_node_myfarnet_discussion'
  $permissions['node:community_private:edit comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:edit own comment_node_myfarnet_discussion'
  $permissions['node:community_private:edit own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:post comment_node_myfarnet_discussion'
  $permissions['node:community_private:post comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update any myfarnet_discussion content'
  $permissions['node:community_private:update any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update own myfarnet_discussion content'
  $permissions['node:community_private:update own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:approve comment_node_myfarnet_discussion'
  $permissions['node:community_public:approve comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:create myfarnet_discussion content'
  $permissions['node:community_public:create myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete any myfarnet_discussion content'
  $permissions['node:community_public:delete any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete comment_node_myfarnet_discussion'
  $permissions['node:community_public:delete comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own comment_node_myfarnet_discussion'
  $permissions['node:community_public:delete own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own myfarnet_discussion content'
  $permissions['node:community_public:delete own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:edit comment_node_myfarnet_discussion'
  $permissions['node:community_public:edit comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:edit own comment_node_myfarnet_discussion'
  $permissions['node:community_public:edit own comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:post comment_node_myfarnet_discussion'
  $permissions['node:community_public:post comment_node_myfarnet_discussion'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update any myfarnet_discussion content'
  $permissions['node:community_public:update any myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update own myfarnet_discussion content'
  $permissions['node:community_public:update own myfarnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  return $permissions;
}
