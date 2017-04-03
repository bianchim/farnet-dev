<?php

/**
 * @file
 * Field handler to present a content count.
 */

/**
 * Manage the content count for communities.
 */
class FarnetCommunitiesHandlerFieldContentCount extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function query() {}

  /**
   * Render the field.
   */
  public function render($values) {
    $nid = isset($values->nid) ? $values->nid : FALSE;
    if ($nid === FALSE) {
      $nid = isset($values->node_og_membership_nid) ? $values->node_og_membership_nid : FALSE;
    }
    return $nid ? _farnet_communities_content_count($nid) : FALSE;
  }

}
