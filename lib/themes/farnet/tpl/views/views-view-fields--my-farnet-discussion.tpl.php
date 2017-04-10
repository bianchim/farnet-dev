<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
?>

<li class="media farnet-listing__item dashboard-discussion highlight--background u-p-1em">
  <div class="media-left">
    <span class="icon icon--bubble u-color-orange"></span>
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['nothing'])) : ?>
        <?php print $fields['nothing']->content; ?>
      <?php endif; ?>
      <?php if (!empty($fields['created'])) : ?>
        | <span><span><?php print $fields['created']->content; ?></span></span>
      <?php endif; ?>
      <?php if (!empty($fields['comment_count'])) : ?>
        | <span class="icon icon--bubble u-color-light-blue"><span><?php print $fields['comment_count']->content; ?></span></span>
      <?php endif; ?>
    </div>
  </div>
</li>
