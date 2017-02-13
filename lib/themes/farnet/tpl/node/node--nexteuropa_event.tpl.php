<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div class="content clearfix">

  <div class="media media--farnet">
    <?php if (!empty($content['group_ne_event_content']['field_picture'])) : ?>
      <div class="media-left">
        <?php print render($content['group_ne_event_content']['field_picture']); ?>
      </div>
    <?php endif; ?>
    <div class="media-body">
      <?php if (!empty($content['group_ne_event_content']['field_ne_body'])) : ?>
        <?php print render($content['group_ne_event_content']['field_ne_body']); ?>
      <?php endif; ?>
    </div>
  </div>

  <div id="group-nexteuropa-event-information" class="group-nexteuropa-event-information field-group-tab">
    <h3 class="fr-heading"><span>Information</span></h3>
    <table class="table table-responsive table-blue table--white-borders">
      <tbody>
      <?php if (!empty($content['group_ne_event_content']['field_term_country'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_ne_event_content']['field_term_country']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_ne_event_content']['field_term_country']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_ne_event_content']['field_city'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_ne_event_content']['field_city']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_ne_event_content']['field_city']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_ne_event_content']['field_event_type'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_ne_event_content']['field_event_type']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_ne_event_content']['field_event_type']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_event_taxonomy']['field_term_theme'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_event_taxonomy']['field_term_theme']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_event_taxonomy']['field_term_theme']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_event_taxonomy']['field_tags'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_event_taxonomy']['field_tags']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_event_taxonomy']['field_tags']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_ne_event_content']['field_twitter_hashtag'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_ne_event_content']['field_twitter_hashtag']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_ne_event_content']['field_twitter_hashtag']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_ne_event_content']['field_registration'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_ne_event_content']['field_registration']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_ne_event_content']['field_registration']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_ne_event_content']['field_website'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_ne_event_content']['field_website']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['group_ne_event_content']['field_website']); ?></td>
        </tr>
      <?php endif; ?>
      </tbody>
    </table>
  </div>

  <?php if (!empty($content['group_ne_event_content']['field_presentation'])) : ?>
    <div id="group-nexteuropa-event-presentations" class="group-nexteuropa-event-presentations field-group-tab">
      <h3 class="fr-heading"><span><?php print $content['group_ne_event_content']['field_presentation']['#title']; ?></span></h3>
      <?php print render($content['group_ne_event_content']['field_presentation']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['group_ne_event_agenda'])) : ?>
      <?php /* render($content['group_ne_event_agenda']);*/ ?>
  <?php endif; ?>

  <?php if (!empty($content['group_event_contact'])) : ?>
    <div id="group-event-contact" class="group_event_contact field-group-tab">
      <h3>
        <span>Contact</span>
      </h3>
      <div class="field field-name-field-contact-title field-type-list-text field-label-inline clearfix">
        <div class="field-items">
            <div class="field-item even">
              <?php print $content['group_event_contact']['field_contact_title']['#items'][0]['value']; ?>
              <?php print $content['group_event_contact']['field_first_name']['#items'][0]['value']; ?>
              <?php print $content['group_event_contact']['field_last_name']['#items'][0]['value']; ?>
            </div>
        </div>
      </div>
      <div class="field field-name-field-contact-position field-type-text field-label-inline clearfix">
        <div class="field-items">
          <div class="field-item even">
            <?php print $content['group_event_contact']['field_contact_position']['#items'][0]['value']; ?>
          </div>
        </div>
      </div>
      <div class="field field-name-field-email field-type-text field-label-inline clearfix">
        <div class="field-items">
          <div class="field-item even">
            <?php
              $mail = $content['group_event_contact']['field_email']['#items'][0]['email'];
              print l($mail, "mailto:$mail");
             ?>
          </div>
        </div>
      </div>
      <div class="field field-name-field-telephone field-type-text field-label-inline clearfix">
        <div class="field-items">
          <div class="field-item even">
            <?php print $content['group_event_contact']['field_telephone']['#items'][0]['value']; ?>
          </div>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <div class="link-wrapper right"></div>

  <?php if (!empty($content['group_ne_event_content']['field_gallery'])) : ?>
    <?php print render($content['group_ne_event_content']['field_gallery']); ?>
  <?php endif; ?>

  <div class="u-mt-1em"></div>

  <?php if (!empty($content['group_ne_event_content']['field_publication_date'])) : ?>
    <?php print render($content['group_ne_event_content']['field_publication_date']); ?>
  <?php endif; ?>

</div>
