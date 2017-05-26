<?php
/**
 * @file
 * Display a landing page block.
 */
?>

<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> clearfix">
  <?php print render($title_prefix); ?>
    <?php if ($title && $block->subject): ?>
      <h1 class="title-small">
        <?php print $block->subject ?>
      </h1>
    <?php endif;?>
  <div class="<?php print ($panel ? 'panel panel-default' : ''); ?> clearfix">
    <?php print render($title_suffix); ?>
    <div class="<?php print ($panel ? 'panel-body' : ''); ?> content"<?php print $content_attributes; ?>>
      <?php print $content; ?>
    </div>
  </div>
</div>
