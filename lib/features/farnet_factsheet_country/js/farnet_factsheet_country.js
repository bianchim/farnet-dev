/**
 * @file
 * JavaScripts for Farnet factsheet country.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_factsheet_country = {
    attach: function () {
      var idEmffBudget = '#edit-field-emff-budget-und-0-value';
      var idCoFunding = '#edit-field-co-funding-und-0-value';
      var idTotalBudget = '#edit-field-total-budget-und-0-value';
      var idNumberFlags = '#edit-field-number-flags-und-0-value';
      var idAverage = '#edit-field-average-budget-per-flag-und-0-value';

      var calculateTotal = function () {
        var emffudget = ($(idEmffBudget).val().length > 0) ? parseFloat(swapSeparator($(idEmffBudget).val())) : 0;
        var coFunding = ($(idCoFunding).val().length > 0) ? parseFloat(swapSeparator($(idCoFunding).val())) : 0;
        var total = emffudget + coFunding;

        total = total.toString().substring(0,10);
        total = swapSeparator(total, true);

        $(idTotalBudget).val(total.toFixed(2));
      };

      var calculateAverage = function () {
        var totalBudget = ($(idTotalBudget).val().length > 0) ? parseFloat(swapSeparator($(idTotalBudget).val())) : 0;
        var numberFlags = ($(idNumberFlags).val().length > 0) ? parseFloat(swapSeparator($(idNumberFlags).val())) : 0;

        var average = '';

        if (numberFlags > 0) {
          average = totalBudget / numberFlags;
          average = average.toString().substring(0,10);
          average = swapSeparator(average.toFixed(2), true);
        }

        $(idAverage).val(average);
      };

      $(idEmffBudget + ', ' + idCoFunding).change(calculateTotal);
      $(idEmffBudget + ', ' + idCoFunding + ', ' + idNumberFlags).change(calculateAverage);

      function swapSeparator(str, toComma) {
        toComma = (typeof toComma === 'undefined') ? false : toComma;

        if (toComma) {
          return str.replace('.', ',');
        }
        else {
          return str.replace(',', '.');
        }
      }
    }
  }
})(jQuery);
