/**
 * @file
 * Javascripts for Farnet Faq.
 */

(function ($) {
  Drupal.behaviors.farnet_faq = {
    attach: function (context, settings) {
      var lang = $('html').attr('lang');
      var title = '#edit-title-field-' + lang + '-0-value';
      var idShortTitle = '#edit-field-short-title-' + lang + '-0-value';
      if (!($(title).length)) {
        title = '#edit-title-field-und-0-value';
        idShortTitle = '#edit-field-short-title-und-0-value';
      }
      $(title).change(function () {
        $(idShortTitle).val($(title).val());
      });
    }
  }
})(jQuery);
