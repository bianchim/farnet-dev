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
    'Channel1' => t('Farnet Publication Channel1'),
    'Channel2' => t('Farnet Publication Channel2'),
    'Channel3' => t('Farnet Publication Channel3'),
    'Channel4' => t('Farnet Publication Channel4'),
  );
  return $publication_channels_array;
}
