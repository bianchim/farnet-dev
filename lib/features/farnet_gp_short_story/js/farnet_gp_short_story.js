/**
 * @file
 * Javascripts for Farnet GP Short Story feature.
 */

(function ($) {
  Drupal.behaviors.farnet_gp_short_story = {
    attach: function () {
      var idEuContribution = '#edit-field_eu_contribution-und-0-value';
      var idPublicContribution = '#edit-field_other_public_contribution-und-0-value';
      var idPrivateContribution ='#edit-field_private_contribution-und-0-value';
      var idTotalProjectCost = '#edit-field_total_project_cost-und-0-value';

      var calculateTotalProjectCost = function() {
        var euContribution = ($(idEuContribution).val().length > 0) ? parseFloat($(idEuContribution).val()) : 0;
        var publicContribution = ($(idPublicContribution).val().length > 0) ? parseFloat($(idPublicContribution).val()) : 0;
        var privateContribution = ($(idPrivateContribution).val().length > 0) ? parseFloat($(idPrivateContribution).val()) : 0;
        var totalProjectCost = euContribution + publicContribution + privateContribution;
        $(idTotalProjectCost).val(totalProjectCost);
      };

      $(idEuContribution + ', ' + idPublicContribution + ', ' + idPrivateContribution).change(calculateTotalProjectCost);
    }
  }
})(jQuery);
