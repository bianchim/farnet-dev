<?php

/**
 * @file
 * farnet_gp_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_gp_project_ctools_plugin_api($module = NULL, $api = NULL) {
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
function farnet_gp_project_node_info() {
  $items = array(
    'gp_project' => array(
      'name' => t('Good Practice Project'),
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
