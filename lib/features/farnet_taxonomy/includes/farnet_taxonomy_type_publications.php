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
        'fr' => t('FARNET Magazine'),
        'it' => t('FARNET Magazine IT'),
      ),
    ),
    'Publication2' => (object) array(
      'name' => t('Brochure'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Brochure'),
        'it' => t('Brochure IT'),
      ),
    ),
    'Publication3' => (object) array(
      'name' => t('Presentation'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Presentation'),
        'it' => t('Presentation IT'),
      ),
    ),
    'Publication4' => (object) array(
      'name' => t('Guide'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Guide'),
        'it' => t('Guide IT'),
      ),
    ),
    'Publication5' => (object) array(
      'name' => t('Report'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Rapport'),
        'it' => t('Report IT'),
      ),
    ),
  );
  return $type_publications_array;
}
