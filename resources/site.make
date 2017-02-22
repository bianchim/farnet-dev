api = 2
core = 7.x

; ===================
; Contributed modules
; ===================

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = "1.0"

projects[media_oembed][subdir] = "contrib"
projects[media_oembed][version] = "2.6"

projects[social_media_links][subdir] = "contrib"
projects[social_media_links][version] = "1.5"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta12"

projects[workbench_moderation][subdir] = "contrib"
projects[workbench_moderation][version] = "1.4"
projects[workbench_moderation][patch][] = https://www.drupal.org/files/issues/workbench_moderation-pathauto_alias_issue-2308095-20.patch
; Prevent errors from happening in workbench moderation when using behat
; https://www.drupal.org/node/2645622
projects[workbench_moderation][patch][] = https://www.drupal.org/files/issues/node-deleted-before-shutdown-function-2645622-4.patch


projects[comment_og][subdir] = "contrib"
projects[comment_og][version] = "1.0"
projects[comment_og][patch][] = "https://www.drupal.org/files/issues/comment_og-delete_own_comment.patch"

projects[viewfield][subdir] = "contrib"
projects[viewfield][version] = "2.0"

projects[inline_entity_form][subdir] = "contrib"
projects[inline_entity_form][version] = "1.8"

projects[easy_breadcrumb][subdir] = "contrib"
projects[easy_breadcrumb][version] = "2.12"
projects[easy_breadcrumb][patch][] = "https://www.drupal.org/files/issues/easy_breadcrumb-alter_links-2476339-7.patch"

; =========
; Libraries
; =========


; ======
; Themes
; ======
