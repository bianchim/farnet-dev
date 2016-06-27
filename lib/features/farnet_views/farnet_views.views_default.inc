<?php

/**
 * @file
 * farnet_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_view_themes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Themes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'farnet_theme';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';

  /* Display: themes */
  $handler = $view->new_display('page', 'themes', 'page_themes');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Themes';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes';

  /* Display: employment-innovation */
  $handler = $view->new_display('page', 'employment-innovation', 'page_employment_innovation');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Adding value, employment, innovation';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes/employment-innovation';

  /* Display: diversification */
  $handler = $view->new_display('page', 'diversification', 'page_diversification');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Diversification';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes/diversification';

  /* Display: environment */
  $handler = $view->new_display('page', 'environment', 'page_environment');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Environment';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes/environment';

  /* Display: social-culture */
  $handler = $view->new_display('page', 'social-culture', 'page_social_culture');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Social well-being, cultural heritage';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes/social-culture';

  /* Display: governance-management */
  $handler = $view->new_display('page', 'governance-management', 'page_governance_management');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Governance and management';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes/governance-management';

  /* Display: other */
  $handler = $view->new_display('page', 'other', 'page_other');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other…';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['filters']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['filters']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['filters']['field_publication_date_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_publication_date_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_publication_date_value']['default_date'] = 'now';
  /* Filter criterion: Content: Theme (field_term_theme) */
  $handler->display->display_options['filters']['field_term_theme_tid']['id'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['table'] = 'field_data_field_term_theme';
  $handler->display->display_options['filters']['field_term_theme_tid']['field'] = 'field_term_theme_tid';
  $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes/other';
  $export['farnet_view_themes'] = $view;

  $view = new view();
  $view->name = 'farnet_view_news';
  $view->description = 'Views for the news Farnet and other';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'factsheet_country' => 'factsheet_country',
    'factsheet_flag' => 'factsheet_flag',
    'nexteuropa_news' => 'nexteuropa_news',
    'project_short_story' => 'project_short_story',
    'publication' => 'publication',
    'summary_sheet_method' => 'summary_sheet_method',
  );
  /* Filter criterion: Content: Publication channels (field_term_publication_channels) */
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['id'] = 'field_term_publication_channels_tid';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['table'] = 'field_data_field_term_publication_channels';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['field'] = 'field_term_publication_channels_tid';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['vocabulary'] = 'farnet_publication_channels';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'news-events/news';

  /* Display: Farnet */
  $handler = $view->new_display('page', 'Farnet', 'page_news_farnet');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FARNET news';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'nexteuropa_news' => 'nexteuropa_news',
  );
  /* Filter criterion: Content: Publication channels (field_term_publication_channels) */
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['id'] = 'field_term_publication_channels_tid';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['table'] = 'field_data_field_term_publication_channels';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['field'] = 'field_term_publication_channels_tid';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['vocabulary'] = 'farnet_publication_channels';
  $handler->display->display_options['path'] = 'news-events/news/farnet';

  /* Display: Other */
  $handler = $view->new_display('page', 'Other', 'page_news_other');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Other news';
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
    'page' => 'page',
    'nexteuropa_event' => 'nexteuropa_event',
    'nexteuropa_faq' => 'nexteuropa_faq',
    'nexteuropa_news' => 'nexteuropa_news',
  );
  /* Filter criterion: Content: Publication channels (field_term_publication_channels) */
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['id'] = 'field_term_publication_channels_tid';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['table'] = 'field_data_field_term_publication_channels';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['field'] = 'field_term_publication_channels_tid';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['value'] = array();
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_publication_channels_tid']['vocabulary'] = 'farnet_publication_channels';
  $handler->display->display_options['path'] = 'news-events/news/other';
  $export['farnet_view_news'] = $view;

  $view = new view();
  $view->name = 'farnet_view_good_practices';
  $view->description = 'Project Summary Sheet + Method Summary Sheet';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Good Practices Views';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Good practices';
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
    'project_summary_sheet' => 'project_summary_sheet',
    'summary_sheet_method' => 'summary_sheet_method',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'on-the-ground/good-practices';
  $handler->display->display_options['menu']['title'] = 'Good Practices';
  $handler->display->display_options['menu']['description'] = 'Good Practices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Project Summary Sheet */
  $handler = $view->new_display('page', 'Project Summary Sheet', 'page_projects');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Projects';
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
    'project_summary_sheet' => 'project_summary_sheet',
  );
  $handler->display->display_options['path'] = 'on-the-ground/good-practices/projects';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Method Summary Sheet */
  $handler = $view->new_display('page', 'Method Summary Sheet', 'page_methods');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Methods';
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
    'summary_sheet_method' => 'summary_sheet_method',
  );
  $handler->display->display_options['path'] = 'on-the-ground/good-practices/methods';
  $handler->display->display_options['menu']['title'] = 'Methods';
  $handler->display->display_options['menu']['description'] = 'Methods';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['farnet_view_good_practices'] = $view;

  return $export;
}
