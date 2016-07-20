<?php

/**
 * @file
 * farnet_gp_short_story.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_gp_short_story_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gp_short_story|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gp_short_story';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_picture',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'field_publication_date',
        3 => 'field_farnet_abstract',
      ),
    ),
    'fields' => array(
      'field_picture' => 'left',
      'title_field' => 'right',
      'field_publication_date' => 'right',
      'field_farnet_abstract' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|gp_short_story|teaser'] = $ds_layout;

  return $export;
}
