<?php
/**
 * @file
 * Default theme functions.
 */

/**
 * Implements template_preprocess_page().
 */
function farnet_preprocess_page(&$variables) {
  if ($variables['is_front'] == TRUE) {
    $variables['cols']['content_right'] = array(
      'lg' => (!empty($regions['content_right']) ? 4 : 4),
      'md' => (!empty($regions['content_right']) ? 4 : 4),
      'sm' => (!empty($regions['content_right']) ? 12 : 0),
      'xs' => (!empty($regions['content_right']) ? 12 : 0),
    );
    $variables['cols']['content'] = array(
      'lg' => 12 - $variables['cols']['content_right']['lg'],
      'md' => 12 - $variables['cols']['content_right']['md'],
      'sm' => 12,
      'xs' => 12,
    );
  }

  // Switch title to page type.
  if (isset($variables['node'])) {
    $node_type = $variables['node']->type;
    if (!in_array($node_type, array('page', 'farnet_article', 'landing_page', 'myfarnet_news', 'myfarnet_event', 'myfarnet_discussion', 'myfarnet_cooperation_idea'))) {
      $node_type = node_type_get_name($variables['node']);
      $variables['node_type'] = $node_type;
    }
    if (in_array($node_type, array('Community public', 'Community private', 'Community hidden'))) {
      $variables['node_type'] = NULL;
    }
    if (in_array($node_type, array('myfarnet_news', 'myfarnet_event', 'myfarnet_discussion', 'myfarnet_cooperation_idea'))) {
      $data = og_context();
      $node_community = node_load($data['gid']);
      if (isset($node_community->title)) {
        $variables['node_community_name'] = $node_community->title;
      }
    }
    if (in_array($node_type, array('landing_page'))) {
      // Format regions.
      $variables['regions']['landing_content'] = (isset($variables['page']['landing_content']) ? render($variables['page']['landing_content']) : '');
    }
  }
  else {
    $data = og_context();
    $node_community = node_load($data['gid']);
    if (isset($node_community->title)) {
      $variables['node_community_name'] = $node_community->title;
    }
  }

  $variables['cols']['landing_content'] = array(
    'lg' => 12 - $variables['cols']['content_right']['lg'],
    'md' => 12 - $variables['cols']['content_right']['md'],
    'sm' => 12,
    'xs' => 12,
  );
}

/**
 * Implements theme_preprocess_region().
 */
function farnet_preprocess_region(&$variables, $hook) {
  if ($variables['region'] == 'content_bottom') {
    $variables['classes_array'][] = 'row';
    $variables['classes_array'][] = 'f-home__last-items';
  }
}

/**
 * OM Maximenu content rendering engine override.
 */
function farnet_om_menu_content_render($content = array()) {
  global $_om_maximenu_block_classes;
  global $_om_maximenu_visible_blocks;

  $visible_blocks = $_om_maximenu_visible_blocks;

  $block_classes = !empty($_om_maximenu_block_classes) ? $_om_maximenu_block_classes : array();

  $count = 0;
  uasort($content, 'om_sort_by_weight');
  $total = count($content);
  $out = '';
  foreach ($content as $key => $prop) {
    $count++;

    $module     = $prop['module'];
    $delta      = $prop['delta'];
    $visibility = (isset($prop['visibility']) && ($prop['visibility'] == 1)) ? in_array($module . '__' . $delta, $visible_blocks) ? 1 : 0 : 1;

    if ($visibility) {
      $title               = stripslashes(trim($prop['title']));
      $path                = ($prop['title_path'] == '<front>') ? '' : $prop['title_path'];
      $options             = [];
      $options['query']    = isset($prop['title_path_query']) ? om_path_query($prop['title_path_query']) : '';
      $options['fragment'] = isset($prop['title_path_fragment']) ? $prop['title_path_fragment'] : '';
      $block_title         = (!empty($prop['title_path'])) ? '<a href="' . url($path, $options) . '" title="' . $title . '">' . $title . '</a>' : $title;

      $block               = module_invoke($module, 'block_view', $delta);

      $om_classes = ($count == 1) ? ' first' : '';

      if ($count == $total) {
        $om_classes .= ' last';
      }

      $om_classes .= isset($block_classes[$module][$delta]) ? ' ' . $block_classes[$module][$delta] : '';

      $om_classes .= ' fr-megamenu';

      $out .= theme(
        'om_maximenu_content',
        [
          'block' => $block,
          'module' => $module,
          'delta' => $delta,
          'om_classes' => $om_classes,
          'title' => $title,
          'block_title' => $block_title,
        ]
      );
    }
  }
  return $out;
}

/**
 * Implements hook_block_view_alter().
 */
