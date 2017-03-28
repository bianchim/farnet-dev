<?php

/**
 * @file
 * Override of node.tpl.php for MyFarnet Discussion.
 */
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if ($prefix_display):?>
      <div class="node-private label label-default clearfix">
        <span class="glyphicon glyphicon-lock"></span>
        <?php print t('This content is private'); ?>
      </div>
    <?php endif; ?>

    <?php
      if (isset($comment_count)) {
        print '<div>';
        print t('Comments :');
        print $comment_count;
        print '</div>';
      }
    ?>

    <div class="media media--farnet">
      <?php if (!empty($content['field_picture'])) : ?>
        <div class="media-left ">
          <?php print render($content['field_picture']); ?>
        </div>
      <?php endif; ?>
      <div class="media-body">
        <?php if (!empty($content['field_ne_body'])) : ?>
          <?php print render($content['field_ne_body']); ?>
        <?php endif; ?>
      </div>
    </div>

    <div class="link-wrapper right"></div>

    <?php if (!empty($content['field_fc_document'])) : ?>
      <div id="group-myfarnet-discussion-documents" class="group-myfarnet-discussion-documents field-group-tab">
        <h3 class="fr-heading"><span><?php print $content['field_fc_document']['#title']; ?></span></h3>
        <?php print render($content['field_fc_document']); ?>
      </div>
    <?php endif; ?>

    <?php print render($content['links']); ?>

    <?php print render($content['comments']); ?>

  </div>
</div>
