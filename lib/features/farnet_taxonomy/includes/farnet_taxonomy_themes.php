<?php
/**
 * @file
 * List of themes used to generate taxonomy Theme on Farnet.
 */

/**
 * Lists Themes.
 */
function farnet_taxonomy_themes() {

  // Array for Solution 1
  $themes_array = array(
    'Theme1' => (object) array(
      'name' => t('Farnet Theme1'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme1 FR'),
        'it' => t('Farnet Theme1 IT'),
      ),
    ),
    'Theme2' => (object) array(
      'name' => t('Farnet Theme2'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme2 FR'),
        'it' => t('Farnet Theme2 IT'),
      ),
    ),
    'Theme3' => (object) array(
      'name' => t('Farnet Theme3'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme3 FR'),
        'it' => t('Farnet Theme3 IT'),
      ),
    ),
    'Theme4' => (object) array(
      'name' => t('Farnet Theme4'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme4 FR'),
        'it' => t('Farnet Theme4 IT'),
      ),
    ),
    'Theme5' => (object) array(
      'name' => t('Farnet Theme5'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme5 FR'),
        'it' => t('Farnet Theme5 IT'),
      ),
    ),
  );

  return $themes_array;
}
