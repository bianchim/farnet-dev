<?php
/**
 * @file
 * List of Type organisations used to generate taxonomy Type Organisations.
 */

/**
 * Lists Type Organisations.
 */
function farnet_taxonomy_type_organisations() {
  $type_organisations_array = array(
    'Organisation1' => (object) array(
      'name' => t('Managing Authorities'),
      'code' => 'MA',
      'description' => 'description',
      'language' => 'en',
      'translation' => array(
        'fr' => t('Managing Authorities FR'),
        'it' => t('Managing Authorities IT'),
      ),
    ),
    'Organisation2' => (object) array(
      'name' => t('Intermediate Bodies'),
      'code' => 'IB',
      'description' => 'description',
      'language' => 'en',
      'translation' => array(
        'fr' => t('Intermediate Bodies FR'),
        'it' => t('Intermediate Bodies IT'),
      ),
    ),
    'Organisation3' => (object) array(
      'name' => t('FARNET Support Unit'),
      'code' => 'FSU',
      'language' => 'en',
      'translation' => array(
        'fr' => t('FARNET Support Unit FR'),
        'it' => t('FARNET Support Unit IT'),
      ),
    ),
    'Organisation4' => (object) array(
      'name' => t('DG MARE'),
      'code' => 'DG MARE',
      'language' => 'en',
      'translation' => array(
        'fr' => t('DG MARE FR'),
        'it' => t('DG MARE IT'),
      ),
    ),
    'Organisation5' => (object) array(
      'name' => t('European Commission'),
      'code' => 'EC',
      'language' => 'en',
      'translation' => array(
        'fr' => t('European Commission FR'),
        'it' => t('European Commission IT'),
      ),
    ),
    'Organisation6' => (object) array(
      'name' => t('FARNET Local Action Group'),
      'code' => 'FLAG',
      'language' => 'en',
      'translation' => array(
        'fr' => t('FARNET Local Action Group FR'),
        'it' => t('FARNET Local Action Group IT'),
      ),
    ),
  );
  return $type_organisations_array;
}
