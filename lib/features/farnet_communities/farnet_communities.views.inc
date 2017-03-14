<?php

/**
 * @file
 * Views file for FARNET communities.
 */

/**
 * Implements hook_views_handlers().
 */
function farnet_communities_views_handlers() {
  return [
    'info' => [
      'path' => drupal_get_path('module', 'farnet_communities') . '/views',
    ],
    'handlers' => [
      'farnet_communities_handler_field_last_updated_date' => [
        'parent' => 'views_handler_field',
      ],
    ],
  ];
}

/**
 * Implements hook_views_data().
 */
function farnet_communities_views_data() {
  return [
    'farnet_communities' => [
      'table' => [
        'group' => t('Farnet communities'),
        'join' => ['#global' => []],
      ],
      'last_updated_date' => [
        'title' => t('Last updated date'),
        'help' => t('Shows community last updated date.'),
        'field' => [
          'handler' => 'FarnetCommunitiesHandlerFieldLastUpdatedDate',
        ],
      ],
    ],
  ];
}
