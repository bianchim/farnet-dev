<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
global $base_url;
?>
zzzzzzzzzzzzzzzzzzzz
<li class="media farnet-listing__item">
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
      <?php if (!empty($fields['field_abstract'])) : ?>
        <?php print $fields['field_abstract']->content; ?>
      <?php endif; ?>
    </div>
    <!-- a href="#" class="btn btn-default farnet-listing__read-more">Read more</a -->
  </div>
</li>
