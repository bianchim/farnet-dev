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
projects[field_collection][version] = "1.0-beta11"

projects[comment_og][subdir] = "contrib"
projects[comment_og][version] = "1.0"
projects[comment_og][patch][] = "https://www.drupal.org/files/issues/comment_og-add-delete-any-comment-perm-2205115-2.patch"

; =========
; Libraries
; =========

; libphonenumber-for-php
libraries[libphonenumber-for-php][destination] = "libraries"
libraries[libphonenumber-for-php][download][type] = "git"
libraries[libphonenumber-for-php][download][url] = "https://github.com/giggsey/libphonenumber-for-php.git"

; ======
; Themes
; ======
