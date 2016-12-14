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
    'gp_short_story' => 'gp_short_story',
    'publication' => 'publication',
    'gp_method' => 'gp_method',
    'farnet_article' => 'farnet_article',
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
    'gp_short_story' => 'gp_short_story',
    'publication' => 'publication',
    'gp_method' => 'gp_method',
    'farnet_article' => 'farnet_article',
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
  /* $handler->display->display_options['filters']['field_term_theme_tid']['value'] = array(); */
  $handler->display->display_options['filters']['field_term_theme_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_term_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_term_theme_tid']['vocabulary'] = 'farnet_theme';
  $handler->display->display_options['path'] = 'themes';
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
    'gp_short_story' => 'gp_short_story',
    'publication' => 'publication',
    'gp_method' => 'gp_method',
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
  $view->description = 'GP Project + GP Method';
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
    'gp_project' => 'gp_project',
    'gp_method' => 'gp_method',
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

  /* Display: GP Project */
  $handler = $view->new_display('page', 'GP Project', 'page_projects');
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
    'gp_project' => 'gp_project',
  );
  $handler->display->display_options['path'] = 'on-the-ground/good-practices/projects';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['description'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: GP Method */
  $handler = $view->new_display('page', 'GP Method', 'page_methods');
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
    'gp_method' => 'gp_method',
  );
  $handler->display->display_options['path'] = 'on-the-ground/good-practices/methods';
  $handler->display->display_options['menu']['title'] = 'Methods';
  $handler->display->display_options['menu']['description'] = 'Methods';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['farnet_view_good_practices'] = $view;

  $view = new view();
  $view->name = 'homepage_highlight';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Homepage highlight';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'homepage-highlight-carousel';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_carousel_plugin_style';
  $handler->display->display_options['style_options']['interval'] = '5000';
  $handler->display->display_options['style_options']['navigation'] = 1;
  $handler->display->display_options['style_options']['indicators'] = 1;
  $handler->display->display_options['style_options']['pause'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'homepage-highlight-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_farnet_abstract']['element_label_colon'] = FALSE;
  /* Field: Content: Page */
  $handler->display->display_options['fields']['field_page']['id'] = 'field_page';
  $handler->display->display_options['fields']['field_page']['table'] = 'field_data_field_page';
  $handler->display->display_options['fields']['field_page']['field'] = 'field_page';
  $handler->display->display_options['fields']['field_page']['label'] = '';
  $handler->display->display_options['fields']['field_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_page']['alter']['text'] = 'node/[field_page-target_id]';
  $handler->display->display_options['fields']['field_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_page']['delta_offset'] = '0';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_farnet_url']['id'] = 'field_farnet_url';
  $handler->display->display_options['fields']['field_farnet_url']['table'] = 'field_data_field_farnet_url';
  $handler->display->display_options['fields']['field_farnet_url']['field'] = 'field_farnet_url';
  $handler->display->display_options['fields']['field_farnet_url']['label'] = '';
  $handler->display->display_options['fields']['field_farnet_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_farnet_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_farnet_url']['empty'] = '[field_page]';
  $handler->display->display_options['fields']['field_farnet_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_farnet_url']['type'] = 'link_plain';
  /* Field: Content: Picture */
  $handler->display->display_options['fields']['field_picture']['id'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['table'] = 'field_data_field_picture';
  $handler->display->display_options['fields']['field_picture']['field'] = 'field_picture';
  $handler->display->display_options['fields']['field_picture']['label'] = '';
  $handler->display->display_options['fields']['field_picture']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_picture']['alter']['path'] = '[field_farnet_url]';
  $handler->display->display_options['fields']['field_picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_picture']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_picture']['settings'] = array(
    'image_style' => 'landscape',
    'image_link' => '',
  );
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
    'homepage_highlight' => 'homepage_highlight',
  );

  /* Display: Homepage Highlight block */
  $handler = $view->new_display('block', 'Homepage Highlight block', 'block');
  $export['homepage_highlight'] = $view;

  return $export;
}
