<?php

/**
 * @file
 * Override of farnet_core.strongarm.inc.
 */
?>  

<?php if (!empty($permission)): ?>   
  <li id="om-leaf-<?php print $code . '-' . $key; ?>" class="<?php print om_maximenu_link_classes($content, $permission, $count, $total); ?> navigation-main-item">
    <?php print $om_link; ?>
    <?php
      print theme(
        'om_maximenu_submenu_content',
        [
          'content' => $content['content'],
          'maximenu_name' => $maximenu_name,
          'key' => $key,
          'skin' => $skin,
        ]
      );
    ?>
  </li>
<?php endif; ?>
