/**
 * @file
 * Javascripts for Farnet Core for Front.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_core = {
    attach: function () {
      $('#button-show-detail').click(function() {
        $('.field-contact-hidden').toggle();
        $('#button-show-detail').hide();
      });
    }
  }
})(jQuery);
