<?php

/**
 * @file
 * Field handler to present a discussion count.
 */

/**
 * Manage the discussion count for communities.
 */
class FarnetCommunitiesHandlerFieldDiscussionCount extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function query() {}

  /**
   * Render the field.
   */
  public function render($values) {
    return _farnet_communities_discussion_count($values->nid);
  }

}
