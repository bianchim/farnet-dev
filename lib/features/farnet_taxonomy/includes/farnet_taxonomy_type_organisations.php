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
      'code' => 'MA',
      'description' => 'description',
      'language' => 'en',
      'translation' => array(
        'fr' => 'MA National FR',
        'it' => 'MA National IT',
      ),
    ),
    'Organisation2' => (object) array(
      'name' => t('MA Regional'),
      'code' => 'IB',
      'description' => 'description',
      'language' => 'en',
      'translation' => array(
        'fr' => 'MA Regional FR',
        'it' => 'MA Regional IT',
      ),
    ),
    'Organisation3' => (object) array(
      'name' => t('FARNET Support Unit'),
      'code' => 'FSU',
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET Support Unit FR',
        'it' => 'FARNET Support Unit IT',
      ),
    ),
    'Organisation4' => (object) array(
      'name' => t('DG MARE'),
      'code' => 'DG MARE',
      'language' => 'en',
      'translation' => array(
        'fr' => 'DG MARE FR',
        'it' => 'DG MARE IT',
      ),
    ),
    'Organisation5' => (object) array(
      'name' => t('European Commission'),
      'code' => 'EC',
      'language' => 'en',
      'translation' => array(
        'fr' => 'European Commission FR',
        'it' => 'European Commission IT',
      ),
    ),
    'Organisation6' => (object) array(
      'name' => t('FARNET Local Action Group'),
      'code' => 'FLAG',
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET Local Action Group FR',
        'it' => 'FARNET Local Action Group IT',
      ),
    ),
    'Organisation7' => (object) array(
      'name' => t('FARNET Local Action Group'),
      'code' => 'FLAG',
      'language' => 'en',
      'translation' => array(
        'fr' => 'FARNET Local Action Group FR',
        'it' => 'FARNET Local Action Group IT',
      ),
    ),
  );
  return $type_organisations_array;
}
