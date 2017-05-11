<?php

/**
 * @file
 * Override of node.tpl.php for MyFarnet Cooperation Idea.
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
    print '<div>';
    if (isset($created)) {
      print gmdate("d/m/Y", $created) . ' | ';
    }
    if (isset($name)) {
      print t('by');
      print ' ' . $name . ' | ';
    }
    if (isset($comment_count)) {
      print '<span class ="icon icon--bubble u-color-light-blue">' . $comment_count . '</span>';
    }
    print '</div>';
    ?>

    <div class="media media--farnet-abstract">
      <?php if (!empty($content['field_farnet_abstract'])) : ?>
        <div class="media-abstract ">
          <?php print render($content['field_farnet_abstract']); ?>
        </div>
      <?php endif; ?>
    </div>
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

    <?php if ((!empty($content['field_term_country'])) || (!empty($content['field_preferred_countries'])) ||
      (!empty($content['field_term_theme'])) || (!empty($content['field_sea_basins'])) ||
      (!empty($content['field_type_of_area']))) : ?>
    <div id="group-myfarnet-cooperation-idea-information"
         class="group-myfarnet-cooperation-idea-information field-group-tab">
      <h3 class="fr-heading"><span>Information</span></h3>
      <table class="table table-responsive table-blue table--white-borders">
        <tbody>
        <?php if (!empty($content['field_term_country'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_term_country']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_term_country']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_preferred_countries'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_preferred_countries']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_preferred_countries']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_term_theme'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_term_theme']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_term_theme']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_sea_basins'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_sea_basins']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_sea_basins']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['field_type_of_area'])) : ?>
          <tr>
            <th scope="row"><?php print $content['field_type_of_area']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['field_type_of_area']); ?></td>
          </tr>
        <?php endif; ?>
        </tbody>
      </table>
    </div>
    <?php endif; ?>

    <div class="link-wrapper right"></div>

    <?php if (!empty($content['field_related_documents'])) : ?>
      <div id="group-myfarnet-cooperation-idea-documents"
           class="group-myfarnet-cooperation-idea-documents field-group-tab">
        <h3 class="fr-heading"><span><?php print $content['field_related_documents']['#title']; ?></span></h3>
        <?php print render($content['field_related_documents']); ?>
      </div>
    <?php endif; ?>

    <?php print render($content['links']); ?>
    <?php print render($content['comments']); ?>

  </div>
</div>
