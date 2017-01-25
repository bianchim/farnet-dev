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
  $fe_block_boxes->body = '<ul><li><a href="#">Quick link 1</a></li><li><a href="#">Quick link 2</a></li><li><a href="#">Quick link 3</a></li><li><a href="#">Quick link 4</a></li><li><a href="#">Quick link 5</a></li></ul>';

  $export['block_quick_links'] = $fe_block_boxes;

  return $export;
}
