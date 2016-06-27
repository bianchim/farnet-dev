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
        'fr' => t('Séminaire transnational'),
        'it' => t('Transnational seminars IT'),
      ),
    ),
    'Event2' => (object) array(
      'name' => t('Managing authorities & National networks'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Les autorités de gestion et les réseaux nationaux'),
        'it' => t('Managing authorities & National networks IT'),
      ),
    ),
    'Event3' => (object) array(
      'name' => t('National / regional / local events'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('National / régional / événements locaux'),
        'it' => t('National / regional / local events IT'),
      ),
    ),
    'Event4' => (object) array(
      'name' => t('Conferences'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Conférences'),
        'it' => t('Conferences IT'),
      ),
    ),
  );
  return $type_events_array;
}
