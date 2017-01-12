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
      'name' => t('MA National'),
      'code' => 'MA-NAT',
      'description' => 'description',
      'language' => 'en',
      'translation' => array(
        'fr' => 'MA National',
        'it' => 'MA National',
      ),
    ),
    'Organisation2' => (object) array(
      'name' => t('MA Regional'),
      'code' => 'MA-REG',
      'description' => 'description',
      'language' => 'en',
      'translation' => array(
        'fr' => 'MA Regional',
        'it' => 'MA Regional',
      ),
    ),
    'Organisation3' => (object) array(
      'name' => t('FARNET Support Unit'),
      'code' => 'FSU',
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET Support Unit',
        'it' => 'FARNET Support Unit',
      ),
    ),
    'Organisation4' => (object) array(
      'name' => t('DG MARE'),
      'code' => 'EC_MARE',
      'language' => 'en',
      'translation' => array(
        'fr' => 'DG MARE',
        'it' => 'DG MARE',
      ),
    ),
    'Organisation5' => (object) array(
      'name' => t('European Commission'),
      'code' => 'EC',
      'language' => 'en',
      'translation' => array(
        'fr' => 'European Commission',
        'it' => 'European Commission',
      ),
    ),
    'Organisation6' => (object) array(
      'name' => t('FARNET Local Action Group'),
      'code' => 'FLAG',
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET Local Action Group',
        'it' => 'FARNET Local Action Group',
      ),
    ),
    'Organisation7' => (object) array(
      'name' => t('National network'),
      'code' => 'NAT-NET',
      'language' => 'en',
      'translation' => array(
          'fr' => 'National network',
          'it' => 'National network',
      ),
    ),
  );
  return $type_organisations_array;
}
