<?php
/**
 * @file
 * farnet_factsheet_flag.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_factsheet_flag_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_factsheet_flag';
  $strongarm->value = '0';
  $export['comment_anonymous_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_factsheet_flag';
  $strongarm->value = 1;
  $export['comment_default_mode_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_factsheet_flag';
  $strongarm->value = '50';
  $export['comment_default_per_page_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_factsheet_flag';
  $strongarm->value = '1';
  $export['comment_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_factsheet_flag';
  $strongarm->value = 1;
  $export['comment_form_location_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_factsheet_flag';
  $strongarm->value = '1';
  $export['comment_preview_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_factsheet_flag';
  $strongarm->value = 1;
  $export['comment_subject_field_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__factsheet_flag';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '19',
        ),
        'xmlsitemap' => array(
          'weight' => '20',
        ),
        'scheduler_settings' => array(
          'weight' => '9',
        ),
        'language' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_factsheet_flag';
  $strongarm->value = '4';
  $export['language_content_type_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_factsheet_flag';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_factsheet_flag';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_factsheet_flag';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_factsheet_flag';
  $strongarm->value = '1';
  $export['node_preview_factsheet_flag'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_factsheet_flag';
  $strongarm->value = 1;
  $export['node_submitted_factsheet_flag'] = $strongarm;

  return $export;
}