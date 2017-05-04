/**
 * @file
 * Javascripts for Farnet communities subscriptions.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_communities_subscriptions = {
    attach: function (context, settings) {
      $('#block-subscriptions-ui-0 .panel-heading').click(function(){
        $('#block-subscriptions-ui-0 .panel-body').toggleClass("open");
      });
    }
  }
})(jQuery);
