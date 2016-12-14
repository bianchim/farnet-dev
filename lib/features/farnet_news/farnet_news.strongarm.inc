<?php

/**
 * @file
 * farnet_news.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_news_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_nexteuropa_news';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '1.0',
  );
  $export['xmlsitemap_settings_node_nexteuropa_news'] = $strongarm;

  return $export;
}
