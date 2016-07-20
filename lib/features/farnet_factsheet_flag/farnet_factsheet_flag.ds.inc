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
        2 => 'field_title_official',
        3 => 'group_factsheet_flag_area',
        4 => 'field_term_country',
        5 => 'group_factsheet_flag_strategy',
        6 => 'field_term_region',
        7 => 'group_factsheet_flag_project_ex',
        8 => 'field_area',
        9 => 'group_factsheet_flag_project_cal',
        10 => 'group_factsheet_flag_thematic',
        11 => 'field_ff_code',
        12 => 'field_ff_programming_period',
        13 => 'group_factsheet_flag_cooperation',
        14 => 'field_ff_description',
        15 => 'group_factsheet_flag_partenrship',
        16 => 'field_ne_body',
        17 => 'group_factsheet_flag_links',
        18 => 'field_ff_population',
        19 => 'group_factsheet_flag_budget',
        20 => 'field_ff_population_density',
        21 => 'group_factsheet_flag_contact',
        22 => 'field_ff_surface_area',
        23 => 'group_factsheet_flag_staff',
        24 => 'field_ff_protected_areas',
        25 => 'group_factsheet_flag_social',
        26 => 'field_ff_total_employment',
        27 => 'group_factsheet_flag_language',
        28 => 'field_ff_fishing',
        29 => 'field_ff_aquaculture',
        30 => 'field_ff_processing',
        31 => 'field_ff_women_employment',
        32 => 'field_sea_basins',
        33 => 'field_type_of_area',
        34 => 'field_ff_summary',
        35 => 'field_collection_strategy',
        36 => 'field_collection_project',
        37 => 'field_ff_calls_for_projects',
        38 => 'field_ff_calls_for_projects_url',
        39 => 'field_ff_thematic_text',
        40 => 'field_ff_tc_interterritorial',
        41 => 'field_ff_tc_transnational',
        42 => 'field_ff_tc_sea_basin',
        43 => 'field_ff_tc_other',
        44 => 'field_ff_budget_available',
        45 => 'field_ff_lead_partner',
        46 => 'field_ff_members_partnership',
        47 => 'field_ff_public_actors',
        48 => 'field_ff_fisheries_actors',
        49 => 'field_ff_other_non_fisheries',
        50 => 'field_ff_environmental_actors',
        51 => 'field_ff_number_assembly',
        52 => 'field_ff_number_decision',
        53 => 'field_ff_flag_territory',
        54 => 'field_ff_flag_territory_details',
        55 => 'field_ff_flag_shares',
        56 => 'field_ff_flag_shares_details',
        57 => 'field_ff_flag_lag',
        58 => 'field_ff_flag_lag_details',
        59 => 'field_ff_flag_legal',
        60 => 'field_ff_flag_legal_details',
        61 => 'field_ff_flag_cooperates',
        62 => 'field_ff_flag_cooperates_details',
        63 => 'field_ff_total_public_budget',
        64 => 'field_ff_emff',
        65 => 'field_ff_multi_funding',
        66 => 'field_ff_ms_co_financing',
        67 => 'field_collection_budget',
        68 => 'field_ff_flag_manager',
        69 => 'field_ff_flag_president',
        70 => 'field_email',
        71 => 'field_website',
        72 => 'field_city',
        73 => 'field_ff_number_staff',
        74 => 'field_ff_twitter',
        75 => 'field_ff_facebook',
        76 => 'field_ff_linkedin',
        77 => 'field_ff_google',
        78 => 'field_collection_language',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'group_factsheet_flag_content' => 'ds_content',
      'field_title_official' => 'ds_content',
      'group_factsheet_flag_area' => 'ds_content',
      'field_term_country' => 'ds_content',
      'group_factsheet_flag_strategy' => 'ds_content',
      'field_term_region' => 'ds_content',
      'group_factsheet_flag_project_ex' => 'ds_content',
      'field_area' => 'ds_content',
      'group_factsheet_flag_project_cal' => 'ds_content',
      'group_factsheet_flag_thematic' => 'ds_content',
      'field_ff_code' => 'ds_content',
      'field_ff_programming_period' => 'ds_content',
      'group_factsheet_flag_cooperation' => 'ds_content',
      'field_ff_description' => 'ds_content',
      'group_factsheet_flag_partenrship' => 'ds_content',
      'field_ne_body' => 'ds_content',
      'group_factsheet_flag_links' => 'ds_content',
      'field_ff_population' => 'ds_content',
      'group_factsheet_flag_budget' => 'ds_content',
      'field_ff_population_density' => 'ds_content',
      'group_factsheet_flag_contact' => 'ds_content',
      'field_ff_surface_area' => 'ds_content',
      'group_factsheet_flag_staff' => 'ds_content',
      'field_ff_protected_areas' => 'ds_content',
      'group_factsheet_flag_social' => 'ds_content',
      'field_ff_total_employment' => 'ds_content',
      'group_factsheet_flag_language' => 'ds_content',
      'field_ff_fishing' => 'ds_content',
      'field_ff_aquaculture' => 'ds_content',
      'field_ff_processing' => 'ds_content',
      'field_ff_women_employment' => 'ds_content',
      'field_sea_basins' => 'ds_content',
      'field_type_of_area' => 'ds_content',
      'field_ff_summary' => 'ds_content',
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
