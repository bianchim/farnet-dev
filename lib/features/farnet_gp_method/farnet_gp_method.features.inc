<?php

/**
 * @file
 * farnet_gp_method.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_gp_method_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function farnet_gp_method_node_info() {
  $items = array(
    'gp_method' => array(
      'name' => t('Good Practice Method'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
