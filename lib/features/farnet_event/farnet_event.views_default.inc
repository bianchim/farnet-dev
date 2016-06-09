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
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  /* Filter criterion: Content: Type of event (field_term_type_event) */
  $handler->display->display_options['filters']['field_term_type_event_tid']['id'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['table'] = 'field_data_field_term_type_event';
  $handler->display->display_options['filters']['field_term_type_event_tid']['field'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_type_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_type_event_tid']['vocabulary'] = 'nexteuropa_event_type';
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
  /* Filter criterion: Content: Type of event (field_term_type_event) */
  $handler->display->display_options['filters']['field_term_type_event_tid']['id'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['table'] = 'field_data_field_term_type_event';
  $handler->display->display_options['filters']['field_term_type_event_tid']['field'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_type_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_type_event_tid']['vocabulary'] = 'nexteuropa_event_type';
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
  /* Filter criterion: Content: Type of event (field_term_type_event) */
  $handler->display->display_options['filters']['field_term_type_event_tid']['id'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['table'] = 'field_data_field_term_type_event';
  $handler->display->display_options['filters']['field_term_type_event_tid']['field'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_type_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_type_event_tid']['vocabulary'] = 'nexteuropa_event_type';
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
  /* Filter criterion: Content: Type of event (field_term_type_event) */
  $handler->display->display_options['filters']['field_term_type_event_tid']['id'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['table'] = 'field_data_field_term_type_event';
  $handler->display->display_options['filters']['field_term_type_event_tid']['field'] = 'field_term_type_event_tid';
  $handler->display->display_options['filters']['field_term_type_event_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_type_event_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_type_event_tid']['vocabulary'] = 'nexteuropa_event_type';
  $handler->display->display_options['path'] = 'news-events/events/conferences';
  $handler->display->display_options['menu']['title'] = 'Conferences';
  $handler->display->display_options['menu']['description'] = 'Conferences';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['events'] = $view;

  return $export;
}