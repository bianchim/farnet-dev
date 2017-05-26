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
class farnetCommunitiesLastContributionFieldHandler extends views_handler_field {
  /**
   * Called to add the sort to a query.
   */
  function query() {
    $gid = reset($this->view->argument['gid']->value);

    // No group argument.
    if ($gid === FALSE) {
      return;
    }

    $this->ensure_my_table();

    if (!isset($this->query->relationships['user_last_contribution'])) {
      $join = new views_join();
      $join->construct('user_last_contribution', 'users', 'uid', 'uid');
      $this->query->add_relationship('user_last_contribution', $join, 'users');
    }

    // Add fields.
    $this->query->add_field('user_last_contribution', 'action', 'last_action');
    $this->query->add_field('user_last_contribution', 'nid', 'last_action_nid');
    $this->query->add_field('user_last_contribution', 'timestamp', 'last_action_nid');

    $this->query->add_where(0, 'user_last_contribution.gid', $gid);
  }

  /**
   * Render the field.
   */
  function render($values) {
    $date = format_date($values->user_last_contribution_timestamp, 'date_only');
    $return = '<span>' . $date . '</span><br/>';

    switch ($values->last_action) {
      case 'join':
        $return .= '<span>' . t('Joined the community') . '</span>';
        break;

      case 'node_update':
        $text = t('Updated');
        break;

      case 'node_insert':
        $text = t('Created');
        break;

      case 'comment':
        $text = t('Commented');
        break;
    }

    if (isset($text)) {
      $node = node_load($values->last_action_nid);
      $link = l($node->title, 'node/' . $node->nid);
      $return .= '<span>' . $text . ': ' . $link . '</span>';
    }

    return $return;
  }

}
