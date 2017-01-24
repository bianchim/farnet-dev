<?php

/**
 * @file
 * farnet_pages.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function farnet_pages_node_export_features_default() {
  $node_export = array(
    'code_string' => 'array(
  (object) array(
      \'vid\' => \'15\',
      \'uid\' => \'1\',
      \'title\' => \'FARNET Data\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f567f506-2b80-4485-ae4d-26969aa9328c\',
      \'nid\' => \'13\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851354\',
      \'changed\' => \'1484851354\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'16f7787d-ad7f-4645-a40f-a5bbcbd9e416\',
      \'revision_timestamp\' => \'1484851354\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET Data\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET Data\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET Data ...\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET Data ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'13\',
              \'revision_id\' => \'15\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851354\',
              \'changed\' => \'1484851354\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET Data\',
      \'entity_translation_handler_id\' => \'node-eid-13-15\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'333\',
        \'source\' => \'node/13\',
        \'alias\' => \'about/who-is-who/data\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851354\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'Tools for Managing Authorities\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'43cb6a43-ecf9-451a-8b28-87df64fbda55\',
      \'nid\' => \'17\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851681\',
      \'changed\' => \'1484851681\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4f105583-9bc2-412f-8913-4501a69e2dce\',
      \'revision_timestamp\' => \'1484851681\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tools for Managing Authorities\',
            \'format\' => NULL,
            \'safe_value\' => \'Tools for Managing Authorities\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tools for Managing Authorities ...\',
            \'format\' => NULL,
            \'safe_value\' => \'Tools for Managing Authorities ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'17\',
              \'revision_id\' => \'19\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851681\',
              \'changed\' => \'1484851681\',
            ),
          ),
        ),
      \'title_original\' => \'Tools for Managing Authorities\',
      \'entity_translation_handler_id\' => \'node-eid-17-19\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'337\',
        \'source\' => \'node/17\',
        \'alias\' => \'tools/managing-authorities\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851681\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => "Who\'s who",
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0f12735b-c93e-4431-8044-0948e1d6f742\',
      \'nid\' => \'10\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851115\',
      \'changed\' => \'1484851115\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f\',
      \'revision_timestamp\' => \'1484851115\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => "Who\'s who",
            \'format\' => NULL,
            \'safe_value\' => \'Who&#039;s who\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => "Who\'s who ...",
            \'format\' => NULL,
            \'safe_value\' => \'Who&#039;s who ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484850600\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'10\',
              \'revision_id\' => \'12\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851115\',
              \'changed\' => \'1484851115\',
            ),
          ),
        ),
      \'title_original\' => "Who\'s who",
      \'entity_translation_handler_id\' => \'node-eid-10-12\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'330\',
        \'source\' => \'node/10\',
        \'alias\' => \'about/who-is-who\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851115\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'FARNET at a glance\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cd05939c-23bd-498e-91e0-3de247b6a484\',
      \'nid\' => \'9\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484850955\',
      \'changed\' => \'1484850955\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'809bcdc6-2ddb-4123-8d3d-8670deba1ee0\',
      \'revision_timestamp\' => \'1484850955\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET at a glance\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET at a glance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET at a glance ...\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET at a glance ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484850600\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'9\',
              \'revision_id\' => \'10\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484850955\',
              \'changed\' => \'1484850955\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET at a glance\',
      \'entity_translation_handler_id\' => \'node-eid-9-10\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'328\',
        \'source\' => \'node/9\',
        \'alias\' => \'about/farnet-at-a-glance\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484850955\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'14\',
      \'uid\' => \'1\',
      \'title\' => \'FARNET Support Unit\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a62a630-4059-44f0-8921-4300d1871557\',
      \'nid\' => \'12\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851273\',
      \'changed\' => \'1484851273\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'83c03175-7f0f-46a8-bb94-68c149e0545b\',
      \'revision_timestamp\' => \'1484851273\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET Support Unit\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET Support Unit\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET Support Unit ...\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET Support Unit ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'12\',
              \'revision_id\' => \'14\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851273\',
              \'changed\' => \'1484851273\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET Support Unit\',
      \'entity_translation_handler_id\' => \'node-eid-12-14\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'332\',
        \'source\' => \'node/12\',
        \'alias\' => \'about/who-is-who/farnet-support-unit\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851273\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'17\',
      \'uid\' => \'1\',
      \'title\' => \'Social Media\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fccb86bb-2f49-4d8a-b4de-51f7572c6a56\',
      \'nid\' => \'15\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851480\',
      \'changed\' => \'1484851480\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'99d9499d-bf58-4439-8d51-14951ccb61a8\',
      \'revision_timestamp\' => \'1484851480\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Social Media\',
            \'format\' => NULL,
            \'safe_value\' => \'Social Media\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Social Media ...\',
            \'format\' => NULL,
            \'safe_value\' => \'Social Media ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'15\',
              \'revision_id\' => \'17\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851480\',
              \'changed\' => \'1484851480\',
            ),
          ),
        ),
      \'title_original\' => \'Social Media\',
      \'entity_translation_handler_id\' => \'node-eid-15-17\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'335\',
        \'source\' => \'node/15\',
        \'alias\' => \'news-events/social-media\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851480\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'CLLD at a glance\',
      \'log\' => \'Edited by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'622bbb0c-7276-42e3-87b0-7783555ae4cf\',
      \'nid\' => \'8\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484846505\',
      \'changed\' => \'1484846505\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a6732329-8c83-4448-bf02-f0d597c3fdbe\',
      \'revision_timestamp\' => \'1484846505\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'CLLD at a glance\',
            \'format\' => NULL,
            \'safe_value\' => \'CLLD at a glance\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'CLLD at a glance ...\',
            \'format\' => NULL,
            \'safe_value\' => \'CLLD at a glance ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484846100\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'8\',
              \'revision_id\' => \'11\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484846505\',
              \'changed\' => \'1484851060\',
            ),
          ),
        ),
      \'title_original\' => \'CLLD at a glance\',
      \'entity_translation_handler_id\' => \'node-eid-8-11\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'327\',
        \'source\' => \'node/8\',
        \'alias\' => \'about/clld-at-glance\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484846505\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'16\',
      \'uid\' => \'1\',
      \'title\' => \'Glossary\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97df4214-4358-4a9a-bd03-82745f18dd96\',
      \'nid\' => \'14\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851422\',
      \'changed\' => \'1484851422\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b5430f79-addb-4850-acff-5f907724920d\',
      \'revision_timestamp\' => \'1484851422\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Glossary\',
            \'format\' => NULL,
            \'safe_value\' => \'Glossary\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Glossary ...\',
            \'format\' => NULL,
            \'safe_value\' => \'Glossary ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'14\',
              \'revision_id\' => \'16\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851422\',
              \'changed\' => \'1484851422\',
            ),
          ),
        ),
      \'title_original\' => \'Glossary\',
      \'entity_translation_handler_id\' => \'node-eid-14-16\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'334\',
        \'source\' => \'node/14\',
        \'alias\' => \'about/who-is-who/glossary\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851422\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'18\',
      \'uid\' => \'1\',
      \'title\' => \'Tools for FLAGs\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'394bad39-9129-4afa-afc5-c565787729e8\',
      \'nid\' => \'16\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851572\',
      \'changed\' => \'1484851572\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cb73e428-1827-4a3e-bcfd-57c6ffd229ca\',
      \'revision_timestamp\' => \'1484851572\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tools for FLAGs\',
            \'format\' => NULL,
            \'safe_value\' => \'Tools for FLAGs\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Tools for FLAGs ...\',
            \'format\' => NULL,
            \'safe_value\' => \'Tools for FLAGs ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'16\',
              \'revision_id\' => \'18\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851572\',
              \'changed\' => \'1484851572\',
            ),
          ),
        ),
      \'title_original\' => \'Tools for FLAGs\',
      \'entity_translation_handler_id\' => \'node-eid-16-18\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'336\',
        \'source\' => \'node/16\',
        \'alias\' => \'tools/flags\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851572\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'13\',
      \'uid\' => \'1\',
      \'title\' => \'DG Mare\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'2f10bf98-618f-422f-8123-dd9b7d752dfb\',
      \'nid\' => \'11\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1484851184\',
      \'changed\' => \'1484851184\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d1c99c2e-1ced-49e8-ad88-5948cc3890c0\',
      \'revision_timestamp\' => \'1484851184\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'DG Mare\',
            \'format\' => NULL,
            \'safe_value\' => \'DG Mare\',
          ),
        ),
      ),
      \'og_group_ref\' => array(),
      \'group_content_access\' => array(
        \'und\' => array(
          array(
            \'value\' => \'0\',
          ),
        ),
      ),
      \'field_ne_body\' => array(),
      \'field_tags\' => array(),
      \'field_farnet_abstract\' => array(
        \'en\' => array(
          array(
            \'value\' => \'DG Mare ...\',
            \'format\' => NULL,
            \'safe_value\' => \'DG Mare ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1484851500\',
            \'timezone\' => \'UTC\',
            \'timezone_db\' => \'UTC\',
            \'date_type\' => \'datestamp\',
          ),
        ),
      ),
      \'field_term_country\' => array(),
      \'field_term_publication_channels\' => array(),
      \'field_term_theme\' => array(),
      \'translations\' => (object) array(
          \'original\' => \'en\',
          \'data\' => array(
            \'en\' => array(
              \'entity_type\' => \'node\',
              \'entity_id\' => \'11\',
              \'revision_id\' => \'13\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851184\',
              \'changed\' => \'1484851184\',
            ),
          ),
        ),
      \'title_original\' => \'DG Mare\',
      \'entity_translation_handler_id\' => \'node-eid-11-13\',
      \'entity_type\' => \'node\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'path\' => array(
        \'pathauto\' => FALSE,
        \'pid\' => \'331\',
        \'source\' => \'node/11\',
        \'alias\' => \'about/who-is-who/dg-mare\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1484851184\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:1:{s:7:"contact";i:1;}\',
      \'print_html_display\' => 1,
      \'print_html_display_comment\' => 0,
      \'print_html_display_urllist\' => 1,
      \'print_mail_display\' => 1,
      \'print_mail_display_comment\' => 0,
      \'print_mail_display_urllist\' => 1,
      \'print_pdf_display\' => 1,
      \'print_pdf_display_comment\' => 0,
      \'print_pdf_display_urllist\' => 1,
      \'print_pdf_size\' => NULL,
      \'print_pdf_orientation\' => NULL,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
)',
  );
  return $node_export;

}
