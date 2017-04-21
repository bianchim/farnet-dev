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
 * File Entity: Add and upload new files
 * File Entity: View own private files
 * File Entity: View own files
 * File Entity: View files
 * File Entity: Image: Edit own files
 * File Entity: Image: Delete own files
 */
function _farnet_core_update_permissions() {
  // Add more File Entity permissions.
  $perm = [
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
  ];

  // Set permissions.
  $roles = user_roles();
  foreach ($roles as $rid => $role) {
    if (in_array($role, $roles_to_grant)) {
      user_role_grant_permissions($rid, $perm);
    }
  }
}
