<?php
/**
 * @file
 * farnet_communities.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function farnet_communities_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-myfarnet-menu_dashboard:myfarnet.
  $menu_links['menu-myfarnet-menu_dashboard:myfarnet'] = array(
    'menu_name' => 'menu-myfarnet-menu',
    'link_path' => 'myfarnet',
    'router_path' => 'myfarnet',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-myfarnet-menu_dashboard:myfarnet',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-myfarnet-menu_profile:menutoken/58d256eb4e148.
  $menu_links['menu-myfarnet-menu_profile:menutoken/58d256eb4e148'] = array(
    'menu_name' => 'menu-myfarnet-menu',
    'link_path' => 'menutoken/58d256eb4e148',
    'router_path' => 'menutoken/%',
    'link_title' => 'Profile',
    'options' => array(
      'menu_token_link_path' => 'user/[current-user:uid]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => 'menutoken/58d256eb4e148',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'identifier' => 'menu-myfarnet-menu_profile:menutoken/58d256eb4e148',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dashboard');
  t('Profile');

  return $menu_links;
}
