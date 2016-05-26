/**
 * @file
 * Javascripts for Farnet Faq.
 */

(function ($) {
  Drupal.behaviors.farnet_faq = {
    attach: function (context, settings) {
      $('body').scrollspy({ target: '#block-farnet-core-farnet-core-menu-page' });
      $('#block-farnet-core-farnet-core-menu-page').affix({
        offset: {
          top: 330,
          bottom: function () {
            return (this.bottom = $('#layout-footer').outerHeight(true))
          }
        }
      })
    }
  }
})(jQuery);