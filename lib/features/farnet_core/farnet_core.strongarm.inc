<?php
/**
 * @file
 * farnet_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'comment' => 0,
    'bean' => 0,
    'file' => 0,
    'user' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_categories_depth';
  $strongarm->value = 'all';
  $export['site_map_categories_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_css';
  $strongarm->value = 0;
  $export['site_map_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_forum_threshold';
  $strongarm->value = '-1';
  $export['site_map_forum_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_message';
  $strongarm->value = array(
    'value' => '<p>Welcome on the Farnet Sitemap</p>',
    'format' => 'full_html',
  );
  $export['site_map_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_page_title';
  $strongarm->value = 'Farnet Sitemap';
  $export['site_map_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_depth';
  $strongarm->value = 'all';
  $export['site_map_rss_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_rss_front';
  $strongarm->value = 'rss.xml';
  $export['site_map_rss_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_count';
  $strongarm->value = 1;
  $export['site_map_show_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_description';
  $strongarm->value = 1;
  $export['site_map_show_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_front';
  $strongarm->value = 0;
  $export['site_map_show_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
    'menu-breadcrumb-menu' => 0,
    'devel' => 0,
    'management' => 0,
    'navigation' => 0,
    'menu-service-tools' => 0,
    'user-menu' => 0,
  );
  $export['site_map_show_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus_hidden';
  $strongarm->value = 0;
  $export['site_map_show_menus_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_rss_links';
  $strongarm->value = '1';
  $export['site_map_show_rss_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_titles';
  $strongarm->value = 1;
  $export['site_map_show_titles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_vocabularies';
  $strongarm->value = array(
    'farnet_theme' => 'farnet_theme',
    'farnet_faq_category' => 'farnet_faq_category',
    'farnet_publication_channel' => 'farnet_publication_channel',
    'tags' => 'tags',
    'farnet_type_news' => 0,
    'farnet_type_event' => 0,
    'farnet_type_publication' => 0,
    'classification' => 0,
  );
  $export['site_map_show_vocabularies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_term_threshold';
  $strongarm->value = '0';
  $export['site_map_term_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_rebuild_needed';
  $strongarm->value = FALSE;
  $export['xmlsitemap_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_regenerate_needed';
  $strongarm->value = FALSE;
  $export['xmlsitemap_regenerate_needed'] = $strongarm;

  return $export;
}
