<?php
/**
 * @file
 * farnet_summary_sheet_method.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_summary_sheet_method_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_summary_sheet_method';
  $strongarm->value = '0';
  $export['comment_anonymous_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_summary_sheet_method';
  $strongarm->value = 1;
  $export['comment_default_mode_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_summary_sheet_method';
  $strongarm->value = '50';
  $export['comment_default_per_page_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_summary_sheet_method';
  $strongarm->value = 1;
  $export['comment_form_location_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_summary_sheet_method';
  $strongarm->value = '1';
  $export['comment_preview_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_summary_sheet_method';
  $strongarm->value = 1;
  $export['comment_subject_field_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_summary_sheet_method';
  $strongarm->value = '2';
  $export['comment_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__summary_sheet_method';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '6',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'scheduler_settings' => array(
          'weight' => '7',
        ),
        'xmlsitemap' => array(
          'weight' => '11',
        ),
        'language' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_summary_sheet_method';
  $strongarm->value = '4';
  $export['language_content_type_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_summary_sheet_method';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_summary_sheet_method';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_summary_sheet_method';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_summary_sheet_method';
  $strongarm->value = '1';
  $export['node_preview_summary_sheet_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_summary_sheet_method';
  $strongarm->value = 1;
  $export['node_submitted_summary_sheet_method'] = $strongarm;

  return $export;
}
