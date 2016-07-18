<?php

/**
 * @file
 * List of Type news used to generate taxonomy Type News on Farnet.
 */

/**
 * Lists Type News.
 */
function farnet_taxonomy_type_news() {
  $type_news_array = array(
    'News1' => (object) array(
      'name' => t('FARNET news'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET news',
        'it' => 'FARNET news IT',
      ),
    ),
    'News2' => (object) array(
      'name' => t('Other news'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Autres news',
        'it' => 'Other news IT',
      ),
    ),
  );
  return $type_news_array;
}
