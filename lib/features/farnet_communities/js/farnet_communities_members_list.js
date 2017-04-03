/**
 * @file
 * Javascripts for Farnet communities members list.
 *
 * Force the use of ASC or DESC ordering on views filters for members.
 */

"use strict";

(function ($) {
  Drupal.behaviors.farnet_communities_members_list = {
    attach: function () {
      // Manipulate the views exposed form.
      var $form = $('#views-exposed-form-farnet-communities-members-page');

      // Set form action in order to force staying on the same page.
      $form.prop('action', Drupal.settings.request_path);

      var $orderby = $form.find('#edit-sort-order');
      var $select = $form.find('#edit-sort-by');

      $select.on('change', function(e) {
        var val = $(this).val();

        // Work on the sorting field value.
        switch (val) {
          case 'field_user_country_tid':
          case 'field_lastname_value':
            $orderby.val('ASC');
            break;

          // Order by default for 'field_lastname_value_1' and 'last_commented'.
          default:
            $orderby.val('DESC');
        }
      });
    }
  }
})(jQuery);
