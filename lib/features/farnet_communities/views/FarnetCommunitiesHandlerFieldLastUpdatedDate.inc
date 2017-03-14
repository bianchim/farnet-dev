<?php

/**
 * @file
 * Field handler to present a community last update date.
 */

/**
 * Manage the last updated date handler for views.
 */
class FarnetCommunitiesHandlerFieldLastUpdatedDate extends views_handler_field {

  /**
   * {@inheritdoc}
   */
  public function query() {}

  /**
   * Render the field.
   */
  public function render($values) {
    return _farnet_communities_get_last_updated_date($values->nid);
  }

}
