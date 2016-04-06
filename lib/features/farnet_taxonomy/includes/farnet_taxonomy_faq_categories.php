<?php
/**
 * @file
 * List of FAQ categories used to generate taxonomy FAQ Categories on Farnet.
 */

/**
 * Lists FAQ Categories.
 */
function farnet_taxonomy_faq_categories() {
  $faq_categories_array = array(
    'Category1' => t('Farnet FAQ Category1'),
    'Category2' => t('Farnet FAQ Category2'),
    'Category3' => t('Farnet FAQ Category3'),
    'Category4' => t('Farnet FAQ Category4'),
  );
  return $faq_categories_array;
}
