<?php
/**
 * @file
 * Default theme functions.
 */

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
    $form['fields_pdf_print']['submit-pdfprint-lang']['#fuffix'] = '</div>';
  }
}

/**
 * Implements template_preprocess_field().
 */
function farnet_preprocess_field(&$variables, $hook) {
  $variables['prefix'] = NULL;
  $variables['suffix'] = NULL;
  $variables['label_class'] = NULL;
  $element_with_additional_label_class = array(
    'field_ff_public_actors',
    'field_ff_fisheries_actors',
    'field_ff_other_non_fisheries',
    'field_ff_environmental_actors',
    'field_ff_number_decision',
    'field_ff_number_assembly',
    'field_ff_number_staff',
  );
  if (in_array($variables['element']['#field_name'], $element_with_additional_label_class)) {
    $variables['label_class'] = ' u-fw-normal';
  }
  if ($variables['element']['#field_name'] == 'field_collection_strategy') {
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
  elseif ($variables['element']['#field_name'] == 'field_ff_population') {
    $variables['suffix'] = '</div>';
    if (!$variables['element']['#object']->field_ff_population_density and
        !$variables['element']['#object']->field_ff_surface_area) {
      $variables['prefix'] .= '<p>start here</p><div class="container"><div class="row flag-stats"><div class="col-md-6 flag-stats__left-col"><div class="row"><div class="col-sm-4 flag-stats__col">';
      $variables['suffix'] .= '</div></div>';
    }
    else {
      $variables['prefix'] .= '<p>start here</p><div class="container"><div class="row flag-stats"><div class="col-md-6 flag-stats__left-col"><div class="row"><div class="col-sm-4 flag-stats__col flag-stats__col--with-border">';
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_surface_area') {
    if (!$variables['element']['#object']->field_ff_population) {
      $variables['prefix'] .= '<div class="container"><div class="row flag-stats"><div class="col-md-6 flag-stats__left-col"><div class="row">';
    }
    $variables['suffix'] = '</div>';
    if (!$variables['element']['#object']->field_ff_population_density) {
      $variables['suffix'] .= '</div></div>';
      $variables['prefix'] .= '<div class="col-sm-4 flag-stats__col">';
    }
    else {
      $variables['prefix'] .= '<div class="col-sm-4 flag-stats__col flag-stats__col--with-border">';
    }
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_population_density') {
    if (!$variables['element']['#object']->field_ff_population and
        !$variables['element']['#object']->field_ff_surface_area) {
      $variables['prefix'] .= '<div class="container"><div class="row flag-stats"><div class="col-md-6 flag-stats__left-col"><div class="row">';
    }
    $variables['prefix'] .= '<div class="col-sm-4 flag-stats__col">';
    $variables['suffix'] .= '</div></div></div>';
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_total_employment') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density) {
      $variables['prefix'] .= '<div class="container"><div class="row flag-stats">';
    }
    $variables['prefix'] .= '<div class="col-md-6 flag-stats__right-col"><div class="row"><div class="col-sm-4 flag-stats__col">';
    $variables['suffix'] .= '</div>';
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_fishing') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density and
      !$variables['element']['#object']->field_ff_total_employment) {
      $variables['prefix'] .= '<div class="container"><div class="row flag-stats"><div class="col-md-6 flag-stats__right-col"><div class="row">';
    }
    elseif (!$variables['element']['#object']->field_ff_processing) {
      $variables['suffix'] .= '</div></div></div></div></div>';
    }
    $variables['prefix'] .= '<div class="col-sm-8 flag-stats__col--blue-bg">';
  }
  elseif ($variables['element']['#field_name'] == 'field_ff_processing') {
    if (!$variables['element']['#object']->field_ff_population and
      !$variables['element']['#object']->field_ff_surface_area and
      !$variables['element']['#object']->field_ff_population_density and
      !$variables['element']['#object']->field_ff_total_employment and
      !$variables['element']['#object']->field_ff_fishing) {
      $variables['prefix'] .= '<div class="container"><div class="row flag-stats"><div class="col-md-6 flag-stats__right-col"><div class="row"><div class="col-sm-8 flag-stats__col--blue-bg">';
      $variables['suffix'] .= '</div></div></div></div></div>';
    }
    elseif (!$variables['element']['#object']->field_ff_fishing) {
      $variables['prefix'] .= '<div class="col-sm-8 flag-stats__col--blue-bg">';
    }
    $variables['suffix'] .= '</div></div></div></div></div>';
  }
}

/**
 * Implements hook_field_group_pre_render_alter().
 */
function farnet_field_group_pre_render_alter(&$element, $group, &$form) {
  if (isset($element['#id']) && $element['#id'] == 'group-factsheet-flag-partnership') {
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
