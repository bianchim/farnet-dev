<?php

/**
 * @file
 * List of Type publications used to generate taxonomy Type Publications.
 */

/**
 * Lists Type Publications.
 */
function farnet_taxonomy_type_publications() {
  $type_publications_array = array(
    'Publication1' => (object) array(
      'name' => t('FARNET Magazine'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET Magazine',
        'it' => 'FARNET Magazine IT',
      ),
    ),
    'Publication2' => (object) array(
      'name' => t('Guide'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Guide',
        'it' => 'Guide IT',
      ),
    ),
    'Publication3' => (object) array(
      'name' => t('Publication'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Publication',
        'it' => 'Publication IT',
      ),
    ),
    'Publication4' => (object) array(
      'name' => t('Presentation'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Presentation',
        'it' => 'Presentation IT',
      ),
    ),
  );
  return $type_publications_array;
}
