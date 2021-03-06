/**
 * @file
 * Javascripts for Farnet location.
 */

(function ($) {
  "use strict";

  // Disable the region and area fields to avoid skipping steps of the workflow.
  Drupal.behaviors.farnet_location_form_states = {
    attach: function () {
      // When editing a country, disable area and region fields if needed.
      $('.country_field_form').on('keyup', function () {
        if ($(this).val() === '') {
          $('.region_field_form').val('').attr('disabled', 'disabled');
          $('.area_field_form').val('').attr('disabled', 'disabled');
        }
        else {
          $('.region_field_form').attr('disabled', null);
        }
      });

      // When editing a region, disable the area field if needed.
      $(document).on('keyup', '.region_field_form', function() {
        var parent = $(this).parents('tr:first');

        if ($(this).val() === '') {
          $(parent).find('.area_field_form').val('').attr('disabled', 'disabled');
        }
        else {
          $(parent).find('.area_field_form').attr('disabled', null);
        }
      });

      // Disable the fields on page load if needed.
      if ($('.country_field_form:first').val() === '') {
        $('.region_field_form').attr('disabled', 'disabled');
      }

      $('.region_field_form').each(function() {
        if ($(this).val() === '') {
          $(this).parents('tr:first').find('.area_field_form').attr('disabled', 'disabled');
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
      // Select the parent field collection and get the region field for the search.
      var region = $('#' + target_id).parents('tr:eq(1)').find('.region_field_form:first').val();
      if (region !== '') {
        url += '/' + region;
      }
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
