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
    <?php elseif (!empty($fields['field_image'])) : ?>
      <?php print $fields['field_image']->content; ?>
    <?php else : ?>
      <div class="field-content">
        <img typeof="foaf:Image" src="<?php echo path_to_theme(); ?>/framework/images/placeholder.png"/>
      </div>
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
      <?php if (!empty($fields['type'])) : ?>
        - <span class="farnet-listing__important"><?php print $fields['type']->content; ?></span>
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
    <!-- a href="#" class="btn btn-default farnet-listing__read-more">Read more</a -->
  </div>
</li>
