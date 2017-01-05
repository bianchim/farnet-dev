/**
 * @file
 * JavaScript for FARNET.
 */

(function ($) {
  // Flag strategy.
  export function flagStrategy(selector) {
    jQuery(selector).once('flagStrategy', () = > {
      jQuery(selector).each(function forEachStat() {
        jQuery(this).width(${parseInt(jQuery(this).text(), 10)} % `);
      });
    });
  }
  export default flagStrategy;

  // Partnership.
  FARNET.flagStrategy('.flag-partnership__percent .field-item');
}(jQuery));
