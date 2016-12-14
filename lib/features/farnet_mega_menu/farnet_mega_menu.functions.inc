<?php

/**
 * @file
 * farnet_mega_menu.functions.inc
 */

/**
 * Escaping characters.
 */
function _farnet_mega_menu_block_name_cleaner($string) {
  if (module_exists('transliteration')) {
    return transliteration_clean_filename($string);
  }

  // Fallback if transliteration is not active.
  // It is recommended to use transliteration.
  $new_str = preg_replace(
    array('/å/', '/ä/', '/ö/', '/Å/', '/Ä/', '/Ö/'),
    array('a', 'a', 'o', 'A', 'A', 'O'),
    $string
  );
  $new_str = preg_replace('/[^a-zA-Z0-9\']/', '_', $new_str);
  $new_str = str_replace("'", '', $new_str);
  return drupal_strtolower($new_str);
}

/**
 * Function to create array for block creation.
 */
function _array_for_block_creation($menu_name) {
  $tree = menu_tree_all_data($menu_name);
  $menu_collector = array();
  foreach ($tree as $branch) {
    $menu_level1_title = $branch['link']['link_title'];
    if (is_array($branch['below']) && $branch['below'] != NULL) {
      $menu_collector[$menu_level1_title] = $branch['below'];
    }
  }
  /* dpm($menu_collector); */
  return $menu_collector;
}
