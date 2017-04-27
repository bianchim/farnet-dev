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
<div class="profile clearfix"<?php print $attributes; ?>>
  <div class="row">
    <div class="col-sm-12">
      <h3>
        <?php if (!empty($user_profile['field_gender']) && $user_profile['field_gender'][0]['#markup'] != 'Other') : ?>
          <?php print $user_profile['field_gender'][0]['#markup']; ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_firstname'])) : ?>
          <?php print $user_profile['field_firstname'][0]['#markup']; ?>
        <?php endif; ?>
        <?php if (!empty($user_profile['field_lastname'])) : ?>
          <?php print $user_profile['field_lastname'][0]['#markup']; ?>
        <?php endif; ?>
      </h3>
    </div>
    <div class="col-md-6">
      <div class="user-profile-card highlight--background">
        <p>
          <?php if (!empty($user_profile['field_job_title'])) : ?>
            <strong>
              <?php print $user_profile['field_job_title'][0]['#markup']; ?>
            </strong><br />
          <?php endif; ?>
          <strong>
            <?php if (!empty($user_profile['field_organisation'])) : ?>
              <?php print $user_profile['field_organisation'][0]['#markup']; ?>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_organisation_other'])) : ?>
              <?php print $user_profile['field_organisation_other'][0]['#markup']; ?>
            <?php endif; ?>
          </strong><br />
          <?php if (!empty($user_profile['field_user_country'])) : ?>
            <?php print $user_profile['field_user_country'][0]['#title']; ?>
          <?php endif; ?>
        </p>
        <p>
          <?php if (!empty($user_profile['field_telephone'])) : ?>
            <?php print t('Phone'); ?>
            <?php print ' : ' . $user_profile['field_telephone'][0]['#markup']; ?><br>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_phone_mobile'])) : ?>
            <?php print t('Mobile'); ?>
            <?php print ' : ' . $user_profile['field_phone_mobile'][0]['#markup']; ?>
          <?php endif; ?>
        </p>
        <p>
          <?php if (!empty($user_profile['field_address_1'])) : ?>
            <?php print $user_profile['field_address_1'][0]['#markup']; ?><br>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_address_2'])) : ?>
            <?php print $user_profile['field_address_2'][0]['#markup']; ?><br>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_zip_code'])) : ?>
            <?php print $user_profile['field_zip_code'][0]['#markup']; ?>
          <?php endif; ?>
          <?php if (!empty($user_profile['field_city_select'])) : ?>
            <?php print $user_profile['field_city_select'][0]['#markup']; ?>
          <?php endif; ?>
        </p>
      </div>
    </div>
    <div class="col-md-6">
      <div class="contacts">
        <div class="user-profile-block-contact">
          <a href="<?php echo base_path(); ?>user/<?php echo $user_id; ?>/contact" type="message" class="btn btn-info btn-block">
            <span class="glyphicon glyphicon-envelope"></span>
            Contact me</a>
        </div>
        <div class="contacts__pane user-profile-block-language">
          <div><strong><?php print t('Language'); ?></strong></div>
          <ul>
            <?php if (!empty($user_profile['field_preferred_language_1'])) : ?>
              <li typeof="skos:Concept" property="rdfs:label skos:prefLabel">
                <?php print render($user_profile['field_preferred_language_1'][0]['#title']); ?>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_preferred_language_2'])) : ?>
              <li typeof="skos:Concept" property="rdfs:label skos:prefLabel">
                <?php print render($user_profile['field_preferred_language_2'][0]['#title']); ?>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_preferred_language_3'])) : ?>
              <li typeof="skos:Concept" property="rdfs:label skos:prefLabel">
                <?php print render($user_profile['field_preferred_language_3'][0]['#title']); ?>
              </li>
            <?php endif; ?>
          </ul>
        </div>
        <?php if (isset($user_profile['field_user_twitter']) || isset($user_profile['field_user_facebook']) ||
          isset($user_profile['field_user_pinterest']) || isset($user_profile['field_user_linkedin']) ||
          isset($user_profile['field_user_slideshare']) || isset($user_profile['field_user_youtube']) ||
          isset($user_profile['field_user_vimeo'])): ?>
        <div class="contacts__pane user-profile-block-social-media">
          <div><strong><?php print t('Social media'); ?></strong></div>
          <ul>
            <?php if (!empty($user_profile['field_user_twitter'])) : ?>
              <li>
                <a class="icon icon--twitter" href="<?php print render($user_profile['field_user_twitter'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_user_facebook'])) : ?>
              <li>
                <a class="icon icon--facebook" href="<?php print render($user_profile['field_user_facebook'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_user_pinterest'])) : ?>
              <li>
                <a class="icon icon--pinterest" href="<?php print render($user_profile['field_user_pinterest'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_user_linkedin'])) : ?>
              <li>
                <a class="icon icon--linkedin" href="<?php print render($user_profile['field_user_linkedin'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_user_slideshare'])) : ?>
              <li>
                <a class="icon icon--slideshare" href="<?php print render($user_profile['field_user_slideshare'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_user_youtube'])) : ?>
              <li>
                <a class="icon icon--youtube" href="<?php print render($user_profile['field_user_youtube'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
            <?php if (!empty($user_profile['field_user_vimeo'])) : ?>
              <li>
                <a class="icon icon--vimeo" href="<?php print render($user_profile['field_user_vimeo'][0]['#markup']); ?>">
                  <span class="sr-only"><?php print t('Twitter'); ?></span>
                </a>
              </li>
            <?php endif; ?>
          </ul>
        </div>
        <?php endif; ?>
      </div>
    </div>
  </div>
</div>