function farnet_preprocess_block(&$vars) {
  $bid = $vars['block']->delta;
  $block = block_custom_block_get($bid);
  $block_info = $block['info'];
  if (isset($block_info)) {
    switch ($block_info) {
      case 'Block for quick links':
        $vars['classes_array'][] = 'f-home__quick-links';
        break;

      case 'About block at a glance':
        $vars['block_title'] = '<a href="' . url('about/at-a-glance') . '" class="farnet_block_title">At a glance</a>';
        break;

      case 'About block who\'s who':
        $vars['block_title'] = '<a href="' . url('about/who-is-who') . '" class="farnet_block_title">Who\'s who</a>';
        break;

      case 'Cooperation block on On the Ground page':
        $vars['block_title'] = '<a href="' . url('on-the-ground/cooperation') . '" class="farnet_block_title">Cooperation</a>';
        break;

      case 'Good Practice block on On the Ground page':
        $vars['block_title'] = '<a href="' . url('on-the-ground/good-practice') . '" class="farnet_block_title">Good Practice</a>';
        break;

      case 'themes landing page diversification':
        $vars['block_title'] = '<a href="' . url('themes/diversification') . '" class="farnet_block_title">Diversification</a>';
        break;

      case 'themes landing page adding value':
        $vars['block_title'] = '<a href="' . url('themes/adding-value-fisheries') . '" class="farnet_block_title">Adding value to fisheries</a>';
        break;

      case 'themes landing page environment':
        $vars['block_title'] = '<a href="' . url('themes/environment') . '" class="farnet_block_title">Environment</a>';
        break;

      case 'themes landing page governance management':
        $vars['block_title'] = '<a href="' . url('themes/governance') . '" class="farnet_block_title">Governance and management</a>';
        break;

      case 'themes landing page society culture':
        $vars['block_title'] = '<a href="' . url('themes/society-and-culture') . '" class="farnet_block_title">Society and culture</a>';
        break;

      case 'Q&A on CLLD':
        $vars['block_title'] = '<a href="' . url('tools/faq') . '" class="farnet_block_title">Q&A on CLLD</a>';
        break;

      case 'FAQs':
        $vars['block_title'] = '<a href="' . url('tools/faq') . '" class="farnet_block_title">FAQs</a>';
        break;

      case 'Tools for FLAGs':
        $vars['block_title'] = '<a href="' . url('tools/flags') . '" class="farnet_block_title">Tools for FLAGs</a>';
        break;

      case 'Tools for managing authorities':
        $vars['block_title'] = '<a href="' . url('tools/managing-authorities') . '" class="farnet_block_title">Tools for managing authorities</a>';
        break;
    }
  }

  $block_id = $vars['block']->module . '-' . $vars['block']->delta;
  switch ($block_id) {
    case 'om_maximenu-om-maximenu-1':
      $vars['classes_array'][] = 'navigation-main';
      break;

    case 'farnet_core-farnet_core_printpdf':
      $vars['panel'] = FALSE;
      break;

    case 'social_media_links-social-media-links':
      $vars['elements']['#block']->subject = t('Follow FARNET on:');
      break;

    case 'cce_basic_config-footer_ipg':
      $vars['elements']['#block']->subject = NULL;
      $vars['content'] = drupal_substr($vars['content'], strpos($vars['content'], '<ul'));
      break;

    case 'views-79352059f92f38e8b7c026bd2e334732':
      $view = views_get_view('farnet_view_factsheets_flag');
      $ff_header = $view->display['ff_on_the_ground']->display_options['header']['area']['content'];
      $vars['ff_header'] = $ff_header;
      break;

    case 'views-7dabd414d359435e91fad754dab94e7f':
      $view = views_get_view('farnet_view_factsheets_country');
      $cf_header = $view->display['cf_on_the_ground']->display_options['header']['area']['content'];
      $vars['cf_header'] = $cf_header;
      break;

    case 'views-5a0c0d1995c4bd498fa2422a5992b6e7':
      $vars['block_title'] = '<a href="' . url('news-events/news') . '" class="farnet_block_title">News</a>';
      break;

    case 'views-8d556d2632413042cb393089786bb956':
      $vars['block_title'] = '<a href="' . url('news-events/events') . '" class="farnet_block_title">Events</a>';
      break;

    case 'views-43942680651afca7750d9faac6513a16':
      $vars['block_title'] = '<a href="' . url('library/magazines') . '" class="farnet_block_title">Magazines</a>';
      break;

    case 'views-e1afc8ac226e4752516e50409df8f248':
      $vars['block_title'] = '<a href="' . url('library/guides') . '" class="farnet_block_title">Guides</a>';
      break;

    case 'views-e3e941f8456604ac95162b631eb95d94':
      $vars['block_title'] = '<a href="' . url('library/presentations') . '" class="farnet_block_title">Presentations</a>';
      break;
  }
}

/**
 * Alter the main menu in order to add custom class.
 */
function farnet_menu_tree__main_menu($variables) {
  $navbar = '';
  if (strpos($variables['tree'], 'main-menu-top-level') !== FALSE) {
    $navbar = 'nav navbar-nav';
  }
  return '<ul class="fr-megamenu-list menu clearfix ' . $navbar . '">' . $variables['tree'] . '</ul>';
}

