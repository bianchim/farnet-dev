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
      'FarnetCommunitiesHandlerFieldLastUpdatedDate' => [
        'parent' => 'views_handler_field',
      ],
      'FarnetCommunitiesHandlerFieldContentCount' => [
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
      'content_count' => [
        'title' => t('Content count'),
        'help' => t('Displays the number of content in a community.'),
        'field' => [
          'handler' => 'FarnetCommunitiesHandlerFieldContentCount',
        ],
      ],
      'last_commented' => [
        'title' => t('Last contribution'),
        'help' => t('Last contribution of the user ( comment / node ).'),
        'sort' => [
          'handler' => 'farnetCommunitiesLastContributionSortHandler',
        ],
        'field' => [
          'handler' => 'farnetCommunitiesLastContributionFieldHandler',
        ],
      ],
    ],
  ];
}
