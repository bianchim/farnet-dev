<?php
/**
 * @file
 * farnet_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function farnet_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'farnet_manage_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Manage Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'name' => 'name',
    'field_firstname' => 'field_firstname',
    'field_lastname' => 'field_lastname',
    'field_organisation' => 'field_organisation',
    'field_keep_me_informed_on_farnet' => 'field_keep_me_informed_on_farnet',
    'created' => 'created',
    'access' => 'access',
    'status' => 'status',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organisation' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_keep_me_informed_on_farnet' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_organisation_target_id']['id'] = 'field_organisation_target_id';
  $handler->display->display_options['relationships']['field_organisation_target_id']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['relationships']['field_organisation_target_id']['field'] = 'field_organisation_target_id';
  $handler->display->display_options['relationships']['field_organisation_target_id']['label'] = 'entity_reference_field_organisation';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  /* Field: User: Organisation */
  $handler->display->display_options['fields']['field_organisation']['id'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['table'] = 'field_data_field_organisation';
  $handler->display->display_options['fields']['field_organisation']['field'] = 'field_organisation';
  $handler->display->display_options['fields']['field_organisation']['settings'] = array(
    'link' => 0,
  );
  /* Field: User: Keep me informed on FARNET activities */
  $handler->display->display_options['fields']['field_keep_me_informed_on_farnet']['id'] = 'field_keep_me_informed_on_farnet';
  $handler->display->display_options['fields']['field_keep_me_informed_on_farnet']['table'] = 'field_data_field_keep_me_informed_on_farnet';
  $handler->display->display_options['fields']['field_keep_me_informed_on_farnet']['field'] = 'field_keep_me_informed_on_farnet';
  $handler->display->display_options['fields']['field_keep_me_informed_on_farnet']['label'] = 'FARNET activities';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'long';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Active */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Action';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: First name (field_firstname) */
  $handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_firstname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator_id'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['label'] = 'First name';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['identifier'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Last name (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator_id'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['label'] = 'Last name';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['identifier'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Country (field_user_country) */
  $handler->display->display_options['filters']['field_user_country_tid']['id'] = 'field_user_country_tid';
  $handler->display->display_options['filters']['field_user_country_tid']['table'] = 'field_data_field_user_country';
  $handler->display->display_options['filters']['field_user_country_tid']['field'] = 'field_user_country_tid';
  $handler->display->display_options['filters']['field_user_country_tid']['value'] = '';
  $handler->display->display_options['filters']['field_user_country_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_user_country_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_country_tid']['expose']['operator_id'] = 'field_user_country_tid_op';
  $handler->display->display_options['filters']['field_user_country_tid']['expose']['label'] = 'Country';
  $handler->display->display_options['filters']['field_user_country_tid']['expose']['operator'] = 'field_user_country_tid_op';
  $handler->display->display_options['filters']['field_user_country_tid']['expose']['identifier'] = 'field_user_country_tid';
  $handler->display->display_options['filters']['field_user_country_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_user_country_tid']['vocabulary'] = 'ec_world_countries';
  /* Filter criterion: Content: Name (title_field) */
  $handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['relationship'] = 'field_organisation_target_id';
  $handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_field_value']['group'] = 1;
  $handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Organisation';
  $handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
  $handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
  $handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'users';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Date: Date (users) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'users';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>';
  $handler->display->display_options['filters']['date_filter']['group'] = 1;
  $handler->display->display_options['filters']['date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter']['expose']['operator_id'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['label'] = 'Registration date after';
  $handler->display->display_options['filters']['date_filter']['expose']['operator'] = 'date_filter_op';
  $handler->display->display_options['filters']['date_filter']['expose']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter']['group_info']['label'] = 'Date';
  $handler->display->display_options['filters']['date_filter']['group_info']['identifier'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['group_info']['optional'] = FALSE;
  $handler->display->display_options['filters']['date_filter']['group_info']['default_group'] = '1';
  $handler->display->display_options['filters']['date_filter']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'After',
      'operator' => '>',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => NULL,
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
    2 => array(
      'title' => 'Before',
      'operator' => '<',
      'value' => array(
        'value_group' => array(
          'value_choose_input_type' => 'date',
          'value' => NULL,
          'default_date' => '',
        ),
        'min_group' => array(
          'min_choose_input_type' => 'date',
          'min' => NULL,
          'default_date' => '',
        ),
        'max_group' => array(
          'max_choose_input_type' => 'date',
          'max' => NULL,
          'default_to_date' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['filters']['date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'users.created' => 'users.created',
  );
  $handler->display->display_options['filters']['date_filter']['date_method'] = 'AND';
  /* Filter criterion: Date: Date (users) */
  $handler->display->display_options['filters']['date_filter_1']['id'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['table'] = 'users';
  $handler->display->display_options['filters']['date_filter_1']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter_1']['operator'] = '<';
  $handler->display->display_options['filters']['date_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['date_filter_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator_id'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['label'] = 'Registration date before';
  $handler->display->display_options['filters']['date_filter_1']['expose']['operator'] = 'date_filter_1_op';
  $handler->display->display_options['filters']['date_filter_1']['expose']['identifier'] = 'date_filter_1';
  $handler->display->display_options['filters']['date_filter_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['date_filter_1']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['date_filter_1']['date_fields'] = array(
    'users.created' => 'users.created',
  );
  $handler->display->display_options['filters']['date_filter_1']['date_method'] = 'AND';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/manage-users';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Users';
  $handler->display->display_options['menu']['name'] = 'management';
  $export['farnet_manage_users'] = $view;

  return $export;
}
