<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if ($prefix_display):?>
      <div class="node-private label label-default clearfix">
        <span class="glyphicon glyphicon-lock"></span>
        <?php print t('This content is private'); ?>
      </div>
    <?php endif; ?>

    <div class="media media--farnet">
      <?php if (!empty($content['field_picture'])) : ?>
        <div class="media-left ">
          <?php print render($content['field_picture']); ?>
        </div>
      <?php endif; ?>
      <div class="media-body">
        <?php if (!empty($content['field_ne_body'])) : ?>
          <?php print render($content['field_ne_body']); ?>
        <?php endif; ?>
      </div>
    </div>

    <?php if ((!empty($content['field_term_country'])) || (!empty($content['field_term_theme']))) : ?>
    <div id="group-nexteuropa-news-information" class="group-nexteuropa-news-information field-group-tab">
      <h3 class="fr-heading"><span>Information</span></h3>
      <table class="table table-responsive table-blue table--white-borders">
        <tbody>
        <?php if (!empty($content['field_term_country'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_term_country']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_term_country']); ?></td>
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
    <?php endif; ?>

    <div class="link-wrapper right"></div>

    <?php if (!empty($content['field_related_documents'])) : ?>
      <div id="group-myfarnet-news-page" class="group-myfarnet-news-page field-group-tab">
        <h3 class="fr-heading"><span><?php print $content['field_related_documents']['#title']; ?></span></h3>
        <?php print render($content['field_related_documents']); ?>
      </div>
    <?php endif; ?>

    <?php print render($content['links']); ?>

    <?php print render($content['comments']); ?>

  </div>
</div>