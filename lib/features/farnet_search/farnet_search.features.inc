<?php
/**
 * @file
 * farnet_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}