/**
 * Alter the myfarnet menu in order to add custom class.
 */
function farnet_menu_tree__menu_myfarnet_menu($variables) {
  $tree = str_replace('leaf', 'leaf navigation-vertical__item', $variables['tree']);
  return '<ul class="menu clearfix list-group list-group-flush list-unstyled navigation-vertical__list">' . $tree . '</ul>';
}

/**
 * Alter the community menu in order to add custom class.
 */
function farnet_menu_tree__menu_community_menu($variables) {
  $tree = str_replace('leaf', 'leaf community-navigation__item', $variables['tree']);
  return '<ul class="menu clearfix list-group list-group-flush list-unstyled community-navigation__list">' . $tree . '</ul>';
}

/**
 * Returns HTML for a dropdown, modified version from ec_resp.
 */
function farnet_dropdown($variables) {
  $items = $variables['items'];
  $attributes = array();
  $output = "";

  if (!empty($items)) {
    $output .= "<ul class='dropdown-menu'>";
    $num_items = count($items);
    foreach ($items as $i => $item) {
      $data = '';
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      $output .= '<li>' . $data . "</li>\n";
    }
    $output .= "</ul>";
  }
  return $output;
}

/**
 * Implements hook_form_alter().
 */
function farnet_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    case 'farnet_core_printpdf_multilingual_form':
      $form['#attributes'] = array('class' => 'c-file-download');
      $form['content_type_pdf_download']['#markup'] = '<span class="c-file-download__icon icon icon--file-pdf"></span><span class="c-file-download__title">' . t('Flag Factsheet in PDF') . '</span>';
      $form['fields_pdf_print']['select-pdfprint-lang']['#attributes']['class'] = array('c-file-download__options');
      $form['fields_pdf_print']['submit-pdfprint-lang']['#prefix'] = '<div class="c-file-download__controls">';
      $form['fields_pdf_print']['submit-pdfprint-lang']['#suffix'] = '</div>';
      break;
  }
}

/**
 * Implements template_preprocess_field().
 */
