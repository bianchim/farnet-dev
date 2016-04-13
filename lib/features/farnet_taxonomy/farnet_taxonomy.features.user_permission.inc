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

  // Exported permission: 'delete terms in farnet_languages_spoken'.
  $permissions['delete terms in farnet_languages_spoken'] = array(
    'name' => 'delete terms in farnet_languages_spoken',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_publication_channel'.
  $permissions['delete terms in farnet_publication_channel'] = array(
    'name' => 'delete terms in farnet_publication_channel',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_theme'.
  $permissions['delete terms in farnet_theme'] = array(
    'name' => 'delete terms in farnet_theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_type_event'.
  $permissions['delete terms in farnet_type_event'] = array(
    'name' => 'delete terms in farnet_type_event',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_type_news'.
  $permissions['delete terms in farnet_type_news'] = array(
    'name' => 'delete terms in farnet_type_news',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_type_publication'.
  $permissions['delete terms in farnet_type_publication'] = array(
    'name' => 'delete terms in farnet_type_publication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_languages_spoken'.
  $permissions['edit terms in farnet_languages_spoken'] = array(
    'name' => 'edit terms in farnet_languages_spoken',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_publication_channel'.
  $permissions['edit terms in farnet_publication_channel'] = array(
    'name' => 'edit terms in farnet_publication_channel',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_theme'.
  $permissions['edit terms in farnet_theme'] = array(
    'name' => 'edit terms in farnet_theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_type_event'.
  $permissions['edit terms in farnet_type_event'] = array(
    'name' => 'edit terms in farnet_type_event',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_type_news'.
  $permissions['edit terms in farnet_type_news'] = array(
    'name' => 'edit terms in farnet_type_news',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_type_publication'.
  $permissions['edit terms in farnet_type_publication'] = array(
    'name' => 'edit terms in farnet_type_publication',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entity_translation',
  );

  return $permissions;
}
