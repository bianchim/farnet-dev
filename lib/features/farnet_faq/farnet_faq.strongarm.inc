<?php

/**
 * @file
 * farnet_faq.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_faq_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_nexteuropa_faq';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_nexteuropa_faq'] = $strongarm;

  return $export;
}
