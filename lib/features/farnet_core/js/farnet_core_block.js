/**
 * @file
 * Javascripts for Farnet core.
 */

(function ($) {
  Drupal.behaviors.farnet_core = {
    attach: function (context, settings) {
      var farnet_settings = Drupal.settings.farnet_core;

      $(farnet_settings.id_form).submit(function (event) {
        event.preventDefault();

        var url = 'printpdf/' + $(this).find(farnet_settings.id_hidden).first().val();
        var language = $(this).find(farnet_settings.id_select).val();

        window.open(Drupal.settings.basePath + url + farnet_settings.delimiter + language);
      });
    }
  }
})(jQuery);
