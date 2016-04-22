/**
 * @file
 * Javascripts for Farnet factsheet_flag.
 */

(function ($) {
  Drupal.behaviors.farnet_factsheet_flag = {
    attach: function (context, settings) {
      //console.log(settings);
      //console.log(context);
      var lang = $('html').attr('lang');
      if (lang == 'en') {
        lang = 'und';
      }
      console.log(lang);

      //console.log('lang : '+lang);
      var idFishing = 'edit-field-ff-fishing-' + lang + '-0-value';
      var idAquaculture = 'edit-field-ff-aquaculture-' + lang + '-0-value';
      var idProcessing = 'edit-field-ff-processing-' + lang + '-0-value';
      var idTotalEmployment = 'edit-field-ff-total-employment-' + lang + '-0-value';

      $("#" + idFishing + ", #" + idAquaculture + ", #" + idProcessing).change(function () {
        var fishingFTE = ($("#" + idFishing).val().length > 0) ? parseInt($("#" + idFishing).val()) : 0;
        var aquacultureFTE = ($("#" + idAquaculture).val().length > 0) ? parseInt($("#" + idAquaculture).val()) : 0;
        var processingFTE = ($("#" + idProcessing).val().length > 0) ? parseInt($("#" + idProcessing).val()) : 0;
        var totalEmploymentFTE = fishingFTE + aquacultureFTE + processingFTE;
        $("#" + idTotalEmployment).val(totalEmploymentFTE)
        console.log("Total FTE : " + totalEmploymentFTE);
      });

      var idMSCoFinancing = 'edit-field-ff-ms-co-financing-' + lang + '-0-value';
      var idEMFF = 'edit-field-ff-emff-' + lang + '-0-value';
      var idTotalPublicBudget = 'edit-field-ff-total-public-budget-' + lang + '-0-value';

      $("#" + idMSCoFinancing + ", #" + idEMFF).change(function () {
        var msCoFinancing = ($("#" + idMSCoFinancing).val().length > 0) ? parseInt($("#" + idMSCoFinancing).val()) : 0;
        var emff = ($("#" + idEMFF).val().length > 0) ? parseInt($("#" + idEMFF).val()) : 0;
        var totalPublicBudget = msCoFinancing + emff;
        $("#" + idTotalPublicBudget).val(totalPublicBudget)
        console.log("Total Public Budget : " + totalPublicBudget + ' - ' + emff+ ' - ' +msCoFinancing);
      });

    }
  }
})(jQuery);
