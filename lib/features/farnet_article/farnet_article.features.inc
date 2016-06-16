<?php
/**
 * @file
 * farnet_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
