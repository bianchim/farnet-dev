<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

global $base_url;
$link_user = $base_url . '/' . drupal_get_path_alias('user/' . $fields['uid']->raw);
?>

<div class="views-field views-field-user-profile user-profile">
  <div class="field-content">
    <div class="col-xs-3 col-md-1">
      <?php print $fields['picture']->content; ?>
    </div>
    <div class="col-xs-9 col-md-11">
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
