<?php
/**
 * @file
 * farnet_communities.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function farnet_communities_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: myfarnet_html
  $profiles['myfarnet_html'] = array(
    'format' => 'myfarnet_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'PasteFromWord' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
        ),
        'lite' => array(
          'lite_AcceptAll' => 1,
          'lite_RejectAll' => 1,
          'lite_AcceptOne' => 1,
          'lite_RejectOne' => 1,
          'lite_ToggleShow' => 1,
          'lite_ToggleTracking' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 0,
      'paste_auto_cleanup_on_paste' => 0,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'theme',
      'css_path' => '',
      'css_classes' => '',
    ),
    'entity_type' => 'wysiwyg_profile',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
