<?php
/**
 * @file
 * farnet_mega_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function farnet_mega_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['farnet_mega_menu-about'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'about',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_mega_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['farnet_mega_menu-library'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'library',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_mega_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['farnet_mega_menu-news_events'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news_events',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_mega_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['farnet_mega_menu-on_the_ground'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'on_the_ground',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_mega_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['farnet_mega_menu-themes'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'themes',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_mega_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['farnet_mega_menu-tools'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tools',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_mega_menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['om_maximenu-om-maximenu-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'om-maximenu-1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'om_maximenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
