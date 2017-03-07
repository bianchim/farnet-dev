<?php

/**
 * @file
 * myfarnet_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myfarnet_news_ctools_plugin_api($module = NULL, $api = NULL) {
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
function myfarnet_news_node_info() {
  $items = array(
    'myfarnet_news' => array(
      'name' => t('MyFarnet News'),
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
