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

  $export['views-members_list-block'] = array(
    'cache' => -1,
    'delta' => 'members_list-block',
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

  return $export;
}
