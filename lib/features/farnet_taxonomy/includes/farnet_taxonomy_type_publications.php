<?php
/**
 * @file
 * List of Type publications used to generate taxonomy Type Publications on Farnet.
 */

/**
 * Lists Type Publications.
 */
function farnet_taxonomy_type_events() {
  $type_publications_array = array(
    'Publication1' => t('Farnet Type Publication1'),
    'Publication2' => t('Farnet Type Publication2'),
    'Publication3' => t('Farnet Type Publication3'),
    'Publication4' => t('Farnet Type Publication4'),
  );
  return $type_publications_array;
}
