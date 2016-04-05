<?php
/**
 * @file
 * List of themes used to generate taxonomy Theme on Farnet.
 */

/**
 * Lists Themes.
 */
function farnet_taxonomy_themes() {
  $themes_array = array(
    'Theme1' => t('Farnet Theme1'),
    'Theme2' => t('Farnet Theme2'),
    'Theme"' => t('Farnet Theme3'),
    'Theme4' => t('Farnet Theme4'),
  );
  return $themes_array;
}
