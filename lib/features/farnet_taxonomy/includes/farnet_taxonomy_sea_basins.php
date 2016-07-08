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
      'name' => t('Baltic'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Baltic FR'),
        'it' => t('Baltic IT'),
      ),
    ),
    'SeaBasin2' => (object) array(
      'name' => t('North Sea'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('North Sea FR'),
        'it' => t('North Sea IT'),
      ),
    ),
    'SeaBasin3' => (object) array(
      'name' => t('Atlantic'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Atlantic FR'),
        'it' => t('Atlantic IT'),
      ),
    ),
    'SeaBasin4' => (object) array(
      'name' => t('Mediterranean'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Mediterranean FR'),
        'it' => t('Mediterranean IT'),
      ),
    ),
    'SeaBasin5' => (object) array(
      'name' => t('Black Sea'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Black Sea FR'),
        'it' => t('Black Sea IT'),
      ),
    ),
    'SeaBasin6' => (object) array(
      'name' => t('Rivers and Lakes'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Rivers and Lakes FR'),
        'it' => t('Rivers and Lakes IT'),
      ),
    ),
  );
  return $sea_basins_array;
}
