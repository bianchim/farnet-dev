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

  // Exported menu link: main-menu_about:about.
  $menu_links['main-menu_about:about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_about:about',
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
    'router_path' => 'themes',
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
    'parent_identifier' => 'main-menu_themes:themes',
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
  // Exported menu link: main-menu_at-a-glance:<front>.
  $menu_links['main-menu_at-a-glance:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'At a glance',
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
      'identifier' => 'main-menu_at-a-glance:<front>',
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
    'parent_identifier' => 'main-menu_about:about',
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
    'parent_identifier' => 'main-menu_library:library',
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
  // Exported menu link: main-menu_calendar:<front>.
  $menu_links['main-menu_calendar:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Calendar',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_calendar:<front>',
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
    'parent_identifier' => 'main-menu_news--events:news-events',
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
  // Exported menu link: main-menu_clld-at-a-glance:<front>.
  $menu_links['main-menu_clld-at-a-glance:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'CLLD at a glance',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_clld-at-a-glance:<front>',
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
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_at-a-glance:<front>',
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
  // Exported menu link: main-menu_contact-us:<front>.
  $menu_links['main-menu_contact-us:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact us',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_contact-us:<front>',
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
    'parent_identifier' => 'main-menu_about:about',
  );
  // Exported menu link: main-menu_cooperation-by-member-state:on-the-ground/cooperation/member-by-state.
  $menu_links['main-menu_cooperation-by-member-state:on-the-ground/cooperation/member-by-state'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation/member-by-state',
    'router_path' => 'on-the-ground/cooperation/member-by-state',
    'link_title' => 'Cooperation by Member State',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation-by-member-state:on-the-ground/cooperation/member-by-state',
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_cooperation-calls:<front>.
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
    'weight' => 0,
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
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
  );
  // Exported menu link: main-menu_cooperation-in-action:on-the-ground/cooperation/in-action.
  $menu_links['main-menu_cooperation-in-action:on-the-ground/cooperation/in-action'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/cooperation/in-action',
    'router_path' => 'on-the-ground/cooperation/in-action',
    'link_title' => 'Cooperation in action',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation-in-action:on-the-ground/cooperation/in-action',
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
    'weight' => 0,
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
      'alter' => TRUE,
      'identifier' => 'main-menu_cooperation:on-the-ground/cooperation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
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
    'parent_identifier' => 'main-menu_on-the-ground:on-the-ground',
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
  // Exported menu link: main-menu_dg-mare:<front>.
  $menu_links['main-menu_dg-mare:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'DG MARE',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_dg-mare:<front>',
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
    'parent_identifier' => 'main-menu_whos-who:<front>',
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
    'parent_identifier' => 'main-menu_themes:themes',
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
    'parent_identifier' => 'main-menu_themes:themes',
  );
  // Exported menu link: main-menu_european-overview:<front>.
  $menu_links['main-menu_european-overview:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'European overview',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_european-overview:<front>',
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
    'weight' => 0,
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
    'parent_identifier' => 'main-menu_news--events:news-events',
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
    'parent_identifier' => 'main-menu_tools:tools',
  );
  // Exported menu link: main-menu_farnet-data:<front>.
  $menu_links['main-menu_farnet-data:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
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
      'identifier' => 'main-menu_farnet-data:<front>',
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
    'parent_identifier' => 'main-menu_about:about',
  );
  // Exported menu link: main-menu_farnet-flash:<front>.
  $menu_links['main-menu_farnet-flash:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
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
      'identifier' => 'main-menu_farnet-flash:<front>',
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
    'parent_identifier' => 'main-menu_library:library',
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
  // Exported menu link: main-menu_farnet-support-unit:<front>.
  $menu_links['main-menu_farnet-support-unit:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
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
      'identifier' => 'main-menu_farnet-support-unit:<front>',
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
    'parent_identifier' => 'main-menu_whos-who:<front>',
  );
  // Exported menu link: main-menu_farnet:<front>.
  $menu_links['main-menu_farnet:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'FARNET',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_farnet:<front>',
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
    'parent_identifier' => 'main-menu_at-a-glance:<front>',
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
    'parent_identifier' => 'main-menu_on-the-ground:on-the-ground',
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
  // Exported menu link: main-menu_glossary:<front>.
  $menu_links['main-menu_glossary:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Glossary',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_glossary:<front>',
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
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_at-a-glance:<front>',
  );
  // Exported menu link: main-menu_good-practice:on-the-ground/good-practice.
  $menu_links['main-menu_good-practice:on-the-ground/good-practice'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/good-practice',
    'router_path' => 'on-the-ground/good-practice',
    'link_title' => 'Good practice',
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
    'parent_identifier' => 'main-menu_on-the-ground:on-the-ground',
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
    'parent_identifier' => 'main-menu_themes:themes',
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
  // Exported menu link: main-menu_lessons-from-farnet-1-2007-2013:<front>.
  $menu_links['main-menu_lessons-from-farnet-1-2007-2013:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
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
      'identifier' => 'main-menu_lessons-from-farnet-1-2007-2013:<front>',
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
    'parent_identifier' => 'main-menu_tools:tools',
  );
  // Exported menu link: main-menu_library:library.
  $menu_links['main-menu_library:library'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'library',
    'router_path' => 'node/%',
    'link_title' => 'Library',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_library:library',
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
    'parent_identifier' => 'main-menu_library:library',
  );
  // Exported menu link: main-menu_managing-authorities:news-events/events/ma-nn.
  $menu_links['main-menu_managing-authorities:news-events/events/ma-nn'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events/ma-nn',
    'router_path' => 'news-events/events/ma-nn',
    'link_title' => 'Managing authorities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_managing-authorities:news-events/events/ma-nn',
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
  // Exported menu link: main-menu_maps:on-the-ground/map.
  $menu_links['main-menu_maps:on-the-ground/map'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground/map',
    'router_path' => 'on-the-ground/map',
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
      'identifier' => 'main-menu_maps:on-the-ground/map',
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
    'parent_identifier' => 'main-menu_on-the-ground:on-the-ground',
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
  // Exported menu link: main-menu_national--regional--local-events-capacity-building-events:news-events/events/other.
  $menu_links['main-menu_national--regional--local-events-capacity-building-events:news-events/events/other'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/events/other',
    'router_path' => 'news-events/events/other',
    'link_title' => 'National / regional / local events (Capacity building events)',
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
  // Exported menu link: main-menu_national-authorities:about/who-is-who/national-authorities.
  $menu_links['main-menu_national-authorities:about/who-is-who/national-authorities'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'about/who-is-who/national-authorities',
    'router_path' => 'about/who-is-who/national-authorities',
    'link_title' => 'National authorities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_national-authorities:about/who-is-who/national-authorities',
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
    'parent_identifier' => 'main-menu_whos-who:<front>',
  );
  // Exported menu link: main-menu_news--events:news-events.
  $menu_links['main-menu_news--events:news-events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events',
    'router_path' => 'node/%',
    'link_title' => 'News & Events',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_news--events:news-events',
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
    'parent_identifier' => 'main-menu_news--events:news-events',
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
  // Exported menu link: main-menu_on-the-ground:on-the-ground.
  $menu_links['main-menu_on-the-ground:on-the-ground'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'on-the-ground',
    'router_path' => 'node/%',
    'link_title' => 'On the ground',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_on-the-ground:on-the-ground',
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
    'parent_identifier' => 'main-menu_library:library',
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
    'parent_identifier' => 'main-menu_library:library',
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
    'parent_identifier' => 'main-menu_tools:tools',
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
  // Exported menu link: main-menu_social-media:news-events/news/social-media.
  $menu_links['main-menu_social-media:news-events/news/social-media'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news-events/news/social-media',
    'router_path' => 'news-events/news',
    'link_title' => 'Social media',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_social-media:news-events/news/social-media',
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
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_news:news-events/news',
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
    'parent_identifier' => 'main-menu_themes:themes',
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
  // Exported menu link: main-menu_themes:themes.
  $menu_links['main-menu_themes:themes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'themes',
    'router_path' => 'themes',
    'link_title' => 'Themes',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_themes:themes',
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
  // Exported menu link: main-menu_tools-for-flags:<front>.
  $menu_links['main-menu_tools-for-flags:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Tools for FLAGs',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tools-for-flags:<front>',
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
    'parent_identifier' => 'main-menu_tools:tools',
  );
  // Exported menu link: main-menu_tools-for-managing-authorities:<front>.
  $menu_links['main-menu_tools-for-managing-authorities:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Tools for Managing Authorities',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tools-for-managing-authorities:<front>',
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
    'parent_identifier' => 'main-menu_tools:tools',
  );
  // Exported menu link: main-menu_tools:tools.
  $menu_links['main-menu_tools:tools'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'tools',
    'router_path' => 'node/%',
    'link_title' => 'Tools',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_tools:tools',
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
    'parent_identifier' => 'main-menu_library:library',
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
  // Exported menu link: main-menu_whos-who:<front>.
  $menu_links['main-menu_whos-who:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Who\'s who',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_whos-who:<front>',
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
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_about:about',
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
  t('At a glance');
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
  t('FARNET');
  t('FARNET Data');
  t('FARNET Flash');
  t('FARNET Support Unit');
  t('FARNET news');
  t('FLAG factsheets');
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
  t('National / regional / local events (Capacity building events)');
  t('National authorities');
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
