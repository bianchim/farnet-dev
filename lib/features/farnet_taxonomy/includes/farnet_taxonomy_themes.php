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
        'fr' => t('Adding value to fisheries FR'),
        'it' => t('Adding value to fisheries IT'),
      ),
    ),
    'Theme2' => (object) array(
      'name' => t('Diversification'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Diversification'),
        'it' => t('Diversification IT'),
      ),
    ),
    'Theme3' => (object) array(
      'name' => t('Environment'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Environnement'),
        'it' => t('Environment IT'),
      ),
    ),
    'Theme4' => (object) array(
      'name' => t('Society and culture'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Society and culture FR'),
        'it' => t('Society and culture IT'),
      ),
    ),
    'Theme5' => (object) array(
      'name' => t('Governance'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Governance FR'),
        'it' => t('Governance IT'),
      ),
    ),
    'Theme6' => (object) array(
      'name' => t('Fisheries'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Fisheries FR'),
        'it' => t('Aquaculture IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme7' => (object) array(
      'name' => t('Aquaculture'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Aquaculture FR'),
        'it' => t('Aquaculture IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme8' => (object) array(
      'name' => t('Short circuits'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Short circuits FR'),
        'it' => t('Short circuits IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme9' => (object) array(
      'name' => t('Processing'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Processing FR'),
        'it' => t('Processing IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme10' => (object) array(
      'name' => t('Traceability'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Traceability FR'),
        'it' => t('Traceability IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme11' => (object) array(
      'name' => t('Labelling'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Labelling FR'),
        'it' => t('Labelling IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme12' => (object) array(
      'name' => t('Marketing'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Marketing FR'),
        'it' => t('Marketing IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme13' => (object) array(
      'name' => t('Promotion'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Promotion FR'),
        'it' => t('Promotion IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme14' => (object) array(
      'name' => t('Business support'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Business support FR'),
        'it' => t('Business support IT'),
      ),
      'parent' => 'Adding value to fisheries',
    ),
    'Theme15' => (object) array(
      'name' => t('Tourism'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Tourism FR'),
        'it' => t('Tourism IT'),
      ),
      'parent' => 'Diversification',
    ),
    'Theme16' => (object) array(
      'name' => t('Arts and crafts'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Arts and crafts FR'),
        'it' => t('Arts and crafts IT'),
      ),
      'parent' => 'Diversification',
    ),
    'Theme17' => (object) array(
      'name' => t('Marine activities'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Marine activities FR'),
        'it' => t('Marine activities IT'),
      ),
      'parent' => 'Diversification',
    ),
    'Theme18' => (object) array(
      'name' => t('Water quality'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Water quality FR'),
        'it' => t('Water quality IT'),
      ),
      'parent' => 'Environment',
    ),
    'Theme19' => (object) array(
      'name' => t('Marine litter'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Marine litter FR'),
        'it' => t('Marine litter IT'),
      ),
      'parent' => 'Environment',
    ),
    'Theme20' => (object) array(
      'name' => t('Climate change'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Climate change FR'),
        'it' => t('Climate change IT'),
      ),
      'parent' => 'Environment',
    ),
    'Theme21' => (object) array(
      'name' => t('Energy'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Energy FR'),
        'it' => t('Energy IT'),
      ),
      'parent' => 'Environment',
    ),
    'Theme22' => (object) array(
      'name' => t('Cultural heritage'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Cultural heritage FR'),
        'it' => t('Cultural heritage IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme23' => (object) array(
      'name' => t('Education and training'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Education and training FR'),
        'it' => t('Education and training IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme24' => (object) array(
      'name' => t('Instrastucture'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Instrastucture FR'),
        'it' => t('Instrastucture IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme25' => (object) array(
      'name' => t('Women'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Women FR'),
        'it' => t('Women IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme26' => (object) array(
      'name' => t('Youth'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Youth FR'),
        'it' => t('Youth IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme27' => (object) array(
      'name' => t('Migrants'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Migrants FR'),
        'it' => t('Migrants IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme28' => (object) array(
      'name' => t('Elderly'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Elderly FR'),
        'it' => t('Elderly IT'),
      ),
      'parent' => 'Society and culture',
    ),
    'Theme29' => (object) array(
      'name' => t('Involving fishermen'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Involving fishermen FR'),
        'it' => t('Involving fishermen IT'),
      ),
      'parent' => 'Governance',
    ),
    'Theme30' => (object) array(
      'name' => t('Integrated funding'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Integrated funding FR'),
        'it' => t('Integrated funding IT'),
      ),
      'parent' => 'Governance',
    ),
    'Theme31' => (object) array(
      'name' => t('Fisheries resources'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Fisheries resources FR'),
        'it' => t('Fisheries resourcest IT'),
      ),
      'parent' => 'Governance',
    ),
    'Theme32' => (object) array(
      'name' => t('Integrated coastal management'),
      'language' => 'en',
      'translation' => array(
        'fr' => t('Integrated coastal management FR'),
        'it' => t('Integrated coastal management IT'),
      ),
      'parent' => 'Governance',
    ),
  );
  return $themes_array;
}
