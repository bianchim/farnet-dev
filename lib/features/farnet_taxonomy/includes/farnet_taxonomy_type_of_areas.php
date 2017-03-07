<?php

/**
 * @file
 * List of Type publications used to generate taxonomy Type Publications.
 */

/**
 * Lists Type Publications.
 */
function farnet_taxonomy_type_of_areas() {
  $type_areas_array = array(
    'TypeArea1' => (object) array(
      'name' => t('Inland'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Inland FR',
        'it' => 'Inland IT',
      ),
    ),
    'TypeArea2' => (object) array(
      'name' => t('Coastal'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Coastal FR',
        'it' => 'Coastal IT',
      ),
    ),
    'TypeArea3' => (object) array(
      'name' => t('Island'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Island FR',
        'it' => 'Island IT',
      ),
    ),
    'TypeArea4' => (object) array(
      'name' => t('Urban'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Urban FR',
        'it' => 'Urban IT',
      ),
    ),
    'TypeArea5' => (object) array(
      'name' => t('Rural'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Rural FR',
        'it' => 'Rural IT',
      ),
    ),
  );
  return $type_areas_array;
}
