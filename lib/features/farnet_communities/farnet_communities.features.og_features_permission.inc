<?php
/**
 * @file
 * farnet_communities.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function farnet_communities_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:community_hidden:View all unpublished content'
  $permissions['node:community_hidden:View all unpublished content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:access group broken links report'
  $permissions['node:community_hidden:access group broken links report'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:add user'
  $permissions['node:community_hidden:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:administer group'
  $permissions['node:community_hidden:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:approve and deny subscription'
  $permissions['node:community_hidden:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:create cooperation_call content'
  $permissions['node:community_hidden:create cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:create cooperation_idea content'
  $permissions['node:community_hidden:create cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:create factsheet_country content'
  $permissions['node:community_hidden:create factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create factsheet_flag content'
  $permissions['node:community_hidden:create factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create farnet_article content'
  $permissions['node:community_hidden:create farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create farnet_discussion content'
  $permissions['node:community_hidden:create farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:create gp_method content'
  $permissions['node:community_hidden:create gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create ms_fiche content'
  $permissions['node:community_hidden:create ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:create nexteuropa_event content'
  $permissions['node:community_hidden:create nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create nexteuropa_faq content'
  $permissions['node:community_hidden:create nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create nexteuropa_mediagallery content'
  $permissions['node:community_hidden:create nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create nexteuropa_news content'
  $permissions['node:community_hidden:create nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:create page content'
  $permissions['node:community_hidden:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any cooperation_call content'
  $permissions['node:community_hidden:delete any cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete any cooperation_idea content'
  $permissions['node:community_hidden:delete any cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete any factsheet_country content'
  $permissions['node:community_hidden:delete any factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any factsheet_flag content'
  $permissions['node:community_hidden:delete any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any farnet_article content'
  $permissions['node:community_hidden:delete any farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any farnet_discussion content'
  $permissions['node:community_hidden:delete any farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete any gp_method content'
  $permissions['node:community_hidden:delete any gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any ms_fiche content'
  $permissions['node:community_hidden:delete any ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete any nexteuropa_event content'
  $permissions['node:community_hidden:delete any nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any nexteuropa_faq content'
  $permissions['node:community_hidden:delete any nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any nexteuropa_mediagallery content'
  $permissions['node:community_hidden:delete any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any nexteuropa_news content'
  $permissions['node:community_hidden:delete any nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete any page content'
  $permissions['node:community_hidden:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own cooperation_call content'
  $permissions['node:community_hidden:delete own cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own cooperation_idea content'
  $permissions['node:community_hidden:delete own cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own factsheet_country content'
  $permissions['node:community_hidden:delete own factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own factsheet_flag content'
  $permissions['node:community_hidden:delete own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own farnet_article content'
  $permissions['node:community_hidden:delete own farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own farnet_discussion content'
  $permissions['node:community_hidden:delete own farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own gp_method content'
  $permissions['node:community_hidden:delete own gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own ms_fiche content'
  $permissions['node:community_hidden:delete own ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:delete own nexteuropa_event content'
  $permissions['node:community_hidden:delete own nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own nexteuropa_faq content'
  $permissions['node:community_hidden:delete own nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own nexteuropa_mediagallery content'
  $permissions['node:community_hidden:delete own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own nexteuropa_news content'
  $permissions['node:community_hidden:delete own nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:delete own page content'
  $permissions['node:community_hidden:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:manage members'
  $permissions['node:community_hidden:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:manage organic group translation jobs'
  $permissions['node:community_hidden:manage organic group translation jobs'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:manage permissions'
  $permissions['node:community_hidden:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:manage roles'
  $permissions['node:community_hidden:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:moderate content from draft to needs_review'
  $permissions['node:community_hidden:moderate content from draft to needs_review'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from needs_review to draft'
  $permissions['node:community_hidden:moderate content from needs_review to draft'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from needs_review to published'
  $permissions['node:community_hidden:moderate content from needs_review to published'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from needs_review to validated'
  $permissions['node:community_hidden:moderate content from needs_review to validated'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from published to archived'
  $permissions['node:community_hidden:moderate content from published to archived'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from published to draft'
  $permissions['node:community_hidden:moderate content from published to draft'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from published to expired'
  $permissions['node:community_hidden:moderate content from published to expired'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from published to needs_review'
  $permissions['node:community_hidden:moderate content from published to needs_review'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:moderate content from validated to published'
  $permissions['node:community_hidden:moderate content from validated to published'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:subscribe'
  $permissions['node:community_hidden:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:community_hidden:subscribe without approval'
  $permissions['node:community_hidden:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:unsubscribe'
  $permissions['node:community_hidden:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any cooperation_call content'
  $permissions['node:community_hidden:update any cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any cooperation_idea content'
  $permissions['node:community_hidden:update any cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any factsheet_country content'
  $permissions['node:community_hidden:update any factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any factsheet_flag content'
  $permissions['node:community_hidden:update any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any farnet_article content'
  $permissions['node:community_hidden:update any farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any farnet_discussion content'
  $permissions['node:community_hidden:update any farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any gp_method content'
  $permissions['node:community_hidden:update any gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any ms_fiche content'
  $permissions['node:community_hidden:update any ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update any nexteuropa_event content'
  $permissions['node:community_hidden:update any nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any nexteuropa_faq content'
  $permissions['node:community_hidden:update any nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any nexteuropa_mediagallery content'
  $permissions['node:community_hidden:update any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any nexteuropa_news content'
  $permissions['node:community_hidden:update any nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update any page content'
  $permissions['node:community_hidden:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update group'
  $permissions['node:community_hidden:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own cooperation_call content'
  $permissions['node:community_hidden:update own cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own cooperation_idea content'
  $permissions['node:community_hidden:update own cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own factsheet_country content'
  $permissions['node:community_hidden:update own factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own factsheet_flag content'
  $permissions['node:community_hidden:update own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own farnet_article content'
  $permissions['node:community_hidden:update own farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own farnet_discussion content'
  $permissions['node:community_hidden:update own farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own gp_method content'
  $permissions['node:community_hidden:update own gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own ms_fiche content'
  $permissions['node:community_hidden:update own ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_hidden:update own nexteuropa_event content'
  $permissions['node:community_hidden:update own nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own nexteuropa_faq content'
  $permissions['node:community_hidden:update own nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own nexteuropa_mediagallery content'
  $permissions['node:community_hidden:update own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own nexteuropa_news content'
  $permissions['node:community_hidden:update own nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_hidden:update own page content'
  $permissions['node:community_hidden:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:View all unpublished content'
  $permissions['node:community_private:View all unpublished content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:access group broken links report'
  $permissions['node:community_private:access group broken links report'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:add user'
  $permissions['node:community_private:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:administer group'
  $permissions['node:community_private:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:approve and deny subscription'
  $permissions['node:community_private:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:create cooperation_call content'
  $permissions['node:community_private:create cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:create cooperation_idea content'
  $permissions['node:community_private:create cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:create factsheet_country content'
  $permissions['node:community_private:create factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create factsheet_flag content'
  $permissions['node:community_private:create factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create farnet_article content'
  $permissions['node:community_private:create farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create farnet_discussion content'
  $permissions['node:community_private:create farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:create gp_method content'
  $permissions['node:community_private:create gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create ms_fiche content'
  $permissions['node:community_private:create ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:create nexteuropa_event content'
  $permissions['node:community_private:create nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create nexteuropa_faq content'
  $permissions['node:community_private:create nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create nexteuropa_mediagallery content'
  $permissions['node:community_private:create nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create nexteuropa_news content'
  $permissions['node:community_private:create nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:create page content'
  $permissions['node:community_private:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any cooperation_call content'
  $permissions['node:community_private:delete any cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete any cooperation_idea content'
  $permissions['node:community_private:delete any cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete any factsheet_country content'
  $permissions['node:community_private:delete any factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any factsheet_flag content'
  $permissions['node:community_private:delete any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any farnet_article content'
  $permissions['node:community_private:delete any farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any farnet_discussion content'
  $permissions['node:community_private:delete any farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete any gp_method content'
  $permissions['node:community_private:delete any gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any ms_fiche content'
  $permissions['node:community_private:delete any ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:delete any nexteuropa_event content'
  $permissions['node:community_private:delete any nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any nexteuropa_faq content'
  $permissions['node:community_private:delete any nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any nexteuropa_mediagallery content'
  $permissions['node:community_private:delete any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any nexteuropa_news content'
  $permissions['node:community_private:delete any nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete any page content'
  $permissions['node:community_private:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own cooperation_call content'
  $permissions['node:community_private:delete own cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own cooperation_idea content'
  $permissions['node:community_private:delete own cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own factsheet_country content'
  $permissions['node:community_private:delete own factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own factsheet_flag content'
  $permissions['node:community_private:delete own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own farnet_article content'
  $permissions['node:community_private:delete own farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own farnet_discussion content'
  $permissions['node:community_private:delete own farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own gp_method content'
  $permissions['node:community_private:delete own gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own ms_fiche content'
  $permissions['node:community_private:delete own ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:delete own nexteuropa_event content'
  $permissions['node:community_private:delete own nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own nexteuropa_faq content'
  $permissions['node:community_private:delete own nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own nexteuropa_mediagallery content'
  $permissions['node:community_private:delete own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own nexteuropa_news content'
  $permissions['node:community_private:delete own nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:delete own page content'
  $permissions['node:community_private:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:manage members'
  $permissions['node:community_private:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:manage organic group translation jobs'
  $permissions['node:community_private:manage organic group translation jobs'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:manage permissions'
  $permissions['node:community_private:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:manage roles'
  $permissions['node:community_private:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:moderate content from draft to needs_review'
  $permissions['node:community_private:moderate content from draft to needs_review'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from needs_review to draft'
  $permissions['node:community_private:moderate content from needs_review to draft'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from needs_review to published'
  $permissions['node:community_private:moderate content from needs_review to published'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from needs_review to validated'
  $permissions['node:community_private:moderate content from needs_review to validated'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from published to archived'
  $permissions['node:community_private:moderate content from published to archived'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from published to draft'
  $permissions['node:community_private:moderate content from published to draft'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from published to expired'
  $permissions['node:community_private:moderate content from published to expired'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from published to needs_review'
  $permissions['node:community_private:moderate content from published to needs_review'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:moderate content from validated to published'
  $permissions['node:community_private:moderate content from validated to published'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:subscribe'
  $permissions['node:community_private:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:community_private:subscribe without approval'
  $permissions['node:community_private:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:unsubscribe'
  $permissions['node:community_private:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update any cooperation_call content'
  $permissions['node:community_private:update any cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:update any cooperation_idea content'
  $permissions['node:community_private:update any cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:update any factsheet_country content'
  $permissions['node:community_private:update any factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any factsheet_flag content'
  $permissions['node:community_private:update any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any farnet_article content'
  $permissions['node:community_private:update any farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any farnet_discussion content'
  $permissions['node:community_private:update any farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:update any gp_method content'
  $permissions['node:community_private:update any gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any ms_fiche content'
  $permissions['node:community_private:update any ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:update any nexteuropa_event content'
  $permissions['node:community_private:update any nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any nexteuropa_faq content'
  $permissions['node:community_private:update any nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any nexteuropa_mediagallery content'
  $permissions['node:community_private:update any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any nexteuropa_news content'
  $permissions['node:community_private:update any nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update any page content'
  $permissions['node:community_private:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update group'
  $permissions['node:community_private:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_private:update own cooperation_call content'
  $permissions['node:community_private:update own cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update own cooperation_idea content'
  $permissions['node:community_private:update own cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update own factsheet_country content'
  $permissions['node:community_private:update own factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own factsheet_flag content'
  $permissions['node:community_private:update own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own farnet_article content'
  $permissions['node:community_private:update own farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own farnet_discussion content'
  $permissions['node:community_private:update own farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update own gp_method content'
  $permissions['node:community_private:update own gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own ms_fiche content'
  $permissions['node:community_private:update own ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_private:update own nexteuropa_event content'
  $permissions['node:community_private:update own nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own nexteuropa_faq content'
  $permissions['node:community_private:update own nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own nexteuropa_mediagallery content'
  $permissions['node:community_private:update own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own nexteuropa_news content'
  $permissions['node:community_private:update own nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_private:update own page content'
  $permissions['node:community_private:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:View all unpublished content'
  $permissions['node:community_public:View all unpublished content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:access group broken links report'
  $permissions['node:community_public:access group broken links report'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:add user'
  $permissions['node:community_public:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:administer group'
  $permissions['node:community_public:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:approve and deny subscription'
  $permissions['node:community_public:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:create cooperation_call content'
  $permissions['node:community_public:create cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:create cooperation_idea content'
  $permissions['node:community_public:create cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:create factsheet_country content'
  $permissions['node:community_public:create factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create factsheet_flag content'
  $permissions['node:community_public:create factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create farnet_article content'
  $permissions['node:community_public:create farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create farnet_discussion content'
  $permissions['node:community_public:create farnet_discussion content'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:create gp_method content'
  $permissions['node:community_public:create gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create ms_fiche content'
  $permissions['node:community_public:create ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:create nexteuropa_event content'
  $permissions['node:community_public:create nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create nexteuropa_faq content'
  $permissions['node:community_public:create nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create nexteuropa_mediagallery content'
  $permissions['node:community_public:create nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create nexteuropa_news content'
  $permissions['node:community_public:create nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:create page content'
  $permissions['node:community_public:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any cooperation_call content'
  $permissions['node:community_public:delete any cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete any cooperation_idea content'
  $permissions['node:community_public:delete any cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete any factsheet_country content'
  $permissions['node:community_public:delete any factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any factsheet_flag content'
  $permissions['node:community_public:delete any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any farnet_article content'
  $permissions['node:community_public:delete any farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any farnet_discussion content'
  $permissions['node:community_public:delete any farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete any gp_method content'
  $permissions['node:community_public:delete any gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any ms_fiche content'
  $permissions['node:community_public:delete any ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:delete any nexteuropa_event content'
  $permissions['node:community_public:delete any nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any nexteuropa_faq content'
  $permissions['node:community_public:delete any nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any nexteuropa_mediagallery content'
  $permissions['node:community_public:delete any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any nexteuropa_news content'
  $permissions['node:community_public:delete any nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete any page content'
  $permissions['node:community_public:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own cooperation_call content'
  $permissions['node:community_public:delete own cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own cooperation_idea content'
  $permissions['node:community_public:delete own cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own factsheet_country content'
  $permissions['node:community_public:delete own factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own factsheet_flag content'
  $permissions['node:community_public:delete own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own farnet_article content'
  $permissions['node:community_public:delete own farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own farnet_discussion content'
  $permissions['node:community_public:delete own farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own gp_method content'
  $permissions['node:community_public:delete own gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own ms_fiche content'
  $permissions['node:community_public:delete own ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:delete own nexteuropa_event content'
  $permissions['node:community_public:delete own nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own nexteuropa_faq content'
  $permissions['node:community_public:delete own nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own nexteuropa_mediagallery content'
  $permissions['node:community_public:delete own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own nexteuropa_news content'
  $permissions['node:community_public:delete own nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:delete own page content'
  $permissions['node:community_public:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:manage members'
  $permissions['node:community_public:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:manage organic group translation jobs'
  $permissions['node:community_public:manage organic group translation jobs'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:manage permissions'
  $permissions['node:community_public:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:manage roles'
  $permissions['node:community_public:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:moderate content from draft to needs_review'
  $permissions['node:community_public:moderate content from draft to needs_review'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from needs_review to draft'
  $permissions['node:community_public:moderate content from needs_review to draft'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from needs_review to published'
  $permissions['node:community_public:moderate content from needs_review to published'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from needs_review to validated'
  $permissions['node:community_public:moderate content from needs_review to validated'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from published to archived'
  $permissions['node:community_public:moderate content from published to archived'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from published to draft'
  $permissions['node:community_public:moderate content from published to draft'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from published to expired'
  $permissions['node:community_public:moderate content from published to expired'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from published to needs_review'
  $permissions['node:community_public:moderate content from published to needs_review'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:moderate content from validated to published'
  $permissions['node:community_public:moderate content from validated to published'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:subscribe'
  $permissions['node:community_public:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:subscribe without approval'
  $permissions['node:community_public:subscribe without approval'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:community_public:unsubscribe'
  $permissions['node:community_public:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update any cooperation_call content'
  $permissions['node:community_public:update any cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update any cooperation_idea content'
  $permissions['node:community_public:update any cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update any factsheet_country content'
  $permissions['node:community_public:update any factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any factsheet_flag content'
  $permissions['node:community_public:update any factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any farnet_article content'
  $permissions['node:community_public:update any farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any farnet_discussion content'
  $permissions['node:community_public:update any farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update any gp_method content'
  $permissions['node:community_public:update any gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any ms_fiche content'
  $permissions['node:community_public:update any ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update any nexteuropa_event content'
  $permissions['node:community_public:update any nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any nexteuropa_faq content'
  $permissions['node:community_public:update any nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any nexteuropa_mediagallery content'
  $permissions['node:community_public:update any nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any nexteuropa_news content'
  $permissions['node:community_public:update any nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update any page content'
  $permissions['node:community_public:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update group'
  $permissions['node:community_public:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:community_public:update own cooperation_call content'
  $permissions['node:community_public:update own cooperation_call content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update own cooperation_idea content'
  $permissions['node:community_public:update own cooperation_idea content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update own factsheet_country content'
  $permissions['node:community_public:update own factsheet_country content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own factsheet_flag content'
  $permissions['node:community_public:update own factsheet_flag content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own farnet_article content'
  $permissions['node:community_public:update own farnet_article content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own farnet_discussion content'
  $permissions['node:community_public:update own farnet_discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update own gp_method content'
  $permissions['node:community_public:update own gp_method content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own ms_fiche content'
  $permissions['node:community_public:update own ms_fiche content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:community_public:update own nexteuropa_event content'
  $permissions['node:community_public:update own nexteuropa_event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own nexteuropa_faq content'
  $permissions['node:community_public:update own nexteuropa_faq content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own nexteuropa_mediagallery content'
  $permissions['node:community_public:update own nexteuropa_mediagallery content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own nexteuropa_news content'
  $permissions['node:community_public:update own nexteuropa_news content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:community_public:update own page content'
  $permissions['node:community_public:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:create farnet_discussion content'
  $permissions['node:editorial_team:create farnet_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete any farnet_discussion content'
  $permissions['node:editorial_team:delete any farnet_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:delete own farnet_discussion content'
  $permissions['node:editorial_team:delete own farnet_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update any farnet_discussion content'
  $permissions['node:editorial_team:update any farnet_discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:update own farnet_discussion content'
  $permissions['node:editorial_team:update own farnet_discussion content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
