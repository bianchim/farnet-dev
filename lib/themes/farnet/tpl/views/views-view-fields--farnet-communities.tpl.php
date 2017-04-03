<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */

global $base_url;
?>
<li class="media farnet-listing__item community-summary">
  <div class="media-left">
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['content_count'])) : ?>
        <span class="community-summary__counter"><?php print $fields['content_count']->content; ?></span>
      <?php endif; ?>
      <?php if (!empty($fields['last_updated_date'])) : ?>
        - <span><?php print $fields['last_updated_date']->content; ?></span>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
    </div>
    <div class="btn btn-info farnet-listing__read-more"><?php print $fields['group_group']->content; ?></div>
    <?php
    $path = strip_tags($fields['path']->content);
    $url_preview = drupal_substr($path, 0, strpos($path, "_"));
    $gid = $fields['group_group']->raw;
    ?>
    <?php if (!og_is_member('node', $gid)) : ?>
      <a href="<?php echo $url_preview; ?>/about" class="btn btn-default farnet-listing__read-more">Preview</a>
    <?php endif; ?>
  </div>
</li>
