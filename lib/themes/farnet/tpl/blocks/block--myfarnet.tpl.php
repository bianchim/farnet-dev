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
  <?php print render($title_suffix); ?>
  <div class="content"<?php print $content_attributes; ?>>
    <?php print $content; ?>
  </div>
</div>
