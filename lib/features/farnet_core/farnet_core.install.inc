<?php

/**
 * @file
 * Install processes helpers for FARNET core.
 */

/**
 * Insert new date format.
 */
function _farnet_core_insert_dates() {
  $record = ['format' => 'd/m/Y', 'type' => 'custom', 'locked' => 1];
  drupal_write_record('date_formats', $record);

  $record = ['type' => 'date_only', 'title' => 'Date only', 'locked' => 1];
  drupal_write_record('date_format_type', $record);

  variable_set('date_format_date_only', 'd/m/Y');
}

/**
 * Update some existing permissions with some roles.
 *
 * Media WYSIWYG: Use Media WYSIWYG in an editor
 * File Entity: Add and upload new files
 * File Entity: View own private files
 * File Entity: View own files
 * File Entity: View files
 * File Entity: Image: Edit own files
 * File Entity: Image: Delete own files
 */
function _farnet_core_update_permissions() {
  // Add more File Entity & Media permissions.
  $perm = [
    'use media wysiwyg',
    'create files',
    'view own private files',
    'view own files',
    'view files',
    'edit own image files',
    'delete own image files',
  ];

  // Role to grant.
  $roles_to_grant = [
    'FSU Administrator',
    'FSU Editor',
    'FSU Publisher',
    'FSU Webmaster',
    'editor',
  ];

  _farnet_core_set_permissions($perm, $roles_to_grant);
}

/**
 * Update wysiwyg existing permissions for authenticated user.
 *
 * Media WYSIWYG: Use Media WYSIWYG in an editor
 */
function _farnet_core_update_wysiwyg_permissions() {
  $perm = [
    'use media wysiwyg',
  ];

  // Role to grant.
  $roles_to_grant = [
    'authenticated user'
  ];

  _farnet_core_set_permissions($perm, $roles_to_grant);
}

/**
 * Update workbench existing permissions for FSU roles.
 *
 */
function _farnet_core_update_workbench_permissions() {
  $perm = [
    'use workbench_moderation my drafts tab',
    'use workbench_moderation needs review tab',
    'moderate content from draft to needs_review',
    'moderate content from needs_review to draft',
  ];

  // Role to grant.
  $roles_to_grant = [
    'FSU Administrator',
    'FSU Editor',
    'FSU Publisher',
    'FSU Webmaster',
    'editor',
  ];

  _farnet_core_set_permissions($perm, $roles_to_grant);

  $perm = [
    'moderate content from needs_review to published',
  ];

  // Role to grant.
  $roles_to_grant = [
    'FSU Administrator',
    'FSU Publisher',
    'FSU Webmaster',
  ];

  _farnet_core_set_permissions($perm, $roles_to_grant);

  $perm = [
    'view all unpublished content',
    'moderate content from draft to published',
  ];

  // Role to grant.
  $roles_to_grant = [
    'FSU Administrator',
    'FSU Webmaster',
  ];

  _farnet_core_set_permissions($perm, $roles_to_grant);
}

/**
 * Set permissions for FSU user.
 *
 */
function _farnet_core_set_permissions($perm, $roles_to_grant) {
  // Set permissions.
  $roles = user_roles();
  foreach ($roles as $rid => $role) {
    if (in_array($role, $roles_to_grant)) {
      user_role_grant_permissions($rid, $perm);
    }
  }
}
