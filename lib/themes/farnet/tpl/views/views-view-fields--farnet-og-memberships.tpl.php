<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
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
        <span class="icon icon--bubble u-color-light-blue"><span><?php print $fields['content_count']->content; ?></span></span>
      <?php endif; ?>
      <?php if (!empty($fields['last_updated_date'])) : ?>
        | <span><span><?php print $fields['last_updated_date']->content; ?></span></span>
      <?php endif; ?>
    </div>
  </div>
</li>