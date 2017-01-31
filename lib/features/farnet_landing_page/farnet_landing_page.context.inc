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
  $context->name = 'about';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'landing_content',
          'weight' => '-10',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'landing_content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['about'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'library' => 'library',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-43942680651afca7750d9faac6513a16' => array(
          'module' => 'views',
          'delta' => '43942680651afca7750d9faac6513a16',
          'region' => 'landing_content',
          'weight' => '-10',
        ),
        'views-e1afc8ac226e4752516e50409df8f248' => array(
          'module' => 'views',
          'delta' => 'e1afc8ac226e4752516e50409df8f248',
          'region' => 'landing_content',
          'weight' => '-9',
        ),
        'views-e3e941f8456604ac95162b631eb95d94' => array(
          'module' => 'views',
          'delta' => 'e3e941f8456604ac95162b631eb95d94',
          'region' => 'landing_content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['library'] = $context;

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
          'region' => 'landing_content',
          'weight' => '-10',
        ),
        'views-8d556d2632413042cb393089786bb956' => array(
          'module' => 'views',
          'delta' => '8d556d2632413042cb393089786bb956',
          'region' => 'landing_content',
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
          'region' => 'landing_content',
          'weight' => '-10',
        ),
        'views-79352059f92f38e8b7c026bd2e334732' => array(
          'module' => 'views',
          'delta' => '79352059f92f38e8b7c026bd2e334732',
          'region' => 'landing_content',
          'weight' => '-9',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'landing_content',
          'weight' => '-8',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'landing_content',
          'weight' => '-7',
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
  $context->name = 'themes';
  $context->description = '';
  $context->tag = 'landing page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'themes' => 'themes',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'landing_content',
          'weight' => '-10',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'landing_content',
          'weight' => '-9',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'landing_content',
          'weight' => '-8',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'landing_content',
          'weight' => '-7',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'landing_content',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('landing page');
  $export['themes'] = $context;

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
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'landing_content',
          'weight' => '-10',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'landing_content',
          'weight' => '-9',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'landing_content',
          'weight' => '-8',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'landing_content',
          'weight' => '-7',
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
