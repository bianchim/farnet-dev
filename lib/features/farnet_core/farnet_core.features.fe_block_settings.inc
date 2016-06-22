<?php
/**
 * @file
 * farnet_core.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function farnet_core_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['farnet_core-farnet_core_printpdf'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'farnet_core_printpdf',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'farnet_core',
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
        'region' => 'content_bottom',
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

  $export['print-print-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print-top',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'print',
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

  $export['print_mail-print_mail-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print_mail-top',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'print_mail',
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

  $export['print_pdf-print_pdf-top'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'print_pdf-top',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'print_pdf',
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

  $export['print_ui-print-links'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'print-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'print_ui',
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
        'region' => 'content_bottom',
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
