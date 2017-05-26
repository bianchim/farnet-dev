<?php

/**
 * @file
 * Override of views-view-fields.tpl.php.
 */

global $base_url;

$gid = $fields['group_group']->raw;
$member = og_is_member('node', $gid);
$community_path = $base_url . '/' . $path_alias . '/about';

?>
<li class="media farnet-listing__item community-summary">
  <div class="media-left">
  </div>
  <div class="media-body">
    <?php if (!empty($fields['title'])) : ?>
      <?php
        if ($member) {
          $fields['title']->content = str_replace('/about', '', $fields['title']->content);
          $community_path = str_replace('/about', '/#whats-news', $community_path);
        }
      ?>

      <h4 class="media-heading farnet-listing__heading"><?php print $fields['title']->content; ?></h4>
    <?php endif; ?>
    <div class="farnet-listing__subheading">
      <?php if (!empty($fields['content_count'])) : ?>
        <a href="<?php print $community_path; ?>" id="bubble-counter">
          <span class="community-summary__counter"><?php print $fields['content_count']->content; ?></span>
        </a>
      <?php endif; ?>
      <?php if (!empty($fields['last_updated_date'])) : ?>
        - <span><?php print $fields['last_updated_date']->content; ?></span>
      <?php endif; ?>
    </div>
    <div class="farnet-listing__abstract">
      <?php if (!empty($fields['field_farnet_abstract'])) : ?>
        <?php print $fields['field_farnet_abstract']->content; ?>
      <?php endif; ?>
    </div>
    <?php

    // Check that the group link is not the unsubscribe link.
    $not_unsub = TRUE;
    if (isset($row->field_group_group[0]['rendered']['#options']['attributes']['class'])
      && is_array($row->field_group_group[0]['rendered']['#options']['attributes']['class'])) {
      $not_unsub = !in_array('group unsubscribe', $row->field_group_group[0]['rendered']['#options']['attributes']['class']);
    }

    // Check that the group link is not the group manager link.
    $not_manager = !isset($row->field_group_group[0]['rendered']['#attributes']['class']) ||
      (isset($row->field_group_group[0]['rendered']['#attributes']['class'])
      && $row->field_group_group[0]['rendered']['#attributes']['class'] !== 'group manager');

    if ($not_manager && $not_unsub) : ?>
      <div class="btn btn-info farnet-listing__read-more"><?php print $fields['group_group']->content; ?></div>
    <?php endif; ?>
    <?php
    $path = strip_tags($fields['path']->content);
    $url_preview = drupal_substr($path, 0, strpos($path, "_"));
    ?>
    <?php if (!$member) : ?>
      <a href="<?php echo $url_preview; ?>/about" class="btn btn-default farnet-listing__read-more">Preview</a>
    <?php else : ?>
      <a href="<?php echo $url_preview; ?>" class="btn btn-default farnet-listing__read-more">Contribute</a>
    <?php endif; ?>
  </div>
</li>
