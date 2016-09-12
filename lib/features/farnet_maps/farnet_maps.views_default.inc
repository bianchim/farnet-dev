<?php

/**
 * @file
 * farnet_maps.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_maps_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_maps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet maps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Farnet maps';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'interactive_map/all';

  /* Display: Feed Organisation */
  $handler = $view->new_display('feed', 'Feed Organisation', 'feed_organisation');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson_feed';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_latitude';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_longitude';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'field_ne_body';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Latitude */
  $handler->display->display_options['fields']['field_latitude']['id'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['field_latitude']['field'] = 'field_latitude';
  /* Field: Content: Longitude */
  $handler->display->display_options['fields']['field_longitude']['id'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['field_longitude']['field'] = 'field_longitude';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ne_body']['id'] = 'field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['table'] = 'field_data_field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['field'] = 'field_ne_body';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_term_country) */
  $handler->display->display_options['arguments']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['arguments']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_term_country_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_term_country_tid']['validate_options']['vocabularies'] = array(
    'countries' => 'countries',
  );
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['fail'] = 'empty';
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
    'organisation' => 'organisation',
  );
  $handler->display->display_options['path'] = 'interactive_map/organisation';

  /* Display: Feed GP Method */
  $handler = $view->new_display('feed', 'Feed GP Method', 'feed_gp_method');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson_feed';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_latitude';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_longitude';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'field_ne_body';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Latitude */
  $handler->display->display_options['fields']['field_latitude']['id'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['field_latitude']['field'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_latitude']['delta_offset'] = '0';
  /* Field: Content: Longitude */
  $handler->display->display_options['fields']['field_longitude']['id'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['field_longitude']['field'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_longitude']['delta_offset'] = '0';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ne_body']['id'] = 'field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['table'] = 'field_data_field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['field'] = 'field_ne_body';
  /* Field: Content: Latitude (field_latitude:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Content: Longitude (field_longitude:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['label'] = '';
  $handler->display->display_options['fields']['delta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_term_country) */
  $handler->display->display_options['arguments']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['arguments']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_term_country_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_term_country_tid']['validate_options']['vocabularies'] = array(
    'countries' => 'countries',
  );
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['fail'] = 'empty';
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
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'delta_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'delta';
  $handler->display->display_options['path'] = 'interactive_map/gp_method';

  /* Display: Feed Factsheet Flag */
  $handler = $view->new_display('feed', 'Feed Factsheet Flag', 'feed_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson_feed';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_latitude';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_longitude';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'field_ne_body';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Latitude */
  $handler->display->display_options['fields']['field_latitude']['id'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['field_latitude']['field'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_latitude']['delta_offset'] = '0';
  /* Field: Content: Longitude */
  $handler->display->display_options['fields']['field_longitude']['id'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['field_longitude']['field'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_longitude']['delta_offset'] = '0';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ne_body']['id'] = 'field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['table'] = 'field_data_field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['field'] = 'field_ne_body';
  /* Field: Content: Latitude (field_latitude:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Content: Longitude (field_longitude:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['label'] = '';
  $handler->display->display_options['fields']['delta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_term_country) */
  $handler->display->display_options['arguments']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['arguments']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_term_country_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_term_country_tid']['validate_options']['vocabularies'] = array(
    'countries' => 'countries',
  );
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['fail'] = 'empty';
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
    'factsheet_flag' => 'factsheet_flag',
  );
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'delta_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'delta';
  $handler->display->display_options['path'] = 'interactive_map/factsheet_flag';

  /* Display: Feed CP Project */
  $handler = $view->new_display('feed', 'Feed CP Project', 'feed_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_geojson_feed';
  $handler->display->display_options['style_options']['data_source']['value'] = 'latlon';
  $handler->display->display_options['style_options']['data_source']['latitude'] = 'field_latitude';
  $handler->display->display_options['style_options']['data_source']['longitude'] = 'field_longitude';
  $handler->display->display_options['style_options']['data_source']['wkt'] = 'title';
  $handler->display->display_options['style_options']['data_source']['name_field'] = 'title';
  $handler->display->display_options['style_options']['data_source']['description_field'] = 'field_ne_body';
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Latitude */
  $handler->display->display_options['fields']['field_latitude']['id'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['field_latitude']['field'] = 'field_latitude';
  $handler->display->display_options['fields']['field_latitude']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_latitude']['delta_offset'] = '0';
  /* Field: Content: Longitude */
  $handler->display->display_options['fields']['field_longitude']['id'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['field_longitude']['field'] = 'field_longitude';
  $handler->display->display_options['fields']['field_longitude']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_longitude']['delta_offset'] = '0';
  /* Field: Content: Abstract */
  $handler->display->display_options['fields']['field_farnet_abstract']['id'] = 'field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['table'] = 'field_data_field_farnet_abstract';
  $handler->display->display_options['fields']['field_farnet_abstract']['field'] = 'field_farnet_abstract';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_ne_body']['id'] = 'field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['table'] = 'field_data_field_ne_body';
  $handler->display->display_options['fields']['field_ne_body']['field'] = 'field_ne_body';
  /* Field: Content: Latitude (field_latitude:delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_latitude';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Field: Content: Longitude (field_longitude:delta) */
  $handler->display->display_options['fields']['delta_1']['id'] = 'delta_1';
  $handler->display->display_options['fields']['delta_1']['table'] = 'field_data_field_longitude';
  $handler->display->display_options['fields']['delta_1']['field'] = 'delta';
  $handler->display->display_options['fields']['delta_1']['label'] = '';
  $handler->display->display_options['fields']['delta_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Country (field_term_country) */
  $handler->display->display_options['arguments']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['arguments']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_term_country_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_term_country_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_term_country_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_term_country_tid']['validate_options']['vocabularies'] = array(
    'countries' => 'countries',
  );
  $handler->display->display_options['arguments']['field_term_country_tid']['validate']['fail'] = 'empty';
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
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'delta_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'delta';
  $handler->display->display_options['path'] = 'interactive_map/gp_project';
  $export['farnet_maps'] = $view;

  return $export;
}
