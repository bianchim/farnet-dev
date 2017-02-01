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
      'name' => t('Transnational seminars'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Séminaire transnational',
        'it' => 'Transnational seminars IT',
      ),
    ),
    'Event2' => (object) array(
      'name' => t('Managing authorities'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Les autorités de gestion',
        'it' => 'Managing authorities IT',
      ),
    ),
    'Event3' => (object) array(
      'name' => t('National / regional / local events'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'National / régional / événements locaux',
        'it' => 'National / regional / local events IT',
      ),
    ),
    'Event4' => (object) array(
      'name' => t('Conferences'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Conférences',
        'it' => 'Conferences IT',
      ),
    ),
  );
  return $type_events_array;
}
