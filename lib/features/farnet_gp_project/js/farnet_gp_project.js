/**
 * @file
 * Javascripts for Farnet gp_project.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_gp_project = {
    attach: function () {
      var idA1 = '#edit-field-gpp-a1-eu-contribution-und-0-value';
      var idA2 = '#edit-field-gpp-a2-public-contribution-und-0-value';
      var idA3 = '#edit-field-gpp-a3-public-contribution-und-0-value';
      var idA4 = '#edit-field-gpp-a4-public-contribution-und-0-value';
      var idA5 = '#edit-field-a5-public-contribution';
      var idTotalA = '#edit-field-gpp-a-flag-grant-und-0-value';
      var idTotalCost = '#edit-field-gpp-total-project-cost-und-0-value';
      var totalA = 0;
      var totalB = 0;
      var totalCost = 0;

      var calculateA = function () {
        var a1 = ($(idA1).val().length > 0) ? parseFloat($(idA1).val().replace(',', '.')) : 0;
        var a2 = ($(idA2).val().length > 0) ? parseFloat($(idA2).val().replace(',', '.')) : 0;
        var a3 = ($(idA3).val().length > 0) ? parseFloat($(idA3).val().replace(',', '.')) : 0;
        var a4 = ($(idA4).val().length > 0) ? parseFloat($(idA4).val().replace(',', '.')) : 0;

        var a5 = 0;
        $(idA5 + " .field-type-number-float input").each(function () {
          var a5i = ($(this).val().length > 0) ? parseFloat($(this).val().replace(',', '.')) : 0;
          a5 = a5 + a5i;
        });

        totalA = a1 + a2 + a3 + a4 + a5;
        $(idTotalA).val(totalA.toFixed(1).replace('.', ','));
        totalB = ($(idTotalB).val().length > 0) ? parseFloat($(idTotalB).val().replace(',', '.')) : 0;
        totalCost = totalA + totalB;
        $(idTotalCost).val(totalCost.toFixed(1).replace('.', ','));
      };

      $(idA1 + ", " + idA2 + ", " + idA3 + ", " + idA4 + ", " + idA5).change(calculateA);

      $(idA5 + " .field-multiple-table .form-submit").bind("mousedown", function () {
        setTimeout(
          function () {
            calculateA();
          }, 1300
        );
      });

      var idB2 = '#edit-field-gpp-b2-lead-partner-und-0-value';
      var idB1 = '#edit-field-b1-other-contribution';
      var idTotalB = '#edit-field-gpp-b-beneficiary-und-0-value';

      var calculateB = function () {
        var b2 = ($(idB2).val().length > 0) ? parseFloat($(idB2).val().replace(',', '.')) : 0;

        var b1 = 0;
        $(idB1 + " .field-type-number-float input").each(function () {
          var b1i = ($(this).val().length > 0) ? parseFloat($(this).val().replace(',', '.')) : 0;
          b1 = b1 + b1i;
        });

        totalB = b2 + b1;
        $(idTotalB).val(totalB.toFixed(1).replace('.', ','));
        totalA = ($(idTotalA).val().length > 0) ? parseFloat($(idTotalA).val().replace(',', '.')) : 0;
        totalCost = totalA + totalB;
        $(idTotalCost).val(totalCost.toFixed(1).replace('.', ','));
      };

      $(idB2 + ", " + idB1).change(calculateB);

      $(idB1 + " .field-multiple-table .form-submit").bind("mousedown", function () {
        setTimeout(
          function () {
            calculateB();
          }, 1300
        );
      });
    }
  }
})(jQuery);
