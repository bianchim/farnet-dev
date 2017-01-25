<?php

/**
 * @file
 * Override of views-view-unformatted.tpl.php.
 */
?>
<?php foreach ($rows as $id => $row): ?>
  <ul class="media-list farnet-listing">
    <?php print $row; ?>
  </ul>
<?php endforeach; ?>
