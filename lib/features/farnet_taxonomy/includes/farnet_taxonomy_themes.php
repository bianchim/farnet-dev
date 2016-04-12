<?php
/**
 * @file
 * List of themes used to generate taxonomy Theme on Farnet.
 */

/**
 * Lists Themes.
 */
function farnet_taxonomy_themes() {

  // Original Array
  /*
  $themes_array = array(
    'Theme1' => t('Farnet Theme1'),
    'Theme2' => t('Farnet Theme2'),
    'Theme3' => t('Farnet Theme3'),
    'Theme4' => t('Farnet Theme4'),
  );
  */

  // Array for Solution 1
  $themes_array = array(
    'Theme1' => (object) array(
      'name' => t('Farnet Theme1 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme1 FR'),
        'it' => t('Farnet Theme1 IT'),
      ),
    ),
    'Theme2' => (object) array(
      'name' => t('Farnet Theme2 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Theme2 FR'),
        'it' => t('Farnet Theme2 IT'),
      ),
    ),

    /*
    'Theme1' => (object) array(
        'name' => t('Farnet Theme1'),
        'language' => 'und',
        'translation' => array(
          'en' => t('Farnet Theme1 EN'),
          'fr' => t('Farnet Theme1 FR'),
        ),
    ),
    'Theme2' => (object) array(
        'name' => t('Farnet Theme2'),
        'language' => 'und',
        'translation' => array(
          'en' => t('Farnet Theme2 EN'),
          'fr' => t('Farnet Theme2 FR'),
      ),
    ),
    'Theme3' => (object) array(
        'name' => t('Farnet Theme3'),
        'language' => 'und',
        'translation' => array(
        'en' => t('Farnet Theme3 EN'),
        'fr' => t('Farnet Theme3 FR'),
      ),
    ),
    'Theme4' => (object) array(
        'name' => t('Farnet Theme4'),
        'language' => 'und',
        'translation' => array (
          'en' => t('Farnet Theme4 EN'),
          'fr' => t('Farnet Theme4 FR'),
      ),
    ),Ò
    */

    /* With Solution 2
    'Theme5' => (object) array(
      'name' => t('Farnet Theme5'),
      'language' => 'und',
      'translation' => array(
        (object) array(
          'name' =>  t('Farnet Theme1 EN'),
          'language' => 'en',
        ),
        (object) array(
          'name' =>  t('Farnet Theme1 FR'),
          'language' => 'fr',
        ),
      ),
    ),
    */
  );

  return $themes_array;
}
