<?php

/**
 * @file
 * Override of views-view-unformatted.tpl.php.
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <article class="f-news-feed__item f-news-item">
    <?php print $row; ?>
  </article>
<?php endforeach; ?>
