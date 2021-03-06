<?php

/**
 * @file
 * myfarnet_cooperation_idea.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function myfarnet_cooperation_idea_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_myfarnet_cooperation_idea';
  $strongarm->value = '0';
  $export['comment_anonymous_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_myfarnet_cooperation_idea';
  $strongarm->value = 1;
  $export['comment_default_mode_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_myfarnet_cooperation_idea';
  $strongarm->value = '50';
  $export['comment_default_per_page_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_myfarnet_cooperation_idea';
  $strongarm->value = 1;
  $export['comment_form_location_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_myfarnet_cooperation_idea';
  $strongarm->value = '2';
  $export['comment_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_myfarnet_cooperation_idea';
  $strongarm->value = '1';
  $export['comment_preview_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_myfarnet_cooperation_idea';
  $strongarm->value = 1;
  $export['comment_subject_field_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__myfarnet_cooperation_idea';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'newsletter' => array(
        'custom_settings' => FALSE,
      ),
      'newsletter_news_list' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'flag_organisation' => array(
        'custom_settings' => FALSE,
      ),
      'media_gallery_page' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'xmlsitemap' => array(
          'weight' => '29',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_myfarnet_cooperation_idea';
  $strongarm->value = '4';
  $export['language_content_type_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_myfarnet_cooperation_idea';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_myfarnet_cooperation_idea';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_myfarnet_cooperation_idea';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_myfarnet_cooperation_idea';
  $strongarm->value = '1';
  $export['node_preview_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_myfarnet_cooperation_idea';
  $strongarm->value = 0;
  $export['node_submitted_myfarnet_cooperation_idea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_bg_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_bg_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_da_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_da_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_de_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_de_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_el_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_el_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_et_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_et_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_fi_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_fi_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_hr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_hr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_it_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_it_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_lt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_lt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_lv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_lv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_pattern';
  $strongarm->value = '[site:nexteuropa_communities_keyword]/[node:og_group_ref]/[node:content-type]s/[node:title]';
  $export['pathauto_node_myfarnet_cooperation_idea_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_pl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_pl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_pt-pt_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_pt-pt_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_ro_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_ro_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_sl_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_sl_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_sv_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_sv_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_myfarnet_cooperation_idea_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_myfarnet_cooperation_idea_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_node_myfarnet_cooperation_idea';
  $strongarm->value = array(
    'status' => '0',
    'priority' => '0.5',
  );
  $export['xmlsitemap_settings_node_myfarnet_cooperation_idea'] = $strongarm;

  return $export;
}
