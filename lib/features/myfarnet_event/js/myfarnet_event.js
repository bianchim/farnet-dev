/**
 * @file
 * Javascripts for Farnet myfarnet_event.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_factsheet_flag = {
    attach: function () {
      var idStartDate = '#edit-field-dates-und-0-value-datepicker-popup-0';
      var idEndDate = '#edit-field-dates-und-0-value2-datepicker-popup-0';
      var idTimeStartDate = '#edit-field-dates-und-0-value-timeEntry-popup-1';
      var idTimeEndDate = '#edit-field-dates-und-0-value2-timeEntry-popup-1';
      var idCheckToDate = '#edit-field-dates-und-0-show-todate';

      for (var id in Drupal.settings.datePopup) {
        var datePopup = Drupal.settings.datePopup[id];
        if (datePopup.func == 'datepicker') {
          $('#'+ id).datepicker(datePopup.settings).addClass('date-popup-init');
        }
      }

      var startDate = $(idStartDate);
      var endDate = $(idEndDate);
      var timeStartDate = $(idTimeStartDate);
      var timeEndDate = $(idTimeEndDate);
      var checkToDate = $(idCheckToDate);

      checkToDate.change(function() {
        if(checkToDate.prop('checked')) {
          var selectedDate = Date.parse(startDate.datepicker('getDate'));
          endDate.datepicker('setDate', selectedDate);
          timeEndDate.val(timeStartDate.val());
        } else {
          endDate.datepicker('setDate', null);
          timeEndDate.val('');
        }
      });

      if(startDate.length) {
        startDate.datepicker('option', {
          onClose: function(selected) {
            if(checkToDate.prop('checked')) {
              endDate.datepicker('option','minDate', selected);
            }
          }
        });
      }
    }
  }
})(jQuery);
