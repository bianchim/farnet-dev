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
      \'vid\' => \'2\',
      \'uid\' => \'0\',
      \'title\' => \'FARNET Data\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'f567f506-2b80-4485-ae4d-26969aa9328c\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'16f7787d-ad7f-4645-a40f-a5bbcbd9e416\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'2\',
              \'revision_id\' => \'2\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851354\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET Data\',
      \'entity_translation_handler_id\' => \'node-eid-2-2\',
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
        \'pid\' => \'320\',
        \'source\' => \'node/2\',
        \'alias\' => \'farnet-data\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'FARNET Data\',
        \'mlid\' => 0,
        \'plid\' => \'1234\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-45\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'21\',
      \'uid\' => \'1\',
      \'title\' => \'European overview\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1c7a6a02-bc33-4eac-b806-d0508e36b35a\',
      \'nid\' => \'20\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485537079\',
      \'changed\' => \'1485537079\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'45a49ccb-a3bf-42e5-b6e9-0fa971c31e5f\',
      \'revision_timestamp\' => \'1485537079\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'European overview\',
            \'format\' => NULL,
            \'safe_value\' => \'European overview\',
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
            \'value\' => \'European overview...\',
            \'format\' => NULL,
            \'safe_value\' => \'European overview...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1485537300\',
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
              \'entity_id\' => \'20\',
              \'revision_id\' => \'21\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1485537079\',
              \'changed\' => \'1485537079\',
            ),
          ),
        ),
      \'title_original\' => \'European overview\',
      \'entity_translation_handler_id\' => \'node-eid-20-21\',
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
        \'pid\' => \'338\',
        \'source\' => \'node/20\',
        \'alias\' => \'cooperation/european-overview\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485537079\',
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
      \'vid\' => \'3\',
      \'uid\' => \'0\',
      \'title\' => \'Tools for Managing Authorities\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'43cb6a43-ecf9-451a-8b28-87df64fbda55\',
      \'nid\' => \'3\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'4f105583-9bc2-412f-8913-4501a69e2dce\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'3\',
              \'revision_id\' => \'3\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851681\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'Tools for Managing Authorities\',
      \'entity_translation_handler_id\' => \'node-eid-3-3\',
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
        \'pid\' => \'321\',
        \'source\' => \'node/3\',
        \'alias\' => \'tools-managing-authorities\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'Tools for Managing Authorities\',
        \'mlid\' => 0,
        \'plid\' => \'1231\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'0\',
      \'title\' => "Who\'s who",
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0f12735b-c93e-4431-8044-0948e1d6f742\',
      \'nid\' => \'4\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5a5ef6df-4d32-4d11-aa73-3d4b3d9b138f\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'4\',
              \'revision_id\' => \'4\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851115\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => "Who\'s who",
      \'entity_translation_handler_id\' => \'node-eid-4-4\',
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
        \'pid\' => \'322\',
        \'source\' => \'node/4\',
        \'alias\' => \'whos-who\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => "Who\'s who",
        \'mlid\' => 0,
        \'plid\' => \'1234\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-47\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'0\',
      \'title\' => \'FARNET at a glance\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'cd05939c-23bd-498e-91e0-3de247b6a484\',
      \'nid\' => \'5\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'809bcdc6-2ddb-4123-8d3d-8670deba1ee0\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'5\',
              \'revision_id\' => \'5\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484850955\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET at a glance\',
      \'entity_translation_handler_id\' => \'node-eid-5-5\',
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
        \'pid\' => \'323\',
        \'source\' => \'node/5\',
        \'alias\' => \'farnet-glance\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'FARNET at a glance\',
        \'mlid\' => 0,
        \'plid\' => \'1234\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'1\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'0\',
      \'title\' => \'FARNET Support Unit\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8a62a630-4059-44f0-8921-4300d1871557\',
      \'nid\' => \'6\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'83c03175-7f0f-46a8-bb94-68c149e0545b\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'6\',
              \'revision_id\' => \'6\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851273\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET Support Unit\',
      \'entity_translation_handler_id\' => \'node-eid-6-6\',
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
        \'pid\' => \'324\',
        \'source\' => \'node/6\',
        \'alias\' => \'farnet-support-unit\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'vid\' => \'20\',
      \'uid\' => \'1\',
      \'title\' => \'Lessons from FARNET 1 (2007-2013)\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'361ff25c-4059-4e45-8cb6-c1dbff7fc321\',
      \'nid\' => \'19\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485537033\',
      \'changed\' => \'1485537033\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'919d0192-5620-4ebc-a23e-6a1be22c0bfe\',
      \'revision_timestamp\' => \'1485537033\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'Lessons from FARNET 1 (2007-2013)\',
            \'format\' => NULL,
            \'safe_value\' => \'Lessons from FARNET 1 (2007-2013)\',
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
            \'value\' => \'Lessons from FARNET 1 (2007-2013)...\',
            \'format\' => NULL,
            \'safe_value\' => \'Lessons from FARNET 1 (2007-2013)...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1485537300\',
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
              \'entity_id\' => \'19\',
              \'revision_id\' => \'20\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1485537033\',
              \'changed\' => \'1485537033\',
            ),
          ),
        ),
      \'title_original\' => \'Lessons from FARNET 1 (2007-2013)\',
      \'entity_translation_handler_id\' => \'node-eid-19-20\',
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
        \'pid\' => \'337\',
        \'source\' => \'node/19\',
        \'alias\' => \'tools/2007-2013-lessons\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485537033\',
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
      \'vid\' => \'7\',
      \'uid\' => \'0\',
      \'title\' => \'Social Media\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'fccb86bb-2f49-4d8a-b4de-51f7572c6a56\',
      \'nid\' => \'7\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'99d9499d-bf58-4439-8d51-14951ccb61a8\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'7\',
              \'revision_id\' => \'7\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851480\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'Social Media\',
      \'entity_translation_handler_id\' => \'node-eid-7-7\',
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
        \'pid\' => \'325\',
        \'source\' => \'node/7\',
        \'alias\' => \'social-media\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'Social media\',
        \'mlid\' => 0,
        \'plid\' => \'1238\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-48\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'0\',
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
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'a6732329-8c83-4448-bf02-f0d597c3fdbe\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'revision_id\' => \'8\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484846505\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'CLLD at a glance\',
      \'entity_translation_handler_id\' => \'node-eid-8-8\',
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
        \'pid\' => \'326\',
        \'source\' => \'node/8\',
        \'alias\' => \'clld-glance\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'CLLD at a glance\',
        \'mlid\' => 0,
        \'plid\' => \'1234\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'0\',
      \'title\' => \'Glossary\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'97df4214-4358-4a9a-bd03-82745f18dd96\',
      \'nid\' => \'9\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'b5430f79-addb-4850-acff-5f907724920d\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'9\',
              \'revision_id\' => \'9\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851422\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'Glossary\',
      \'entity_translation_handler_id\' => \'node-eid-9-9\',
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
        \'pid\' => \'327\',
        \'source\' => \'node/9\',
        \'alias\' => \'glossary\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'Glossary\',
        \'mlid\' => 0,
        \'plid\' => \'1234\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-44\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'0\',
      \'title\' => \'Tools for FLAGs\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'394bad39-9129-4afa-afc5-c565787729e8\',
      \'nid\' => \'10\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'cb73e428-1827-4a3e-bcfd-57c6ffd229ca\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'entity_id\' => \'10\',
              \'revision_id\' => \'10\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851572\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'Tools for FLAGs\',
      \'entity_translation_handler_id\' => \'node-eid-10-10\',
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
        \'pid\' => \'328\',
        \'source\' => \'node/10\',
        \'alias\' => \'tools-flags\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'Tools for FLAGs\',
        \'mlid\' => 0,
        \'plid\' => \'1231\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-49\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'0\',
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
      \'created\' => \'1485527623\',
      \'changed\' => \'1485527623\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'d1c99c2e-1ced-49e8-ad88-5948cc3890c0\',
      \'revision_timestamp\' => \'1485527623\',
      \'revision_uid\' => \'0\',
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
              \'revision_id\' => \'11\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1484851184\',
              \'changed\' => \'1485527623\',
            ),
          ),
        ),
      \'title_original\' => \'DG Mare\',
      \'entity_translation_handler_id\' => \'node-eid-11-11\',
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
        \'pid\' => \'329\',
        \'source\' => \'node/11\',
        \'alias\' => \'dg-mare\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485527623\',
      \'last_comment_name\' => \'\',
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => 0,
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
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
      \'menu\' => array(
        \'link_title\' => \'DG MARE\',
        \'mlid\' => 0,
        \'plid\' => \'1267\',
        \'menu_name\' => \'main-menu\',
        \'weight\' => \'-50\',
        \'options\' => array(),
        \'module\' => \'menu\',
        \'expanded\' => \'1\',
        \'hidden\' => \'0\',
        \'has_children\' => \'0\',
        \'customized\' => 0,
        \'parent_depth_limit\' => 8,
        \'description\' => \'\',
        \'enabled\' => 1,
      ),
      \'node_export_drupal_version\' => \'7\',
      \'workbench_moderation_state_current\' => \'published\',
      \'workbench_moderation_state_new\' => \'published\',
    ),
  (object) array(
      \'vid\' => \'19\',
      \'uid\' => \'1\',
      \'title\' => \'FARNET Flash\',
      \'log\' => \'Created by admin.\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'1cca99ac-d034-4e18-b9dc-4a3f50d71a8f\',
      \'nid\' => \'18\',
      \'type\' => \'page\',
      \'language\' => \'en\',
      \'created\' => \'1485536898\',
      \'changed\' => \'1485536898\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'db00e3c2-a5d5-4678-b297-bc235890a2f6\',
      \'revision_timestamp\' => \'1485536898\',
      \'revision_uid\' => \'1\',
      \'title_field\' => array(
        \'en\' => array(
          array(
            \'value\' => \'FARNET Flash\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET Flash\',
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
            \'value\' => \'FARNET Flash ...\',
            \'format\' => NULL,
            \'safe_value\' => \'FARNET Flash ...\',
          ),
        ),
      ),
      \'field_gallery\' => array(),
      \'field_picture\' => array(),
      \'field_publication_abstract\' => array(),
      \'field_publication_date\' => array(
        \'und\' => array(
          array(
            \'value\' => \'1485536400\',
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
              \'entity_id\' => \'18\',
              \'revision_id\' => \'19\',
              \'language\' => \'en\',
              \'source\' => \'\',
              \'uid\' => \'1\',
              \'status\' => \'1\',
              \'translate\' => \'0\',
              \'created\' => \'1485536898\',
              \'changed\' => \'1485536898\',
            ),
          ),
        ),
      \'title_original\' => \'FARNET Flash\',
      \'entity_translation_handler_id\' => \'node-eid-18-19\',
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
        \'pid\' => \'336\',
        \'source\' => \'node/18\',
        \'alias\' => \'library/newsletters\',
        \'language\' => \'und\',
      ),
      \'cid\' => 0,
      \'last_comment_timestamp\' => \'1485536898\',
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
