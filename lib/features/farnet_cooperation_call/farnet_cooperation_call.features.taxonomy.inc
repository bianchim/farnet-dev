<?php

/**
 * @file
 * farnet_cooperation_call.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function farnet_cooperation_call_taxonomy_default_vocabularies() {
  return array(
    'farnet_sea_basins' => (object) array(
      'name' => 'Farnet Sea Basins',
      'machine_name' => 'farnet_sea_basins',
      'description' => 'Taxonomy for the Sea Basins on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 0,
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
