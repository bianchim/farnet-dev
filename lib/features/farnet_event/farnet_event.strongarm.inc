<?php

/**
 * @file
 * farnet_event.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_event_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colors_taxonomy_term_7_enabled';
  $strongarm->value = TRUE;
  $export['colors_taxonomy_term_7_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'colors_taxonomy_term_enabled';
  $strongarm->value = TRUE;
  $export['colors_taxonomy_term_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_nexteuropa_event';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_nexteuropa_event'] = $strongarm;

  return $export;
}
