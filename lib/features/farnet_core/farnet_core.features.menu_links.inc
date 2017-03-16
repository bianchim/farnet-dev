<?php
/**
 * @file
 * farnet_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function farnet_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826.
  $menu_links['main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Exported menu link: main-menu_adding-value-to-fisheries:themes/adding-value-fisheries.
  $menu_links['main-menu_adding-value-to-fisheries:themes/adding-value-fisheries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries',
    'router_path' => 'themes/adding-value-fisheries',
    'link_title' => 'Adding value to fisheries',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
  );
  // Exported menu link: main-menu_aquaculture:themes/adding-value-fisheries/aquaculture.
  $menu_links['main-menu_aquaculture:themes/adding-value-fisheries/aquaculture'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/aquaculture',
    'router_path' => 'themes',
    'link_title' => 'Aquaculture',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_aquaculture:themes/adding-value-fisheries/aquaculture',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_arts-and-crafts:themes/diversification/arts-and-crafts.
  $menu_links['main-menu_arts-and-crafts:themes/diversification/arts-and-crafts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification/arts-and-crafts',
    'router_path' => 'themes',
    'link_title' => 'Arts and crafts',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_arts-and-crafts:themes/diversification/arts-and-crafts',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_diversification:themes/diversification',
  );
  // Exported menu link: main-menu_farnet-at-a-glance:TOKENUUID_809bcdc6-2ddb-4123-8d3d-8670deba1ee0.
  $menu_links['main-menu_farnet-at-a-glance:TOKENUUID_809bcdc6-2ddb-4123-8d3d-8670deba1ee0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_809bcdc6-2ddb-4123-8d3d-8670deba1ee0',
    'router_path' => '',
    'link_title' => 'FARNET at a glance',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_farnet-at-a-glance:TOKENUUID_809bcdc6-2ddb-4123-8d3d-8670deba1ee0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
  );
  // Exported menu link: main-menu_brochures:library/brochures.
  $menu_links['main-menu_brochures:library/brochures'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'library/brochures',
    'router_path' => 'library/brochures',
    'link_title' => 'Brochures',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_brochures:library/brochures',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
  );
  // Exported menu link: main-menu_business-support:themes/adding-value-fisheries/business-support.
  $menu_links['main-menu_business-support:themes/adding-value-fisheries/business-support'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/business-support',
    'router_path' => 'themes',
    'link_title' => 'Business support',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_business-support:themes/adding-value-fisheries/business-support',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_calendar:news-events/calendar.
  $menu_links['main-menu_calendar:news-events/calendar'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/calendar',
    'router_path' => 'news-events/calendar',
    'link_title' => 'Calendar',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_calendar:news-events/calendar',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52',
  );
  // Exported menu link: main-menu_climate-change:themes/environment/climate-change.
  $menu_links['main-menu_climate-change:themes/environment/climate-change'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/environment/climate-change',
    'router_path' => 'themes',
    'link_title' => 'Climate change',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_climate-change:themes/environment/climate-change',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_environment:themes/environment',
  );
  // Exported menu link: main-menu_clld-at-a-glance:TOKENUUID_a6732329-8c83-4448-bf02-f0d597c3fdbe.
  $menu_links['main-menu_clld-at-a-glance:TOKENUUID_a6732329-8c83-4448-bf02-f0d597c3fdbe'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_a6732329-8c83-4448-bf02-f0d597c3fdbe',
    'router_path' => '',
    'link_title' => 'CLLD at a glance',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_clld-at-a-glance:TOKENUUID_a6732329-8c83-4448-bf02-f0d597c3fdbe',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
  );
  // Exported menu link: main-menu_clld-overview:tools/faq/clld-overview.
  $menu_links['main-menu_clld-overview:tools/faq/clld-overview'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools/faq/clld-overview',
    'router_path' => 'tools/faq/clld-overview',
    'link_title' => 'CLLD overview',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'identifier' => 'main-menu_clld-overview:tools/faq/clld-overview',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qa-on-clld:<front>',
  );
  // Exported menu link: main-menu_complementary-funding:themes/governance-management/complementary-funding.
  $menu_links['main-menu_complementary-funding:themes/governance-management/complementary-funding'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/governance-management/complementary-funding',
    'router_path' => 'themes',
    'link_title' => 'Complementary funding',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_complementary-funding:themes/governance-management/complementary-funding',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_governance-and-management:themes/governance-management',
  );
  // Exported menu link: main-menu_conferences:news-events/events/conferences.
  $menu_links['main-menu_conferences:news-events/events/conferences'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events/conferences',
    'router_path' => 'news-events/events/conferences',
    'link_title' => 'Conferences',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_conferences:news-events/events/conferences',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_events:news-events/events',
  );
  // Exported menu link: main-menu_contact-us:about/contact-us.
  $menu_links['main-menu_contact-us:about/contact-us'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => '',
    'link_title' => 'Contact us',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_contact-us:about/contact-us',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
  );
  // Exported menu link: main-menu_cooperation-by-member-state:on-the-ground/cooperation/by-member-state.
  $menu_links['main-menu_cooperation-by-member-state:on-the-ground/cooperation/by-member-state'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation/by-member-state',
    'router_path' => 'on-the-ground/cooperation/by-member-state',
    'link_title' => 'Cooperation by Member State',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation-by-member-state:on-the-ground/cooperation/by-member-state',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 2,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_cooperation-calls:on-the-ground/cooperation/calls.
  $menu_links['main-menu_cooperation-calls:on-the-ground/cooperation/calls'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation/calls',
    'router_path' => 'on-the-ground/cooperation/calls',
    'link_title' => 'Cooperation calls',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation-calls:on-the-ground/cooperation/calls',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 3,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_cooperation-ideas:on-the-ground/cooperation/ideas.
  $menu_links['main-menu_cooperation-ideas:on-the-ground/cooperation/ideas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation/ideas',
    'router_path' => 'on-the-ground/cooperation/ideas',
    'link_title' => 'Cooperation ideas',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation-ideas:on-the-ground/cooperation/ideas',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 4,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_cooperation-in-action:on-the-ground/cooperation/in-action.
  $menu_links['main-menu_cooperation-in-action:on-the-ground/cooperation/in-action'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation/in-action',
    'router_path' => 'on-the-ground/cooperation',
    'link_title' => 'Cooperation in action',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation-in-action:on-the-ground/cooperation/in-action',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 5,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_cooperation:on-the-ground/cooperation.
  $menu_links['main-menu_cooperation:on-the-ground/cooperation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation',
    'router_path' => 'on-the-ground/cooperation',
    'link_title' => 'Cooperation',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
  );
  // Exported menu link: main-menu_cooperation:tools/faq/cooperation.
  $menu_links['main-menu_cooperation:tools/faq/cooperation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools/faq/cooperation',
    'router_path' => 'tools/faq/cooperation',
    'link_title' => 'Cooperation',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation:tools/faq/cooperation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qa-on-clld:<front>',
  );
  // Exported menu link: main-menu_country-factsheets:on-the-ground/country-factsheets.
  $menu_links['main-menu_country-factsheets:on-the-ground/country-factsheets'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/country-factsheets',
    'router_path' => 'on-the-ground/country-factsheets',
    'link_title' => 'Country factsheets',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_country-factsheets:on-the-ground/country-factsheets',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item main-menu-top-level',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
  );
  // Exported menu link: main-menu_cultural-heritage:themes/society-and-culture/cultural-heritage.
  $menu_links['main-menu_cultural-heritage:themes/society-and-culture/cultural-heritage'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/cultural-heritage',
    'router_path' => 'themes',
    'link_title' => 'Cultural heritage',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cultural-heritage:themes/society-and-culture/cultural-heritage',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );
  // Exported menu link: main-menu_dg-mare:TOKENUUID_d1c99c2e-1ced-49e8-ad88-5948cc3890c0.
  $menu_links['main-menu_dg-mare:TOKENUUID_d1c99c2e-1ced-49e8-ad88-5948cc3890c0'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_d1c99c2e-1ced-49e8-ad88-5948cc3890c0',
    'router_path' => '',
    'link_title' => 'DG MARE',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_dg-mare:TOKENUUID_d1c99c2e-1ced-49e8-ad88-5948cc3890c0',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f',
  );
  // Exported menu link: main-menu_diversification:themes/diversification.
  $menu_links['main-menu_diversification:themes/diversification'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification',
    'router_path' => 'themes',
    'link_title' => 'Diversification',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_diversification:themes/diversification',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
  );
  // Exported menu link: main-menu_education-and-training:themes/society-and-culture/education-and-training.
  $menu_links['main-menu_education-and-training:themes/society-and-culture/education-and-training'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/education-and-training',
    'router_path' => 'themes',
    'link_title' => 'Education and training',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_education-and-training:themes/society-and-culture/education-and-training',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );
  // Exported menu link: main-menu_elderly:themes/society-and-culture/elderly.
  $menu_links['main-menu_elderly:themes/society-and-culture/elderly'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/elderly',
    'router_path' => 'themes',
    'link_title' => 'Elderly',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_elderly:themes/society-and-culture/elderly',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );
  // Exported menu link: main-menu_eligibility:tools/faq/eligibility.
  $menu_links['main-menu_eligibility:tools/faq/eligibility'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools/faq/eligibility',
    'router_path' => 'tools/faq/eligibility',
    'link_title' => 'Eligibility',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_eligibility:tools/faq/eligibility',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faqs:tools/faq',
  );
  // Exported menu link: main-menu_energy:themes/environment/energy.
  $menu_links['main-menu_energy:themes/environment/energy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/environment/energy',
    'router_path' => 'themes',
    'link_title' => 'Energy',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_energy:themes/environment/energy',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_environment:themes/environment',
  );
  // Exported menu link: main-menu_environment:themes/environment.
  $menu_links['main-menu_environment:themes/environment'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/environment',
    'router_path' => 'themes',
    'link_title' => 'Environment',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_environment:themes/environment',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
  );
  // Exported menu link: main-menu_european-overview:TOKENUUID_45a49ccb-a3bf-42e5-b6e9-0fa971c31e5f.
  $menu_links['main-menu_european-overview:TOKENUUID_45a49ccb-a3bf-42e5-b6e9-0fa971c31e5f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_45a49ccb-a3bf-42e5-b6e9-0fa971c31e5f',
    'router_path' => 'node/%',
    'link_title' => 'European overview',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_european-overview:TOKENUUID_45a49ccb-a3bf-42e5-b6e9-0fa971c31e5f',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 1,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_events:news-events/events.
  $menu_links['main-menu_events:news-events/events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events',
    'router_path' => 'news-events/events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_events:news-events/events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52',
  );
  // Exported menu link: main-menu_faqs:tools/faq.
  $menu_links['main-menu_faqs:tools/faq'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools/faq',
    'router_path' => 'tools/faq',
    'link_title' => 'FAQs',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_faqs:tools/faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
  );
  // Exported menu link: main-menu_farnet-data:TOKENUUID_16f7787d-ad7f-4645-a40f-a5bbcbd9e416.
  $menu_links['main-menu_farnet-data:TOKENUUID_16f7787d-ad7f-4645-a40f-a5bbcbd9e416'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_16f7787d-ad7f-4645-a40f-a5bbcbd9e416',
    'router_path' => '',
    'link_title' => 'FARNET Data',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_farnet-data:TOKENUUID_16f7787d-ad7f-4645-a40f-a5bbcbd9e416',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
  );
  // Exported menu link: main-menu_farnet-flash:TOKENUUID_db00e3c2-a5d5-4678-b297-bc235890a2f6.
  $menu_links['main-menu_farnet-flash:TOKENUUID_db00e3c2-a5d5-4678-b297-bc235890a2f6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_db00e3c2-a5d5-4678-b297-bc235890a2f6',
    'router_path' => 'node/%',
    'link_title' => 'FARNET Flash',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_farnet-flash:TOKENUUID_db00e3c2-a5d5-4678-b297-bc235890a2f6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
  );
  // Exported menu link: main-menu_farnet-news:news-events/news/farnet.
  $menu_links['main-menu_farnet-news:news-events/news/farnet'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/news/farnet',
    'router_path' => 'news-events/news/farnet',
    'link_title' => 'FARNET news',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'identifier' => 'main-menu_farnet-news:news-events/news/farnet',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news:news-events/news',
  );
  
  // Exported menu link: main-menu_farnet-support-unit:TOKENUUID_83c03175-7f0f-46a8-bb94-68c149e0545b.
  $menu_links['main-menu_farnet-support-unit:TOKENUUID_83c03175-7f0f-46a8-bb94-68c149e0545b'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_83c03175-7f0f-46a8-bb94-68c149e0545b',
    'router_path' => '',
    'link_title' => 'FARNET Support Unit',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_farnet-support-unit:TOKENUUID_83c03175-7f0f-46a8-bb94-68c149e0545b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f',
  );
  // Exported menu link: main-menu_finance-and-administration:tools/faq/finance-dministration.
  $menu_links['main-menu_finance-and-administration:tools/faq/finance-dministration'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools/faq/finance-dministration',
    'router_path' => 'tools/faq',
    'link_title' => 'Finance and administration',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_finance-and-administration:tools/faq/finance-dministration',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_faqs:tools/faq',
  );
  // Exported menu link: main-menu_fisheries-products:themes/diversification/fisheries-products.
  $menu_links['main-menu_fisheries-products:themes/diversification/fisheries-products'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification/fisheries-products',
    'router_path' => 'themes',
    'link_title' => 'Fisheries by-products',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_fisheries-products:themes/diversification/fisheries-products',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_diversification:themes/diversification',
  );
  // Exported menu link: main-menu_fisheries-resources:themes/governance-management/fisheries resources.
  $menu_links['main-menu_fisheries-resources:themes/governance-management/fisheries resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/governance-management/fisheries resources',
    'router_path' => 'themes',
    'link_title' => 'Fisheries resources',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_fisheries-resources:themes/governance-management/fisheries resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_complementary-funding:themes/governance-management/complementary-funding',
  );
  // Exported menu link: main-menu_flag-factsheets:on-the-ground/flag-factsheets.
  $menu_links['main-menu_flag-factsheets:on-the-ground/flag-factsheets'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/flag-factsheets',
    'router_path' => 'on-the-ground/flag-factsheets',
    'link_title' => 'FLAG factsheets',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_flag-factsheets:on-the-ground/flag-factsheets',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
  );
  // Exported menu link: main-menu_flags:about/who-is-who/flags.
  $menu_links['main-menu_flags:about/who-is-who/flags'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/who-is-who/flags',
    'router_path' => 'about/who-is-who/flags',
    'link_title' => 'FLAGs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_flags:about/who-is-who/flags',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f',
  );
  // Exported menu link: main-menu_galleries:galleries.
  $menu_links['main-menu_galleries:galleries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'galleries',
    'router_path' => 'galleries',
    'link_title' => 'Galleries',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_galleries:galleries',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_gastronomy:themes/diversification/gastronomy.
  $menu_links['main-menu_gastronomy:themes/diversification/gastronomy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification/gastronomy',
    'router_path' => 'themes',
    'link_title' => 'Gastronomy',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_gastronomy:themes/diversification/gastronomy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_diversification:themes/diversification',
  );
  // Exported menu link: main-menu_glossary:TOKENUUID_b5430f79-addb-4850-acff-5f907724920d.
  $menu_links['main-menu_glossary:TOKENUUID_b5430f79-addb-4850-acff-5f907724920d'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_b5430f79-addb-4850-acff-5f907724920d',
    'router_path' => '',
    'link_title' => 'Glossary',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_glossary:TOKENUUID_b5430f79-addb-4850-acff-5f907724920d',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
  );
  // Exported menu link: main-menu_good-practice:on-the-ground/good-practice.
  $menu_links['main-menu_good-practice:on-the-ground/good-practice'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/good-practice',
    'router_path' => 'on-the-ground/good-practice',
    'link_title' => 'Good Practice',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_good-practice:on-the-ground/good-practice',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
  );
  // Exported menu link: main-menu_governance-and-management:themes/governance-management.
  $menu_links['main-menu_governance-and-management:themes/governance-management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/governance-management',
    'router_path' => 'themes',
    'link_title' => 'Governance and management',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_governance-and-management:themes/governance-management',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
      'attributes' => array(
        'data-display-title' => 0,
        'data-image' => 'home',
        'class' => array(
          0 => 'navigation-main-link',
        ),
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'navigation-main-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_infrastructure:themes/society-and-culture/infrastructure.
  $menu_links['main-menu_infrastructure:themes/society-and-culture/infrastructure'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/infrastructure',
    'router_path' => 'themes',
    'link_title' => 'Infrastructure',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_infrastructure:themes/society-and-culture/infrastructure',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );
  // Exported menu link: main-menu_integrated-coastal-management:themes/governance-management/integrated-coastal-management.
  $menu_links['main-menu_integrated-coastal-management:themes/governance-management/integrated-coastal-management'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/governance-management/integrated-coastal-management',
    'router_path' => 'themes',
    'link_title' => 'Integrated coastal management',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_integrated-coastal-management:themes/governance-management/integrated-coastal-management',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_governance-and-management:themes/governance-management',
  );
  // Exported menu link: main-menu_labelling:themes/adding-value-fisheries/labelling.
  $menu_links['main-menu_labelling:themes/adding-value-fisheries/labelling'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/labelling',
    'router_path' => 'themes',
    'link_title' => 'Labelling',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_labelling:themes/adding-value-fisheries/labelling',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_lessons-from-farnet-1-2007-2013:TOKENUUID_919d0192-5620-4ebc-a23e-6a1be22c0bfe.
  $menu_links['main-menu_lessons-from-farnet-1-2007-2013:TOKENUUID_919d0192-5620-4ebc-a23e-6a1be22c0bfe'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_919d0192-5620-4ebc-a23e-6a1be22c0bfe',
    'router_path' => 'node/%',
    'link_title' => 'Lessons from FARNET 1 (2007-2013)',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_lessons-from-farnet-1-2007-2013:TOKENUUID_919d0192-5620-4ebc-a23e-6a1be22c0bfe',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
  );
  // Exported menu link: main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30.
  $menu_links['main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
    'router_path' => 'node/%',
    'link_title' => 'Library',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_magazine:library/magazines.
  $menu_links['main-menu_magazine:library/magazines'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'library/magazines',
    'router_path' => 'library/magazines',
    'link_title' => 'Magazine',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_magazine:library/magazines',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item main-menu-top-level',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
  );
  // Exported menu link: main-menu_managing-authorities:news-events/events/managing-authorities.
  $menu_links['main-menu_managing-authorities:news-events/events/managing-authorities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events/managing-authorities',
    'router_path' => 'news-events/events/managing-authorities',
    'link_title' => 'Managing authorities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_managing-authorities:news-events/events/managing-authorities',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_events:news-events/events',
  );
  // Exported menu link: main-menu_maps:on-the-ground/maps.
  $menu_links['main-menu_maps:on-the-ground/maps'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/maps',
    'router_path' => 'on-the-ground/maps',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_maps:on-the-ground/maps',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
  );
  // Exported menu link: main-menu_marine-activities:themes/diversification/marine-activities.
  $menu_links['main-menu_marine-activities:themes/diversification/marine-activities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification/marine-activities',
    'router_path' => 'themes',
    'link_title' => 'Marine activities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_marine-activities:themes/diversification/marine-activities',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_diversification:themes/diversification',
  );
  // Exported menu link: main-menu_marine-litter:themes/environment/marine-litter.
  $menu_links['main-menu_marine-litter:themes/environment/marine-litter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/environment/marine-litter',
    'router_path' => 'themes',
    'link_title' => 'Marine litter',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_marine-litter:themes/environment/marine-litter',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_environment:themes/environment',
  );
  // Exported menu link: main-menu_methods:on-the-ground/good-practice/methods.
  $menu_links['main-menu_methods:on-the-ground/good-practice/methods'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/good-practice/methods',
    'router_path' => 'on-the-ground/good-practice/methods',
    'link_title' => 'Methods',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_methods:on-the-ground/good-practice/methods',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_good-practice:on-the-ground/good-practice',
  );
  // Exported menu link: main-menu_migrants-and-refugees:themes/society-and-culture/migrants-and-refugees.
  $menu_links['main-menu_migrants-and-refugees:themes/society-and-culture/migrants-and-refugees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/migrants-and-refugees',
    'router_path' => 'themes',
    'link_title' => 'Migrants and refugees',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_migrants-and-refugees:themes/society-and-culture/migrants-and-refugees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );
  // Exported menu link: main-menu_myfarnet:myfarnet.
  $menu_links['main-menu_myfarnet:myfarnet'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'myfarnet',
    'router_path' => 'myfarnet',
    'link_title' => 'myFARNET',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'navigation-main-link',
        ),
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'navigation-main-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_myfarnet:myfarnet',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 10,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_national--regional--local-events-capacity-building-events:news-events/events/other.
  $menu_links['main-menu_national--regional--local-events-capacity-building-events:news-events/events/other'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events/other',
    'router_path' => 'news-events/events/other',
    'link_title' => 'National / regional / local events',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_national--regional--local-events-capacity-building-events:news-events/events/other',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_events:news-events/events',
  );
  // Exported menu link: main-menu_who-managing-authorities:about/who-is-who/managing-authorities.
  $menu_links['main-menu_who-managing-authorities:about/who-is-who/managing-authorities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/who-is-who/managing-authorities',
    'router_path' => 'about/who-is-who/managing-authorities',
    'link_title' => 'Managing authorities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_who-managing-authorities:about/who-is-who/managing-authorities',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f',
  );
  // Exported menu link: main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52.
  $menu_links['main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52',
    'router_path' => 'node/%',
    'link_title' => 'News & Events',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_news:news-events/news.
  $menu_links['main-menu_news:news-events/news'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/news',
    'router_path' => 'news-events/news',
    'link_title' => 'News',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_news:news-events/news',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52',
  );
  // Exported menu link: main-menu_newsletters:my_subscriptions.
  $menu_links['main-menu_newsletters:my_subscriptions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'my_subscriptions',
    'router_path' => 'my_subscriptions',
    'link_title' => 'Newsletters',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_newsletters:my_subscriptions',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219.
  $menu_links['main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
    'router_path' => 'node/%',
    'link_title' => 'On the ground',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_on-the-ground:TOKENUUID_4f580f75-5363-4a5d-8c8e-c8141047e219',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_other-news:news-events/news/other.
  $menu_links['main-menu_other-news:news-events/news/other'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/news/other',
    'router_path' => 'news-events/news/other',
    'link_title' => 'Other news',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_other-news:news-events/news/other',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news:news-events/news',
  );
  // Exported menu link: main-menu_pesca-tourism:themes/diversification/pesca-tourism.
  $menu_links['main-menu_pesca-tourism:themes/diversification/pesca-tourism'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification/pesca-tourism',
    'router_path' => 'themes',
    'link_title' => 'Pesca-tourism',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_pesca-tourism:themes/diversification/pesca-tourism',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_diversification:themes/diversification',
  );
  // Exported menu link: main-menu_photos:<front>.
  $menu_links['main-menu_photos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Photos',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_photos:<front>',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
  );
  // Exported menu link: main-menu_presentations:library/presentations.
  $menu_links['main-menu_presentations:library/presentations'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'library/presentations',
    'router_path' => 'library/presentations',
    'link_title' => 'Presentations',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_presentations:library/presentations',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
  );
  // Exported menu link: main-menu_processing:themes/adding-value-fisheries/processing.
  $menu_links['main-menu_processing:themes/adding-value-fisheries/processing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/processing',
    'router_path' => 'themes',
    'link_title' => 'Processing',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_processing:themes/adding-value-fisheries/processing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_projects:on-the-ground/good-practice/projects.
  $menu_links['main-menu_projects:on-the-ground/good-practice/projects'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/good-practice/projects',
    'router_path' => 'on-the-ground/good-practice/projects',
    'link_title' => 'Projects',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_projects:on-the-ground/good-practice/projects',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_good-practice:on-the-ground/good-practice',
  );
  // Exported menu link: main-menu_promotion:themes/adding-value-fisheries/promotion.
  $menu_links['main-menu_promotion:themes/adding-value-fisheries/promotion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/promotion',
    'router_path' => 'themes',
    'link_title' => 'Promotion',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_promotion:themes/adding-value-fisheries/promotion',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_qa-on-clld:<front>.
  $menu_links['main-menu_qa-on-clld:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Q&A on CLLD',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_qa-on-clld:<front>',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
  );
  // Exported menu link: main-menu_search:search/site.
  $menu_links['main-menu_search:search/site'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/site',
    'router_path' => 'search/site',
    'link_title' => 'Search',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_search:search/site',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_setting-up-flags:tools/faq/flag-set-up.
  $menu_links['main-menu_setting-up-flags:tools/faq/flag-set-up'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools/faq/flag-set-up',
    'router_path' => 'tools/faq/flag-set-up',
    'link_title' => 'Setting up FLAGs',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_setting-up-flags:tools/faq/flag-set-up',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qa-on-clld:<front>',
  );
  // Exported menu link: main-menu_short-circuits:themes/adding-value-fisheries/short-circuits.
  $menu_links['main-menu_short-circuits:themes/adding-value-fisheries/short-circuits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/short-circuits',
    'router_path' => 'themes',
    'link_title' => 'Short circuits',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_short-circuits:themes/adding-value-fisheries/short-circuits',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_short-stories:on-the-ground/good-practice/short-stories.
  $menu_links['main-menu_short-stories:on-the-ground/good-practice/short-stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/good-practice/short-stories',
    'router_path' => 'on-the-ground/good-practice',
    'link_title' => 'Short stories',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_short-stories:on-the-ground/good-practice/short-stories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_good-practice:on-the-ground/good-practice',
  );
  // Exported menu link: main-menu_small-scale-and-coastal-fisheries:themes/governance-management/small-scale-and-coastal-fisheries.
  $menu_links['main-menu_small-scale-and-coastal-fisheries:themes/governance-management/small-scale-and-coastal-fisheries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/governance-management/small-scale-and-coastal-fisheries',
    'router_path' => 'themes',
    'link_title' => 'Small-scale and coastal fisheries',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_small-scale-and-coastal-fisheries:themes/governance-management/small-scale-and-coastal-fisheries',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_governance-and-management:themes/governance-management',
  );
  // Exported menu link: main-menu_social-media:TOKENUUID_99d9499d-bf58-4439-8d51-14951ccb61a8.
  $menu_links['main-menu_social-media:TOKENUUID_99d9499d-bf58-4439-8d51-14951ccb61a8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_99d9499d-bf58-4439-8d51-14951ccb61a8',
    'router_path' => 'node/%',
    'link_title' => 'Social media',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_social-media:TOKENUUID_99d9499d-bf58-4439-8d51-14951ccb61a8',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news--events:TOKENUUID_f56bdaf2-af08-4145-8dc1-733561745e52',
  );
  // Exported menu link: main-menu_society-and-culture:themes/society-and-culture.
  $menu_links['main-menu_society-and-culture:themes/society-and-culture'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture',
    'router_path' => 'themes',
    'link_title' => 'Society and culture',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list main-menu-top-level',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
  );
  // Exported menu link: main-menu_subscribe:<front>.
  $menu_links['main-menu_subscribe:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Subscribe',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_subscribe:<front>',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9.
  $menu_links['main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
    'router_path' => 'node/%',
    'link_title' => 'Themes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_themes:TOKENUUID_12ccea54-e77b-4e69-8c44-22bfdb4362b9',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'navigation-main-link',
        ),
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'navigation-main-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_tools-for-flags:TOKENUUID_cb73e428-1827-4a3e-bcfd-57c6ffd229ca.
  $menu_links['main-menu_tools-for-flags:TOKENUUID_cb73e428-1827-4a3e-bcfd-57c6ffd229ca'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_cb73e428-1827-4a3e-bcfd-57c6ffd229ca',
    'router_path' => 'node/%',
    'link_title' => 'Tools for FLAGs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tools-for-flags:TOKENUUID_cb73e428-1827-4a3e-bcfd-57c6ffd229ca',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item main-menu-top-level',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
  );
  // Exported menu link: main-menu_tools-for-managing-authorities:TOKENUUID_4f105583-9bc2-412f-8913-4501a69e2dce.
  $menu_links['main-menu_tools-for-managing-authorities:TOKENUUID_4f105583-9bc2-412f-8913-4501a69e2dce'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_4f105583-9bc2-412f-8913-4501a69e2dce',
    'router_path' => '',
    'link_title' => 'Tools for Managing Authorities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tools-for-managing-authorities:TOKENUUID_4f105583-9bc2-412f-8913-4501a69e2dce',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item main-menu-top-level',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
  );
  // Exported menu link: main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a.
  $menu_links['main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
    'router_path' => 'node/%',
    'link_title' => 'Tools',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tools:TOKENUUID_0139e8dd-fb20-4f26-8a8b-887e38a5db2a',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'data-remove-class' => 0,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => '',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_tourism:themes/diversification/tourism.
  $menu_links['main-menu_tourism:themes/diversification/tourism'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/diversification/tourism',
    'router_path' => 'themes',
    'link_title' => 'Tourism',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tourism:themes/diversification/tourism',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_diversification:themes/diversification',
  );
  // Exported menu link: main-menu_traceability:themes/adding-value-fisheries/traceability.
  $menu_links['main-menu_traceability:themes/adding-value-fisheries/traceability'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/adding-value-fisheries/traceability',
    'router_path' => 'themes',
    'link_title' => 'Traceability',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_traceability:themes/adding-value-fisheries/traceability',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_adding-value-to-fisheries:themes/adding-value-fisheries',
  );
  // Exported menu link: main-menu_transnational-seminars:news-events/events/transnational-seminars.
  $menu_links['main-menu_transnational-seminars:news-events/events/transnational-seminars'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events/transnational-seminars',
    'router_path' => 'news-events/events/transnational-seminars',
    'link_title' => 'Transnational seminars',
    'options' => array(
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_transnational-seminars:news-events/events/transnational-seminars',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_events:news-events/events',
  );
  // Exported menu link: main-menu_videos:<front>.
  $menu_links['main-menu_videos:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Videos',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_videos:<front>',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_library:TOKENUUID_b324ae60-961c-4363-bfde-1ff24f566b30',
  );
  // Exported menu link: main-menu_water-quality:themes/environment/water-quality.
  $menu_links['main-menu_water-quality:themes/environment/water-quality'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/environment/water-quality',
    'router_path' => 'themes',
    'link_title' => 'Water quality',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_water-quality:themes/environment/water-quality',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_environment:themes/environment',
  );
  // Exported menu link: main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f.
  $menu_links['main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f',
    'router_path' => '',
    'link_title' => 'Who\'s who',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_whos-who:TOKENUUID_5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-list-heading',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item fr-megamenu-item--list',
        'data-remove-class' => 0,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:TOKENUUID_0d99b021-5fc6-44ea-8698-228e4eac3826',
  );
  // Exported menu link: main-menu_women:themes/society-and-culture/women.
  $menu_links['main-menu_women:themes/society-and-culture/women'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/women',
    'router_path' => 'themes',
    'link_title' => 'Women',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_women:themes/society-and-culture/women',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );
  // Exported menu link: main-menu_youth:themes/society-and-culture/youth.
  $menu_links['main-menu_youth:themes/society-and-culture/youth'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes/society-and-culture/youth',
    'router_path' => 'themes',
    'link_title' => 'Youth',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_youth:themes/society-and-culture/youth',
      'attributes' => array(
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'class' => array(
          0 => 'fr-megamenu-link',
        ),
        'data-remove-class' => 1,
      ),
      'item_attributes' => array(
        'data-image' => '',
        'data-display-title' => 1,
        'data-hide-children' => 0,
        'id' => '',
        'class' => 'fr-megamenu-item',
        'data-remove-class' => 1,
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_society-and-culture:themes/society-and-culture',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Adding value to fisheries');
  t('Aquaculture');
  t('Arts and crafts');
  t('FARNET at a glance');
  t('Brochures');
  t('Business support');
  t('CLLD at a glance');
  t('CLLD overview');
  t('Calendar');
  t('Climate change');
  t('Complementary funding');
  t('Conferences');
  t('Contact us');
  t('Cooperation');
  t('Cooperation by Member State');
  t('Cooperation calls');
  t('Cooperation ideas');
  t('Cooperation in action');
  t('Country factsheets');
  t('Cultural heritage');
  t('DG MARE');
  t('Diversification');
  t('Education and training');
  t('Elderly');
  t('Eligibility');
  t('Energy');
  t('Environment');
  t('European overview');
  t('Events');
  t('FAQs');
  t('FARNET Data');
  t('FARNET Flash');
  t('FARNET Support Unit');
  t('FARNET news');
  t('FLAG factsheets');
  t('FLAGs');
  t('Finance and administration');
  t('Fisheries by-products');
  t('Fisheries resources');
  t('Galleries');
  t('Gastronomy');
  t('Glossary');
  t('Good practice');
  t('Governance and management');
  t('Home');
  t('Infrastructure');
  t('Integrated coastal management');
  t('Labelling');
  t('Lessons from FARNET 1 (2007-2013)');
  t('Library');
  t('Magazine');
  t('Managing authorities');
  t('Maps');
  t('Marine activities');
  t('Marine litter');
  t('Methods');
  t('Migrants and refugees');
  t('National / regional / local events');
  t('Managing authorities');
  t('News');
  t('News & Events');
  t('Newsletters');
  t('On the ground');
  t('Other news');
  t('Pesca-tourism');
  t('Photos');
  t('Presentations');
  t('Processing');
  t('Projects');
  t('Promotion');
  t('Q&A on CLLD');
  t('Search');
  t('Setting up FLAGs');
  t('Short circuits');
  t('Short stories');
  t('Small-scale and coastal fisheries');
  t('Social media');
  t('Society and culture');
  t('Subscribe');
  t('Themes');
  t('Tools');
  t('Tools for FLAGs');
  t('Tools for Managing Authorities');
  t('Tourism');
  t('Traceability');
  t('Transnational seminars');
  t('Videos');
  t('Water quality');
  t('Who\'s who');
  t('Women');
  t('Youth');

  return $menu_links;
}
