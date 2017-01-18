<?php

/**
 * @file
 * farnet_factsheet_flag.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_factsheet_flag_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cooperation_idea_by_flag';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Cooperation Idea By Flag Display';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'No Cooperation Ideas';
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
  /* Contextual filter: Content: Flag (field_flag) */
  $handler->display->display_options['arguments']['field_flag_target_id']['id'] = 'field_flag_target_id';
  $handler->display->display_options['arguments']['field_flag_target_id']['table'] = 'field_data_field_flag';
  $handler->display->display_options['arguments']['field_flag_target_id']['field'] = 'field_flag_target_id';
  $handler->display->display_options['arguments']['field_flag_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_flag_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_flag_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_flag_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_flag_target_id']['summary_options']['items_per_page'] = '25';
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
    'cooperation_idea' => 'cooperation_idea',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_idea_by_flag');
  $handler->display->display_options['path'] = 'cooperation-idea-by-flag';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_idea_by_flag');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['cooperation_idea_by_flag'] = $view;

  $view = new view();
  $view->name = 'farnet_gp_by_flag_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet GP By FLAG Display';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'No good practices';
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
  /* Contextual filter: Content: Flag (field_flag) */
  $handler->display->display_options['arguments']['field_flag_target_id']['id'] = 'field_flag_target_id';
  $handler->display->display_options['arguments']['field_flag_target_id']['table'] = 'field_data_field_flag';
  $handler->display->display_options['arguments']['field_flag_target_id']['field'] = 'field_flag_target_id';
  $handler->display->display_options['arguments']['field_flag_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_flag_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_flag_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_flag_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_flag_target_id']['summary_options']['items_per_page'] = '25';
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
    'gp_project' => 'gp_project',
    'gp_short_story' => 'gp_short_story',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_gp_by_flag');
  $handler->display->display_options['path'] = 'gp-by-flag';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_gp_by_flag');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['farnet_gp_by_flag_display'] = $view;

  $view = new view();
  $view->name = 'farnet_view_factsheets_flag';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Farnet Factsheets FLAG';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Farnet Factsheets Flag View';
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
  /* Field: Content: Code */
  $handler->display->display_options['fields']['field_ff_code']['id'] = 'field_ff_code';
  $handler->display->display_options['fields']['field_ff_code']['table'] = 'field_data_field_ff_code';
  $handler->display->display_options['fields']['field_ff_code']['field'] = 'field_ff_code';
  $handler->display->display_options['fields']['field_ff_code']['label'] = '';
  $handler->display->display_options['fields']['field_ff_code']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_farnet_abstract']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_farnet_abstract']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_farnet_abstract']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Publication date (field_publication_date) */
  $handler->display->display_options['sorts']['field_publication_date_value']['id'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['table'] = 'field_data_field_publication_date';
  $handler->display->display_options['sorts']['field_publication_date_value']['field'] = 'field_publication_date_value';
  $handler->display->display_options['sorts']['field_publication_date_value']['order'] = 'DESC';
  /* Sort criterion: Content: Code (field_ff_code) */
  $handler->display->display_options['sorts']['field_ff_code_value']['id'] = 'field_ff_code_value';
  $handler->display->display_options['sorts']['field_ff_code_value']['table'] = 'field_data_field_ff_code';
  $handler->display->display_options['sorts']['field_ff_code_value']['field'] = 'field_ff_code_value';
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
  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_factsheet_flag');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FLAG Factsheets';
  $handler->display->display_options['path'] = 'on-the-ground/flag-factsheets';
  $export['farnet_view_factsheets_flag'] = $view;

  return $export;
}
