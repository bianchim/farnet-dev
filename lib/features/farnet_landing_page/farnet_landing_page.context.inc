<?php
/**
 * @file
 * farnet_landing_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function farnet_landing_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_events';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news-events' => 'news-events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5a0c0d1995c4bd498fa2422a5992b6e7' => array(
          'module' => 'views',
          'delta' => '5a0c0d1995c4bd498fa2422a5992b6e7',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-8d556d2632413042cb393089786bb956' => array(
          'module' => 'views',
          'delta' => '8d556d2632413042cb393089786bb956',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['news_events'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'on_the_ground';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'on-the-ground' => 'on-the-ground',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['on_the_ground'] = $context;

  return $export;
}
