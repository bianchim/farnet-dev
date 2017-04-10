<?php
/**
 * @file
 * Community menu block.
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> <?php print ($panel ? 'panel panel-default clearfix' : ''); ?>">

  <?php print render($title_prefix); ?>
  <?php if ($title && $block->subject): ?>
    <div class="<?php print ($panel ? 'panel-heading' : ''); ?> community-navigation__heading">
      <?php print $block->subject ?>
    </div>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <div class="<?php print ($panel && $body_class ? 'panel-body' : ''); ?> content"<?php print $content_attributes; ?>>
    <?php
    print $content;
    ?>
  </div>

</div>
