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

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_languages_spoken'.
  $permissions['delete terms in farnet_languages_spoken'] = array(
    'name' => 'delete terms in farnet_languages_spoken',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_publication_channels'.
  $permissions['delete terms in farnet_publication_channels'] = array(
    'name' => 'delete terms in farnet_publication_channels',
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

  // Exported permission: 'delete terms in farnet_type_organisation'.
  $permissions['delete terms in farnet_type_organisation'] = array(
    'name' => 'delete terms in farnet_type_organisation',
    'roles' => array(),
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

  // Exported permission: 'delete terms in regions'.
  $permissions['delete terms in regions'] = array(
    'name' => 'delete terms in regions',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(),
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

  // Exported permission: 'edit terms in farnet_publication_channels'.
  $permissions['edit terms in farnet_publication_channels'] = array(
    'name' => 'edit terms in farnet_publication_channels',
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

  // Exported permission: 'edit terms in farnet_type_organisation'.
  $permissions['edit terms in farnet_type_organisation'] = array(
    'name' => 'edit terms in farnet_type_organisation',
    'roles' => array(),
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

  // Exported permission: 'edit terms in regions'.
  $permissions['edit terms in regions'] = array(
    'name' => 'edit terms in regions',
    'roles' => array(),
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
