<?php

/**
 * @file
 * farnet_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function farnet_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|nexteuropa_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'nexteuropa_news';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|nexteuropa_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|nexteuropa_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'nexteuropa_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'field_publication_date',
        3 => 'field_term_theme',
        4 => 'field_abstract',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'title_field' => 'right',
      'field_publication_date' => 'right',
      'field_term_theme' => 'right',
      'field_abstract' => 'right',
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
  $export['node|nexteuropa_news|teaser'] = $ds_layout;

  return $export;
}
