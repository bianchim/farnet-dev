<?php

/**
 * @file
 * Override of node.tpl.php for Organisations.
 */
?>

<div class="organisation_node_render"><h3><span><?php print render($title); ?></span></h3>
  <?php
    if (isset($content['field_website']['#items'][0])) {
      $link_item = $content['field_website']['#items'][0];
      print l($link_item['title'], $link_item['url']);
    }

    print render($content['field_organisation_contacts']);
  ?>
</div>
