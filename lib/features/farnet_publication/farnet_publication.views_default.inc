<?php

/**
 * @file
 * farnet_publication.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_publication_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_view_publication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Publication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brochures';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
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
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type of Publication (field_type_of_publication) */
  $handler->display->display_options['filters']['field_type_of_publication_tid']['id'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['table'] = 'field_data_field_type_of_publication';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['field'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['value'] = array();
  $handler->display->display_options['filters']['field_type_of_publication_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['vocabulary'] = 'farnet_type_publication';

  /* Display: brochures */
  $handler = $view->new_display('page', 'brochures', 'page_brochures');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type of Publication (field_type_of_publication) */
  $handler->display->display_options['filters']['field_type_of_publication_tid']['id'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['table'] = 'field_data_field_type_of_publication';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['field'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['value'] = array();
  $handler->display->display_options['filters']['field_type_of_publication_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['vocabulary'] = 'farnet_type_publication';
  $handler->display->display_options['path'] = 'library/brochures';

  /* Display: magazines */
  $handler = $view->new_display('page', 'magazines', 'page_magazines');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Magazines';
  $handler->display->display_options['display_description'] = 'Magazines';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type of Publication (field_type_of_publication) */
  $handler->display->display_options['filters']['field_type_of_publication_tid']['id'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['table'] = 'field_data_field_type_of_publication';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['field'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['value'] = array();
  $handler->display->display_options['filters']['field_type_of_publication_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['vocabulary'] = 'farnet_type_publication';
  $handler->display->display_options['path'] = 'library/magazines';
  $handler->display->display_options['menu']['title'] = 'kkk';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: presentations */
  $handler = $view->new_display('page', 'presentations', 'page_presentations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Presentations';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publication' => 'publication',
  );
  /* Filter criterion: Content: Type of Publication (field_type_of_publication) */
  $handler->display->display_options['filters']['field_type_of_publication_tid']['id'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['table'] = 'field_data_field_type_of_publication';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['field'] = 'field_type_of_publication_tid';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['value'] = array();
  $handler->display->display_options['filters']['field_type_of_publication_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_type_of_publication_tid']['vocabulary'] = 'farnet_type_publication';
  $handler->display->display_options['path'] = 'library/presentations';
  $export['farnet_view_publication'] = $view;

  return $export;
}
