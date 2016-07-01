/**
 * @file
 * Javascripts for Farnet factsheet country.
 */

(function ($) {
  Drupal.behaviors.farnet_factsheet_country = {
    attach: function () {
      var idEmffBudget = '#edit-field-emff-budget-und-0-value';
      var idCoFunding = '#edit-field-co-funding-und-0-value';
      var idTotalBudget ='#edit-field-total-budget-und-0-value';
      var idNumberFlags = '#edit-field-number-flags-und-0-value';
      var idAverage = '#edit-field-average-budget-per-flag-und-0-value';

      var calculateTotal = function() {
        var emffudget = ($(idEmffBudget).val().length > 0) ? parseInt($(idEmffBudget).val()) : 0;
        var coFunding = ($(idCoFunding).val().length > 0) ? parseInt($(idCoFunding).val()) : 0;
        var total = emffudget + coFunding;
        $(idTotalBudget).val(total);
      };

      var calculateAverage = function() {
        var totalBudget = ($(idTotalBudget).val().length > 0) ? parseInt($(idTotalBudget).val()) : 0;
        var numberFlags = ($(idNumberFlags).val().length > 0) ? parseInt($(idNumberFlags).val()) : 0;

        var average = totalBudget / numberFlags;
        $(idAverage).val(average);
      };

      $(idEmffBudget + ', ' + idCoFunding).change(calculateTotal);
      $(idNumberFlags).change(calculateAverage);
    }
  }
})(jQuery);
