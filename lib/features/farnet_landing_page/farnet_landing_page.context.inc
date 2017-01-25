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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tools';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'tools' => 'tools',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'content',
          'weight' => '-7',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
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
  $export['tools'] = $context;

  return $export;
}
