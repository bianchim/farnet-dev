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

  $regions = $variables['regions'];

  // Switch title to page type.
  if (isset($variables['node'])) {
    $node_type = node_type_get_name($variables['node']);
    if (!in_array($node_type, array('Basic page', 'Article', 'Landing Page'))) {
      $variables['node_type'] = $node_type;
    }
    if (in_array($node_type, array('Landing Page'))) {
      // Format regions.
      $regions['landing_content'] = (isset($variables['page']['landing_content']) ? render($variables['page']['landing_content']) : '');
    }
  }

  $cols = $variables['cols'];
  $cols['landing_content'] = array(
    'lg' => 12 - $cols['content_right']['lg'],
    'md' => 12 - $cols['content_right']['md'],
    'sm' => 12,
    'xs' => 12,
  );

  // Add variables to template file.
  $variables['regions'] = $regions;
  $variables['cols'] = $cols;
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

    case 'views-79352059f92f38e8b7c026bd2e334732';
      $view = views_get_view('farnet_view_factsheets_flag');
      $ff_header = $view->display['ff_on_the_ground']->display_options['header']['area']['content'];
      $vars['ff_header'] = $ff_header;
      break;

    case 'views-7dabd414d359435e91fad754dab94e7f';
      $view = views_get_view('farnet_view_factsheets_country');
      $cf_header = $view->display['cf_on_the_ground']->display_options['header']['area']['content'];
      $vars['cf_header'] = $cf_header;
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
  if ($form_id == 'farnet_core_printpdf_multilingual_form') {
    $form['#attributes'] = array('class' => 'c-file-download');
    $form['content_type_pdf_download']['#markup'] = '<span class="c-file-download__icon icon icon--file-pdf"></span><span class="c-file-download__title">' . t('Flag Factsheet in PDF') . '</span>';
    $form['fields_pdf_print']['select-pdfprint-lang']['#attributes']['class'] = array('c-file-download__options');
    $form['fields_pdf_print']['submit-pdfprint-lang']['#prefix'] = '<div class="c-file-download__controls">';
    $form['fields_pdf_print']['submit-pdfprint-lang']['#suffix'] = '</div>';
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
  $element_with_additional_field_item_class_2 = array(
    'field_ff_number_decision' => array('u-color-green', 'u-fw-bold'),
    'field_ff_number_assembly' => array('u-color-green', 'u-fw-bold'),
    'field_ff_number_staff' => array('u-color-green', 'u-fw-bold'),
    'field_type_of_area' => array('fr-u-ul'),
    'field_sea_basins' => array('fr-u-ul'),
  );
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
    'field_ff_multi_funding' => array('field-type-text-long', 'field-name-field-ff-multi-funding-txt'),
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
      if (!$variables['element']['#object']->field_ff_multi_funding and
        !$variables['element']['#object']->field_ff_funds and
        !$variables['element']['#object']->field_ff_sources_co_funding and
        !$variables['element']['#object']->field_ff_ms_co_financing) {
        $variables['suffix'] = '</ul>';
      }
      break;

    case 'field_ff_ms_co_financing':
      $variables['container_tag'] = 'li';
      if (!$variables['element']['#object']->field_ff_multi_funding and
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
      if (!$variables['element']['#object']->field_ff_multi_funding and
        !$variables['element']['#object']->field_ff_funds) {
        $variables['suffix'] = '</ul>';
      }
      if (!$variables['element']['#object']->field_ff_emff and
        !$variables['element']['#object']->field_ff_ms_co_financing) {
        $variables['prefix'] = '<ul class="fr-u-ul">';
      }
      break;

    case 'field_ff_multi_funding':
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
        !$variables['element']['#object']->field_ff_multi_funding) {
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
    $element['group_factsheet_flag_content']['#prefix'] = '<div id="group-factsheet-flag-content" class="group-factsheet-flag-content field-group-tab"><h2>' . $element['title_field']['#items'][0]['value'] . '</h2><div class="highlight--background">';
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
