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
        'fr' => t('CLLD overview FR'),
        'it' => t('CLLD overview IT'),
      ),
    ),
    'FAQCategory2' => (object) array(
      'name' => t('Eligibility EN'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Eligibility FR'),
        'it' => t('Eligibility IT'),
      ),
    ),
    'FAQCategory3' => (object) array(
      'name' => t('Finance and administration'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Finance and administration FR'),
        'it' => t('Finance and administration IT'),
      ),
    ),
    'FAQCategory4' => (object) array(
      'name' => t('Setting up FLAGs'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Setting up FLAGs FR'),
        'it' => t('Setting up FLAGs IT'),
      ),
    ),
    'FAQCategory5' => (object) array(
      'name' => t('Cooperation'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Cooperation FR'),
        'it' => t('Cooperation IT'),
      ),
    ),
    'FAQCategory6' => (object) array(
      'name' => t('myFARNET'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('myFARNET FR'),
        'it' => t('myFARNET IT'),
      ),
    ),
  );
  return $faq_categories_array;
}
