/**
 * @file
 * Javascripts for Farnet Faq.
 */

(function ($) {
  Drupal.behaviors.farnet_faq = {
    attach: function (context, settings) {
      var lang = $('html').attr('lang');
      if (lang == 'en') {
        lang = 'und';
      }
      var title = '#edit-title-field-' + lang + '-0-value';
      $(title).change(function () {
        var idShortTitle = '#edit-field-short-title-' + lang + '-0-value';
        console.log($(idShortTitle).val().length);
        if ($(idShortTitle).val() == undefined || $(idShortTitle).val().length == 0) {
          $(idShortTitle).val($(title).val());
          console.log($(idShortTitle).val());
        }
        else {
          console.log('Already completed');
        }
      });
    }
  }
})(jQuery);
