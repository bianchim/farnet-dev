<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */

global $base_url;
?>
<li class="media farnet-listing__item">
  <div class="media-left">
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['discussion_count'])) : ?>
        <span><?php print $fields['discussion_count']->content; ?></span>
      <?php endif; ?>
      <?php if (!empty($fields['last_updated_date'])) : ?>
        - <span class="farnet-listing__important"><?php print $fields['last_updated_date']->content; ?></span>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_ne_body'])) : ?>
        <?php print $fields['field_ne_body']->content; ?>
      <?php endif; ?>
    </div>
    <div class="btn btn-primary farnet-listing__read-more"><?php print $fields['group_group']->content; ?></div>
    <?php
      $path = strip_tags($fields['path']->content);
      $url_preview = drupal_substr($path, 0, strpos($path, "_"));
    ?>
    <a href="<?php echo $base_url . $url_preview; ?>/preview" class="btn btn-default farnet-listing__read-more">Preview</a>
  </div>
</li>
