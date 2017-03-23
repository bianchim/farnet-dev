<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
global $base_url;
?>

<li class="media farnet-listing__item">
  <div class="media-left">
    <?php
    switch ($fields['type']->raw):
      case 'myfarnet_discussion': ?>
        <img typeof="foaf:Image" src="<?php echo $base_url . '/' . path_to_theme(); ?>/framework/images/placeholder.png"/>
        <?php break;
      case 'myfarnet_cooperation_idea': ?>
        <img typeof="foaf:Image" src="<?php echo $base_url . '/' . path_to_theme(); ?>/framework/images/placeholder.png"/>
        <?php break;
      case 'myfarnet_news': ?>
        <img typeof="foaf:Image" src="<?php echo $base_url . '/' . path_to_theme(); ?>/framework/images/placeholder.png"/>
        <?php break;
      case 'myfarnet_event': ?>
        <img typeof="foaf:Image" src="<?php echo $base_url . '/' . path_to_theme(); ?>/framework/images/placeholder.png"/>
        <?php break;
    endswitch; ?>
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title_field'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title_field']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['name'])) : ?>
        <span class="farnet-listing__important"><?php print $fields['name']->content; ?></span>
      <?php endif; ?>
      <?php if (!empty($fields['created'])) : ?>
        | <span><?php print $fields['created']->content; ?></span>
      <?php endif; ?>
      <?php if (!empty($fields['comment_count'])) : ?>
        | <span><?php print $fields['comment_count']->content; ?></span>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php else : ?>
        <?php print $fields['field_ne_body']->content; ?>
      <?php endif; ?>
    </div>
    <!-- a href="#" class="btn btn-default farnet-listing__read-more">Read more</a -->
  </div>
</li>
