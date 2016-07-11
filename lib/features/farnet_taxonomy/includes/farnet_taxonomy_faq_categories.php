<?php

/**
 * @file
 * List of categories FAQ used to generate taxonomy FAQ categories on Farnet.
 */

/**
 * Lists FAQ categories.
 */
function farnet_taxonomy_faq_categories() {
  $faq_categories_array = array(
    'FAQCategory1' => (object) array(
      'name' => t('CLLD overview'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'CLLD overview FR',
        'it' => 'CLLD overview IT',
      ),
    ),
    'FAQCategory2' => (object) array(
      'name' => t('Eligibility EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Eligibility FR',
        'it' => 'Eligibility IT',
      ),
    ),
    'FAQCategory3' => (object) array(
      'name' => t('Finance and administration'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Finance and administration FR',
        'it' => 'Finance and administration IT',
      ),
    ),
    'FAQCategory4' => (object) array(
      'name' => t('Setting up FLAGs'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Setting up FLAGs FR',
        'it' => 'Setting up FLAGs IT',
      ),
    ),
    'FAQCategory5' => (object) array(
      'name' => t('Cooperation'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Cooperation FR',
        'it' => 'Cooperation IT',
      ),
    ),
    'FAQCategory6' => (object) array(
      'name' => t('myFARNET'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'myFARNET FR',
        'it' => 'myFARNET IT',
      ),
    ),
  );
  return $faq_categories_array;
}