function farnet_preprocess_field(&$variables, $hook) {
  $variables['prefix'] = NULL;
  $variables['suffix'] = NULL;
  $variables['label_class'] = NULL;
  $variables['field_item_class'] = NULL;
  $element_with_additional_label_class = array(
    'field_ff_public_actors',
    'field_ff_fisheries_actors',
    'field_ff_other_non_fisheries',
    'field_ff_environmental_actors',
    'field_ff_number_decision',
    'field_ff_number_assembly',
    'field_ff_number_staff',
  );
  $element_with_additional_field_item_class_2 = array();
  if ($variables['element']['#bundle'] === 'factsheet_flag') {
    $element_with_additional_field_item_class_2 = array(
      'field_ff_number_decision' => array('u-color-green', 'u-fw-bold'),
      'field_ff_number_assembly' => array('u-color-green', 'u-fw-bold'),
      'field_ff_number_staff' => array('u-color-green', 'u-fw-bold'),
      'field_type_of_area' => array('fr-u-ul'),
      'field_sea_basins' => array('fr-u-ul'),
      'field_term_theme' => array('fr-u-ul', 'clearfix'),
    );
  }
  $element_percent_formated = array(
    'field_ff_public_actors',
    'field_ff_fisheries_actors',
    'field_ff_other_non_fisheries',
    'field_ff_environmental_actors',
    'field_allocated_budget',
  );
  $element_remove_field_classes = array(
    'field_ff_accountable_body' => array('field-label-inline', 'clearfix'),
    'field_ff_public_actors' => array('field-label-inline', 'clearfix'),
    'field_ff_fisheries_actors' => array('field-label-inline', 'clearfix'),
    'field_ff_other_non_fisheries' => array('field-label-inline', 'clearfix'),
    'field_ff_environmental_actors' => array('field-label-inline', 'clearfix'),
    'field_ff_number_decision' => array('field-label-inline', 'clearfix'),
    'field_ff_number_assembly' => array('field-label-inline', 'clearfix'),
    'field_ff_number_staff' => array('field-label-inline', 'clearfix'),
    'field_ff_sources_co_funding' => array('field-label-above'),
    'field_ff_multi_funding_txt' => array('field-type-list-boolean', 'field-name-field-ff-multi-funding'),
    'field_ff_funds' => array('field-label-above'),
    'field_type_of_area' => array('field-label-inline'),
    'field_sea_basins' => array('field-label-inline'),
  );
  $element_add_field_classes = array(
    'field_ff_sources_co_funding' => array('field-label-inline', 'clearfix'),
    'field_ff_funds' => array('field-label-inline', 'clearfix'),
    'field_type_of_area' => array('field-label-above'),
    'field_sea_basins' => array('field-label-above'),
  );

  if (in_array($variables['element']['#field_name'], $element_with_additional_label_class)) {
    $variables['label_class'] = ' u-fw-normal';
  }

  // Add additional div for percent progress bar.
  if (in_array($variables['element']['#field_name'], $element_percent_formated)) {
    $variables['field_item_class'] .= ' farnet-progress progress';
    foreach ($variables['items'] as $key => $item) {
      $variables['items'][$key]['#markup'] = '<div class="progress-bar progress-bar-success" role="progressbar" aria-valuenow="' . $item['#markup'] . '" aria-valuemin="0" aria-valuemax="100" style="width: ' . $item['#markup'] . '%">' . $item['#markup'] . '%</div>';
    }
  }

  // Add classes.
  if (in_array($variables['element']['#field_name'], array_keys($element_add_field_classes))) {
    foreach ($element_add_field_classes[$variables['element']['#field_name']] as $class) {
      array_push($variables['classes_array'], $class);
    }
  }

  // Remove classes.
  if (in_array($variables['element']['#field_name'], array_keys($element_remove_field_classes))) {
    foreach ($variables['classes_array'] as $key => $class) {
      if (in_array($class, $element_remove_field_classes[$variables['element']['#field_name']])) {
        unset($variables['classes_array'][$key]);
      }
    }
  }

  // Add class on field item.
  if (in_array($variables['element']['#field_name'], array_keys($element_with_additional_field_item_class_2))) {
    $variables['field_item_class'] = ' ' . implode(' ', $element_with_additional_field_item_class_2[$variables['element']['#field_name']]);
  }

  if ($variables['element']['#field_name'] == 'field_collection_strategy') {
    $variables['label_hidden'] = TRUE;
    foreach ($variables['items'] as $delta => $item) {
      array_push($variables['items'][$delta]["#attributes"]["class"], 'field-collection-view-final');
      if ($delta > 0) {
        $nid = key($item['entity']['field_collection_item']);
        $variables['items'][$delta]['entity']['field_collection_item'][$nid]['field_allocated_budget']['#label_display'] = 'hidden';
        $variables['items'][$delta]['entity']['field_collection_item'][$nid]['field_list_objective']['#label_display'] = 'hidden';
        $variables['items'][$delta]['entity']['field_collection_item'][$nid]['field_priority']['#label_display'] = 'hidden';
      }
    }
  }

  // Remove label from field collection language.
  elseif ($variables['element']['#field_name'] == 'field_collection_language') {
    $variables['label_hidden'] = TRUE;
  }

  // Flag Stats.
  elseif ($variables['element']['#field_name'] == 'field_ff_population') {
    $variables['suffix'] = '</div>';
    if (!$variables['element']['#object']->field_ff_population_density and
        !$variables['element']['#object']->field_ff_surface_area) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 farnet-stats__left-col"><div class="row"><div class="col-sm-4 farnet-stats__col">';
      $variables['suffix'] .= '</div></div>';
    }
    else {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 farnet-stats__left-col"><div class="row"><div class="col-sm-4 farnet-stats__col farnet-stats__col--with-border">';
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_surface_area') {
    if (!$variables['element']['#object']->field_ff_population) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 farnet-stats__left-col"><div class="row">';
    }
    $variables['suffix'] = '</div>';
    if (!$variables['element']['#object']->field_ff_population_density) {
      $variables['suffix'] .= '</div></div>';
      $variables['prefix'] .= '<div class="col-sm-4 farnet-stats__col">';
    }
    else {
      $variables['prefix'] .= '<div class="col-sm-4 farnet-stats__col farnet-stats__col--with-border">';
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_population_density') {
    if (!$variables['element']['#object']->field_ff_population and
        !$variables['element']['#object']->field_ff_surface_area) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 farnet-stats__left-col"><div class="row">';
    }
    $variables['prefix'] .= '<div class="col-sm-4 farnet-stats__col">';
    $variables['suffix'] .= '</div></div></div>';
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_total_employment') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row">';
    }
    $variables['prefix'] .= '<div class="col-md-6 farnet-stats__right-col"><div class="row"><div class="col-sm-4 farnet-stats__col">';
    $variables['suffix'] .= '</div>';
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_fishing') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density and
      !$variables['element']['#object']->field_ff_total_employment) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 flag-stats__right-col"><div class="row">';
    }
    elseif (!$variables['element']['#object']->field_ff_total_employment) {
      $variables['prefix'] .= '<div class="col-md-6 flag-stats__right-col"><div class="row">';
    }
    if (!$variables['element']['#object']->field_ff_aquaculture and
      !$variables['element']['#object']->field_ff_processing and
      !$variables['element']['#object']->field_ff_women_employment) {
      $variables['suffix'] .= '</div></div></div></div></div>';
    }
    $variables['prefix'] .= '<div class="col-sm-8 farnet-stats__col--blue-bg">';
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_aquaculture') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density and
      !$variables['element']['#object']->field_ff_total_employment and
      !$variables['element']['#object']->field_ff_fishing) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 flag-stats__right-col"><div class="row"><div class="col-sm-8 farnet-stats__col--blue-bg">';
    }
    elseif (!$variables['element']['#object']->field_ff_total_employment and
      !$variables['element']['#object']->field_ff_fishing) {
      $variables['prefix'] .= '<div class="col-md-6 flag-stats__right-col"><div class="row"><div class="col-sm-8 farnet-stats__col--blue-bg">';
    }
    elseif (!$variables['element']['#object']->field_ff_fishing) {
      $variables['prefix'] .= '<div class="col-sm-8 farnet-stats__col--blue-bg">';
    }
    if (!$variables['element']['#object']->field_ff_processing and
      !$variables['element']['#object']->field_ff_women_employment) {
      $variables['suffix'] .= '</div></div></div></div></div>';
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_processing') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density and
      !$variables['element']['#object']->field_ff_total_employment and
      !$variables['element']['#object']->field_ff_fishing and
      !$variables['element']['#object']->field_ff_aquaculture) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 flag-stats__right-col"><div class="row"><div class="col-sm-8 farnet-stats__col--blue-bg">';
    }
    elseif (!$variables['element']['#object']->field_ff_fishing and
      !$variables['element']['#object']->field_ff_aquaculture) {
      $variables['prefix'] .= '<div class="col-sm-8 farnet-stats__col--blue-bg">';
    }
    if (!$variables['element']['#object']->field_ff_women_employment) {
      $variables['suffix'] .= '</div></div></div></div></div>';
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_women_employment') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density and
      !$variables['element']['#object']->field_ff_total_employment and
      !$variables['element']['#object']->field_ff_fishing and
      !$variables['element']['#object']->field_ff_aquaculture) {
      $variables['prefix'] .= '<div class="container-fluid farnet-stats"><div class="row farnet-stats__row"><div class="col-md-6 flag-stats__right-col"><div class="row"><div class="col-sm-8 farnet-stats__col--blue-bg">';
      $variables['suffix'] .= '</div></div></div></div></div>';
    }
    elseif (!$variables['element']['#object']->field_ff_fishing) {
      $variables['prefix'] .= '<div class="col-sm-8 farnet-stats__col--blue-bg">';
    }
    $variables['suffix'] .= '</div></div></div></div></div>';
  }

  // Flag factsheet - Funding.
  switch ($variables['element']['#field_name']) {
    case 'field_ff_emff':
      $variables['container_tag'] = 'li';
      $variables['prefix'] = '<ul class="fr-u-ul">';
      if (!$variables['element']['#object']->field_ff_multi_funding_txt and
        !$variables['element']['#object']->field_ff_funds and
        !$variables['element']['#object']->field_ff_sources_co_funding and
        !$variables['element']['#object']->field_ff_ms_co_financing) {
        $variables['suffix'] = '</ul>';
      }
      break;

    case 'field_ff_ms_co_financing':
      $variables['container_tag'] = 'li';
      if (!$variables['element']['#object']->field_ff_multi_funding_txt and
        !$variables['element']['#object']->field_ff_funds and
        !$variables['element']['#object']->field_ff_sources_co_funding) {
        $variables['suffix'] = '</ul>';
      }
      if (!$variables['element']['#object']->field_ff_emff) {
        $variables['prefix'] = '<ul class="fr-u-ul">';
      }
      break;

    case 'field_ff_sources_co_funding':
      $variables['container_tag'] = 'li';
      if (!$variables['element']['#object']->field_ff_multi_funding_txt and
        !$variables['element']['#object']->field_ff_funds) {
        $variables['suffix'] = '</ul>';
      }
      if (!$variables['element']['#object']->field_ff_emff and
        !$variables['element']['#object']->field_ff_ms_co_financing) {
        $variables['prefix'] = '<ul class="fr-u-ul">';
      }
      break;

    case 'field_ff_multi_funding_txt':
      $variables['container_tag'] = 'li';
      if (!$variables['element']['#object']->field_ff_funds) {
        $variables['suffix'] = '</ul>';
      }
      if (!$variables['element']['#object']->field_ff_emff and
        !$variables['element']['#object']->field_ff_ms_co_financing and
        !$variables['element']['#object']->field_ff_sources_co_funding) {
        $variables['prefix'] = '<ul class="fr-u-ul">';
      }
      break;

    case 'field_ff_funds':
      $variables['container_tag'] = 'li';
      $variables['suffix'] = '</ul>';
      if (!$variables['element']['#object']->field_ff_emff and
        !$variables['element']['#object']->field_ff_ms_co_financing and
        !$variables['element']['#object']->field_ff_sources_co_funding and
        !$variables['element']['#object']->field_ff_multi_funding_txt) {
        $variables['prefix'] = '<ul class="fr-u-ul">';
      }
      break;

    default:
      $variables['container_tag'] = 'div';
      break;
  }
}

