/**
 * @file
 * Javascripts for Farnet user.
 */

(function ($) {
  Drupal.behaviors.farnet_user = {
    attach: function (context, settings) {

      // On page load, initiate athe autocomplete.
      $(document).ready(function () {
        var url = $('#edit-field-organisation-und-0-target-id-autocomplete').val();
        var input = $('#edit-field-organisation-und-0-target-id').attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url);
      });

      // When focusing on organisation field, get the good url in autocomplete.
      function organisationFocus() {
        var url = $('#edit-field-organisation-und-0-target-id-autocomplete').val();
        var country = $('#edit-field-user-country-und').val();

        if (country !== '_none') {
          url += '/' + country;
        }

        var input = $('#edit-field-organisation-und-0-target-id').attr('autocomplete', 'OFF').first();
        recreateAutoComplete(input, url);
      }

      // Rebuilt the autocomplete and reattach it.
      function recreateAutoComplete(input, url) {
        $(input).unbind();
        var acdb = new Drupal.ACDB(url);
        $(input.form).submit(Drupal.autocompleteSubmit);

        new Drupal.jsAC(input, acdb);

        $("#edit-field-organisation-und-0-target-id").focus(function () {
          organisationFocus();
        });
      }
    }
  }
})(jQuery);
