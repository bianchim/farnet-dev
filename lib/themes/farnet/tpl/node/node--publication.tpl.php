<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div class="content clearfix">

  <div class="media">
    <div class="media-left">
      <?php if (!empty($content['field_picture'])) : ?>
        <?php print render($content['field_picture']); ?>
      <?php endif; ?>
    </div>
    <div class="media-body">
      <?php if (!empty($content['field_ne_body'])) : ?>
        <?php print render($content['field_ne_body']); ?>
      <?php endif; ?>
    </div>
  </div>

  <div id="group-publication-information" class="group-publication-information field-group-tab">
    <h3 class="fr-heading"><span>Information</span></h3>
    <table class="table table-responsive table-blue table--white-borders">
      <tbody>
      <?php if (!empty($content['field_type_publication'])) : ?>
        <tr>
          <th scope="row"><?php print $content['field_type_publication']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['field_type_publication']); ?></td>
        </tr>
      <?php endif; ?>
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
      <?php if (!empty($content['field_tags'])) : ?>
        <tr>
          <th scope="row"><?php print $content['field_tags']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['field_tags']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['field_publication_more_info'])) : ?>
        <tr>
          <th scope="row"><?php print $content['field_publication_more_info']['#title']; ?></th>
          <td class="multi-values"><?php print render($content['field_publication_more_info']); ?></td>
        </tr>
      <?php endif; ?>
      </tbody>
    </table>
  </div>

  <div class="link-wrapper right"></div>

  <?php if (!empty($content['field_publication_files'])) : ?>
    <div id="group-publication-download" class="group-download field-group-tab">
      <h3 class="fr-heading"><span>Download</span></h3>
      <?php print render($content['field_publication_files']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['field_publication_date'])) : ?>
    <?php print render($content['field_publication_date']); ?>
  <?php endif; ?>

</div>
