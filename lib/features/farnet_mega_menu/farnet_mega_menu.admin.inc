<?php
/**
 * @file
 * farnet_mega_menu.admin.inc
 */

/**
 * Page callback: farnet_mega_menu settings.
 */
function farnet_mega_menu_admin_form($form, &$form_state) {
  $availableMenus = menu_get_menus();
  $form['farnet_mega_menu_menues_to_slice'] = array(
    '#title' => t('Choose which menus to slice'),
    '#type' => 'checkboxes',
    '#default_value' => variable_get('farnet_mega_menu_menus_to_slice', array()),
    '#description' => t('Select menus you would like to be sliced.'),
    '#options' => $availableMenus,
  );
  return system_settings_form($form);
}

/**
 * Submit method for the form.
 */
function farnet_mega_menu_admin_form_submit(&$form_state) {
  if ($form_state['values']['farnet_mega_menu_menues_to_slice']) {
    variable_set('farnet_mega_menu_menues_to_slice', $form_state['values']['farnet_mega_menu_menues_to_slice']);
    drupal_set_message(t('Your configuration has been saved.'));
  }
}
