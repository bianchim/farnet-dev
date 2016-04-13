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
      'name' => t('Farnet Type News1 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type News1 FR'),
        'it' => t('Farnet Type News1 IT'),
      ),
    ),
    'News2' => (object) array(
      'name' => t('Farnet Type News2 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type News2 FR'),
        'it' => t('Farnet Type News2 IT'),
      ),
    ),
    'News3' => (object) array(
      'name' => t('Farnet Type News3 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type News3 FR'),
        'it' => t('Farnet Type News3 IT'),
      ),
    ),
    'News4' => (object) array(
      'name' => t('Farnet Type News4 EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Farnet Type News4 FR'),
        'it' => t('Farnet Type News4 IT'),
      ),
    ),
  );
  return $type_news_array;
}
