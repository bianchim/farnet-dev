<?php
/**
 * @file
 * farnet_newsletters.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function farnet_newsletters_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|nexteuropa_event|newsletter';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'nexteuropa_event';
  $ds_fieldsetting->view_mode = 'newsletter';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|nexteuropa_event|newsletter'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|nexteuropa_news|newsletter';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'nexteuropa_news';
  $ds_fieldsetting->view_mode = 'newsletter';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|nexteuropa_news|newsletter'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|nexteuropa_news|newsletter_news_list';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'nexteuropa_news';
  $ds_fieldsetting->view_mode = 'newsletter_news_list';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|nexteuropa_news|newsletter_news_list'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function farnet_newsletters_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|nexteuropa_event|newsletter';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'nexteuropa_event';
  $ds_layout->view_mode = 'newsletter';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_term_country',
      ),
      'right' => array(
        1 => 'field_dates',
        2 => 'field_contact_title',
        3 => 'title',
        4 => 'field_city',
      ),
    ),
    'fields' => array(
      'field_term_country' => 'left',
      'field_dates' => 'right',
      'field_contact_title' => 'right',
      'title' => 'right',
      'field_city' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|nexteuropa_event|newsletter'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|nexteuropa_news|newsletter';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'nexteuropa_news';
  $ds_layout->view_mode = 'newsletter';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'node_link',
      ),
      'right' => array(
        2 => 'title_field',
        3 => 'field_abstract',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'node_link' => 'left',
      'title_field' => 'right',
      'field_abstract' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|nexteuropa_news|newsletter'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|nexteuropa_news|newsletter_news_list';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'nexteuropa_news';
  $ds_layout->view_mode = 'newsletter_news_list';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_abstract',
        2 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_abstract' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|nexteuropa_news|newsletter_news_list'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_news_highlight_1',
      ),
      'left' => array(
        1 => 'field_news_highlight_2',
      ),
      'right' => array(
        2 => 'field_related_events',
      ),
      'footer' => array(
        3 => 'field_related_news',
      ),
    ),
    'fields' => array(
      'field_news_highlight_1' => 'header',
      'field_news_highlight_2' => 'left',
      'field_related_events' => 'right',
      'field_related_news' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|simplenews|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|simplenews|newsletter';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'simplenews';
  $ds_layout->view_mode = 'newsletter';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_news_highlight_1',
      ),
      'left' => array(
        1 => 'field_news_highlight_2',
      ),
      'right' => array(
        2 => 'field_related_events',
      ),
      'footer' => array(
        3 => 'field_related_news',
      ),
    ),
    'fields' => array(
      'field_news_highlight_1' => 'header',
      'field_news_highlight_2' => 'left',
      'field_related_events' => 'right',
      'field_related_news' => 'footer',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|simplenews|newsletter'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function farnet_newsletters_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'newsletter';
  $ds_view_mode->label = 'Newsletter';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['newsletter'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'newsletter_news_list';
  $ds_view_mode->label = 'Newsletter News List';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['newsletter_news_list'] = $ds_view_mode;

  return $export;
}
