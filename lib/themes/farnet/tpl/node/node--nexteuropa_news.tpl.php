<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div class="content clearfix">

  <div class="media media--farnet">
    <?php if (!empty($content['field_image'])) : ?>
      <div class="media-left ">
        <?php print render($content['field_image']); ?>
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
 
  <?php // Temporary hide field_page element. ?>
  <?php if (FALSE) : ?>
    <div id="group-nexteuropa-news-page" class="group-nexteuropa-news-page field-group-tab">
      <h3 class="fr-heading"><span><?php print $content['field_page']['#title']; ?></span></h3>
      <?php print render($content['field_page']); ?>
    </div>
  <?php endif; ?>

  <div class="u-mt-1em"></div>

  <?php if (!empty($content['field_publication_date'])) : ?>
    <?php print render($content['field_publication_date']); ?>
  <?php endif; ?>

</div>
