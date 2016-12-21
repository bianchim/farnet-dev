<?php

/**
 * @file
 * farnet_factsheet_country.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function farnet_factsheet_country_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|factsheet_country|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'factsheet_country';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|factsheet_country|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_factsheet_country_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|factsheet_country|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'factsheet_country';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_factsheet_content',
        1 => 'group_factsheet_clld_programme',
        2 => 'field_interactive_map',
        3 => 'group_factsheet_clld_budget',
        4 => 'field_flag_areas',
        5 => 'field_picture',
        6 => 'group_factsheet_areas',
        7 => 'group_factsheet_national_network',
        8 => 'field_term_country',
        9 => 'group_factsheet_cooperation',
        10 => 'field_clld_context',
        11 => 'field_ne_body',
        12 => 'field_axis_4',
        13 => 'group_factsheet_delivery_clld',
        14 => 'title_field',
        15 => 'field_organisations',
        16 => 'field_clld_objectives',
        17 => 'group_factsheet_key_documents',
        18 => 'group_ne_factsheet_taxonomy',
        19 => 'field_emff_budget',
        20 => 'group_ne_factsheet_publication',
        21 => 'field_proportion_emff',
        22 => 'field_co_funding',
        23 => 'field_total_budget',
        24 => 'field_number_flags',
        25 => 'group_factsheet_map',
        26 => 'field_cooperation',
        27 => 'field_key_documents',
        28 => 'field_average_budget_per_flag',
        29 => 'field_national_network',
        30 => 'field_publication_date',
        31 => 'field_key_actors_roles',
        32 => 'field_funding_process',
        33 => 'field_diagram_delivery',
      ),
    ),
    'fields' => array(
      'group_factsheet_content' => 'ds_content',
      'group_factsheet_clld_programme' => 'ds_content',
      'field_interactive_map' => 'ds_content',
      'group_factsheet_clld_budget' => 'ds_content',
      'field_flag_areas' => 'ds_content',
      'field_picture' => 'ds_content',
      'group_factsheet_areas' => 'ds_content',
      'group_factsheet_national_network' => 'ds_content',
      'field_term_country' => 'ds_content',
      'group_factsheet_cooperation' => 'ds_content',
      'field_clld_context' => 'ds_content',
      'field_ne_body' => 'ds_content',
      'field_axis_4' => 'ds_content',
      'group_factsheet_delivery_clld' => 'ds_content',
      'title_field' => 'ds_content',
      'field_organisations' => 'ds_content',
      'field_clld_objectives' => 'ds_content',
      'group_factsheet_key_documents' => 'ds_content',
      'group_ne_factsheet_taxonomy' => 'ds_content',
      'field_emff_budget' => 'ds_content',
      'group_ne_factsheet_publication' => 'ds_content',
      'field_proportion_emff' => 'ds_content',
      'field_co_funding' => 'ds_content',
      'field_total_budget' => 'ds_content',
      'field_number_flags' => 'ds_content',
      'group_factsheet_map' => 'ds_content',
      'field_cooperation' => 'ds_content',
      'field_key_documents' => 'ds_content',
      'field_average_budget_per_flag' => 'ds_content',
      'field_national_network' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'field_key_actors_roles' => 'ds_content',
      'field_funding_process' => 'ds_content',
      'field_diagram_delivery' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|factsheet_country|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|factsheet_country|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'factsheet_country';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_picture',
      ),
      'right' => array(
        1 => 'title',
        2 => 'field_term_country',
        3 => 'field_publication_date',
        4 => 'field_farnet_abstract',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_picture' => 'left',
      'title' => 'right',
      'field_term_country' => 'right',
      'field_publication_date' => 'right',
      'field_farnet_abstract' => 'right',
      'node_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|factsheet_country|teaser'] = $ds_layout;

  return $export;
}
