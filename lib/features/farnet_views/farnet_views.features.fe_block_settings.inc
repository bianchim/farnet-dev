<?php

/**
 * @file
 * farnet_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function farnet_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-homepage_highlight-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'homepage_highlight-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => -40,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
