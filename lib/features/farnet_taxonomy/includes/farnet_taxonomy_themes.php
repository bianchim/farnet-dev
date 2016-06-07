<?php
/**
 * @file
 * List of themes used to generate taxonomy Theme on Farnet.
 */

/**
 * Lists Themes.
 */
function farnet_taxonomy_themes() {
  $themes_array = array(
    'Theme1' => (object) array(
      'name' => t('Adding value, employment, innovation'),
      'language' => 'en',
      'translation' => array(
        'fr' => t("La valeur ajoutée, l'emploi, l'innovation"),
        'it' => t('Adding value, employment, innovation IT'),
      ),
    ),
    'Theme2' => (object) array(
      'name' => t('Diversification'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Diversification'),
        'it' => t('Diversification IT'),
      ),
    ),
    'Theme3' => (object) array(
      'name' => t('Environment'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Environnement'),
        'it' => t('Environment IT'),
      ),
    ),
    'Theme4' => (object) array(
      'name' => t('Social well-being, cultural heritage'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Le bien-être social, le patrimoine culturelR'),
        'it' => t('Social well-being, cultural heritage IT'),
      ),
    ),
    'Theme5' => (object) array(
      'name' => t('Governance and management'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Gouvernance et gestion'),
        'it' => t('Governance and management IT'),
      ),
    ),
    'Theme6' => (object) array(
      'name' => t('Other'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Autre'),
        'it' => t('Other'),
      ),
    ),
  );
  return $themes_array;
}
