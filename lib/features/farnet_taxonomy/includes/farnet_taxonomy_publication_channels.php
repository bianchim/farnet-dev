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
    'CooperationInAction' => (object) array(
      'name' => t('Cooperation in action'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Cooperation in action FR',
        'it' => 'Cooperation in action IT',
      ),
    ),
  );
  return $publication_channels_array;
}
