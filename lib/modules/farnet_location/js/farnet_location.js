/**
 * @file
 * Javascripts for Farnet location.
 */

(function ($) {
  "use strict";

  Drupal.behaviors.farnet_location_country = {
    attach: function () {
      $('.country_field_form').on('keyup', function () {
        if ($(this).val() === '') {
          $('.region_field_form').val('');
          $('.area_field_form').val('');
        }
      });
    }
  };

  // Manage the region field autocomplete.
  Drupal.behaviors.farnet_location_region = {
    attach: function () {
      // On page load, initiate the autocomplete.
      $(document).ready(function () {
        $(document).on('focus', '.region_field_form', function () {
          fieldFocus($(this).attr('id'));
        });
      });
    }
  };

  // Manage the area field autocomplete.
  Drupal.behaviors.farnet_location_area = {
    attach: function () {
      // On page load, initiate the autocomplete.
      $(document).ready(function () {
        $(document).on('focus', '.area_field_form', function () {
          fieldFocus($(this).attr('id'));
        });
      });
    }
  };

  // When focusing on an autocomplete field, get the good url in autocomplete.
  function fieldFocus(target_id) {
    var url = $('#' + target_id + '-autocomplete').val() + '/' + Drupal.settings.farnet_location.form_lang;

    var country = $('.country_field_form:first').val();
    if (country !== '') {
      url += '/' + country;
    }

    if (target_id.indexOf('area') !== -1) {
      url += '/region';
    }

    var input = $('#' + target_id).attr('autocomplete', 'OFF').first();
    recreateAutoComplete(input, url);
  }

  // Rebuilt the autocomplete and reattach it.
  function recreateAutoComplete(inputs, url){
    $(inputs).each(function () {
      var input = this;
      $(input).unbind();
      var acdb = new Drupal.ACDB(url);
      $(input.form).submit(Drupal.autocompleteSubmit);

      new Drupal.jsAC($(input), acdb);

      $(input).focus(function () {
        fieldFocus($(this).attr('id') + '-autocomplete');
      });
    });
  }

})(jQuery);
