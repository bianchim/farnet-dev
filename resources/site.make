api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

defaults[projects][subdir] = contrib

projects[comment_og][version] = "1.0"
projects[easy_breadcrumb][version] = "2.12"
projects[features_extra][version] = "1.0"
projects[field_collection][version] = "1.0-beta12"
projects[inline_entity_form][version] = "1.8"
projects[media_oembed][version] = "2.6"
projects[social_media_links][version] = "1.5"
projects[views_infinite_scroll][version] = "2.0"
projects[viewfield][version] = "2.0"
projects[workbench_moderation][version] = "1.4"


; =========
; Patches
; =========

projects[comment_og][patch][] = "https://www.drupal.org/files/issues/comment_og-delete_own_comment.patch"
projects[easy_breadcrumb][patch][] = "https://www.drupal.org/files/issues/easy_breadcrumb-alter_links-2476339-7.patch"
projects[workbench_moderation][patch][] = https://www.drupal.org/files/issues/workbench_moderation-pathauto_alias_issue-2308095-20.patch
; Prevent errors from happening in workbench moderation when using behat
; https://www.drupal.org/node/2645622
projects[workbench_moderation][patch][] = https://www.drupal.org/files/issues/node-deleted-before-shutdown-function-2645622-4.patch


; ======
; Themes
; ======

; Farnet theme framework
libraries[framework][destination] =  "themes/farnet"
libraries[framework][download][type] = "file"
libraries[framework][download][request_type] = "get"
libraries[framework][download][file_type] = "zip"
libraries[framework][download][url] = "https://github.com/ec-europa/farnet-styleguide/releases/download/v4.14.0/framework.zip"
