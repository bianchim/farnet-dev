<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div class="content clearfix">

  <?php if (!empty($content['group_factsheet_content'])) : ?>
    <div id="group-factsheet-country-content" class="group-factsheet-country-content field-group-tab">
      <div class="highlight--background row">
        <div class="col-sm-6 col-md-8">
          <?php if (!empty($content['group_factsheet_content']['field_term_country'])) : ?>
            <?php print render($content['group_factsheet_content']['field_term_country']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_factsheet_content']['field_ne_body'])) : ?>
            <?php print render($content['group_factsheet_content']['field_ne_body']); ?>
          <?php endif; ?>
        </div>
        <div class="col-sm-6 col-md-4">
          <?php print render($content['group_factsheet_content']['field_picture']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php print render($content['group_factsheet_clld_programme']); ?>

  <?php if (!empty($content['group_factsheet_clld_budget'])) : ?>
    <?php print render($content['group_factsheet_clld_budget']['#prefix']); ?>
    <div class="highlight--background">
      <?php if (!empty($content['group_factsheet_clld_budget']['field_total_budget'])) : ?>
        <div class="field field-name-field-total-budget field-type-number-float field-label-inline clearfix">
          <div class="field-label"><?php print $content['group_factsheet_clld_budget']['field_total_budget']['#title']; ?>:&nbsp;</div>
          <div class="field-item"><?php print number_format($content['group_factsheet_clld_budget']['field_total_budget']['0']['#markup'], 0, '.', ' '); ?> €</div>
        </div>
      <?php endif; ?>
      <ul class="fr-u-ul">
        <?php if (!empty($content['group_factsheet_clld_budget']['field_emff_budget'])) : ?>
        <li class="field field-name-field-emff-budget field-label-inline clearfix">
          <div class="field-label"><?php print $content['group_factsheet_clld_budget']['field_emff_budget']['#title']; ?>:&nbsp;</div>
          <div class="field-items"><?php print number_format($content['group_factsheet_clld_budget']['field_emff_budget']['0']['#markup'], 0, '.', ' '); ?> €</div>
        </li>
        <?php endif; ?>
        <?php if (!empty($content['group_factsheet_clld_budget']['field_co_funding'])) : ?>
          <li class="field field-name-field-co-funding field-type-text-long field-label-inline clearfix">
            <div class="field-label"><?php print $content['group_factsheet_clld_budget']['field_co_funding']['#title']; ?>:&nbsp;</div>
            <div class="field-item"><?php print number_format($content['group_factsheet_clld_budget']['field_co_funding']['0']['#markup'], 0, '.', ' '); ?> €</div>
          </li>
        <?php endif; ?>
        <?php if (!empty($content['group_factsheet_clld_budget']['field_proportion_emff'])) : ?>
        <li class="field field-name-field-proportion-emff field-label-inline clearfix">
          <div class="field-label"><?php print $content['group_factsheet_clld_budget']['field_proportion_emff']['#title']; ?>:&nbsp;</div>
          <div class="field-items"><?php print $content['group_factsheet_clld_budget']['field_proportion_emff']['0']['#markup']; ?>%</div>
        </li>
        <?php endif; ?>
      </ul>
      <div class="u-mt-1em"></div>
      <?php if (!empty($content['group_factsheet_clld_budget']['field_number_flags'])) : ?>
        <div class="field field-name-field-number-flags field-label-inline clearfix">
          <div class="field-label"><?php print $content['group_factsheet_clld_budget']['field_number_flags']['#title']; ?>:&nbsp;</div>
          <div class="field-items"><?php print $content['group_factsheet_clld_budget']['field_number_flags']['0']['#markup']; ?></div>
        </div>
      <?php endif; ?>
      <?php if (!empty($content['group_factsheet_clld_budget']['field_average_budget_per_flag'])) : ?>
        <div class="field field-name-field-average-budget-per-flag field-label-inline clearfix">
          <div class="field-label"><?php print $content['group_factsheet_clld_budget']['field_average_budget_per_flag']['#title']; ?>:&nbsp;</div>
          <div class="field-item"><?php print number_format($content['group_factsheet_clld_budget']['field_average_budget_per_flag']['0']['#markup'], 0, '.', ' '); ?> €</div>
        </div>
      <?php endif; ?>
    </div>
    <?php print render($content['group_factsheet_clld_budget']['#suffix']); ?>
  <?php endif; ?>

  <?php print render($content['group_factsheet_areas']); ?>
  <?php print render($content['group_factsheet_national_network']); ?>
  <?php print render($content['group_factsheet_cooperation']); ?>
  <?php print render($content['group_factsheet_delivery_clld']); ?>

  <?php if (count($content['group_factsheet_key_documents']['field_key_documents']['#items']) > 0) : ?>
    <?php print render($content['group_factsheet_key_documents']); ?>
  <?php endif; ?>

  <?php if (!empty($content['field_organisations'])) : ?>
    <div id="group-factsheet-country-organisations" class="group-factsheet-country-organisations field-group-tab">
      <h3 class="fr-heading"><span><?php print $content['field_organisations']['#title']; ?></span></h3>
      <?php print render($content['field_organisations']); ?>
    </div>
  <?php endif; ?>

  <?php print render($content['group_national_authorities']['contact_details']); ?>

  <?php print render($content['group_factsheet_map']); ?>

  <div class="u-mt-1em"></div>

  <?php if (!empty($content['group_ne_factsheet_publication']['field_publication_date'])) : ?>
    <?php print render($content['group_ne_factsheet_publication']['field_publication_date']); ?>
  <?php endif; ?>

</div>
