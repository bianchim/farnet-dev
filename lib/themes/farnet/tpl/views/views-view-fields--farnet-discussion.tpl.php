<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
?>

<li class="media farnet-listing__item dashboard-discussion highlight--background u-p-1em">
  <div class="media-left">
    <?php
    switch ($fields['type']->raw):
      case 'myfarnet_discussion': ?>
        <span class="icon icon--bubble u-color-orange"></span>
        <?php break;

      case 'myfarnet_cooperation_idea': ?>
        <span class="icon icon--lightbulb-o u-color-orange"></span>
        <?php break;

      case 'myfarnet_news': ?>
        <span class="icon icon--newspaper u-color-orange"></span>
        <?php break;

      case 'myfarnet_event': ?>
        <span class="icon icon--calendar u-color-orange"></span>
        <?php break;
    endswitch; ?>
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
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
      <?php if (!empty($fields['last_updated'])) : ?>
        | <span><span><?php print $fields['last_updated']->content; ?></span></span>
      <?php endif; ?>
      <?php if (!empty($fields['comment_count'])) : ?>
        | <span class="icon icon--bubble u-color-light-blue"><span><?php print $fields['comment_count']->content; ?></span></span>
      <?php endif; ?>
    </div>
  </div>
</li>
