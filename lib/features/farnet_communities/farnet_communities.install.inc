<?php

/**
 * @file
 * Install processes helpers for FARNET communities.
 */

/**
 * Set all content types as not required in communities function.
 */
function _farnet_communities_update_content_types() {
  $records = [];
  $records['Site Wide'] = db_query("SELECT types_active FROM {og_content_type_admin} WHERE `name`='Site Wide'")->fetchField();
  $records['Default'] = db_query("SELECT types_active FROM {og_content_type_admin} WHERE `name`='Default'")->fetchField();

  foreach ($records as $target => $content_types) {
    $content_types = unserialize($content_types);
    foreach ($content_types as &$data) {
      $data = $target === 'Site Wide' ? 0 : 1;
    }
    $content_types = serialize($content_types);
    db_update('og_content_type_admin')
      ->fields(['types_active' => $content_types])
      ->condition('name', $target)
      ->execute();
  }
}
