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
    'farnet_languages_spoken' => (object) array(
      'name' => 'Farnet Languages spoken',
      'machine_name' => 'farnet_languages_spoken',
      'description' => 'Taxonomy for the languages spoken on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
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
    'farnet_publication_channels' => (object) array(
      'name' => 'Farnet Publication channels',
      'machine_name' => 'farnet_publication_channels',
      'description' => 'Taxonomy for the Publication channels on Farnet',
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
    'farnet_theme' => (object) array(
      'name' => 'Farnet Theme',
      'machine_name' => 'farnet_theme',
      'description' => 'Taxonomy for the themes on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
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
    'farnet_type_organisation' => (object) array(
      'name' => 'Farnet Type Organisation',
      'machine_name' => 'farnet_type_organisation',
      'description' => 'Taxonomy for the Type of Organisations on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
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
    'farnet_type_publication' => (object) array(
      'name' => 'Farnet Type Publication',
      'machine_name' => 'farnet_type_publication',
      'description' => 'Taxonomy for the Type of Publications on Farnet',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
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
    'regions' => (object) array(
      'name' => 'Regions',
      'machine_name' => 'regions',
      'description' => 'A list of the regions',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
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
    'countries' => (object) array(
      'name' => 'Countries',
      'machine_name' => 'countries',
      'description' => 'A list of the countries',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -1,
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
