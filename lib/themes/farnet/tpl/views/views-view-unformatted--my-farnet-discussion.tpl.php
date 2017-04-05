<?php

/**
 * @file
 * Override of views-view-unformatted.tpl.php.
 */
?>
<ul class="media-list farnet-listing">
  <?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
  <?php endforeach; ?>
</ul>
