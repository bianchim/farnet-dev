/**
 * @file
 * JavaScript for FARNET main menu.
 */

(function ($) {
  export function flagStrategy(selector) {
    jQuery(selector).once('flagStrategy', () = > {
      jQuery(selector).each(function forEachStat() {
        jQuery(this).width(${parseInt(jQuery(this).text(), 10)} % `);
      });
    });
  }
  export default flagStrategy;
}(jQuery));
