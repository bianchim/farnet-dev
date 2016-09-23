<?php

/**
 * @file
 * farnet_communities.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function farnet_communities_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-5ead44239ab611b2cd96c8b2c64b847c'] = array(
    'cache' => -1,
    'delta' => '5ead44239ab611b2cd96c8b2c64b847c',
    'i18n_block_language' => array(),
    'module' => 'views',
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
  );

  $export['views-multisite_settings_core-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'multisite_settings_core-block_1',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
