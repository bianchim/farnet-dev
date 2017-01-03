<?php

/**
 * @file
 * farnet_factsheet_flag.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function farnet_factsheet_flag_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|factsheet_flag|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'factsheet_flag';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|factsheet_flag|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_factsheet_flag_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|factsheet_flag|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'factsheet_flag';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'group_factsheet_flag_content',
        2 => 'field_interactive_map',
        3 => 'field_title_official',
        4 => 'group_factsheet_flag_area',
        5 => 'group_factsheet_flag_strategy',
        6 => 'field_term_country',
        7 => 'field_collection_region',
        8 => 'group_factsheet_flag_funding',
        9 => 'field_ff_description',
        10 => 'group_factsheet_flag_project_ex',
        11 => 'field_ff_code',
        12 => 'field_type_of_area',
        13 => 'field_ff_programming_period',
        14 => 'field_sea_basins',
        15 => 'group_factsheet_flag_practices',
        16 => 'field_ff_protected_areas',
        17 => 'group_factsheet_flag_project_cal',
        18 => 'group_factsheet_flag_cooperation',
        19 => 'field_ff_population',
        20 => 'group_factsheet_flag_ideas',
        21 => 'field_ff_surface_area',
        22 => 'field_ff_population_density',
        23 => 'group_factsheet_flag_links',
        24 => 'field_view_cooperation_ideas',
        25 => 'field_ff_total_employment',
        26 => 'group_factsheet_flag_partnership',
        27 => 'field_ff_expertise_cooperation',
        28 => 'group_factsheet_flag_visuals',
        29 => 'field_ff_fishing',
        30 => 'field_ff_budget_cooperation',
        31 => 'field_ff_aquaculture',
        32 => 'group_factsheet_flag_contact',
        33 => 'group_factsheet_flag_social',
        34 => 'field_gallery',
        35 => 'field_ff_processing',
        36 => 'group_factsheet_flag_map',
        37 => 'field_ff_women_employment',
        38 => 'field_ff_summary',
        39 => 'field_term_theme',
        40 => 'field_collection_strategy',
        41 => 'field_ff_calls_for_projects',
        42 => 'field_ff_calls_for_projects_url',
        43 => 'field_ff_total_public_budget',
        44 => 'field_ff_emff',
        45 => 'field_ff_ms_co_financing',
        46 => 'field_ff_sources_co_funding',
        47 => 'field_ff_multi_funding',
        48 => 'field_ff_multi_funding_txt',
        49 => 'field_ff_funds',
        50 => 'field_ff_project_title',
        51 => 'field_view_good_practices',
        52 => 'field_ff_accountable_body',
        53 => 'field_ff_members_partnership',
        54 => 'field_ff_public_actors',
        55 => 'field_ff_fisheries_actors',
        56 => 'field_ff_links_description',
        57 => 'field_ff_other_non_fisheries',
        58 => 'field_ff_environmental_actors',
        59 => 'field_ff_number_decision',
        60 => 'field_ff_number_assembly',
        61 => 'field_ff_number_staff',
        62 => 'field_ff_twitter',
        63 => 'field_ff_facebook',
        64 => 'field_collection_language',
        65 => 'field_ff_linkedin',
        66 => 'field_ff_google',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'group_factsheet_flag_content' => 'ds_content',
      'field_interactive_map' => 'ds_content',
      'field_title_official' => 'ds_content',
      'group_factsheet_flag_area' => 'ds_content',
      'group_factsheet_flag_strategy' => 'ds_content',
      'field_term_country' => 'ds_content',
      'field_collection_region' => 'ds_content',
      'group_factsheet_flag_funding' => 'ds_content',
      'field_ff_description' => 'ds_content',
      'group_factsheet_flag_project_ex' => 'ds_content',
      'field_ff_code' => 'ds_content',
      'field_type_of_area' => 'ds_content',
      'field_ff_programming_period' => 'ds_content',
      'field_sea_basins' => 'ds_content',
      'group_factsheet_flag_practices' => 'ds_content',
      'field_ff_protected_areas' => 'ds_content',
      'group_factsheet_flag_project_cal' => 'ds_content',
      'group_factsheet_flag_cooperation' => 'ds_content',
      'field_ff_population' => 'ds_content',
      'group_factsheet_flag_ideas' => 'ds_content',
      'field_ff_surface_area' => 'ds_content',
      'field_ff_population_density' => 'ds_content',
      'group_factsheet_flag_links' => 'ds_content',
      'field_view_cooperation_ideas' => 'ds_content',
      'field_ff_total_employment' => 'ds_content',
      'group_factsheet_flag_partnership' => 'ds_content',
      'field_ff_expertise_cooperation' => 'ds_content',
      'group_factsheet_flag_visuals' => 'ds_content',
      'field_ff_fishing' => 'ds_content',
      'field_ff_budget_cooperation' => 'ds_content',
      'field_ff_aquaculture' => 'ds_content',
      'group_factsheet_flag_contact' => 'ds_content',
      'group_factsheet_flag_social' => 'ds_content',
      'field_gallery' => 'ds_content',
      'field_ff_processing' => 'ds_content',
      'group_factsheet_flag_map' => 'ds_content',
      'field_ff_women_employment' => 'ds_content',
      'field_ff_summary' => 'ds_content',
      'field_term_theme' => 'ds_content',
      'field_collection_strategy' => 'ds_content',
      'field_ff_calls_for_projects' => 'ds_content',
      'field_ff_calls_for_projects_url' => 'ds_content',
      'field_ff_total_public_budget' => 'ds_content',
      'field_ff_emff' => 'ds_content',
      'field_ff_ms_co_financing' => 'ds_content',
      'field_ff_sources_co_funding' => 'ds_content',
      'field_ff_multi_funding' => 'ds_content',
      'field_ff_multi_funding_txt' => 'ds_content',
      'field_ff_funds' => 'ds_content',
      'field_ff_project_title' => 'ds_content',
      'field_view_good_practices' => 'ds_content',
      'field_ff_accountable_body' => 'ds_content',
      'field_ff_members_partnership' => 'ds_content',
      'field_ff_public_actors' => 'ds_content',
      'field_ff_fisheries_actors' => 'ds_content',
      'field_ff_links_description' => 'ds_content',
      'field_ff_other_non_fisheries' => 'ds_content',
      'field_ff_environmental_actors' => 'ds_content',
      'field_ff_number_decision' => 'ds_content',
      'field_ff_number_assembly' => 'ds_content',
      'field_ff_number_staff' => 'ds_content',
      'field_ff_twitter' => 'ds_content',
      'field_ff_facebook' => 'ds_content',
      'field_collection_language' => 'ds_content',
      'field_ff_linkedin' => 'ds_content',
      'field_ff_google' => 'ds_content',
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
  $export['node|factsheet_flag|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|factsheet_flag|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'factsheet_flag';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_picture',
      ),
      'right' => array(
        1 => 'title_field',
        2 => 'field_term_country',
        3 => 'field_publication_date',
        4 => 'field_farnet_abstract',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_picture' => 'left',
      'title_field' => 'right',
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
  $export['node|factsheet_flag|teaser'] = $ds_layout;

  return $export;
}
