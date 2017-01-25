<?php

/**
 * @file
 * List of Sea Basins used to generate taxonomy Sea Basins.
 */

/**
 * Lists Sea Basins.
 */
function farnet_taxonomy_sea_basins() {
  $sea_basins_array = array(
    'SeaBasin1' => (object) array(
      'name' => t('Baltic Sea'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Baltic Sea FR',
        'it' => 'Baltic Sea IT',
      ),
    ),
    'SeaBasin2' => (object) array(
      'name' => t('North Sea'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'North Sea FR',
        'it' => 'North Sea IT',
      ),
    ),
    'SeaBasin3' => (object) array(
      'name' => t('Atlantic'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Atlantic FR',
        'it' => 'Atlantic IT',
      ),
    ),
    'SeaBasin4' => (object) array(
      'name' => t('Mediterranean'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Mediterranean FR',
        'it' => 'Mediterranean IT',
      ),
    ),
    'SeaBasin5' => (object) array(
      'name' => t('Black Sea'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Black Sea FR',
        'it' => 'Black Sea IT',
      ),
    ),
    'SeaBasin6' => (object) array(
      'name' => t('Rivers and Lakes'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Rivers and Lakes FR',
        'it' => 'Rivers and Lakes IT',
      ),
    ),
    'SeaBasin7' => (object) array(
      'name' => t('Caribbean'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Caribbean FR',
        'it' => 'Caribbean IT',
      ),
    ),
  );
  return $sea_basins_array;
}
