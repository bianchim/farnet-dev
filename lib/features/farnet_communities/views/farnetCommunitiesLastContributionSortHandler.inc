<?php

/**
 * @file
 * Definition of date handler for comments in farnet communities.
 */

/**
 * Basic sort handler for dates.
 *
 * This handler enables granularity, which is the ability to make dates
 * equivalent based upon nearness.
 *
 * @ingroup views_sort_handlers
 */
class farnetCommunitiesLastContributionSortHandler extends views_handler_sort {
  /**
   * Called to add the sort to a query.
   */
  function query() {
    $gid = reset($this->view->argument['gid']->value);

    // No group argument, abort sorting.
    if ($gid === FALSE) {
      return;
    }

    $this->ensure_my_table();

    if (!isset($this->query->relationships['user_last_contribution'])) {
      $join = new views_join();
      $join->construct('user_last_contribution', 'users', 'uid', 'uid');
      $this->query->add_relationship('user_last_contribution', $join, 'users');
    }

    $this->query->add_field('user_last_contribution', 'timestamp');
    $this->query->add_orderby('user_last_contribution', 'timestamp', $this->options['order']);
    $this->query->add_where(0, 'user_last_contribution.gid', $gid);
  }
}
