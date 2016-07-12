/**
 * @file
 * Javascripts for Farnet GP Short Story feature.
 */

(function ($) {
  Drupal.behaviors.farnet_gp_short_story = {
    attach: function () {
      var idEuContribution = '#edit-field-eu-contribution-und-0-value';
      var idPublicContribution = '#edit-field-other-public-contribution-und-0-value';
      var idPrivateContribution ='#edit-field-private-contribution-und-0-value';
      var idTotalProjectCost = '#edit-field-total-cost-und-0-value';

      var calculateTotalProjectCost = function() {
        var euContribution = ($(idEuContribution).val().length > 0) ? parseFloat($(idEuContribution).val()) : 0;
        var publicContribution = ($(idPublicContribution).val().length > 0) ? parseFloat($(idPublicContribution).val()) : 0;
        var privateContribution = ($(idPrivateContribution).val().length > 0) ? parseFloat($(idPrivateContribution).val()) : 0;
        var totalProjectCost = euContribution + publicContribution + privateContribution;
        if(totalProjectCost > 0) {
          $(idTotalProjectCost).val(totalProjectCost);
        }
      };

      var calculateTotalFieldset = function(idElement, nameField) {
        $(idElement).closest("fieldset").addClass('fieldsetToUpdate');
        //console.log('Start Fieldset ---------------');
        var total = 0;
        $('.fieldsetToUpdate :input[type="text"]').each(function() {
          var idInputElement = '#' + $(this).attr('id');
          //console.log(idInputElement);
          var valInpuElement = ($(idInputElement).val().length > 0) ? parseFloat($(idInputElement).val()) : 0;
          total += valInpuElement;
        });
        //console.log('Public Contribution :' + total);
        //console.log('---------------');
        $('.fieldsetToUpdate').parents("fieldset").first().addClass("fieldsetPhaseToUpdate");
        //console.log('Start Phase ---------------');
        $('.fieldsetPhaseToUpdate :input[type="text"]').each(function() {
          var idInputElement = '#' + $(this).attr('id');
          //console.log(idInputElement);
          if (idInputElement.includes(nameField)) {
            if(total > 0) {
              $(idInputElement).val(total);
            }
          }
        });
        //console.log('---------------');
        calculateTotalPhase();
        $('.fieldsetToUpdate').closest('#group-phase').removeClass("fieldsetPhaseToUpdate");
        $(idElement).closest("fieldset").removeClass('fieldsetToUpdate');
      };

      var calculateTotalPhase = function() {
        //console.log('Start Phase ---------------');
        var totalPhase = 0;
        var idTotalPhase = '';
        $('.fieldsetPhaseToUpdate :input[type="text"]').each(function() {
          var idInputElement = '#' + $(this).attr('id');
          //console.log(idInputElement);
          if ((idInputElement.includes('field-eu-contribution-und'))
            || (idInputElement.includes('field-other-public-contribution-und'))
            || (idInputElement.includes('field-private-contribution-und'))) {
            var idInputElement = '#' + $(this).attr('id');
            //console.log(idInputElement);
            var valInpuElement = ($(idInputElement).val().length > 0) ? parseFloat($(idInputElement).val()) : 0;
            totalPhase += valInpuElement;
          } else if(idInputElement.includes('field-total-cost-und')) {
            //console.log('field-total-cost-und');
            idTotalPhase = idInputElement;
          }
        });
        if(totalPhase > 0) {
          $(idTotalPhase).val(totalPhase);
        }
        //console.log('---------------');
      };

      var calculateContribution = function(idFieldToUpdate, nameField) {
        //console.log('updateEuContribution'+ idFieldToUpdate + ' - ' +nameField);
        var totalContribution = 0;
        $('#edit-field-collection-project-phase :input[type="text"]').each(function() {
          var idElement = '#' + $(this).attr('id');
          //console.log(idElement + $(idElement).val());
          if (idElement.includes(nameField)) {
            var valElement = ($(idElement).val().length > 0) ? parseFloat($(idElement).val()) : 0;
            totalContribution += valElement;
          }
        });
        if(totalContribution > 0) {
          $(idFieldToUpdate).val(totalContribution);
        }
      };

      $(idEuContribution + ', ' + idPublicContribution + ', ' + idPrivateContribution).change(calculateTotalProjectCost);

      $('#edit-field-collection-project-phase :input[type="text"]').change(function(event) {
        event.stopPropagation();
        console.log(event.target.id);
        /* console.log(event.target.name); */
        // Get id Element changed.
        var idElement = '#' + event.target.id;
        var fieldsetId = $(idElement).closest("fieldset").attr('id');
        //console.log("fieldsetId " + fieldsetId);

        if(fieldsetId.includes('group-eu-contribution')) {
          //console.log("Function for group-eu-contribution");
          calculateTotalFieldset(idElement, 'eu-contribution-und');
        } else if (fieldsetId.includes('group-other-public-contribution')) {
          //console.log("Function for group-other-public-contribution");
          calculateTotalFieldset(idElement, 'other-public-contribution-und');
        } else if (fieldsetId.includes('group-phase')) {
          //console.log("Function for group-phase");
          $(idElement).closest("fieldset").addClass("fieldsetPhaseToUpdate");
          calculateTotalPhase();
          $(idElement).closest("fieldset").removeClass("fieldsetPhaseToUpdate");
        }

        // Update Contribution.
        calculateContribution(idEuContribution, 'field-eu-contribution-und');
        calculateContribution(idPublicContribution, 'field-other-public-contribution-und');
        calculateContribution(idPrivateContribution, 'field-private-contribution-und');

        // Recalculate Project.
        calculateTotalProjectCost();

        /* console.log(event); */
      });
    }
  }
})(jQuery);