/**
 * Implements hook_field_group_pre_render_alter().
 */
function farnet_field_group_pre_render_alter(&$element, $group, &$form) {
  if (isset($element['#id'])) {
    if ($element['#id'] == 'group-factsheet-flag-partnership') {
      $prefix = '<div class="flag-partnership__group">';
      $prefix_percent = '<div class="flag-partnership__group flag-partnership__percent">';
      $suffix = '</div>';
      $element['#prefix'] = str_replace('<h3', '<h3 class="fr-heading"', $element['#prefix']) . '<div class="flag-partnership">';
      $element['#suffix'] .= $suffix;
      if ($element['field_ff_accountable_body']) {
        $element['field_ff_accountable_body']['#prefix'] = $prefix;
        $element['field_ff_accountable_body']['#suffix'] = $suffix;
      }
      if ($element['field_ff_members_partnership']) {
        $element['field_ff_members_partnership']['#prefix'] = $prefix;
        $element['field_ff_members_partnership']['#suffix'] = $suffix;
      }
      // Third group of fields.
      if ($element['field_ff_public_actors']) {
        $element['field_ff_public_actors']['#prefix'] = $prefix_percent;
        if ($element['field_ff_environmental_actors']) {
          $element['field_ff_environmental_actors']['#suffix'] = $suffix;
        }
        elseif ($element['field_ff_other_non_fisheries']) {
          $element['field_ff_other_non_fisheries']['#suffix'] = $suffix;
        }
        elseif ($element['field_ff_fisheries_actors']) {
          $element['field_ff_fisheries_actors']['#suffix'] = $suffix;
        }
        else {
          $element['field_ff_public_actors']['#suffix'] = $suffix;
        }
      }
      elseif ($element['field_ff_fisheries_actors']) {
        $element['field_ff_fisheries_actors']['#prefix'] = $prefix_percent;
        if ($element['field_ff_environmental_actors']) {
          $element['field_ff_environmental_actors']['#suffix'] = $suffix;
        }
        elseif ($element['field_ff_other_non_fisheries']) {
          $element['field_ff_other_non_fisheries']['#suffix'] = $suffix;
        }
        else {
          $element['field_ff_fisheries_actors']['#suffix'] = $suffix;
        }
      }
      elseif ($element['field_ff_other_non_fisheries']) {
        $element['field_ff_other_non_fisheries']['#prefix'] = $prefix_percent;
        if ($element['field_ff_environmental_actors']) {
          $element['field_ff_environmental_actors']['#suffix'] = $suffix;
        }
        else {
          $element['field_ff_other_non_fisheries']['#suffix'] = $suffix;
        }
      }
      elseif ($element['field_ff_environmental_actors']) {
        $element['field_ff_environmental_actors']['#prefix'] = $prefix_percent;
        $element['field_ff_environmental_actors']['#suffix'] = $suffix;
      }
      // Fourth group of fields.
      if ($element['field_ff_number_decision']) {
        $element['field_ff_number_decision']['#prefix'] = $prefix;
        if ($element['field_ff_number_staff']) {
          $element['field_ff_number_staff']['#suffix'] = $suffix;
        }
        elseif ($element['field_ff_number_assembly']) {
          $element['field_ff_number_assembly']['#suffix'] = $suffix;
        }
        else {
          $element['field_ff_number_decision']['#suffix'] = $suffix;
        }
      }
      elseif ($element['field_ff_number_assembly']) {
        $element['field_ff_number_assembly']['#prefix'] = $prefix;
        if ($element['field_ff_number_staff']) {
          $element['field_ff_number_staff']['#suffix'] = $suffix;
        }
        else {
          $element['field_ff_number_assembly']['#suffix'] = $suffix;
        }
      }
      elseif ($element['field_ff_number_staff']) {
        $element['field_ff_number_staff']['#prefix'] = $prefix;
        $element['field_ff_number_staff']['#suffix'] = $suffix;
      }
    }
  }

  if (isset($element['#id']) && $element['#id'] == 'group-factsheet-flag-practices') {
    // Check related view results.
    $results = views_get_view_result('farnet_gp_by_flag_display', "block_gp_by_flag", $element['field_view_good_practices']['#object']->nid);
    if (count($results) == 0) {
      hide($element);
    }
  }
  if (isset($element['#id']) && $element['#id'] == 'group-factsheet-flag-ideas') {
    // Check related view results.
    $results = views_get_view_result('cooperation_idea_by_flag', "block_idea_by_flag", $element['field_view_cooperation_ideas']['#object']->nid);
    if (count($results) == 0) {
      hide($element);
    }
  }

}

