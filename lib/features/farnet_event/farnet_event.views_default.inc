<?php

/**
 * @file
 * farnet_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_view_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['css_class'] = 'listing-views';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['field_picture']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'medium',
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
  /* Field: Field: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['label'] = '';
  $handler->display->display_options['fields']['field_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
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
  $handler->display->display_options['fields']['field_term_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_term_country']['delta_offset'] = '0';
  /* Field: Content: City */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['label'] = '';
  $handler->display->display_options['fields']['field_city']['element_label_colon'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_farnet_abstract']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_farnet_abstract']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_farnet_abstract']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_farnet_abstract']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
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
    'nexteuropa_event' => 'nexteuropa_event',
  );
  /* Filter criterion: Content: Country (field_term_country) */
  $handler->display->display_options['filters']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['filters']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['value'] = '';
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
  $handler->display->display_options['filters']['field_term_country_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_term_country_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = '';
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
  $handler->display->display_options['filters']['field_term_theme_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = '';
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Type of events';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'nexteuropa_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_event_type_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-events/events';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['description'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Transnational Seminars */
  $handler = $view->new_display('page', 'Transnational Seminars', 'page_transnational_seminars');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Transnational seminars';
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
    'nexteuropa_event' => 'nexteuropa_event',
  );
  /* Filter criterion: Content: Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    96 => '96',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'nexteuropa_event_type';
  $handler->display->display_options['path'] = 'news-events/events/transnational-seminars';
  $handler->display->display_options['menu']['title'] = 'Transnational seminars';
  $handler->display->display_options['menu']['description'] = 'Transnational seminars';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Managing authorities & National networks */
  $handler = $view->new_display('page', 'Managing authorities & National networks', 'page_managing_authorities');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Managing authorities & National networks';
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
    'nexteuropa_event' => 'nexteuropa_event',
  );
  /* Filter criterion: Content: Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'nexteuropa_event_type';
  $handler->display->display_options['path'] = 'news-events/events/ma-nn';
  $handler->display->display_options['menu']['title'] = 'Managing authorities & National networks';
  $handler->display->display_options['menu']['description'] = 'Managing authorities & National networks';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: National / regional / local events */
  $handler = $view->new_display('page', 'National / regional / local events', 'page_national_regional_local');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'National / regional / local events';
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
    'nexteuropa_event' => 'nexteuropa_event',
  );
  /* Filter criterion: Content: Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    98 => '98',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'nexteuropa_event_type';
  $handler->display->display_options['path'] = 'news-events/events/other';
  $handler->display->display_options['menu']['title'] = 'National / regional / local events ';
  $handler->display->display_options['menu']['description'] = 'National / regional / local events ';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Conferences */
  $handler = $view->new_display('page', 'Conferences', 'page_conferences');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Conferences';
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
    'nexteuropa_event' => 'nexteuropa_event',
  );
  /* Filter criterion: Content: Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['value'] = array(
    99 => '99',
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'nexteuropa_event_type';
  $handler->display->display_options['path'] = 'news-events/events/conferences';
  $handler->display->display_options['menu']['title'] = 'Conferences';
  $handler->display->display_options['menu']['description'] = 'Conferences';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['farnet_view_events'] = $view;

  return $export;
}
