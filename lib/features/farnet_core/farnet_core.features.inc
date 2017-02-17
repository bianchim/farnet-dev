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
 * Implements hook_image_default_styles().
 */
function farnet_core_image_default_styles() {
  $styles = array();

  // Exported image style: farnet_teaser.
  $styles['farnet_teaser'] = array(
    'label' => 'farnet teaser',
    'effects' => array(),
  );

  return $styles;
}
