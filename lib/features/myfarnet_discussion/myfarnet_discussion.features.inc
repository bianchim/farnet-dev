<?php

/**
 * @file
 * myfarnet_discussion.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myfarnet_discussion_ctools_plugin_api($module = NULL, $api = NULL) {
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
function myfarnet_discussion_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myfarnet_discussion_node_info() {
  $items = array(
    'myfarnet_discussion' => array(
      'name' => t('Discussion'),
      'base' => 'node_content',
      'description' => t('Discussion content type for FARNET Community'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
