<?php

/**
 * @file
 * farnet_cooperation_call.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_cooperation_call_ctools_plugin_api($module = NULL, $api = NULL) {
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
function farnet_cooperation_call_node_info() {
  $items = array(
    'cooperation_call' => array(
      'name' => t('Cooperation call'),
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
