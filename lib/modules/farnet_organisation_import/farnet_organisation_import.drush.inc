<?php

/**
 * @file
 * Code for the Farnet organisation import module drush commands.
 */

/**
 * Implements hook_drush_command().
 */
function farnet_organisation_import_drush_command() {
  $items = [];

  $items['extract-organisations'] = [
    'description' => 'Launch the batch process for organisations extraction from CSV files.',
    'callback' => '_farnet_organisation_import_save_to_db',
  ];

  $items['save-organisations'] = [
    'description' => 'Launch the batch process for saving organisations as Drupal content.',
    'callback' => '_farnet_organisation_import_save_from_db',
  ];

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function farnet_organisation_import_drush_help($section) {
  switch ($section) {
    case 'drush:save-organisations':
      return dt('Launch the batch process for saving organisations as Drupal content.');

    case 'drush:extract-organisations':
      return dt('Launch the batch process for organisations extraction from CSV files.');
  }

  return FALSE;
}
