<?php
/**
 * @file
 * farnet_article.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_article_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_farnet_article_pattern';
  $strongarm->value = 'themes/[node:source:title]';
  $export['pathauto_node_farnet_article_pattern'] = $strongarm;

  return $export;
}
