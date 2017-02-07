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
        offset: -1
      });
      $('#block-farnet-menu-content-farnet-menu-content-menu-page').affix({
        offset: {
          top: document.getElementById('sidebar-left').getBoundingClientRect().top - document.body.getBoundingClientRect().top,
          bottom: function () {
            return (this.bottom = $('#layout-footer').outerHeight(true))
          }
        }
      })
    }
  }
})(jQuery);
