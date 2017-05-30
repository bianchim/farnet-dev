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
    <?php if (!empty($fields['field_image'])) : ?>
      <?php print $fields['field_image']->content; ?>
    <?php endif; ?>
  </div>
  <div class="media-body">
    <div class="field-content">
      <h4 class="media-heading farnet-listing__heading">
        <?php if (!empty($fields['title_field'])) : ?>
          <?php print $fields['title_field']->content . ' / '; ?>
        <?php endif; ?>
        <?php if (!empty($fields['field_city'])) : ?>
          <?php print $fields['field_city']->content . ' - '; ?>
        <?php endif; ?>
        <?php if (!empty($fields['field_term_country'])) : ?>
          <?php print $fields['field_term_country']->content; ?>
        <?php endif; ?>
      </h4>
    </div>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['field_dates'])) : ?>
        <span><?php print $fields['field_dates']->content; ?></span>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
      <?php if (!empty($fields['field_abstract'])) : ?>
        <?php print $fields['field_abstract']->content; ?>
      <?php endif; ?>
    </div>
  </div>
</li>
