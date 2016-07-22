/**
 * @file
 * Javascripts for Farnet location.
 */

(function ($) {
  Drupal.behaviors.farnet_location_country = {
    attach: function (context, settings) {
      var fields = Drupal.settings.farnet_location;

      $(fields.country).on('keyup', function() {
        if ($(this).val() === '') {
          $(fields.area).val('');
          $(fields.region).val('');
        }
      });
    }
  };

  // Manage the region field autocomplete.
  Drupal.behaviors.farnet_location_region = {
    attach: function (context, settings) {
      var fields = Drupal.settings.farnet_location;

      // On page load, initiate the autocomplete.
      $(document).ready(function () {
        var url = $(fields.region_ac).val();
        var input = $(fields.region).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url, fields.region);
      });

      // When focusing on region field, get the good url in autocomplete.
      function fieldFocus() {
        var url = $(fields.region_ac).val();
        var country = $(fields.country).val();

        if (country !== '') {
          url += '/' + country;
        }

        var input = $(fields.region).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url);
      }

      // Rebuilt the autocomplete and reattach it.
      function recreateAutoComplete(input, url){
        $(input).unbind();
        var acdb = new Drupal.ACDB(url);
        $(input.form).submit(Drupal.autocompleteSubmit);

        new Drupal.jsAC(input, acdb);

        $(fields.region).focus(function () {
          fieldFocus();
        });
      }
    }
  };

  // Manage the area field autocomplete.
  Drupal.behaviors.farnet_location_area = {
    attach: function (context, settings) {
      var fields = Drupal.settings.farnet_location;

      // On page load, initiate the autocomplete.
      $(document).ready(function () {
        var url = $(fields.area_ac).val();
        var input = $(fields.area).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url, fields.area);
      });

      // When focusing on area field, get the good url in autocomplete.
      function fieldFocus() {
        var url = $(fields.area_ac).val();

        var country = $(fields.country).val();
        if (country !== '') {
          url += '/' + country;
        }

        var region = $(fields.region).val();
        if (region !== '') {
          url += '/' + region;
        }

        var input = $(fields.area).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url);
      }

      // Rebuilt the autocomplete and reattach it.
      function recreateAutoComplete(input, url){
        $(input).unbind();
        var acdb = new Drupal.ACDB(url);
        $(input.form).submit(Drupal.autocompleteSubmit);

        new Drupal.jsAC(input, acdb);

        $(fields.area).focus(function () {
          fieldFocus();
        });
      }
    }
  };

})(jQuery);
