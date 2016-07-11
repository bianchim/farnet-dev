<?php

/**
 * @file
 * List of Publication Channels used to generate taxonomy Publication Channels.
 */

/**
 * Lists Publication Channels.
 */
function farnet_taxonomy_publication_channels() {
  $publication_channels_array = array(
    'Farnetnews' => (object) array(
      'name' => t('News - FARNET'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'News - FARNET FR',
        'it' => 'News - FARNET IT',
      ),
    ),
    'Othernews' => (object) array(
      'name' => t('News - Other'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'News - Other FR',
        'it' => 'News - Other IT',
      ),
    ),
    'CooperationWhyHow' => (object) array(
      'name' => t('Cooperation - Why & How to'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Cooperation - Why & How to FR',
        'it' => 'Cooperation - Why & How to IT',
      ),
    ),
    'CooperationEuropean' => (object) array(
      'name' => t('Cooperation - European overview'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Cooperation - European overview FR',
        'it' => 'Cooperation - European overview IT',
      ),
    ),
    'CooperationActivities' => (object) array(
      'name' => t('Cooperation - Activities'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Cooperation - Activities FR',
        'it' => 'Cooperation - Activities IT',
      ),
    ),
  );
  return $publication_channels_array;
}
