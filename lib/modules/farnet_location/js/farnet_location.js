/**
 * @file
 * Javascripts for Farnet location.
 */

(function ($) {
  // List the used fields.
  var country_field = '#edit-field-term-country-und';
  var region_field = '#edit-field-region-und-0-value';
  var region_field_ac = '#edit-field-region-und-0-value-autocomplete';
  var area_field = '#edit-field-area-und-0-value';
  var area_field_ac = '#edit-field-area-und-0-value-autocomplete';

  // Manage the region field autocomplete.
  Drupal.behaviors.farnet_location_region = {
    attach: function (context, settings) {
      // On page load, initiate the autocomplete.
      $(document).ready(function () {
        var url = $(region_field_ac).val();
        var input = $(region_field).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url, region_field);
      });

      // When focusing on region field, get the good url in autocomplete.
      function fieldFocus() {
        var url = $(region_field_ac).val();
        var country = $(country_field).val();

        if (country !== '') {
          url += '/' + country;
        }

        var input = $(region_field).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url);
      }

      // Rebuilt the autocomplete and reattach it.
      function recreateAutoComplete(input, url){
        $(input).unbind();
        var acdb = new Drupal.ACDB(url);
        $(input.form).submit(Drupal.autocompleteSubmit);

        new Drupal.jsAC(input, acdb);

        $(region_field).focus(function () {
          fieldFocus();
        });
      }
    }
  };

  // Manage the area field autocomplete.
  Drupal.behaviors.farnet_location_area = {
    attach: function (context, settings) {
      // On page load, initiate athe autocomplete.
      $(document).ready(function () {
        var url = $(area_field_ac).val();
        var input = $(area_field).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url, area_field);
      });

      // When focusing on area field, get the good url in autocomplete.
      function fieldFocus() {
        var url = $(area_field_ac).val();

        var country = $(country_field).val();
        if (country !== '') {
          url += '/' + country;
        }

        var region = $(region_field).val();
        if (region !== '') {
          url += '/' + region;
        }

        var input = $(area_field).attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url);
      }

      // Rebuilt the autocomplete and reattach it.
      function recreateAutoComplete(input, url){
        $(input).unbind();
        var acdb = new Drupal.ACDB(url);
        $(input.form).submit(Drupal.autocompleteSubmit);

        new Drupal.jsAC(input, acdb);

        $(area_field).focus(function () {
          fieldFocus();
        });
      }
    }
  };

})(jQuery);
