<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */
?>

<header>
  <time class="f-news-item__date" datetime="<?php print strip_tags($fields['field_publication_date']->content); ?>" pubdate="pubdate"><?php print strip_tags($fields['field_publication_date']->content); ?></time>
  <span class="f-news-item__type"><?php print strip_tags($fields['type']->content); ?></span>
</header>
<p class="f-news-item__content">
  <?php print strip_tags($fields['title_field']->content, '<a>'); ?>
</p>
