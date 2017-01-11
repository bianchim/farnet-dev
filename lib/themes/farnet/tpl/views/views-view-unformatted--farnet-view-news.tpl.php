<?php if (!empty($title)): ?>
    <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php foreach ($rows as $id => $row): ?>
    <ul class="media-list farnet-listing">
        <?php print $row; ?>
    </ul>
<?php endforeach; ?>
