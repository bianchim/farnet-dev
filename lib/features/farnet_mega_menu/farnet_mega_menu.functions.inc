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
  $newStr = preg_replace(
    array('/å/', '/ä/', '/ö/', '/Å/', '/Ä/', '/Ö/'),
    array('a', 'a', 'o', 'A', 'A', 'O'),
    $string
  );
  $newStr = preg_replace('/[^a-zA-Z0-9\']/', '_', $newStr);
  $newStr = str_replace("'", '', $newStr);
  return strtolower($newStr);
}

/**
 * Function to create array for block creation.
 */
function _array_for_block_creation($menu_name) {
  $tree = menu_tree_all_data($menu_name);
  $menuCollector = array();
  foreach ($tree as $branch) {
    $menuLevel1Title = $branch['link']['link_title'];
    if (is_array($branch['below']) && $branch['below'] != NULL) {
      $menuCollector[$menuLevel1Title] = $branch['below'];
    }
  }
  /* dpm($menuCollector); */
  return $menuCollector;
}
