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
 * Implements hook_views_api().
 */
function myfarnet_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myfarnet_news_node_info() {
  $items = array(
    'myfarnet_news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('News content type for FARNET Community'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
