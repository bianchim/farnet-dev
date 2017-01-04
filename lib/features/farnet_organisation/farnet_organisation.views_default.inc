<?php
/**
 * @file
 * farnet_organisation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_organisation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_national_authorities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'National authorities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'National authorities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_term_country',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_term_country']['id'] = 'field_term_country';
  $handler->display->display_options['fields']['field_term_country']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['fields']['field_term_country']['field'] = 'field_term_country';
  $handler->display->display_options['fields']['field_term_country']['label'] = '';
  $handler->display->display_options['fields']['field_term_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_term_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_country']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_term_country']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_term_type_organisation']['id'] = 'field_term_type_organisation';
  $handler->display->display_options['fields']['field_term_type_organisation']['table'] = 'field_data_field_term_type_organisation';
  $handler->display->display_options['fields']['field_term_type_organisation']['field'] = 'field_term_type_organisation';
  $handler->display->display_options['fields']['field_term_type_organisation']['label'] = '';
  $handler->display->display_options['fields']['field_term_type_organisation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_term_type_organisation']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Country (field_term_country) */
  $handler->display->display_options['sorts']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['sorts']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['sorts']['field_term_country_tid']['field'] = 'field_term_country_tid';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Country (field_term_country) */
  $handler->display->display_options['filters']['field_term_country_tid']['id'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['table'] = 'field_data_field_term_country';
  $handler->display->display_options['filters']['field_term_country_tid']['field'] = 'field_term_country_tid';
  $handler->display->display_options['filters']['field_term_country_tid']['value'] = '';
  $handler->display->display_options['filters']['field_term_country_tid']['group'] = 1;
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
  $handler->display->display_options['filters']['field_term_country_tid']['vocabulary'] = 'countries';
  $handler->display->display_options['filters']['field_term_country_tid']['error_message'] = FALSE;
  /* Filter criterion: Content: Type (field_term_type_organisation) */
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['id'] = 'field_term_type_organisation_tid';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['table'] = 'field_data_field_term_type_organisation';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['field'] = 'field_term_type_organisation_tid';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['value'] = '';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['expose']['operator_id'] = 'field_term_type_organisation_tid_op';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['expose']['operator'] = 'field_term_type_organisation_tid_op';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['expose']['identifier'] = 'field_term_type_organisation_tid';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['vocabulary'] = 'farnet_type_organisation';
  $handler->display->display_options['filters']['field_term_type_organisation_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about/who-is-who/national-authorities';
  $export['farnet_national_authorities'] = $view;

  return $export;
}
