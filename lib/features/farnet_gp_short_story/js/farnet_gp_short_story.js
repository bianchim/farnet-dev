/**
 * @file
 * Javascripts for Farnet GP Short Story feature.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_gp_short_story = {
    attach: function () {
      // Calculate Budget.
      var fields = {
        'idbudget' : '#edit-field-budget-und-0-value',
        // EU contribution.
        'ideuContribution' : '#edit-field-eu-contribution-und-0-value',
        'idEMFF' : '#edit-field-emff-und-0-value',
        'idESF' : '#edit-field-esf-und-0-value',
        'idERDF' : '#edit-field-erdf-und-0-value',
        'idEARDF' : '#edit-field-eardf-und-0-value',
        'idOtherEuFounding' : '#edit-field-other-eu-funding-und-0-value',
        // Other Public contribution.
        'idOtherPublic' : '#edit-field-other-public-contribution-und-0-value',
        'idNational' : '#edit-field-funding-national-und-0-value',
        'idRegional' : '#edit-field-funding-regional-und-0-value',
        'idLocal' : '#edit-field-funding-local-und-0-value',
        // Private contribution.
        'idPrivateContribution' : '#edit-field-private-contribution-und-0-value',
      };

      function calculateBudget() {
        calculateEuContribution();
        calculateOtherContribution();

        var value = (($(fields['ideuContribution']).val().length > 0) ? parseFloat($(fields['ideuContribution']).val().replace(',', '.')) : 0) +
          (($(fields['idOtherPublic']).val().length > 0) ? parseFloat($(fields['idOtherPublic']).val().replace(',', '.')) : 0) +
          (($(fields['idPrivateContribution']).val().length > 0) ? parseFloat($(fields['idPrivateContribution']).val().replace(',', '.')) : 0);

        $(fields['idbudget']).val(value.toFixed(2).replace('.', ','));
      }

      function calculateEuContribution() {
        var value = (($(fields['idEMFF']).val().length > 0) ? parseFloat($(fields['idEMFF']).val().replace(',', '.')) : 0) +
          (($(fields['idESF']).val().length > 0) ? parseFloat($(fields['idESF']).val().replace(',', '.')) : 0) +
          (($(fields['idERDF']).val().length > 0) ? parseFloat($(fields['idERDF']).val().replace(',', '.')) : 0) +
          (($(fields['idEARDF']).val().length > 0) ? parseFloat($(fields['idEARDF']).val().replace(',', '.')) : 0) +
          (($(fields['idOtherEuFounding']).val().length > 0) ? parseFloat($(fields['idOtherEuFounding']).val().replace(',', '.')) : 0);

        $(fields['ideuContribution']).val(value.toFixed(2).replace('.', ','));
      }

      function calculateOtherContribution() {
        var value = (($(fields['idNational']).val().length > 0) ? parseFloat($(fields['idNational']).val().replace(',', '.')) : 0) +
          (($(fields['idRegional']).val().length > 0) ? parseFloat($(fields['idRegional']).val().replace(',', '.')) : 0) +
          (($(fields['idLocal']).val().length > 0) ? parseFloat($(fields['idLocal']).val().replace(',', '.')) : 0);

        $(fields['idOtherPublic']).val(value.toFixed(2).replace('.', ','));
      }

      for (var field in fields) {
        $(fields[field]).change(calculateBudget);
      }
    }
  }
})(jQuery);
