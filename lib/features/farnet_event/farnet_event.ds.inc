<?php
/**
 * @file
 * farnet_event.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|nexteuropa_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'nexteuropa_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title_field',
        1 => 'field_publication_date',
        2 => 'field_term_type_event',
        3 => 'field_farnet_abstract',
      ),
    ),
    'fields' => array(
      'title_field' => 'right',
      'field_publication_date' => 'right',
      'field_term_type_event' => 'right',
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
  $export['node|nexteuropa_event|teaser'] = $ds_layout;

  return $export;
}
