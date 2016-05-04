/**
 * @file
 * Javascripts for Farnet project_summary_sheet.
 */

(function ($) {
  Drupal.behaviors.farnet_project_summary_sheet = {
    attach: function (context, settings) {
      var idA1 = 'edit-field-pss-a1-eu-contribution-und-0-value';
      var idA2 = 'edit-field-pss-a2-public-contribution-und-0-value';
      var idA3 = 'edit-field-pss-a3-public-contribution-und-0-value';
      var idA4 = 'edit-field-pss-a4-public-contribution-und-0-value';
      var idTotalA = 'edit-field-pss-a-flag-grant-und-0-value';

      $("#" + idA1 + ", #" + idA2 + ", #" + idA3 + ", #" + idA4).change(function () {
        var a1 = ($("#" + idA1).val().length > 0) ? parseInt($("#" + idA1).val()) : 0;
        var a2 = ($("#" + idA2).val().length > 0) ? parseInt($("#" + idA2).val()) : 0;
        var a3 = ($("#" + idA3).val().length > 0) ? parseInt($("#" + idA3).val()) : 0;
        var a4 = ($("#" + idA4).val().length > 0) ? parseInt($("#" + idA4).val()) : 0;
        var totalA = a1 + a2 + a3 + a4;
        $("#" + idTotalA).val(totalA);
      });

      var idB2 = 'edit-field-pss-b2-lead-partner-und-0-value';
      var idTotalB = 'edit-field-pss-b-beneficiary-und-0-value';

      $("#" + idB2).change(function () {
        var b2 = ($("#" + idB2).val().length > 0) ? parseInt($("#" + idB2).val()) : 0;
        var totalB = b2;
        $("#" + idTotalB).val(totalB);
      });
    }
  }
})(jQuery);
