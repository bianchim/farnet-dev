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

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer taxonomy_browser'.
  $permissions['administer taxonomy_browser'] = array(
    'name' => 'administer taxonomy_browser',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_browser',
  );

  // Exported permission: 'delete terms in classification'.
  $permissions['delete terms in classification'] = array(
    'name' => 'delete terms in classification',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_languages_spoken'.
  $permissions['delete terms in farnet_languages_spoken'] = array(
    'name' => 'delete terms in farnet_languages_spoken',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_publication_channels'.
  $permissions['delete terms in farnet_publication_channels'] = array(
    'name' => 'delete terms in farnet_publication_channels',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_sea_basins'.
  $permissions['delete terms in farnet_sea_basins'] = array(
    'name' => 'delete terms in farnet_sea_basins',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_theme'.
  $permissions['delete terms in farnet_theme'] = array(
    'name' => 'delete terms in farnet_theme',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_type_of_area'.
  $permissions['delete terms in farnet_type_of_area'] = array(
    'name' => 'delete terms in farnet_type_of_area',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_type_organisation'.
  $permissions['delete terms in farnet_type_organisation'] = array(
    'name' => 'delete terms in farnet_type_organisation',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in farnet_type_publication'.
  $permissions['delete terms in farnet_type_publication'] = array(
    'name' => 'delete terms in farnet_type_publication',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nexteuropa_event_type'.
  $permissions['delete terms in nexteuropa_event_type'] = array(
    'name' => 'delete terms in nexteuropa_event_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in nexteuropa_news_categories'.
  $permissions['delete terms in nexteuropa_news_categories'] = array(
    'name' => 'delete terms in nexteuropa_news_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in classification'.
  $permissions['edit terms in classification'] = array(
    'name' => 'edit terms in classification',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_languages_spoken'.
  $permissions['edit terms in farnet_languages_spoken'] = array(
    'name' => 'edit terms in farnet_languages_spoken',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_publication_channels'.
  $permissions['edit terms in farnet_publication_channels'] = array(
    'name' => 'edit terms in farnet_publication_channels',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_sea_basins'.
  $permissions['edit terms in farnet_sea_basins'] = array(
    'name' => 'edit terms in farnet_sea_basins',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_theme'.
  $permissions['edit terms in farnet_theme'] = array(
    'name' => 'edit terms in farnet_theme',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_type_of_area'.
  $permissions['edit terms in farnet_type_of_area'] = array(
    'name' => 'edit terms in farnet_type_of_area',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_type_organisation'.
  $permissions['edit terms in farnet_type_organisation'] = array(
    'name' => 'edit terms in farnet_type_organisation',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in farnet_type_publication'.
  $permissions['edit terms in farnet_type_publication'] = array(
    'name' => 'edit terms in farnet_type_publication',
    'roles' => array(
      'FSU Administrator' => 'FSU Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nexteuropa_event_type'.
  $permissions['edit terms in nexteuropa_event_type'] = array(
    'name' => 'edit terms in nexteuropa_event_type',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in nexteuropa_news_categories'.
  $permissions['edit terms in nexteuropa_news_categories'] = array(
    'name' => 'edit terms in nexteuropa_news_categories',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
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
