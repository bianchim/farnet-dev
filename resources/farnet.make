api = 2
core = 7.x

; ======
; Themes
; ======

; Farnet theme framework
libraries[themes_farnet_framework][destination] =  "themes/farnet"
libraries[themes_farnet_framework][directory_name] = framework
libraries[themes_farnet_framework][download][type] = "file"
libraries[themes_farnet_framework][download][request_type] = "get"
libraries[themes_farnet_framework][download][file_type] = "zip"
libraries[themes_farnet_framework][download][url] = "https://github.com/ec-europa/farnet-styleguide/releases/download/v2.1.0/framework.zip"
