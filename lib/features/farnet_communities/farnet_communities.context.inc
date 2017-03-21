<?php
/**
 * @file
 * farnet_communities.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function farnet_communities_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myfarnet';
  $context->description = '';
  $context->tag = 'farnet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'myfarnet' => 'myfarnet',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-farnet_discussion-block' => array(
          'module' => 'views',
          'delta' => 'farnet_discussion-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('farnet');
  $export['myfarnet'] = $context;

  return $export;
}