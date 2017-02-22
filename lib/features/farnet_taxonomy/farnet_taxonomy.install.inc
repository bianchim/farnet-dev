<?php

/**
 * @file
 * Installs inc.
 */

/**
 * Function to save multilingual on Taxonomy Farnet.
 *
 * @param array $items_array
 *   Items by language component taxonomy.
 * @param int $vid
 *   The id of the $vocabulary.
 */
function save_multilingual_farnet_taxonomy($items_array, $vid) {
  foreach ($items_array as $item) {
    $term = new stdClass();
    $term->vid = $vid;
    $term->name = $item->name;
    $term->name_field = $item->name_field;
    $term->language = $item->language;
    $term->uid = 1;

    // Check if term exist.
    $term_existing = taxonomy_get_term_by_name($item->name);
    if (!empty($term_existing)) {
      $tid_existing = array_pop($term_existing)->tid;
      $term->tid = [$tid_existing];
    }

    // Attempt to get the parent if it exists.
    if (isset($item->parent)) {
      $parent_term = taxonomy_get_term_by_name($item->parent);
      if (!empty($parent_term)) {
        $tid = array_pop($parent_term)->tid;
        $term->parent = [$tid];
      }
    }

    taxonomy_term_save($term);

    if (isset($item->code)) {
      $term_w = entity_metadata_wrapper('taxonomy_term', $term->tid);
      $term_w->field_code->set($item->code);
      $term_w->save();
    }

    foreach ($item->translation as $language => $value) {
      $translation = array(
        'translate' => 0,
        'status' => 1,
        // Here is the language you're translating to.
        'language' => $language,
        // Here is the source language.
        'source' => $term->language,
      );

      // I had to load the taxonomy term.
      $org_term = taxonomy_term_load($term->tid);
      // Get the translation handler in place.
      $handler = entity_translation_get_handler('taxonomy_term', $org_term, TRUE);
      $translation['tid'] = $org_term->tid;

      $values = array();
      // Name field.
      $values['name_field'][$language][0]['value'] = $value;

      // Finally you set the translation and save the object.
      $handler->setTranslation($translation, $values);
      taxonomy_term_save($org_term);
    }
  };
}
