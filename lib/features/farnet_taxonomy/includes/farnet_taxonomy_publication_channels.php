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
    'Channel1' => (object) array(
      'name' => t('Farnet Type Channel1 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Channel1 FR'),
        'it' => t('Farnet Type Channel1 IT'),
      ),
    ),
    'Channel2' => (object) array(
      'name' => t('Farnet Type Channel2 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Channel2 FR'),
        'it' => t('Farnet Type Channel2 IT'),
      ),
    ),
    'Channel3' => (object) array(
      'name' => t('Farnet Type Channel3 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Channel3 FR'),
        'it' => t('Farnet Type Channel3 IT'),
      ),
    ),
    'Channel4' => (object) array(
      'name' => t('Farnet Type Channel4 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type Channel4 FR'),
        'it' => t('Farnet Type Channel4 IT'),
      ),
    ),
  );
  return $publication_channels_array;
}
