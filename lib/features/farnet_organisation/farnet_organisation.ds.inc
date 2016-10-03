<?php

/**
 * @file
 * farnet_organisation.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_organisation_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|organisation|flag_organisation';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'organisation';
  $ds_layout->view_mode = 'flag_organisation';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_organisation_contacts',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_organisation_contacts' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|organisation|flag_organisation'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function farnet_organisation_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'flag';
  $ds_view_mode->label = 'Flag';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['flag'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'flag_organisation';
  $ds_view_mode->label = 'Flag Organisation';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['flag_organisation'] = $ds_view_mode;

  return $export;
}
