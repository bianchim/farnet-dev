<?php
/**
 * @file
 * Override om_maximenu_submenu_content.tpl.php.
 */
?>
<?php if (!empty($content)): ?>
  <div class="om-maximenu-content om-maximenu-content-nofade closed">
    <div class="om-maximenu-middle">
      <?php print farnet_om_menu_content_render($content); ?>
      <div class="om-clearfix"></div>
    </div><!-- /.om-maximenu-middle -->
    <div class="om-maximenu-open">
      <input type="checkbox" value="" />
      <?php print t('Stay'); ?>
    </div><!-- /.om-maximenu-open -->
  </div><!-- /.om-maximenu-content -->
<?php endif; ?>
