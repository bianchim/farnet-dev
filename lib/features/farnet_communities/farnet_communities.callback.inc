<?php

/**
 * @file
 * Code for some callbacks for farnet communities.
 */

/**
 * Helper function to display a community view.
 */
function farnet_communities_display_views($view_name, $display_id, $group) {
  return views_embed_view($view_name, $display_id, $group->nid);
}
