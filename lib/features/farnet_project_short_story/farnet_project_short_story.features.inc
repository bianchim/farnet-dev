<?php
/**
 * @file
 * farnet_project_short_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_project_short_story_ctools_plugin_api($module = NULL, $api = NULL) {
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
function farnet_project_short_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function farnet_project_short_story_node_info() {
  $items = array(
    'project_short_story' => array(
      'name' => t('Project Short Story'),
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
