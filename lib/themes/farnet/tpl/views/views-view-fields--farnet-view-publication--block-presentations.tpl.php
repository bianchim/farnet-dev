<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
?>

<li class="media farnet-listing__item">
  <div class="media-left">
    <?php if (!empty($fields['field_picture'])) : ?>
      <?php print $fields['field_picture']->content; ?>
    <?php endif; ?>
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['field_publication_date'])) : ?>
        <span><?php print $fields['field_publication_date']->content; ?></span>
      <?php endif; ?>
      <?php if (!empty($fields['field_term_country'])) : ?>
      <?php print ' / ' . $fields['field_term_country']->content; ?>
      <?php endif; ?>
      <?php if (!empty($fields['field_term_theme'])) : ?>
      <?php print ' / ' . $fields['field_term_theme']->content; ?>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
    </div>
    <a href="/library/presentations" class="btn btn-default farnet-listing__read-more"><?php print t('More presentations'); ?></a>
  </div>
</li>
