/**
 * @file
 * Javascripts for Farnet menu content.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_menu_content = {
    attach: function (context, settings) {
      $('body').scrollspy({
        target: '#block-farnet-menu-content-farnet-menu-content-menu-page',
        offset: 0
      });
      $('#block-farnet-menu-content-farnet-menu-content-menu-page').affix({
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
