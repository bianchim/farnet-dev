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
      'name' => t('Farnet News'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet News FR'),
        'it' => t('Farnet News IT'),
      ),
    ),
    'Othernews' => (object) array(
      'name' => t('Other News'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Other News FR'),
        'it' => t('Other News IT'),
      ),
    ),
  );
  return $publication_channels_array;
}
