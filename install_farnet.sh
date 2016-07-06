./bin/phing setup-behat
cd platform
drush en farnet_core -y
drush fr farnet_core -y
drush en farnet_taxonomy -y
drush fr farnet_taxonomy -y
drush en farnet_user -y
drush en farnet_views -y
drush en farnet_article -y
drush en farnet_factsheet_flag -y
drush en farnet_menu_content -y
drush en farnet_organisation -y
drush en farnet_publication -y
drush en farnet_faq -y
drush en farnet_news -y
drush en farnet_pages -y
drush en farnet_social_media -y
drush en farnet_twitter -y
drush en farnet_event -y
drush en farnet_homepage_highlight -y
drush en farnet_newsletters -y
drush en farnet_project_short_story -y
drush en farnet_social_media_share -y
drush en farnet_factsheet_country -y
drush en farnet_mediagallery -y
drush en farnet_notifications -y
drush en farnet_project_summary_sheet -y
drush en farnet_summary_sheet_method -y
drush cc all
