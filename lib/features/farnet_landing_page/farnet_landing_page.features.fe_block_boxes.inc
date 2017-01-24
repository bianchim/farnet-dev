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

  return $export;
}
