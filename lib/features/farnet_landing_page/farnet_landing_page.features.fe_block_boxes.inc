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
  $fe_block_boxes->info = 'About block at a glance';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_block_ataglance';
  $fe_block_boxes->body = '<h4>FARNET</h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est.<a class="btn btn-default farnet-listing__read-more" href="farnet-glance">Read more</a></p><h4>&nbsp;</h4><h4>CLLD</h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est.<a class="btn btn-default farnet-listing__read-more" href="clld-glance">Read more</a></p><h4>&nbsp;</h4><h4>Glossary</h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est.<a class="btn btn-default farnet-listing__read-more" href="glossary">Read more</a></p>';

  $export['about_block_ataglance'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'About block who\'s who';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'about_block_whos_who';
  $fe_block_boxes->body = '<h4>DG MARE</h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est.<a class="btn btn-default farnet-listing__read-more" href="dg-mare">Read more</a></p>';

  $export['about_block_whos_who'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Cooperation block on On the Ground page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'cooperation_block';
  $fe_block_boxes->body = '<h4><a href="on-the-ground/cooperation/european-overview">European overview</a></h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. 
<a class="btn btn-default farnet-listing__read-more" href="on-the-ground/cooperation/european-overview">Read more</a></p>
<p>&nbsp;</p>
<h4><a href="on-the-ground/cooperation/by-member-state">Cooperation by Member State</a></h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. 
<a class="btn btn-default farnet-listing__read-more" href="on-the-ground/cooperation/by-member-state">Read more</a></p>
<p>&nbsp;</p>
<h4><a href="on-the-ground/cooperation/call">Cooperation Calls</a></h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. 
<a class="btn btn-default farnet-listing__read-more" href="on-the-ground/cooperation/call">Read more</a></p>
<p>&nbsp;</p>
<h4><a href="on-the-ground/cooperation/ideas">Cooperation ideas</a></h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. 
<a class="btn btn-default farnet-listing__read-more" href="on-the-ground/cooperation/ideas">Read more</a></p>
<p>&nbsp;</p>
<h4><a href="on-the-ground/cooperation/in-action">Cooperation in action</a></h4>
<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. 
<a class="btn btn-default farnet-listing__read-more" href="on-the-ground/cooperation/in-action">Read more</a></p>';

  $export['cooperation_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Good Practice block on On the Ground page';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'good_practice_block';
  $fe_block_boxes->body = '<h4><a href="on-the-ground/good-practice/projects">GP Projects</a></h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. <a class="btn btn-default farnet-listing__read-more" href="on-the-ground/good-practice/projects">All projects</a></p><br /><h4><a href="on-the-ground/good-practice/short-stories">GP Short Stories</a></h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. <a class="btn btn-default farnet-listing__read-more" href="on-the-ground/good-practice/short-stories">All short stories</a></p><br /><h4><a href="on-the-ground/good-practice/methods">GP Methods</a></h4><p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed maximus magna nulla, quis pulvinar elit ultricies quis. Proin mollis efficitur vestibulum. Vestibulum faucibus lacinia dolor, sed faucibus magna dapibus non. Etiam nibh justo, ultrices nec erat ultrices, ultricies commodo mi. Praesent varius erat ligula, eget finibus nisi varius id. Pellentesque et nisl at magna faucibus molestie non eget est. <a class="btn btn-default farnet-listing__read-more" href="on-the-ground/good-practice/methods">All methods</a></p>';

  $export['good_practice_block'] = $fe_block_boxes;

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
  $fe_block_boxes->body = '<p><a href="faq/clld-overview">CLLD overview</a><br><a href="faq/flag-set-up">Setting up FLAGs</a><br><a href="faq/cooperation">Cooperation</a></p>';

  $export['landing_block_tools3'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'FAQs';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'landing_block_tools4';
  $fe_block_boxes->body = '<p><a href="faq/eligibility">Eligibility</a><br><a href="faq/finance-dministration">Finance and administration</a></p>';

  $export['landing_block_tools4'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'themes landing page adding value';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'themes_block_adding_value';
  $fe_block_boxes->body = '<ul class="fr-megamenu-list menu clearfix "><li class="first leaf menu-mlid-1282 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/aquaculture_en">Aquaculture</a></li><li class="leaf menu-mlid-1302 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/business-support_en">Business support</a></li><li class="leaf menu-mlid-1292 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/labelling_en">Labelling</a></li><li class="leaf menu-mlid-1300 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/processing_en">Processing</a></li><li class="leaf menu-mlid-1278 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/promotion_en">Promotion</a></li><li class="leaf menu-mlid-1304 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/short-circuits_en">Short circuits</a></li><li class="last leaf menu-mlid-1259 fr-megamenu-item" data-display-title="1" data-remove-class="1"><a class="fr-megamenu-link" data-display-title="1" data-hide-children="0" data-remove-class="1" href="themes/adding-value-fisheries/traceability_en">Traceability</a></li></ul>';

  $export['themes_block_adding_value'] = $fe_block_boxes;

  return $export;
}
