<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
?>

<li class="media farnet-listing__item dashboard-discussion highlight--background u-p-1em">
  <div class="media-left">
    <span class="icon icon--lightbulb-o u-color-orange"></span>
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title_field'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title_field']->content; ?></h4>
    <?php endif; ?>
    <div class="media-heading farnet-listing__heading">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['nothing'])) : ?>
        <?php print $fields['nothing']->content; ?>
      <?php endif; ?>
      <?php if (!empty($fields['comment_count'])) : ?>
        <?php if ($fields['comment_count']->raw > 0) : ?>
          <a href="<?php print $base_url; ?>/<?php print $path_alias; ?>#comments" id="bubble-counter">
        <?php endif; ?>
          | <span class="icon icon--bubble u-color-light-blue"><span><?php print $fields['comment_count']->content; ?></span></span>
        <?php if ($fields['comment_count']->raw > 0) : ?>
          <?php print '</a>'; ?>
        <?php endif; ?>
      <?php endif; ?>
    </div>
  </div>
</li>
