<?php
/**
 * @file
 * farnet_communities.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function farnet_communities_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-myfarnet-menu.
  $menus['menu-myfarnet-menu'] = array(
    'menu_name' => 'menu-myfarnet-menu',
    'title' => 'MyFARNET menu',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('MyFARNET menu');

  return $menus;
}
