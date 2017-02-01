<?php
/**
 * @file
 * Display a landing page block.
 */
?>
<div id="<?php print $block_html_id; ?>" class="<?php print $classes; ?> <?php print ($panel ? 'clearfix' : ''); ?> col-lg-6 col-md-6 col-sm-6 col-xs-12">

  <?php
    if($panel) {
      print '<div class="panel panel-default">';
    }
  ?>
  <?php print render($title_prefix); ?>
  <?php if ($title && $block->subject): ?>
    <div class="<?php print ($panel ? 'panel-heading' : ''); ?>">
      <?php print $block->subject ?>
    </div>
  <?php endif;?>
  <?php print render($title_suffix); ?>

  <div class="<?php print ($panel && $body_class ? 'panel-body' : ''); ?> content"<?php print $content_attributes; ?>>
    <?php
    print $content;
    ?>
  </div>

  <?php
    if($panel) {
      print '</div>';
    }
  ?>

</div>
