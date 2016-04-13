<?php
/**
 * @file
 * farnet_social_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function farnet_social_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_appearance';
  $strongarm->value = array(
    'orientation' => 'v',
    'show_name' => 1,
  );
  $export['social_media_links_appearance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_icon_style';
  $strongarm->value = 'elegantthemes:32';
  $export['social_media_links_icon_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_link_attributes';
  $strongarm->value = array(
    'target' => '<none>',
    'rel' => '<none>',
  );
  $export['social_media_links_link_attributes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'social_media_links_platforms';
  $strongarm->value = array(
    'youtube' => array(
      'platform_value' => 'http://www.youtube.com/user/theFARNETchannel',
      'weight' => '-10',
    ),
    'linkedin' => array(
      'platform_value' => 'http://www.linkedin.com/groups?gid=2396254&trk=myg_ugrp_ovr',
      'weight' => '-9',
    ),
    'twitter' => array(
      'platform_value' => 'http://twitter.com/#!/EU_FARNET',
      'weight' => '-8',
    ),
    'facebook' => array(
      'platform_value' => 'https://www.facebook.com/pages/FARNET/503312929685977',
      'weight' => '-7',
    ),
    'googleplus' => array(
      'platform_value' => '',
      'weight' => '-6',
    ),
    'instagram' => array(
      'platform_value' => '',
      'weight' => '-5',
    ),
    'pinterest' => array(
      'platform_value' => '',
      'weight' => '-4',
    ),
    'vimeo' => array(
      'platform_value' => '',
      'weight' => '-3',
    ),
    'youtube_channel' => array(
      'platform_value' => '',
      'weight' => '-2',
    ),
    'rss' => array(
      'platform_value' => '',
      'weight' => '-1',
    ),
    'contact' => array(
      'platform_value' => '',
      'weight' => '0',
    ),
    'email' => array(
      'platform_value' => '',
      'weight' => '1',
    ),
  );
  $export['social_media_links_platforms'] = $strongarm;

  return $export;
}
