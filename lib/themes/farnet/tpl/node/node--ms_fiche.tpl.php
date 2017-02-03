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

  <?php if (!empty($content['field_number_flags'])) : ?>
    <?php print render($content['field_number_flags']); ?>
  <?php endif; ?>

  <?php if (!empty($content['field_level_at_which_cooperation'])) : ?>
    <?php print render($content['field_level_at_which_cooperation']); ?>
  <?php endif; ?>

  <?php if (!empty($content['field_possible_partners'])) : ?>
    <?php print render($content['field_possible_partners']); ?>
  <?php endif; ?>

  <?php if (!empty($content['field_financing_and_co_financing'])) : ?>
    <?php print render($content['field_financing_and_co_financing']); ?>
  <?php endif; ?>

  <?php if (!empty($content['field_further_information'])) : ?>
    <?php print render($content['field_further_information']); ?>
  <?php endif; ?>

  <div id="group-cooperation-ms-fiche-information" class="group-cooperation-ms-fiche-information field-group-tab">
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

  <div class="link-wrapper right"></div>

  <?php if (!empty($content['field_organisations'])) : ?>
  <div id="group-cooperation-ms-fiche-organisations" class="group-cooperation-ms-fiche-organisations field-group-tab">
    <h3 class="fr-heading"><span><?php print $content['field_organisations']['#title']; ?></span></h3>
      <?php print render($content['field_organisations']); ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['field_publication_date'])) : ?>
    <?php print render($content['field_publication_date']); ?>
  <?php endif; ?>


</div>
