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
        'views-homepage_highlight-block' => array(
          'module' => 'views',
          'delta' => 'homepage_highlight-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-a08df1144b562a45ee98fd5815edcc6b' => array(
          'module' => 'views',
          'delta' => 'a08df1144b562a45ee98fd5815edcc6b',
          'region' => 'content',
          'weight' => '-9',
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