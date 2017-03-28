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
  $context->name = 'farnet_comunities_homepage';
  $context->description = 'Context triggered on farnet community homepage';
  $context->tag = 'farnet';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'community_hidden' => 'community_hidden',
        'community_private' => 'community_private',
        'community_public' => 'community_public',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-my_farnet_all-block_all' => array(
          'module' => 'views',
          'delta' => 'my_farnet_all-block_all',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context triggered on farnet community homepage');
  t('farnet');
  $export['farnet_comunities_homepage'] = $context;

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
        'views-farnet_og_memberships-block' => array(
          'module' => 'views',
          'delta' => 'farnet_og_memberships-block',
          'region' => 'content',
          'weight' => '0',
        ),
        'views-farnet_og_memberships-block_1' => array(
          'module' => 'views',
          'delta' => 'farnet_og_memberships-block_1',
          'region' => 'content',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('farnet');
  $export['myfarnet'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'myfarnet_global';
  $context->description = '';
  $context->tag = 'farnet';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community*' => 'community*',
        'myfarnet*' => 'myfarnet*',
        'users*' => 'users*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-myfarnet-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-myfarnet-menu',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('farnet');
  $export['myfarnet_global'] = $context;

  return $export;
}
