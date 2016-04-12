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
      'name' => t('Farnet Type Publication1 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Publication1 FR'),
        'it' => t('Farnet Type Publication1 IT'),
      ),
    ),
    'Publication2' => (object) array(
      'name' => t('Farnet Type Publication2 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Publication2 FR'),
        'it' => t('Farnet Type Publication2 IT'),
      ),
    ),
    'Publication3' => (object) array(
      'name' => t('Farnet Type Publication3 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Publication3 FR'),
        'it' => t('Farnet Type Publication3 IT'),
      ),
    ),
    'Publication4' => (object) array(
      'name' => t('Farnet Type Publication4 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Publication4 FR'),
        'it' => t('Farnet Type Publication4 IT'),
      ),
    ),
  );
  return $type_publications_array;
}