/**
 * Theme function for the platforms.
 */
function farnet_social_media_links_platforms(&$variables) {
  $output = '';
  $platforms = $variables['platforms'];
  foreach ($platforms as $name => $platform) {
    // Render the platform item.
    $output .= drupal_render($platform);
  }
  return $output;
}

/**
 * Theme function for a single platform element.
 */
function farnet_social_media_links_platform(&$variables) {
  $output = '';
  $options = array();
  $options['attributes'] = $variables['attributes'];
  $options['html'] = TRUE;
  $options['attributes']['class'] = 'farnet-footer-social-icon farnet-footer-' . $variables['name'];
  if (!empty($variables['appearance']['show_name'])) {
    if ($variables['appearance']['orientation'] == 'h') {
      $output .= '<br />';
    }
    $title = check_plain($variables['attributes']['title']);
    $output .= l($title, $variables['link'], $options);
  }
  return $output;
}

/**
 * Implements hook_field_group_build_pre_render_alter().
 */
function farnet_field_group_build_pre_render_alter(&$element) {
  if (isset($element['group_factsheet_flag_content']) and isset($element['title_field'])) {
    $element['group_factsheet_flag_content']['#prefix'] = '<div id="group-factsheet-flag-content" class="group-factsheet-flag-content field-group-tab"><div class="highlight--background">';
    $element['group_factsheet_flag_content']['#suffix'] = '</div></div>';
  }
  if (isset($element['group_factsheet_flag_funding'])) {
    $element['group_factsheet_flag_funding']['#prefix'] = '<div id="group-factsheet-flag-funding" class="group-factsheet-flag-funding field-group-tab flag-funding"><h3 class="fr-heading"><span>' . $element['#groups']['group_factsheet_flag_funding']->label . '</span></h3><div class="highlight--background">';
    $element['group_factsheet_flag_funding']['#suffix'] = '</div></div>';
  }
}

