<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
global $base_url;
$community_path = $base_url . '/' . $path_alias . '/#whats-news';
?>

<li class="media dashboard-community">
  <div class="media-left">
    <?php if (!empty($fields['field_picture'])) : ?>
      <?php print $fields['field_picture']->content; ?>
    <?php endif; ?>
  </div>
  <div class="media-body">
    <div class="media-heading">
      <?php if (!empty($fields['title'])) : ?>
        <?php print $fields['title']->content; ?>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['content_count'])) : ?>
        <a href="<?php print $community_path; ?>" id="bubble-counter">
          <span class="community-summary__counter"><span><?php print $fields['content_count']->content; ?></span></span>
        </a>
      <?php endif; ?>
      <?php if (!empty($fields['last_updated_date'])) : ?>
        | <span><span><?php print $fields['last_updated_date']->content; ?></span></span>
      <?php endif; ?>
    </div>
  </div>
</li>
