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
        'views-a08df1144b562a45ee98fd5815edcc6b' => array(
          'module' => 'views',
          'delta' => 'a08df1144b562a45ee98fd5815edcc6b',
          'region' => 'content',
          'weight' => '-10',
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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-7dabd414d359435e91fad754dab94e7f' => array(
          'module' => 'views',
          'delta' => '7dabd414d359435e91fad754dab94e7f',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-79352059f92f38e8b7c026bd2e334732' => array(
          'module' => 'views',
          'delta' => '79352059f92f38e8b7c026bd2e334732',
          'region' => 'content',
          'weight' => '1',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '2',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content',
          'weight' => '3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['on_the_ground'] = $context;

  return $export;
}