/**
 * Implements theme_preprocess_views_view.
 */
function farnet_preprocess_views_view(&$vars) {
  if ($vars['name'] == "farnet_content_slider") {
    // Replace id on ul.
    $vars['rows'] = str_replace('flexslider_views_slideshow_farnet_content_slider-farnet_block_slider', 'flexslider_views_slideshow_view_content_slider_2-block', $vars['rows']);
    $classes_to_replace = array(
      'view-farnet-content-slider' => 'view-view-content-slider-2',
      'view-id-farnet_content_slider' => 'view-id-view_content_slider_2',
      'view-display-id-farnet_block_slider' => 'view-display-id-block',
    );
    foreach ($vars['classes_array'] as $key => $class) {
      if (in_array($class, array_keys($classes_to_replace))) {
        $vars['classes_array'][$key] = $classes_to_replace[$class];
      }
    }
  }
}

/**
 * Implements theme_preprocess_views_view_fields.
 */
function farnet_preprocess_views_view_fields(&$vars) {
  if ($vars['view']->name == 'farnet_content_slider') {
    $vars['fields']['field_slide']->wrapper_prefix = '<span class="views-field views-field-field-slide">';
    $vars['fields']['field_slide']->wrapper_suffix = '</span>';
    $vars['fields']['nothing']->wrapper_prefix = '<span class="views-field views-field-nothing">';
    $vars['fields']['nothing']->wrapper_suffix = '</span>';
  }
}

/**
 * Implements theme_pager.
 */
function farnet_pager(&$variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;
  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // Current is the page we are currently paged to.
  $pager_current = $pager_page_array[$element] + 1;
  // First is the first page listed by this pager piece (re quantity).
  $pager_first = $pager_current - $pager_middle + 1;
  // Last is the last page listed by this pager piece (re quantity).
  $pager_last = $pager_current + $quantity - $pager_middle;
  // Max is the maximum page number.
  $pager_max = $pager_total[$element];
  // End of marker calculations.
  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.
  $li_first = theme('pager_first', array(
    'text' => (isset($tags[0]) ? $tags[0] : t('« first')),
    'element' => $element,
    'parameters' => $parameters,
  ));
  $li_previous = theme('pager_previous', array(
    'text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ));
  $li_next = theme('pager_next', array(
    'text' => (isset($tags[3]) ? $tags[3] : t('next ›')),
    'element' => $element,
    'interval' => 1,
    'parameters' => $parameters,
  ));
  $li_last = theme('pager_last', array(
    'text' => (isset($tags[4]) ? $tags[4] : t('last »')),
    'element' => $element,
    'parameters' => $parameters,
  ));
  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager__item'),
            'data' => theme('pager_previous', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($pager_current - $i),
              'parameters' => $parameters,
            )),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager__item'),
            'data' => $i,
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager__item'),
            'data' => theme('pager_next', array(
              'text' => $i,
              'element' => $element,
              'interval' => ($i - $pager_current),
              'parameters' => $parameters,
            )),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager__item'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager__item'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager__item'),
        'data' => $li_last,
      );
    }
    return t('<nav class="pager" aria-label="Page navigation">') . theme('item_list', array(
      'items' => $items,
      'attributes' => array('class' => array('pager__list')),
      'pager' => TRUE,
    )) . '</nav>';
  }
}

/**
 * Implements theme_item_list.
 */
