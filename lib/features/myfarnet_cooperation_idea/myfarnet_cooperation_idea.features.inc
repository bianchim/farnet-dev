<?php

/**
 * @file
 * myfarnet_cooperation_idea.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function myfarnet_cooperation_idea_ctools_plugin_api($module = NULL, $api = NULL) {
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
function myfarnet_cooperation_idea_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function myfarnet_cooperation_idea_node_info() {
  $items = array(
    'myfarnet_cooperation_idea' => array(
      'name' => t('Cooperation Idea'),
      'base' => 'node_content',
      'description' => t('Cooperation Idea content type for FARNET Community'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
