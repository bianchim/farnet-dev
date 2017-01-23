<?php

/**
 * @file
 * farnet_core.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function farnet_core_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'web@farnet.eu',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
