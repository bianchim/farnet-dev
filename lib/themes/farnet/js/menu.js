/**
 * @file
 * JavaScript for FARNET main menu.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnetMenu = {
    attach: function (context, settings) {

      // Initialize the menu state.
      var state = '';

      // On window resize check if we need to change the menu behavior.
      $(window).resize(changeMenu);

      // Check if we went to a new mode (mobile / desktop).
      function changeMenu() {
        var new_state = 'desktop';
        if ($(window).width() <= 768) {
          new_state = 'mobile';
        }

        if (state !== new_state) {
          state = new_state;
          var changeTo = 'to' + state;

          Drupal.behaviors.farnetMenu[changeTo]();
        }
      }

      // Trigger once on page opening.
      changeMenu();

      // Rebind the click event to the menu button since it was buggy by default.
      var $menuButton = $('#menu-button');
      $menuButton
        .off('click')
        .click(function() {
          $('#om-maximenu-main-menu').slideToggle();
        });

      // On mobile close by default.
      if ($(window).width <= 768) {
        $menuButton.click();
      }
    },
    // Change the menu behavior to mobile.
    tomobile: function() {
      $('.navigation-main .navigation-main-item .om-maximenu-content').hide();

      $('.navigation-main-item .navigation-main-link').click(function (e) {
        e.preventDefault();
        var $elem = $(this).parent().find('.om-maximenu-content:first');

        if ($elem.hasClass('menuDisplay')) {
          $elem.removeClass('menuDisplay');
        }
        else {
          $elem.addClass('menuDisplay');
        }
      });
    },
    // Change the menu behavior to desktop.
    todesktop: function () {
      $('.navigation-main .navigation-main-item .om-maximenu-content').css('display', '');
      $('.navigation-main-item .navigation-main-link').off('click');

      var $menuButton = $('#menu-button');
      if ($menuButton.hasClass('menu-open')) {
        $menuButton.click();
      }
    }
  };

}(jQuery));
