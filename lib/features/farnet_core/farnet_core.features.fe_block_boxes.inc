<?php
/**
 * @file
 * farnet_core.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function farnet_core_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block for quick links';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_quick_links';
  $fe_block_boxes->body = '<ul><li><a href="about/farnet-at-a-glance">FARNET at a glance</a></li><li><a href="about/clld-at-a-glance">CLLD at a glance</a></li><li><a href="on-the-ground/flag-factsheets">FLAG factsheets</a></li><li><a href="on-the-ground/country-factsheets">Country factsheets</a></li><li><a href="on-the-ground/cooperation">Cooperation</a></li></ul>';

  $export['block_quick_links'] = $fe_block_boxes;

  return $export;
}
