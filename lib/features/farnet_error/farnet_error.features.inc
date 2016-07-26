<?php

/**
 * @file
 * farnet_error.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_error_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function farnet_error_node_info() {
  $items = array(
    'farnet_error' => array(
      'name' => t('Farnet Error'),
      'base' => 'node_content',
      'description' => t('Basic error page for Farnet'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
