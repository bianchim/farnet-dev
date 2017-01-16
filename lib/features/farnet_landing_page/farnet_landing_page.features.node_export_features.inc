<?php
/**
 * @file
 * farnet_landing_page.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function farnet_landing_page_node_export_features_default() {
  $node_export = array(
    'code_string' => 'array(
      (object) array(
        \'vid\' => \'7\',
        \'uid\' => \'1\',
        \'title\' => \'Tools\',
        \'log\' => \'Created by admin.\',
        \'status\' => \'1\',
        \'comment\' => \'0\',
        \'promote\' => \'0\',
        \'sticky\' => \'0\',
        \'vuuid\' => \'e59cf43a-452d-4b33-b382-5c5c89b162f8\',
        \'nid\' => \'7\',
        \'type\' => \'landing_page\',
        \'language\' => \'en\',
        \'created\' => \'1484297113\',
        \'changed\' => \'1484297113\',
        \'tnid\' => \'0\',
        \'translate\' => \'0\',
        \'uuid\' => \'0139e8dd-fb20-4f26-8a8b-887e38a5db2a\',
        \'revision_timestamp\' => \'1484297113\',
        \'revision_uid\' => \'1\',
        \'field_ne_body\' => array(),
        \'title_field\' => array(
          \'en\' => array(
            array(
              \'value\' => \'Tools\',
              \'format\' => NULL,
              \'safe_value\' => \'Tools\',
            ),
          ),
        ),
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
              \'created\' => \'1484297113\',
              \'changed\' => \'1484297113\',
            ),
          ),
        ),
        \'title_original\' => \'Tools\',
        \'entity_translation_handler_id\' => \'node-eid-7-7\',
        \'entity_type\' => \'node\',
        \'rdf_mapping\' => array(
          \'rdftype\' => array(
            \'sioc:Item\',
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
          \'source\' => \'node/7\',
          \'alias\' => \'tools\',
          \'language\' => \'und\',
        ),
        \'cid\' => 0,
        \'last_comment_timestamp\' => \'1484297113\',
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
        \'vid\' => \'2\',
        \'uid\' => \'1\',
        \'title\' => \'About\',
        \'log\' => \'Created by admin.\',
        \'status\' => \'1\',
        \'comment\' => \'0\',
        \'promote\' => \'0\',
        \'sticky\' => \'0\',
        \'vuuid\' => \'b797bcd9-7fda-448f-9c10-f86ef8892e8e\',
        \'nid\' => \'2\',
        \'type\' => \'landing_page\',
        \'language\' => \'en\',
        \'created\' => \'1484296837\',
        \'changed\' => \'1484296837\',
        \'tnid\' => \'0\',
        \'translate\' => \'0\',
        \'uuid\' => \'0d99b021-5fc6-44ea-8698-228e4eac3826\',
        \'revision_timestamp\' => \'1484296837\',
        \'revision_uid\' => \'1\',
        \'field_ne_body\' => array(),
        \'title_field\' => array(
          \'en\' => array(
            array(
              \'value\' => \'About\',
              \'format\' => NULL,
              \'safe_value\' => \'About\',
            ),
          ),
        ),
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
                \'created\' => \'1484296837\',
                \'changed\' => \'1484296837\',
              ),
            ),
          ),
        \'title_original\' => \'About\',
        \'entity_translation_handler_id\' => \'node-eid-2-2\',
        \'entity_type\' => \'node\',
        \'rdf_mapping\' => array(
          \'rdftype\' => array(
            \'sioc:Item\',
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
          \'pid\' => \'319\',
          \'source\' => \'node/2\',
          \'alias\' => \'about\',
          \'language\' => \'und\',
        ),
        \'cid\' => 0,
        \'last_comment_timestamp\' => \'1484296837\',
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
        \'menu\' => array(
          \'link_title\' => \'About\',
          \'mlid\' => 0,
          \'plid\' => \'0\',
          \'menu_name\' => \'main-menu\',
          \'weight\' => \'-49\',
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
        \'uid\' => \'1\',
        \'title\' => \'Themes\',
        \'log\' => \'Created by admin.\',
        \'status\' => \'1\',
        \'comment\' => \'0\',
        \'promote\' => \'0\',
        \'sticky\' => \'0\',
        \'vuuid\' => \'0bbfe349-dca8-44f7-acb0-7ef4da9babb5\',
        \'nid\' => \'6\',
        \'type\' => \'landing_page\',
        \'language\' => \'en\',
        \'created\' => \'1484297073\',
        \'changed\' => \'1484297073\',
        \'tnid\' => \'0\',
        \'translate\' => \'0\',
        \'uuid\' => \'12ccea54-e77b-4e69-8c44-22bfdb4362b9\',
        \'revision_timestamp\' => \'1484297073\',
        \'revision_uid\' => \'1\',
        \'field_ne_body\' => array(),
        \'title_field\' => array(
          \'en\' => array(
            array(
              \'value\' => \'Themes\',
              \'format\' => NULL,
              \'safe_value\' => \'Themes\',
            ),
          ),
        ),
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
                \'created\' => \'1484297073\',
                \'changed\' => \'1484297073\',
              ),
            ),
          ),
        \'title_original\' => \'Themes\',
        \'entity_translation_handler_id\' => \'node-eid-6-6\',
        \'entity_type\' => \'node\',
        \'rdf_mapping\' => array(
          \'rdftype\' => array(
            \'sioc:Item\',
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
          \'source\' => \'node/6\',
          \'alias\' => \'themes\',
          \'language\' => \'und\',
        ),
        \'cid\' => 0,
        \'last_comment_timestamp\' => \'1484297073\',
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
        \'vid\' => \'4\',
        \'uid\' => \'1\',
        \'title\' => \'On The Ground\',
        \'log\' => \'Created by admin.\',
        \'status\' => \'1\',
        \'comment\' => \'0\',
        \'promote\' => \'0\',
        \'sticky\' => \'0\',
        \'vuuid\' => \'5a99ce7c-65a5-42ae-8c00-b7fe9e21672c\',
        \'nid\' => \'4\',
        \'type\' => \'landing_page\',
        \'language\' => \'en\',
        \'created\' => \'1484297016\',
        \'changed\' => \'1484297016\',
        \'tnid\' => \'0\',
        \'translate\' => \'0\',
        \'uuid\' => \'4f580f75-5363-4a5d-8c8e-c8141047e219\',
        \'revision_timestamp\' => \'1484297016\',
        \'revision_uid\' => \'1\',
        \'field_ne_body\' => array(),
        \'title_field\' => array(
          \'en\' => array(
            array(
              \'value\' => \'On The Ground\',
              \'format\' => NULL,
              \'safe_value\' => \'On The Ground\',
            ),
          ),
        ),
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
                \'created\' => \'1484297016\',
                \'changed\' => \'1484297016\',
              ),
            ),
          ),
        \'title_original\' => \'On The Ground\',
        \'entity_translation_handler_id\' => \'node-eid-4-4\',
        \'entity_type\' => \'node\',
        \'rdf_mapping\' => array(
          \'rdftype\' => array(
            \'sioc:Item\',
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
          \'source\' => \'node/4\',
          \'alias\' => \'on-the-ground\',
          \'language\' => \'und\',
        ),
        \'cid\' => 0,
        \'last_comment_timestamp\' => \'1484297016\',
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
        \'vid\' => \'5\',
        \'uid\' => \'1\',
        \'title\' => \'Library\',
        \'log\' => \'Created by admin.\',
        \'status\' => \'1\',
        \'comment\' => \'0\',
        \'promote\' => \'0\',
        \'sticky\' => \'0\',
        \'vuuid\' => \'8098e175-72ef-4450-bdc1-a7ba105c54a8\',
        \'nid\' => \'5\',
        \'type\' => \'landing_page\',
        \'language\' => \'en\',
        \'created\' => \'1484297049\',
        \'changed\' => \'1484297049\',
        \'tnid\' => \'0\',
        \'translate\' => \'0\',
        \'uuid\' => \'b324ae60-961c-4363-bfde-1ff24f566b30\',
        \'revision_timestamp\' => \'1484297049\',
        \'revision_uid\' => \'1\',
        \'field_ne_body\' => array(),
        \'title_field\' => array(
          \'en\' => array(
            array(
              \'value\' => \'Library\',
              \'format\' => NULL,
              \'safe_value\' => \'Library\',
            ),
          ),
        ),
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
                \'created\' => \'1484297049\',
                \'changed\' => \'1484297049\',
              ),
            ),
          ),
        \'title_original\' => \'Library\',
        \'entity_translation_handler_id\' => \'node-eid-5-5\',
        \'entity_type\' => \'node\',
        \'rdf_mapping\' => array(
          \'rdftype\' => array(
            \'sioc:Item\',
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
          \'source\' => \'node/5\',
          \'alias\' => \'library\',
          \'language\' => \'und\',
        ),
        \'cid\' => 0,
        \'last_comment_timestamp\' => \'1484297049\',
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
        \'uid\' => \'1\',
        \'title\' => \'News & Events\',
        \'log\' => \'Created by admin.\',
        \'status\' => \'1\',
        \'comment\' => \'0\',
        \'promote\' => \'0\',
        \'sticky\' => \'0\',
        \'vuuid\' => \'2e9c8ef0-8805-4072-b78b-fe75620b0647\',
        \'nid\' => \'3\',
        \'type\' => \'landing_page\',
        \'language\' => \'en\',
        \'created\' => \'1484296928\',
        \'changed\' => \'1484296928\',
        \'tnid\' => \'0\',
        \'translate\' => \'0\',
        \'uuid\' => \'f56bdaf2-af08-4145-8dc1-733561745e52\',
        \'revision_timestamp\' => \'1484296928\',
        \'revision_uid\' => \'1\',
        \'field_ne_body\' => array(),
        \'title_field\' => array(
          \'en\' => array(
            array(
              \'value\' => \'News & Events\',
              \'format\' => NULL,
              \'safe_value\' => \'News &amp; Events\',
            ),
          ),
        ),
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
              \'created\' => \'1484296928\',
              \'changed\' => \'1484296928\',
            ),
          ),
        ),
        \'title_original\' => \'News & Events\',
        \'entity_translation_handler_id\' => \'node-eid-3-3\',
        \'entity_type\' => \'node\',
        \'rdf_mapping\' => array(
          \'rdftype\' => array(
            \'sioc:Item\',
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
          \'source\' => \'node/3\',
          \'alias\' => \'news-events\',
          \'language\' => \'und\',
        ),
        \'cid\' => 0,
        \'last_comment_timestamp\' => \'1484296928\',
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
