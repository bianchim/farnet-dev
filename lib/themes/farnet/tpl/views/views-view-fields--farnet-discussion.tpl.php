<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
global $base_url;
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
        <?php if (!empty($fields['comment_count'])) : ?>
          <?php if ($fields['comment_count']->raw > 0) : ?>
            <?php print t("Last contribution : "); ?>
            <?php if(!empty($fields['uid']->raw)) : ?>
              <a href="<?php print $base_url; ?>/user/<?php print $fields['uid']->raw; ?>" title="<?php print t("View user profile."); ?>">
            <?php endif; ?>
            <?php print $fields['nothing_1']->content; ?>
          <?php else: ?>
            <?php if(!empty($fields['uid']->raw)) : ?>
              <?php print '</a>'; ?>
            <?php endif; ?>
            <?php print t("Last contribution : "); ?>
            <?php if(!empty($fields['uid']->raw)) : ?>
              <a href="<?php print $base_url; ?>/user/<?php print $fields['uid']->raw; ?>" title="<?php print t("View user profile."); ?>">
            <?php endif; ?>
            <?php print $fields['nothing']->content; ?>
          <?php endif; ?>
        <?php else: ?>
          <?php print $fields['nothing']->content; ?>
        <?php endif; ?>
        <?php if(!empty($fields['uid']->raw)) : ?>
          <?php print '</a>'; ?>
        <?php endif; ?>
      <?php endif; ?>
      <?php if (!empty($fields['last_updated'])) : ?>
        | <span><span><?php print $fields['last_updated']->content; ?></span></span>
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
