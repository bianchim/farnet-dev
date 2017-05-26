<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */

global $base_url;
$link_user = $base_url . '/' . drupal_get_path_alias('user/' . $fields['uid']->raw);
?>

<div class="views-field views-field-user-profile user-profile">
  <div class="field-content">
    <div class="col-xs-3 col-md-1 col-xs-1">
      <?php print $fields['picture']->content; ?>
    </div>
    <div class="col-xs-9 col-md-11 col-xs-11">
      <div class="user-profile-top">
        <?php if (!empty($fields['nothing'])) : ?>
          <a class="pull-left u-fw-bold" href="<?php echo $link_user; ?>" title="View user profile." typeof="sioc:UserAccount" property="foaf:name"><?php print $fields['nothing']->content; ?></a>
        <?php endif; ?>
        <?php if (!empty($fields['field_user_country'])) : ?>
          <span class="pull-right u-fw-bold"><?php print $fields['field_user_country']->content; ?></span>
        <?php endif; ?>
      </div>
      <div>&nbsp;</div>
    </div>
  </div>
</div>
<div class="views-field views-field-last-commented latest-activities highlight--background">
  <span class="views-label views-label-last-commented"><?php print t('Last contribution'); ?>: </span>
  <?php if (!empty($fields['last_commented'])) : ?>
    <?php print $fields['last_commented']->content; ?>
  <?php endif; ?>
</div>