function farnet_item_list($variables) {
  $items = $variables['items'];
  $title = $variables['title'];
  $type = $variables['type'];
  $attributes = $variables['attributes'];

  // Only output the list container and title, if there are any list items.
  // Check to see whether the block title exists before adding a header.
  // Empty headers are not semantic and present accessibility challenges.
  $output = NULL;
  if (!isset($variables['pager'])) {
    $output = '<div class="item-list">';
  }
  if (isset($title) && $title !== '') {
    $output .= '<h3>' . $title . '</h3>';
  }

  if (!empty($items)) {
    $output .= "<$type" . drupal_attributes($attributes) . '>';
    $num_items = count($items);
    $i = 0;
    foreach ($items as $item) {
      $attributes = array();
      $children = array();
      $data = '';
      $i++;
      if (is_array($item)) {
        foreach ($item as $key => $value) {
          if ($key == 'data') {
            $data = $value;
          }
          elseif ($key == 'children') {
            $children = $value;
          }
          else {
            $attributes[$key] = $value;
          }
        }
      }
      else {
        $data = $item;
      }
      if (count($children) > 0) {
        // Render nested list.
        $data .= theme_item_list(array(
          'items' => $children,
          'title' => NULL,
          'type' => $type,
          'attributes' => $attributes,
        ));
      }
      if ($i == 1) {
        $attributes['class'][] = 'first';
      }
      if ($i == $num_items) {
        $attributes['class'][] = 'last';
      }
      if (!isset($variables['pager'])) {
        $output .= '<li' . drupal_attributes($attributes) . '>' . $data . "</li>\n";
      }
      else {
        $output .= '<li' . drupal_attributes($attributes) . '>' . str_replace('<a title', '<a class="pager_link" title', $data) . "</li>\n";
      }
    }
    $output .= "</$type>";
  }
  if (!isset($variables['pager'])) {
    $output .= '</div>';
  }
  return $output;
}

/**
 * Render field timeframe of implementation.
 */
function farnet_field__field_dates_start_end(&$variables) {
  $markup = &$variables['items'][0]['#markup'];
  $pos = strpos($markup, '>');

  $from = t('From');

  return substr_replace($markup, $from . ' ', $pos + 1, 0);
}

/**
 * Implements theme_image_style.
 */
function farnet_preprocess_image_style(&$vars) {
  if (isset($vars['style_name'])) {
    if ($vars['style_name'] == 'farnet_teaser') {
      $vars['width'] = NULL;
      $vars['height'] = NULL;
      $vars['attributes']['class'][] = 'media-object farnet-listing__picture';
    }
  }
}

/**
 * Implements template_preprocess_node().
 */
function farnet_preprocess_node(&$variables) {


  // Add a last updated date to communities.
  $types = ['community_public', 'community_private', 'community_hidden'];
  if (in_array($variables['type'], $types)) {
    $last = _farnet_communities_get_last_updated_date($variables['nid']);
    if ($last) {
      $variables['last_updated'] = $last;
    }

    $disc_count = _farnet_communities_discussion_count($variables['nid']);
    if ($disc_count) {
      $variables['discussion_count'] = $disc_count;
    }

    // Get join button in CT.
    if (isset($variables['content']['group_group'][0])) {
      $field_value = &$variables['content']['group_group'][0];
      // Only alter join link.
      if (isset($field_value['#href']) && strpos($field_value['#href'], 'unsubscribe') === FALSE) {
        if ($variables['type'] === 'community_public') {
          $title = t('Join');
        }
        else {
          $title = t('Ask to join');
        }

        $field_value['#title'] = $title;
      }
    }
  }

  // Display information on community contents.
  $comm_content = [
    'myfarnet_discussion',
    'myfarnet_cooperation_idea',
    'myfarnet_event',
    'myfarnet_news'
  ];
  if (in_array($variables['type'], $comm_content)) {
    $params = [':nid' => $variables['nid'], ':status' => COMMENT_PUBLISHED];
    $comm_count = db_query('SELECT COUNT(*) FROM {comment} WHERE nid=:nid AND status=:status', $params)->fetchField();
    if (isset($comm_count) && $comm_count) {
      $variables['comment_count'] = $comm_count;
    }
  }

}

/**
 * Implements template_preprocess_user_profile().
 */
function farnet_preprocess_user_profile(&$variables) {
  $account = $variables['elements']['#account'];
  //Add the user ID into the user profile as a variable
  $variables['user_id'] = $account->uid;
  // Helpful $user_profile variable for templates.
  foreach (element_children($variables['elements']) as $key) {
    if($key == 'field_gender') {
      switch($variables['elements'][$key]['#items'][0]['value']) {
        case 'male':
          $variables['elements'][$key]['#items'][0]['value'] = 'Mr';
          $variables['elements'][$key][0]['#markup'] = 'Mr';
          $variables['elements'][$key][0]['#items']['value'] = 'Mr';
          break;
        case 'female':
          $variables['elements'][$key]['#items'][0]['value'] = 'Mrs';
          $variables['elements'][$key][0]['#markup'] = 'Mrs';
          $variables['elements'][$key][0]['#items']['value'] = 'Mrs';
          break;
      }
    }
    $variables['user_profile'][$key] = $variables['elements'][$key];
  }

  // Preprocess fields.
  field_attach_preprocess('user', $account, $variables['elements'], $variables);
}
