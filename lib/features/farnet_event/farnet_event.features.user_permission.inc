<?php
/**
 * @file
 * farnet_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function farnet_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create event_session content'.
  $permissions['create event_session content'] = array(
    'name' => 'create event_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create event_speaker content'.
  $permissions['create event_speaker content'] = array(
    'name' => 'create event_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create nexteuropa_event content'.
  $permissions['create nexteuropa_event content'] = array(
    'name' => 'create nexteuropa_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_session content'.
  $permissions['delete any event_session content'] = array(
    'name' => 'delete any event_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_speaker content'.
  $permissions['delete any event_speaker content'] = array(
    'name' => 'delete any event_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any nexteuropa_event content'.
  $permissions['delete any nexteuropa_event content'] = array(
    'name' => 'delete any nexteuropa_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_session content'.
  $permissions['delete own event_session content'] = array(
    'name' => 'delete own event_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_speaker content'.
  $permissions['delete own event_speaker content'] = array(
    'name' => 'delete own event_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own nexteuropa_event content'.
  $permissions['delete own nexteuropa_event content'] = array(
    'name' => 'delete own nexteuropa_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_session content'.
  $permissions['edit any event_session content'] = array(
    'name' => 'edit any event_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_speaker content'.
  $permissions['edit any event_speaker content'] = array(
    'name' => 'edit any event_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any nexteuropa_event content'.
  $permissions['edit any nexteuropa_event content'] = array(
    'name' => 'edit any nexteuropa_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_session content'.
  $permissions['edit own event_session content'] = array(
    'name' => 'edit own event_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_speaker content'.
  $permissions['edit own event_speaker content'] = array(
    'name' => 'edit own event_speaker content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own nexteuropa_event content'.
  $permissions['edit own nexteuropa_event content'] = array(
    'name' => 'edit own nexteuropa_event content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
