/**
 * @file
 * Javascripts for Farnet Faq.
 */

(function ($) {
  Drupal.behaviors.farnet_faq = {
    attach: function (context, settings) {
      var lang = $('html').attr('lang');
      console.log(lang);
      console.log(context);
      var title = '#edit-title-field-' + lang + '-0-value';
      var idShortTitle = '#edit-field-short-title-' + lang + '-0-value';
      if ($(title).length) {
        console.log('Language defined');
      }
      else {
        console.log('Language undefined');
        title = '#edit-title-field-und-0-value';
        idShortTitle = '#edit-field-short-title-und-0-value';
      }
      $(title).change(function () {
        var idShortTitle = '#edit-field-short-title-und-0-value';
        $(idShortTitle).val($(title).val());
      });
    }
  }
})(jQuery);
