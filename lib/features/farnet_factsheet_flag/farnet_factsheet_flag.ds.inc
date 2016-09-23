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
        0 => 'group_factsheet_flag_content',
        1 => 'title_field',
        2 => 'field_interactive_map',
        3 => 'field_title_official',
        4 => 'group_factsheet_flag_area',
        5 => 'field_term_country',
        6 => 'group_factsheet_flag_strategy',
        7 => 'field_area',
        8 => 'group_factsheet_flag_project_ex',
        9 => 'group_factsheet_flag_project_cal',
        10 => 'field_ff_code',
        11 => 'group_factsheet_flag_thematic',
        12 => 'field_ff_programming_period',
        13 => 'field_ff_description',
        14 => 'group_factsheet_flag_cooperation',
        15 => 'group_factsheet_flag_partenrship',
        16 => 'field_ne_body',
        17 => 'field_ff_population',
        18 => 'group_factsheet_flag_links',
        19 => 'field_ff_population_density',
        20 => 'group_factsheet_flag_budget',
        21 => 'group_factsheet_flag_contact',
        22 => 'field_ff_surface_area',
        23 => 'field_ff_protected_areas',
        24 => 'group_factsheet_flag_staff',
        25 => 'group_factsheet_flag_social',
        26 => 'field_ff_total_employment',
        27 => 'group_factsheet_flag_language',
        28 => 'field_ff_fishing',
        29 => 'group_factsheet_flag_map',
        30 => 'field_ff_aquaculture',
        31 => 'field_ff_processing',
        32 => 'field_ff_women_employment',
        33 => 'field_sea_basins',
        34 => 'field_ff_summary',
        35 => 'field_type_of_area',
        36 => 'field_collection_strategy',
        37 => 'field_collection_project',
        38 => 'field_ff_calls_for_projects',
        39 => 'field_ff_calls_for_projects_url',
        40 => 'field_ff_thematic_text',
        41 => 'field_ff_tc_interterritorial',
        42 => 'field_ff_tc_transnational',
        43 => 'field_ff_tc_sea_basin',
        44 => 'field_ff_tc_other',
        45 => 'field_ff_budget_available',
        46 => 'field_ff_lead_partner',
        47 => 'field_ff_members_partnership',
        48 => 'field_ff_public_actors',
        49 => 'field_ff_fisheries_actors',
        50 => 'field_ff_other_non_fisheries',
        51 => 'field_ff_environmental_actors',
        52 => 'field_ff_number_assembly',
        53 => 'field_ff_number_decision',
        54 => 'field_ff_flag_territory',
        55 => 'field_ff_flag_territory_details',
        56 => 'field_ff_flag_shares',
        57 => 'field_ff_flag_shares_details',
        58 => 'field_ff_flag_lag',
        59 => 'field_ff_flag_lag_details',
        60 => 'field_ff_flag_legal',
        61 => 'field_ff_flag_legal_details',
        62 => 'field_ff_flag_cooperates',
        63 => 'field_ff_flag_cooperates_details',
        64 => 'field_ff_total_public_budget',
        65 => 'field_ff_emff',
        66 => 'field_ff_multi_funding',
        67 => 'field_ff_ms_co_financing',
        68 => 'field_collection_budget',
        69 => 'field_ff_flag_manager',
        70 => 'field_ff_flag_president',
        71 => 'field_email',
        72 => 'field_website',
        73 => 'field_city',
        74 => 'field_ff_number_staff',
        75 => 'field_ff_twitter',
        76 => 'field_ff_facebook',
        77 => 'field_ff_linkedin',
        78 => 'field_ff_google',
        79 => 'field_collection_language',
        80 => 'field_region',
      ),
    ),
    'fields' => array(
      'group_factsheet_flag_content' => 'ds_content',
      'title_field' => 'ds_content',
      'field_interactive_map' => 'ds_content',
      'field_title_official' => 'ds_content',
      'group_factsheet_flag_area' => 'ds_content',
      'field_term_country' => 'ds_content',
      'group_factsheet_flag_strategy' => 'ds_content',
      'field_area' => 'ds_content',
      'group_factsheet_flag_project_ex' => 'ds_content',
      'group_factsheet_flag_project_cal' => 'ds_content',
      'field_ff_code' => 'ds_content',
      'group_factsheet_flag_thematic' => 'ds_content',
      'field_ff_programming_period' => 'ds_content',
      'field_ff_description' => 'ds_content',
      'group_factsheet_flag_cooperation' => 'ds_content',
      'group_factsheet_flag_partenrship' => 'ds_content',
      'field_ne_body' => 'ds_content',
      'field_ff_population' => 'ds_content',
      'group_factsheet_flag_links' => 'ds_content',
      'field_ff_population_density' => 'ds_content',
      'group_factsheet_flag_budget' => 'ds_content',
      'group_factsheet_flag_contact' => 'ds_content',
      'field_ff_surface_area' => 'ds_content',
      'field_ff_protected_areas' => 'ds_content',
      'group_factsheet_flag_staff' => 'ds_content',
      'group_factsheet_flag_social' => 'ds_content',
      'field_ff_total_employment' => 'ds_content',
      'group_factsheet_flag_language' => 'ds_content',
      'field_ff_fishing' => 'ds_content',
      'group_factsheet_flag_map' => 'ds_content',
      'field_ff_aquaculture' => 'ds_content',
      'field_ff_processing' => 'ds_content',
      'field_ff_women_employment' => 'ds_content',
      'field_sea_basins' => 'ds_content',
      'field_ff_summary' => 'ds_content',
      'field_type_of_area' => 'ds_content',
      'field_collection_strategy' => 'ds_content',
      'field_collection_project' => 'ds_content',
      'field_ff_calls_for_projects' => 'ds_content',
      'field_ff_calls_for_projects_url' => 'ds_content',
      'field_ff_thematic_text' => 'ds_content',
      'field_ff_tc_interterritorial' => 'ds_content',
      'field_ff_tc_transnational' => 'ds_content',
      'field_ff_tc_sea_basin' => 'ds_content',
      'field_ff_tc_other' => 'ds_content',
      'field_ff_budget_available' => 'ds_content',
      'field_ff_lead_partner' => 'ds_content',
      'field_ff_members_partnership' => 'ds_content',
      'field_ff_public_actors' => 'ds_content',
      'field_ff_fisheries_actors' => 'ds_content',
      'field_ff_other_non_fisheries' => 'ds_content',
      'field_ff_environmental_actors' => 'ds_content',
      'field_ff_number_assembly' => 'ds_content',
      'field_ff_number_decision' => 'ds_content',
      'field_ff_flag_territory' => 'ds_content',
      'field_ff_flag_territory_details' => 'ds_content',
      'field_ff_flag_shares' => 'ds_content',
      'field_ff_flag_shares_details' => 'ds_content',
      'field_ff_flag_lag' => 'ds_content',
      'field_ff_flag_lag_details' => 'ds_content',
      'field_ff_flag_legal' => 'ds_content',
      'field_ff_flag_legal_details' => 'ds_content',
      'field_ff_flag_cooperates' => 'ds_content',
      'field_ff_flag_cooperates_details' => 'ds_content',
      'field_ff_total_public_budget' => 'ds_content',
      'field_ff_emff' => 'ds_content',
      'field_ff_multi_funding' => 'ds_content',
      'field_ff_ms_co_financing' => 'ds_content',
      'field_collection_budget' => 'ds_content',
      'field_ff_flag_manager' => 'ds_content',
      'field_ff_flag_president' => 'ds_content',
      'field_email' => 'ds_content',
      'field_website' => 'ds_content',
      'field_city' => 'ds_content',
      'field_ff_number_staff' => 'ds_content',
      'field_ff_twitter' => 'ds_content',
      'field_ff_facebook' => 'ds_content',
      'field_ff_linkedin' => 'ds_content',
      'field_ff_google' => 'ds_content',
      'field_collection_language' => 'ds_content',
      'field_region' => 'ds_content',
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
