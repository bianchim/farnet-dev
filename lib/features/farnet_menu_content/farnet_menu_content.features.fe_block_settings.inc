<?php
/**
 * @file
 * farnet_menu_content.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function farnet_menu_content_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['farnet_menu_content-farnet_menu_content_menu_page'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'farnet_menu_content_menu_page',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_menu_content',
    'node_types' => array(
      0 => 'factsheet_country',
      1 => 'factsheet_flag',
      2 => 'project_short_story',
      3 => 'project_summary_sheet',
      4 => 'summary_sheet_method',
    ),
    'pages' => 'node/*/edit*
node/*/moderation*
node/*/translate*
node/*/node_export*
node/add/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'ec_resp' => array(
        'region' => 'sidebar_left',
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

  return $export;
}
