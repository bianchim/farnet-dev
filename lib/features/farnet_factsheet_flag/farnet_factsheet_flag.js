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
      //console.log('lang : '+lang);
      var idFishing = 'edit-field-ff-fishing-' + lang + '-0-value';
      var idAquaculture = 'edit-field-ff-aquaculture-' + lang + '-0-value';
      var idProcessing = 'edit-field-ff-processing-' + lang + '-0-value';
      var idTotalEmployment = 'edit-field-ff-total-employment-' + lang + '-0-value';

      $("#" + idFishing + ", #" + idAquaculture + ", #" + idProcessing).change(function () {
        var fishingFTE = parseInt($("#" + idFishing).val());
        var aquacultureFTE = parseInt($("#" + idAquaculture).val());
        var processingFTE = parseInt($("#" + idProcessing).val());
        var totalEmploymentFTE = fishingFTE + aquacultureFTE + processingFTE;
        $("#" + idTotalEmployment).val(totalEmploymentFTE)
        console.log("Total FTE : " + totalEmploymentFTE);
      });
    }
  }
})(jQuery);
