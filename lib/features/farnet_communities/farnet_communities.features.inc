<?php

/**
 * @file
 * farnet_communities.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_communities_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function farnet_communities_node_info() {
  $items = array(
    'community_public' => array(
      'name' => t('Community public'),
      'base' => 'node_content',
      'description' => t('Authenticated Users can read public communities posts. They can join freely (no approval required) to be able to add/edit/delete own posts and comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
