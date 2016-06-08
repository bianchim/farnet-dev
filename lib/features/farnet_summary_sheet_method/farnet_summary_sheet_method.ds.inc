<?php
/**
 * @file
 * farnet_summary_sheet_method.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_summary_sheet_method_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|summary_sheet_method|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'summary_sheet_method';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title_field',
        2 => 'field_publication_abstract',
        3 => 'field_publication_date',
      ),
      'left' => array(
        1 => 'field_picture',
      ),
    ),
    'fields' => array(
      'title_field' => 'right',
      'field_picture' => 'left',
      'field_publication_abstract' => 'right',
      'field_publication_date' => 'right',
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
  $export['node|summary_sheet_method|teaser'] = $ds_layout;

  return $export;
}
