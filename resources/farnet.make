api = 2
core = 7.x

; ======
; Themes
; ======

; Farnet theme framework
libraries[framework][destination] =  "themes/farnet"
;libraries[framework][directory_name] = framework
libraries[framework][download][type] = "file"
libraries[framework][download][request_type] = "get"
libraries[framework][download][file_type] = "zip"
libraries[framework][download][url] = "https://github.com/ec-europa/farnet-styleguide/releases/download/v4.12.0/framework.zip"
