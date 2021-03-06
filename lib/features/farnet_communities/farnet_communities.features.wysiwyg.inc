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
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Blockquote' => 1,
          'PasteText' => 1,
          'PasteFromWord' => 1,
          'Format' => 1,
          'Table' => 1,
          'Find' => 1,
          'Replace' => 1,
          'Maximize' => 1,
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
