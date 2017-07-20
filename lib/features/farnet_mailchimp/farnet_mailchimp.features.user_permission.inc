<?php
/**
 * @file
 * farnet_mailchimp.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_mailchimp_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access mailchimp activity'.
  $permissions['access mailchimp activity'] = array(
    'name' => 'access mailchimp activity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_activity',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer mailchimp activity'.
  $permissions['administer mailchimp activity'] = array(
    'name' => 'administer mailchimp activity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_activity',
  );

  // Exported permission: 'administer mailchimp automations'.
  $permissions['administer mailchimp automations'] = array(
    'name' => 'administer mailchimp automations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_automations',
  );

  // Exported permission: 'administer mailchimp campaigns'.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailchimp_campaign',
  );

  return $permissions;
}
