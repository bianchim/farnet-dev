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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Bottom 1';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_bottom_1';
  $fe_block_boxes->body = '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse et arcu quis ligula feugiat rutrum. Vestibulum imperdiet justo nunc, vel maximus tellus molestie sit amet. Etiam et quam purus. Ut ultrices nunc in mi laoreet, eget convallis felis mattis. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. In interdum sem mauris, facilisis dapibus felis maximus ac. Quisque viverra eros ac ligula fermentum vehicula. Aenean accumsan auctor nulla, lobortis ornare eros euismod nec.</p>';

  $export['block_bottom_1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Bottom 2';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_bottom_2';
  $fe_block_boxes->body = '<p>Nam vitae sagittis massa, in blandit ipsum. Sed vestibulum, metus at varius rhoncus, ligula metus bibendum metus, luctus porttitor dui dolor quis arcu. Morbi sollicitudin consequat libero, ut vulputate justo rutrum at. Sed pharetra a metus eu dignissim. Suspendisse potenti. Ut eu nunc condimentum, pellentesque lectus id, aliquam est. Sed in consectetur mauris, eu luctus nisl. Etiam dapibus lorem egestas arcu sollicitudin mattis.</p>';

  $export['block_bottom_2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Block Bottom 3';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_bottom_3';
  $fe_block_boxes->body = '<p>Donec placerat magna libero, id gravida enim porttitor eget. Duis ornare elit nec enim facilisis luctus. Etiam lacinia velit sit amet nunc mattis, id sagittis elit molestie. Sed ac egestas ipsum. Sed luctus lectus et nunc semper, vitae aliquet turpis ornare. Nulla sed odio scelerisque, dictum magna quis, tincidunt tortor. Morbi fringilla lacinia enim, id sagittis velit tempor sit amet.</p>';

  $export['block_bottom_3'] = $fe_block_boxes;

  return $export;
}
