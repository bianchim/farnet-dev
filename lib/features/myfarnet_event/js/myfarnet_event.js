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
      var idCheckToDate = '#edit-field-dates-und-0-show-todate';

      for (var id in Drupal.settings.datePopup) {
        var datePopup = Drupal.settings.datePopup[id];
        if (datePopup.func == 'datepicker') {
          $('#'+ id).datepicker(datePopup.settings).addClass('date-popup-init');
        }
      }

      var startDate = $(idStartDate);
      var endDate = $(idEndDate);
      var checkToDate = $(idCheckToDate);

      if(startDate.length) {
      /*if (startDate.length > 0 && endDate.length > 0) {*/
        startDate.datepicker('option', {
          onClose: function(selected) {
            if(checkToDate.prop('checked')) {
              console.log('checked');
              endDate.datepicker('option','minDate', selected);
            }
          }
        });
      }
    }
  }
})(jQuery);
