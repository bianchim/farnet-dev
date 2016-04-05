<?php
/**
 * @file
 * farnet_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function farnet_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'farnet_faq_category' => (object) array(
      'name' => 'Farnet FAQ Category',
      'machine_name' => 'farnet_faq_category',
      'description' => 'Taxonomy for the FAQ categories on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'farnet_theme' => (object) array(
      'name' => 'Farnet Theme',
      'machine_name' => 'farnet_theme',
      'description' => 'Taxonomy for the themes on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 4,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
