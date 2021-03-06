<?php

/**
 * @file
 * farnet_social_media.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function farnet_social_media_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['social_media_links-social-media-links'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'social-media-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'social_media_links',
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
        'region' => 'sidebar_right',
        'status' => 1,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'farnet' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'farnet',
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
