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
 * Implements hook_views_api().
 */
function farnet_communities_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function farnet_communities_node_info() {
  $items = array(
    'community_hidden' => array(
      'name' => t('Community hidden'),
      'base' => 'node_content',
      'description' => t('The communities and their posts are hidden to non-members. This is the native behaviour of an organic group with a visibility defined as "private".'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'community_private' => array(
      'name' => t('Community private'),
      'base' => 'node_content',
      'description' => t('Non-members can see the private communities, but cannot read their posts. They need an approval from the group administrator to join the community and be able to read posts and add/edit/delete own posts and comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
