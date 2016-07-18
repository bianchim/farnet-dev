<?php

/**
 * @file
 * Code for the Farnet organisation import module drush commands.
 */

/**
 * Implementation of hook_drush_command().
 */
function farnet_organisation_import_drush_command() {
  $items = array();

  $items['import-organisations'] = array(
    'description' => 'Launch the batch process for organisations import.',
    'callback' => '_farnet_organisation_import_batch',
  );

  return $items;
}

/**
 * Implementation of hook_drush_command().
 */

function farnet_organisation_import_drush_help($section) {
  switch ($section) {
    case 'drush:import-organisations':
      return dt('Launch the batch process for organisations import.');
  }

  return FALSE;
}
