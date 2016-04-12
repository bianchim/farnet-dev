<?php
/**
 * @file
 * List of Type events used to generate taxonomy Type Events on Farnet.
 */

/**
 * Lists Type Events.
 */
function farnet_taxonomy_type_events() {
  $type_events_array = array(
    'Event1' => (object) array(
      'name' => t('Farnet Type Event1 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Event1 FR'),
        'it' => t('Farnet Type Event1 IT'),
      ),
    ),
    'Event2' => (object) array(
      'name' => t('Farnet Type Event2 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Event2 FR'),
        'it' => t('Farnet Type Event2 IT'),
      ),
    ),
    'Event3' => (object) array(
      'name' => t('Farnet Type Event3 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Event3 FR'),
        'it' => t('Farnet Type Event3 IT'),
      ),
    ),
    'Event4' => (object) array(
      'name' => t('Farnet Type Event4 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Event4 FR'),
        'it' => t('Farnet Type Event4 IT'),
      ),
    ),
  );
  return $type_events_array;
}
