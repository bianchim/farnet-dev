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
        7 => 'group_factsheet_flag_funding',
        8 => 'field_region',
        9 => 'group_factsheet_flag_project_ex',
        10 => 'field_area',
        11 => 'group_factsheet_flag_practice',
        12 => 'group_factsheet_flag_project_cal',
        13 => 'field_ff_code',
        14 => 'field_ff_programming_period',
        15 => 'group_factsheet_flag_cooperation',
        16 => 'field_ff_description',
        17 => 'field_type_of_area',
        18 => 'group_factsheet_flag_ideas',
        19 => 'group_factsheet_flag_links',
        20 => 'field_ff_protected_areas',
        21 => 'group_factsheet_flag_partenrship',
        22 => 'field_ff_population',
        23 => 'group_factsheet_flag_media',
        24 => 'field_ff_surface_area',
        25 => 'group_factsheet_flag_contact',
        26 => 'field_ff_population_density',
        27 => 'group_factsheet_flag_social',
        28 => 'field_gallery',
        29 => 'field_sea_basins',
        30 => 'field_ff_total_employment',
        31 => 'group_factsheet_flag_map',
        32 => 'field_ff_fishing',
        33 => 'field_ff_aquaculture',
        34 => 'field_ff_processing',
        35 => 'field_ff_summary',
        36 => 'field_ff_women_employment',
        37 => 'field_term_theme',
        38 => 'field_collection_strategy',
        39 => 'field_ff_calls_for_projects',
        40 => 'field_ff_calls_for_projects_url',
        41 => 'field_ff_twitter',
        42 => 'field_ff_facebook',
        43 => 'field_organisation',
        44 => 'field_ff_linkedin',
        45 => 'field_ff_flag_manager',
        46 => 'field_ff_google',
        47 => 'field_ff_flag_president',
        48 => 'field_collection_language',
        49 => 'field_ff_total_public_budget',
        50 => 'field_ff_emff',
        51 => 'field_ff_ms_co_financing',
        52 => 'field_ff_sources_co_funding',
        53 => 'field_ff_multi_funding',
        54 => 'field_ff_multi_funding_txt',
        55 => 'field_ff_funds',
        56 => 'field_ff_project_title',
        57 => 'field_ff_good_practice',
        58 => 'field_ff_accountable_body',
        59 => 'field_ff_expertise_cooperation',
        60 => 'field_ff_members_partnership',
        61 => 'field_ff_public_actors',
        62 => 'field_ff_fisheries_actors',
        63 => 'field_ff_budget_cooperation',
        64 => 'field_ff_other_non_fisheries',
        65 => 'field_ff_links_description',
        66 => 'field_ff_environmental_actors',
        67 => 'field_ff_number_decision',
        68 => 'field_ff_number_assembly',
        69 => 'field_ff_number_staff',
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
      'group_factsheet_flag_funding' => 'ds_content',
      'field_region' => 'ds_content',
      'group_factsheet_flag_project_ex' => 'ds_content',
      'field_area' => 'ds_content',
      'group_factsheet_flag_practice' => 'ds_content',
      'group_factsheet_flag_project_cal' => 'ds_content',
      'field_ff_code' => 'ds_content',
      'field_ff_programming_period' => 'ds_content',
      'group_factsheet_flag_cooperation' => 'ds_content',
      'field_ff_description' => 'ds_content',
      'field_type_of_area' => 'ds_content',
      'group_factsheet_flag_ideas' => 'ds_content',
      'group_factsheet_flag_links' => 'ds_content',
      'field_ff_protected_areas' => 'ds_content',
      'group_factsheet_flag_partenrship' => 'ds_content',
      'field_ff_population' => 'ds_content',
      'group_factsheet_flag_media' => 'ds_content',
      'field_ff_surface_area' => 'ds_content',
      'group_factsheet_flag_contact' => 'ds_content',
      'field_ff_population_density' => 'ds_content',
      'group_factsheet_flag_social' => 'ds_content',
      'field_gallery' => 'ds_content',
      'field_sea_basins' => 'ds_content',
      'field_ff_total_employment' => 'ds_content',
      'group_factsheet_flag_map' => 'ds_content',
      'field_ff_fishing' => 'ds_content',
      'field_ff_aquaculture' => 'ds_content',
      'field_ff_processing' => 'ds_content',
      'field_ff_summary' => 'ds_content',
      'field_ff_women_employment' => 'ds_content',
      'field_term_theme' => 'ds_content',
      'field_collection_strategy' => 'ds_content',
      'field_ff_calls_for_projects' => 'ds_content',
      'field_ff_calls_for_projects_url' => 'ds_content',
      'field_ff_twitter' => 'ds_content',
      'field_ff_facebook' => 'ds_content',
      'field_organisation' => 'ds_content',
      'field_ff_linkedin' => 'ds_content',
      'field_ff_flag_manager' => 'ds_content',
      'field_ff_google' => 'ds_content',
      'field_ff_flag_president' => 'ds_content',
      'field_collection_language' => 'ds_content',
      'field_ff_total_public_budget' => 'ds_content',
      'field_ff_emff' => 'ds_content',
      'field_ff_ms_co_financing' => 'ds_content',
      'field_ff_sources_co_funding' => 'ds_content',
      'field_ff_multi_funding' => 'ds_content',
      'field_ff_multi_funding_txt' => 'ds_content',
      'field_ff_funds' => 'ds_content',
      'field_ff_project_title' => 'ds_content',
      'field_ff_good_practice' => 'ds_content',
      'field_ff_accountable_body' => 'ds_content',
      'field_ff_expertise_cooperation' => 'ds_content',
      'field_ff_members_partnership' => 'ds_content',
      'field_ff_public_actors' => 'ds_content',
      'field_ff_fisheries_actors' => 'ds_content',
      'field_ff_budget_cooperation' => 'ds_content',
      'field_ff_other_non_fisheries' => 'ds_content',
      'field_ff_links_description' => 'ds_content',
      'field_ff_environmental_actors' => 'ds_content',
      'field_ff_number_decision' => 'ds_content',
      'field_ff_number_assembly' => 'ds_content',
      'field_ff_number_staff' => 'ds_content',
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
