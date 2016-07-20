/**
 * @file
 * Javascripts for Farnet factsheet_flag.
 */

(function ($) {
  Drupal.behaviors.farnet_factsheet_flag = {
    attach: function () {
      var idFishing = '#edit-field-ff-fishing-und-0-value';
      var idAquaculture = '#edit-field-ff-aquaculture-und-0-value';
      var idProcessing = '#edit-field-ff-processing-und-0-value';
      var idTotalEmployment = '#edit-field-ff-total-employment-und-0-value';

      var calculateTotalFTE = function () {
        var fishingFTE = ($(idFishing).val().length > 0) ? parseFloat($(idFishing).val()) : 0;
        var aquacultureFTE = ($(idAquaculture).val().length > 0) ? parseFloat($(idAquaculture).val()) : 0;
        var processingFTE = ($(idProcessing).val().length > 0) ? parseFloat($(idProcessing).val()) : 0;
        var totalEmploymentFTE = fishingFTE + aquacultureFTE + processingFTE;
        $(idTotalEmployment).val(totalEmploymentFTE);
      };

      $(idFishing + ', ' + idAquaculture + ',' + idProcessing).change(calculateTotalFTE);

      var idMSCoFinancing = '#edit-field-ff-ms-co-financing-und-0-value';
      var idEMFF = '#edit-field-ff-emff-und-0-value';
      var idTotalPublicBudget = '#edit-field-ff-total-public-budget-und-0-value';

      var calculateTotalPublicBudget = function () {
        var msCoFinancing = ($(idMSCoFinancing).val().length > 0) ? parseFloat($(idMSCoFinancing).val()) : 0;
        var emff = ($(idEMFF).val().length > 0) ? parseFloat($(idEMFF).val()) : 0;
        var totalPublicBudget = msCoFinancing + emff;
        $(idTotalPublicBudget).val(totalPublicBudget);
      };

      $(idMSCoFinancing + ', ' + idEMFF).change(calculateTotalPublicBudget);
    }
  }
})(jQuery);
