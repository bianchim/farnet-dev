<?php
/**
 * @file
 * farnet_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function farnet_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'farnet_homepage';
  $context->description = 'FARNET Homepage';
  $context->tag = 'farnet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-58e5c6f1d271df53704192d4182faec3' => array(
          'module' => 'views',
          'delta' => '58e5c6f1d271df53704192d4182faec3',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-a08df1144b562a45ee98fd5815edcc6b' => array(
          'module' => 'views',
          'delta' => 'a08df1144b562a45ee98fd5815edcc6b',
          'region' => 'content',
          'weight' => '-9',
        ),
        'bean-bean-social-links' => array(
          'module' => 'bean',
          'delta' => 'bean-social-links',
          'region' => 'content_right',
          'weight' => '-8',
        ),
        'bean-bean-twitter-block' => array(
          'module' => 'bean',
          'delta' => 'bean-twitter-block',
          'region' => 'content_right',
          'weight' => '-9',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'content_right',
          'weight' => '-10',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'content_bottom',
          'weight' => '-7',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content_bottom',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('FARNET Homepage');
  t('farnet');
  $export['farnet_homepage'] = $context;

  return $export;
}
