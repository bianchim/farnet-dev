<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
global $base_url;
?>

<li class="media farnet-listing__item">
  <div class="media-left">
    <?php if (!empty($fields['field_picture'])) : ?>
      <?php print $fields['field_picture']->content; ?>
    <?php else : ?>
      <div class="field-content">
        <img typeof="foaf:Image" src="<?php echo $base_url . '/' . path_to_theme(); ?>/framework/images/placeholder.png"/>
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
    </div>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['field_term_theme'])) : ?>
      <?php print $fields['field_term_theme']->content; ?>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
    </div>
    <!-- a href="#" class="btn btn-default farnet-listing__read-more">Read more</a -->
  </div>
</li>
