<?php

/**
 * @file
 * Default theme implementation to present all user profile data.
 *
 * This template is used when viewing a registered member's profile page,
 * e.g., example.com/user/123. 123 being the users ID.
 *
 * Use render($user_profile) to print all profile items, or print a subset
 * such as render($user_profile['user_picture']). Always call
 * render($user_profile) at the end in order to print all remaining items. If
 * the item is a category, it will contain all its profile items. By default,
 * $user_profile['summary'] is provided, which contains data on the user's
 * history. Other data can be included by modules. $user_profile['user_picture']
 * is available for showing the account picture.
 *
 * Available variables:
 *   - $user_profile: An array of profile items. Use render() to print them.
 *   - Field variables: for each field instance attached to the user a
 *     corresponding variable is defined; e.g., $account->field_example has a
 *     variable $field_example defined. When needing to access a field's raw
 *     values, developers/themers are strongly encouraged to use these
 *     variables. Otherwise they will have to explicitly specify the desired
 *     field language, e.g. $account->field_example['en'], thus overriding any
 *     language negotiation rule that was previously applied.
 *
 * @see user-profile-category.tpl.php
 *   Where the html is handled for the group.
 * @see user-profile-item.tpl.php
 *   Where the html is handled for each item in the group.
 * @see template_preprocess_user_profile()
 *
 * @ingroup themeable
 */
?>
<?php dpm($user_profile); ?>
<div class="profile clearfix"<?php print $attributes; ?>>

  <?php
  hide($user_profile['mimemail']);
  hide($user_profile['tmgmt_translation_skills']);
  hide($user_profile['simplenews']);
  hide($user_profile['summary']);
  hide($user_profile['field_preferred_email']);
  hide($user_profile['field_keep_my_email_private']);
  hide($user_profile['field_keep_me_informed_on_farnet']);
  hide($user_profile['field_farnet_magazine_paper']);
  hide($user_profile['field_farnet_magazine_subscribe']);
  ?>

  <div class="row">
    <div class="col-sm-6 col-md-8">
      <div class="user-profile-block-name">
        <?php if (!empty($user_profile['user_picture'])) : ?>
          <?php print render($user_profile['user_picture']); ?>
        <?php endif; ?>

        <?php if (!empty($user_profile['field_gender'])) : ?>
          <?php print render($user_profile['field_gender']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_lastname'])) : ?>
          <?php print render($user_profile['field_lastname']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_firstname'])) : ?>
          <?php print render($user_profile['field_firstname']); ?>
        <?php endif; ?>
      </div>
      <div class="user-profile-block-role">
        <?php if (!empty($user_profile['field_job_title'])) : ?>
          <?php print render($user_profile['field_job_title']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_organisation'])) : ?>
          at <?php print render($user_profile['field_organisation']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_organisation_other'])) : ?>
          at <?php print render($user_profile['field_organisation_other']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_user_country'])) : ?>
          <?php print render($user_profile['field_user_country']); ?>
        <?php endif; ?>
      </div>
      <div class="user-profile-block-phone">
        <?php if (!empty($user_profile['field_telephone'])) : ?>
          <?php print render($user_profile['field_telephone']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_phone_mobile'])) : ?>
          <?php print render($user_profile['field_phone_mobile']); ?>
        <?php endif; ?>
      </div>
      <div class="user-profile-block-address">
        <?php if (!empty($user_profile['field_address_1'])) : ?>
          <?php print render($user_profile['field_address_1']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_address_2'])) : ?>
          <?php print render($user_profile['field_address_2']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_zip_code'])) : ?>
          <?php print render($user_profile['field_zip_code']); ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_city_select'])) : ?>
          <?php print render($user_profile['field_city_select']); ?>
        <?php endif; ?>
      </div>
    </div>
    <div class="col-sm-6 col-md-4">
      <div class="user-profile-block-contact">
        <a href="/user/<?php echo $user_id; ?>/contact" type="message" class="btn btn-primary">
          <span class="glyphicon glyphicon-envelope"></span> Contact me
        </a>
      </div>
      <div class="user-profile-block-language">
        <span>Languages</span>
        <ul>
          <?php if (!empty($user_profile['field_preferred_language_1'])) : ?>
            <li><?php print render($user_profile['field_preferred_language_1']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_preferred_language_2'])) : ?>
            <li><?php print render($user_profile['field_preferred_language_2']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_preferred_language_3'])) : ?>
            <li><?php print render($user_profile['field_preferred_language_3']); ?></li>
          <?php endif; ?>
        </ul>
      </div>
      <div class="user-profile-block-social-media">
        <span>Social Medias</span>
        <ul>
          <?php if (!empty($user_profile['field_user_twitter'])) : ?>
            <li><?php print render($user_profile['field_user_twitter']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_user_facebook'])) : ?>
            <li><?php print render($user_profile['field_user_facebook']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_user_pinterest'])) : ?>
            <li><?php print render($user_profile['field_user_pinterest']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_user_linkedin'])) : ?>
            <li><?php print render($user_profile['field_user_linkedin']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_user_slideshare'])) : ?>
            <li><?php print render($user_profile['field_user_slideshare']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_user_youtube'])) : ?>
            <li><?php print render($user_profile['field_user_youtube']); ?></li>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_user_vimeo'])) : ?>
            <li><?php print render($user_profile['field_user_vimeo']); ?></li>
          <?php endif; ?>
        </ul>
      </div>
    </div>
  </div>

  <?php print render($user_profile); ?>
</div>