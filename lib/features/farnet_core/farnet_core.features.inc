<?php

/**
 * @file
 * farnet_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function farnet_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function farnet_core_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['Y/m/d'] = 'Y/m/d';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function farnet_core_date_format_types() {
  $format_types = array();
  // Exported date format type: date_only.
  $format_types['date_only'] = 'Date only';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function farnet_core_image_default_styles() {
  $styles = array();

  // Exported image style: farnet_teaser.
  $styles['farnet_teaser'] = array(
    'label' => 'farnet teaser',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 220,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
