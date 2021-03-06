<?php

/**
 * @file
 * Install helpers for farnet error module.
 */

/**
 * Set farnet error messages for anon users.
 */
function _farnet_error_set_anon_vars() {
  // Set the new multilingual variables.
  $realm_language = variable_get('variable_realm_list_language');

  $new = [
    'farnet_error_myfarnet_anon_title',
    'farnet_error_myfarnet_anon_body',
  ];

  $res = array_merge($realm_language, $new);
  variable_set('variable_realm_list_language', $res);

  // Manage the default wysiwyg for anonymous myFARNET message from here.
  $wysiwyg = '<p style="margin-bottom: 0cm">myFARNET is a collaborative area dedicated to stakeholders involved in implementing CLLD in fisheries areas.</p><p style="margin-bottom: 0cm">Its aim is to promote discussions and cooperation among FLAGs, Managing Authorities, projects and other actors (NGOs, academics, press, etc…) on topics of common interested.</p><p style="margin-bottom: 0cm">myFARNET is only accessible to registered users.</p><p style="margin-bottom: 0cm">&nbsp;</p><p style="margin-bottom: 0cm"><b>How to join myFARNET</b></p><p style="margin-bottom: 0cm">To join myFARNET, you need to log in the European Commission authentication service, now called EU Login.</p><p style="margin-bottom: 0cm">See this button on the top left corner of your screen?</p><p style="margin-bottom: 0cm">[[image-connect-full]]</p><p style="margin-bottom: 0cm">If you already have an ECAS or EU Login, click <span style="font-size: 13.008px;">[[image-connect-short]]</span>, add your password and submit.</p><p style="margin-bottom: 0cm">If you do not yet have an ECAS or EU Login, click <span style="font-size: 13.008px;">[[image-connect-add]]</span>, create an account, check your email and confirm your registration by clicking on the link. <a href="https://ecas.ec.europa.eu/cas/help.html?loginRequestId=ECAS_LR-23143039-FroSM3fr275X3YrRmJNhmWZyCdDrDWiIvWTYExmjVUJH1IivGhgUf0DUcvsbTxo1zTb3srZENxV3s862YRpCuu-Jj71zxYb8yrKqsldMk1rXW-KFyoT59kndWWKggkYgRIg7gqJp7Q7MrbP4Ov00oW2ZC">Help on EU Login is available here</a></p><p style="margin-bottom: 0cm">On your first visit to myFARNET, you will be directed to your profile which you can choose to edit if you wish. Next time, you will land directly on your myFARNET dashboard.</p><p style="margin-bottom: 0cm">&nbsp;</p><p style="margin-bottom: 0cm"><b>Once you are registered, you can…</b></p><ul><li><p style="margin-bottom: 0cm">Join Communities</p></li><li><p style="margin-bottom: 0cm">Take part in discussions and add attachments</p></li><li><p style="margin-bottom: 0cm">Create discussions</p></li><li><p style="margin-bottom: 0cm">Post news and events</p></li><li><p style="margin-bottom: 0cm">Post cooperation ideas</p></li><li><p style="margin-bottom: 0cm">Edit your profile.</p></li></ul>';

  // Create a file entity for each image in the new variable.
  $path = drupal_get_path('theme', 'farnet') . '/images';

  $files = [
    'image-connect-full',
    'image-connect-short',
    'image-connect-add',
  ];

  // How an image is displayed in the wysiwyg, $fid will be replaced.
  $wysiwyg_image_template = '[[{"fid":"$fid","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"","field_file_image_title_text[und][0][value]":"","field_caption[und][0][value]":""},"type":"media","link_text":null,"attributes":{"class":"media-element file-default"}}]]';

  foreach ($files as $filename_raw) {
    $filename = $filename_raw . '.png';
    $data = file_get_contents($path . '/' . $filename);
    $file = file_save_data($data, 'public://' . $filename, FILE_EXISTS_REPLACE);

    // Create image code for the wysiwyg.
    $wysiwyg_image = str_replace('$fid', $file->fid, $wysiwyg_image_template);

    $wysiwyg = str_replace('[[' . $filename_raw . ']]', $wysiwyg_image, $wysiwyg);
  }

  // Save the multilingual variable as english by default.
  i18n_variable_set('farnet_error_myfarnet_anon_title', 'Welcome to myFARNET', 'en');
  i18n_variable_set('farnet_error_myfarnet_anon_body', ['value' => $wysiwyg, 'format' => 'full_html'], 'en');
}
