<?php

/**
 * @file
 * List of themes used to generate taxonomy Theme on Farnet.
 */

/**
 * Lists Themes.
 */
function farnet_taxonomy_themes() {
  $themes_array = array(
    'Theme1' => (object) array(
      'name' => t('Adding value to fisheries'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Adding value to fisheries FR',
        'it' => 'Adding value to fisheries IT',
      ),
    ),
    'Theme2' => (object) array(
      'name' => t('Diversification'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Diversification',
        'it' => 'Diversification IT',
      ),
    ),
    'Theme3' => (object) array(
      'name' => t('Environment'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Environnement',
        'it' => 'Environment IT',
      ),
    ),
    'Theme4' => (object) array(
      'name' => t('Society and culture'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Society and culture FR',
        'it' => 'Society and culture IT',
      ),
    ),
    'Theme5' => (object) array(
      'name' => t('Governance'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Governance FR',
        'it' => 'Governance IT',
      ),
    ),
    'Theme6' => (object) array(
      'name' => t('Fisheries'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Fisheries FR',
        'it' => 'Fisheries IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme7' => (object) array(
      'name' => t('Aquaculture'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Aquaculture FR',
        'it' => 'Aquaculture IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme8' => (object) array(
      'name' => t('Short circuits'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Short circuits FR',
        'it' => 'Short circuits IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme9' => (object) array(
      'name' => t('Processing'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Processing FR',
        'it' => 'Processing IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme10' => (object) array(
      'name' => t('Traceability'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Traceability FR',
        'it' => 'Traceability IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme11' => (object) array(
      'name' => t('Labelling'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Labelling FR',
        'it' => 'Labelling IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme12' => (object) array(
      'name' => t('Marketing'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Marketing FR',
        'it' => 'Marketing IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme13' => (object) array(
      'name' => t('Promotion'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Promotion FR',
        'it' => 'Promotion IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme14' => (object) array(
      'name' => t('Business support'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Business support FR',
        'it' => 'Business support IT',
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme15' => (object) array(
      'name' => t('Tourism'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Tourism FR',
        'it' => 'Tourism IT',
      ),
      'parent' => 'Diversification',
    ),
    'Theme16' => (object) array(
      'name' => t('Arts and crafts'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Arts and crafts FR',
        'it' => 'Arts and crafts IT',
      ),
      'parent' => 'Diversification',
    ),
    'Theme17' => (object) array(
      'name' => t('Marine activities'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Marine activities FR',
        'it' => 'Marine activities IT',
      ),
      'parent' => 'Diversification',
    ),
    'Theme18' => (object) array(
      'name' => t('Water quality'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Water quality FR',
        'it' => 'Water quality IT',
      ),
      'parent' => 'Environment',
    ),
    'Theme19' => (object) array(
      'name' => t('Marine litter'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Marine litter FR',
        'it' => 'Marine litter IT',
      ),
      'parent' => 'Environment',
    ),
    'Theme20' => (object) array(
      'name' => t('Climate change'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Climate change FR',
        'it' => 'Climate change IT',
      ),
      'parent' => 'Environment',
    ),
    'Theme21' => (object) array(
      'name' => t('Energy'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Energy FR',
        'it' => 'Energy IT',
      ),
      'parent' => 'Environment',
    ),
    'Theme22' => (object) array(
      'name' => t('Cultural heritage'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Cultural heritage FR',
        'it' => 'Cultural heritage IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme23' => (object) array(
      'name' => t('Education and training'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Education and training FR',
        'it' => 'Education and training IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme24' => (object) array(
      'name' => t('Instrastucture'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Instrastucture FR',
        'it' => 'Instrastucture IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme25' => (object) array(
      'name' => t('Women'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Women FR',
        'it' => 'Women IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme26' => (object) array(
      'name' => t('Youth'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Youth FR',
        'it' => 'Youth IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme27' => (object) array(
      'name' => t('Migrants'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Migrants FR',
        'it' => 'Migrants IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme28' => (object) array(
      'name' => t('Elderly'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Elderly FR',
        'it' => 'Elderly IT',
      ),
      'parent' => 'Society and culture',
    ),
    'Theme29' => (object) array(
      'name' => t('Involving fishermen'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Involving fishermen FR',
        'it' => 'Involving fishermen IT',
      ),
      'parent' => 'Governance',
    ),
    'Theme30' => (object) array(
      'name' => t('Integrated funding'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Integrated funding FR',
        'it' => 'Integrated funding IT',
      ),
      'parent' => 'Governance',
    ),
    'Theme31' => (object) array(
      'name' => t('Fisheries resources'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Fisheries resources FR',
        'it' => 'Fisheries resourcest IT',
      ),
      'parent' => 'Governance',
    ),
    'Theme32' => (object) array(
      'name' => t('Integrated coastal management'),
      'language' => 'en',
      'translation' => array(
        'fr' => 'Integrated coastal management FR',
        'it' => 'Integrated coastal management IT',
      ),
      'parent' => 'Governance',
    ),
  );
  return $themes_array;
}
