<?php
/**
 * @file
 * farnet_gp_project.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_gp_project_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|gp_project|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'gp_project';
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
  $export['node|gp_project|teaser'] = $ds_layout;

  return $export;
}
