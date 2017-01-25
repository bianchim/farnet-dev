<?php

/**
 * @file
 * Default theme implementation to display a region.
 *
 * Available variables:
 * - $content: The content for this region, typically blocks.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. Default values can be one or more of the following:
 *   - region: The current template type, i.e., "theming hook".
 *   - region-[name]: The name of the region with underscores replaced with
 *     dashes. Example, the page_top region would have a region-page-top class.
 * - $region: name of the region variable as defined in the theme's .info file.
 *
 * Helper variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $is_admin: Flags true when the current user is an administrator.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 *
 * @see template_preprocess()
 * @see template_preprocess_region()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php if ($content): ?>
  <div class="container <?php print $classes; ?>">
    <div class="col-sm-3 hidden-xs">
      <a href="#" class="logo" title="<?php print t('Home'); ?>"></a>
    </div>
    <div class="col-sm-3 col-sm-push-6 farnet-footer-websites">
      <strong>Other websites:</strong>
      <ul>
        <li><?php print l(t('Maritime affairs'), '#'); ?></li>
        <li><?php print l(t('Fisheries'), '#'); ?></li>
        <li><?php print l(t('Atlas of the Seas'), '#'); ?></li>
      </ul>
    </div>
    <div class="col-sm-6 col-sm-pull-3">
      <?php print $content; ?>
    </div>
  </div>
<?php endif; ?>
