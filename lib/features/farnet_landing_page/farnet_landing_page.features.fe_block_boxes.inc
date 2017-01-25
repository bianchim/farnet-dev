<?php
/**
 * @file
 * farnet_landing_page.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function farnet_landing_page_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tools for FLAGs';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'landing_block_tools1';
  $fe_block_boxes->body = '<p>[node:10:view-mode:teaser]{Tools for FLAGs as Teaser}</p>';

  $export['landing_block_tools1'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Tools for managing authorities';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'landing_block_tools2';
  $fe_block_boxes->body = '<p>[node:3:view-mode:teaser]{Tools for Managing Authorities as Teaser}</p>';

  $export['landing_block_tools2'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Q&A on CLLD';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'landing_block_tools3';
  $fe_block_boxes->body = '<p><a href="faq/clld-overview">CLLD overview</a><br><a href="http://faq/flag-set-up">Setting up FLAGs</a><br><a href="faq/cooperation">Cooperation</a></p>';

  $export['landing_block_tools3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'FAQs';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'landing_block_tools4';
  $fe_block_boxes->body = '<p><a href="faq/eligibility">Eligibility</a><br><a href="faq/finance-dministration">Finance and administration</a></p>';

  $export['landing_block_tools4'] = $fe_block_boxes;

  return $export;
}
