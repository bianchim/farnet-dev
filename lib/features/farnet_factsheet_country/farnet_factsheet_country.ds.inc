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
        0 => 'og_group_ref',
        1 => 'field_interactive_map',
        2 => 'field_flag_areas',
        3 => 'field_picture',
        4 => 'field_farnet_abstract',
        5 => 'field_term_country',
        6 => 'field_ne_body',
        7 => 'field_clld_context',
        8 => 'field_axis_4',
        9 => 'field_organisations',
        10 => 'field_clld_objectives',
        11 => 'field_emff_budget',
        12 => 'field_proportion_emff',
        13 => 'field_co_funding',
        14 => 'field_total_budget',
        15 => 'field_key_documents',
        16 => 'field_cooperation',
        17 => 'field_number_flags',
        18 => 'field_publication_abstract',
        19 => 'field_term_publication_channels',
        20 => 'field_average_budget_per_flag',
        21 => 'field_national_network',
        22 => 'field_publication_date',
        23 => 'field_key_actors_roles',
        24 => 'field_funding_process',
        25 => 'field_tags',
        26 => 'group_content_access',
        27 => 'field_diagram_delivery',
      ),
    ),
    'fields' => array(
      'og_group_ref' => 'ds_content',
      'field_interactive_map' => 'ds_content',
      'field_flag_areas' => 'ds_content',
      'field_picture' => 'ds_content',
      'field_farnet_abstract' => 'ds_content',
      'field_term_country' => 'ds_content',
      'field_ne_body' => 'ds_content',
      'field_clld_context' => 'ds_content',
      'field_axis_4' => 'ds_content',
      'field_organisations' => 'ds_content',
      'field_clld_objectives' => 'ds_content',
      'field_emff_budget' => 'ds_content',
      'field_proportion_emff' => 'ds_content',
      'field_co_funding' => 'ds_content',
      'field_total_budget' => 'ds_content',
      'field_key_documents' => 'ds_content',
      'field_cooperation' => 'ds_content',
      'field_number_flags' => 'ds_content',
      'field_publication_abstract' => 'ds_content',
      'field_term_publication_channels' => 'ds_content',
      'field_average_budget_per_flag' => 'ds_content',
      'field_national_network' => 'ds_content',
      'field_publication_date' => 'ds_content',
      'field_key_actors_roles' => 'ds_content',
      'field_funding_process' => 'ds_content',
      'field_tags' => 'ds_content',
      'group_content_access' => 'ds_content',
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
