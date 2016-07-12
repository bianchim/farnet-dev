<?php

/**
 * @file
 * List of Regions used to generate taxonomy Regions on Farnet.
 */

/**
 * Lists Regions.
 */
function farnet_taxonomy_regions() {
  $regions_array = array(
    'Region1' => (object) array(
      'name' => t('Region1 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Region1 FR',
        'it' => 'Region1 IT',
      ),
    ),
    'Region2' => (object) array(
      'name' => t('Region2 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Region2 FR',
        'it' => 'Region2 IT',
      ),
    ),
    'Region3' => (object) array(
      'name' => t('Region3 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Region3 FR',
        'it' => 'Region3 IT',
      ),
    ),
    'Region4' => (object) array(
      'name' => t('Region4 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Region4 FR',
        'it' => 'Region4 IT',
      ),
    ),
  );
  return $regions_array;
}
