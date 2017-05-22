<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
global $base_url;
?>

<div class="content clearfix">

  <?php if (!empty($content['group_factsheet_content'])) : ?>
    <div id="group-factsheet-content" class="group-factsheet-content field-group-tab">
      <div class="highlight--background row">
        <div class="col-sm-6 col-md-8">
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

  <?php if (!empty($content['group_factsheet_areas'])) : ?>
    <div id="group-factsheet-areas" class="group_factsheet_areas field-group-tab"><h3><span><?php print t('FLAGs') ?></span></h3>
      <table id="table-factsheet-areas">
        <thead>
          <th><?php print t('FLAG Name'); ?></th>
          <th><?php print t('Region'); ?></th>
          <th><?php print t('Surface area (km²)'); ?></th>
          <th><?php print t('Population'); ?></th>
          <th><?php print t('Population density (per km²)'); ?></th>
          <th><?php print t('Employment in fisheries'); ?><span id="exp">*</span></th>
        </thead>
        <tbody>
          <?php ;
          foreach ($content['group_factsheet_areas']['field_flag_areas']['#items'] as $item => $factsheet_area) {
            $node = node_load($factsheet_area['target_id']);

            $region = '';
            if (!empty($node->field_collection_region)) {
              foreach ($node->field_collection_region[LANGUAGE_NONE] as $field_collection_region) {
                $entity = entity_revision_load('field_collection_item', $field_collection_region['revision_id']);
                $region .= '<div id="flag_country_region">' . $entity->field_region[LANGUAGE_NONE][0]["value"] . '</div>';
              }
            }

            $url = drupal_get_path_alias('node/' . $factsheet_area['target_id']);
            ?>
            <tr>
              <td><a href="<?php print $base_url; ?>/<?php print $url; ?>"><?php print $node->field_title_official[LANGUAGE_NONE][0]['value']; ?></a></td>
              <td><?php print $region; ?></td>
              <td><?php (!empty($node->field_ff_surface_area[LANGUAGE_NONE][0]['value'])) ? print round($node->field_ff_surface_area[LANGUAGE_NONE][0]['value']) : ''; ?></td>
              <td><?php (!empty($node->field_ff_population[LANGUAGE_NONE][0]['value'])) ? print round($node->field_ff_population[LANGUAGE_NONE][0]['value']) : ''; ?></td>
              <td><?php (!empty($node->field_ff_population_density[LANGUAGE_NONE][0]['value'])) ? print round($node->field_ff_population_density[LANGUAGE_NONE][0]['value']) : ''; ?></td>
              <td><?php (!empty($node->field_ff_total_employment[LANGUAGE_NONE][0]['value'])) ? print round($node->field_ff_total_employment[LANGUAGE_NONE][0]['value']) : ''; ?></td>
            </tr>
            <?php
          }
          ?>
        </tbody>
      </table>
      <div>(<span id="exp">*</span>)<?php print t('according to the information received from the FLAG'); ?></div>
    </div>
  <?php endif; ?>

  <?php print render($content['group_factsheet_national_network']); ?>
  <?php print render($content['group_factsheet_cooperation']); ?>
  <?php print render($content['group_factsheet_delivery_clld']); ?>

  <?php if (!empty($content['group_factsheet_key_documents'])) : ?>
    <?php if (count($content['group_factsheet_key_documents']['field_key_documents']['#items']) > 0) : ?>
      <?php print render($content['group_factsheet_key_documents']); ?>
    <?php endif; ?>
  <?php endif; ?>
  
  <?php print render($content['contact_details']); ?>

  <?php print render($content['group_factsheet_map']); ?>

  <div class="u-mt-1em clearfix"></div>

  <?php if (!empty($content['group_ne_factsheet_publication']['field_publication_date'])) : ?>
    <?php print render($content['group_ne_factsheet_publication']['field_publication_date']); ?>
  <?php endif; ?>

</div>
