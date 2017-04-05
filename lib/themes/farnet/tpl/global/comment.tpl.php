<?php
/**
 * @file
 * Comments template.
 */
?>
<div class="<?php print $classes; ?> media"<?php print $attributes; ?>>
  <?php print render($title_prefix); ?>
  <h4 class="comment_title">
    <?php if ($new): ?>
      <span class="label label-info"><?php print $new; ?></span>
    <?php endif; ?>
    <?php print $title; ?>
  </h4>
  <?php print render($title_suffix); ?>

  <div class="comment_info">
    <span class="comment_created"><?php print $comment_created; ?></span> - <span class="comment_author"><?php print $author; ?></span>
  </div>

  <div class="comment_content">
    <?php
      hide($content['links']);
      print render($content);
    ?>
  </div>

  <div class="comment_links">
    <?php
      unset($content['links']['comment']['#links']['comment-edit'], $content['links']['comment']['#links']['comment-delete']);
      print render($content['links']);
    ?>
  </div>
</div>
