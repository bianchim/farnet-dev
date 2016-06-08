<?php
/**
 * @file
 * farnet_project_summary_sheet.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_project_summary_sheet_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project_summary_sheet|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project_summary_sheet';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'field_publication_date',
        1 => 'field_publication_abstract',
        2 => 'title_field',
      ),
      'left' => array(
        3 => 'field_picture',
      ),
    ),
    'fields' => array(
      'field_publication_date' => 'right',
      'field_publication_abstract' => 'right',
      'title_field' => 'right',
      'field_picture' => 'left',
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
  $export['node|project_summary_sheet|teaser'] = $ds_layout;

  return $export;
}
