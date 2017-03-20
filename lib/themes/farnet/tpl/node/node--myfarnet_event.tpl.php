<?php

/**
 * @file
 * Override of node.tpl.php for MyFarnet Event.
 */
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if ($prefix_display): ?>
      <div class="node-private label label-default clearfix">
        <span class="glyphicon glyphicon-lock"></span>
        <?php print t('This content is private'); ?>
      </div>
    <?php endif; ?>

    <?php
      if (isset($comment_count)) {
        print '<div>';
        print t('Comments :');
        print $comment_count;
        print '<div>';
      }
    ?>

    <div class="media media--farnet">
      <?php if (!empty($content['field_picture'])) : ?>
        <div class="media-left">
          <?php print render($content['field_picture']); ?>
        </div>
      <?php endif; ?>
      <div class="media-body">
        <?php if (!empty($content['field_ne_body'])) : ?>
          <?php print render($content['field_ne_body']); ?>
        <?php endif; ?>
      </div>
    </div>

    <div id="group-myfarnet-event-information" class="group-myfarnet-event-information field-group-tab">
      <h3 class="fr-heading"><span>Information</span></h3>
      <table class="table table-responsive table-blue table--white-borders">
        <tbody>
        <?php if (!empty($content['field_dates'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_dates']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_dates']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_term_country'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_term_country']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_term_country']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_city'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_city']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_city']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_event_type'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_event_type']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_event_type']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_term_theme'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_term_theme']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_term_theme']); ?></td>
          </tr>
        <?php endif; ?>
        </tbody>
      </table>
    </div>

    <div class="link-wrapper right"></div>

    <?php if (!empty($content['field_related_documents'])) : ?>
      <div id="group-myfarnet-event-documents" class="group-myfarnet-event-documents field-group-tab">
        <h3 class="fr-heading"><span><?php print $content['field_related_documents']['#title']; ?></span></h3>
        <?php print render($content['field_related_documents']); ?>
      </div>
    <?php endif; ?>

    <?php print render($content['links']); ?>

    <?php print render($content['comments']); ?>

  </div>

</div>
