<?php
/**
 * @file
 * farnet_mailchimp.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farnet_mailchimp_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
