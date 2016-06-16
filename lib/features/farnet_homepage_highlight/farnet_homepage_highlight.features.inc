<?php
/**
 * @file
 * farnet_homepage_highlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_homepage_highlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function farnet_homepage_highlight_node_info() {
  $items = array(
    'homepage_highlight' => array(
      'name' => t('Homepage Highlight'),
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
