<?php

/**
 * @file
 * farnet_factsheet_country.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_factsheet_country_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_view_factsheets_country';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Factsheets Country';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Country Factsheets On the Ground';
  $handler->display->display_options['css_class'] = 'listing-views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_picture']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'farnet_teaser',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Publication date */
  $handler->display->display_options['fields']['field_publication_date']['id'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['field'] = 'field_publication_date';
  $handler->display->display_options['fields']['field_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_publication_date']['settings'] = array(
    'format_type' => 'teaser',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_term_country']['id'] = 'field_term_country';
  $handler->display->display_options['fields']['field_term_country']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['fields']['field_term_country']['field'] = 'field_term_country';
  $handler->display->display_options['fields']['field_term_country']['label'] = '';
  $handler->display->display_options['fields']['field_term_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_country']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_term_country']['delta_offset'] = '0';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_farnet_abstract']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Country (field_term_country) */
  $handler->display->display_options['sorts']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['sorts']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['sorts']['field_term_country_tid']['field'] = 'field_term_country_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'factsheet_country' => 'factsheet_country',
  );
  /* Filter criterion: Content: Country (field_term_country) */
  $handler->display->display_options['filters']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['filters']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['operator_id'] = 'field_term_country_tid_op';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['operator'] = 'field_term_country_tid_op';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['identifier'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_term_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_country_tid']['vocabulary'] = 'countries';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['operator_id'] = 'field_term_theme_tid_op';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['operator'] = 'field_term_theme_tid_op';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['identifier'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Country Factsheets';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_publication_date' => 'field_publication_date',
    'field_farnet_abstract' => 'field_farnet_abstract',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'on-the-ground/country-factsheets';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'cf_on_the_ground');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'path' => 'path',
    'field_picture' => 'field_picture',
    'title' => 'title',
    'field_publication_date' => 'field_publication_date',
    'field_term_country' => 'field_term_country',
    'field_farnet_abstract' => 'field_farnet_abstract',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Lorem ipsum dolor sit amet, consectetur adipiscing elit.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'factsheet_country' => 'factsheet_country',
  );
  /* Filter criterion: Content: Country (field_term_country) */
  $handler->display->display_options['filters']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['filters']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['operator_id'] = 'field_term_country_tid_op';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['label'] = ' ';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['operator'] = 'field_term_country_tid_op';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['identifier'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_term_country_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_country_tid']['vocabulary'] = 'countries';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['operator_id'] = 'field_term_theme_tid_op';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['operator'] = 'field_term_theme_tid_op';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['identifier'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'on-the-ground/country-factsheets';

  $export['farnet_view_factsheets_country'] = $view;

  return $export;
}
