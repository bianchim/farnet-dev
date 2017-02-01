<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div class="content clearfix">

  <?php if (!empty($content['group_gp_project_content'])) : ?>
    <?php /*print render($content['group_gp_project_content']['#prefix']);*/ ?>
    <div id="group-gp-project-content" class="group-gp-project-content field-group-tab">
      <div class="highlight--background row">
        <div class="col-sm-6 col-md-8">
          <?php if (!empty($content['group_gp_project_content']['field_title_official'])) : ?>
            <?php print render($content['group_gp_project_content']['field_title_official']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_gp_project_content']['field_id_text'])) : ?>
            <?php print render($content['group_gp_project_content']['field_id_text']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_gp_project_location']['field_term_country'])) : ?>
            <?php print render($content['group_gp_project_location']['field_term_country']); ?>
          <?php endif; ?>
        </div>
        <div class="col-sm-6 col-md-4">
          <?php if (!empty($content['group_gp_project_content']['field_picture'])) : ?>
            <?php print render($content['group_gp_project_content']['field_picture']); ?>
          <?php endif; ?>
        </div>
      </div>
    <?php /*print render($content['group_gp_project_content']['#suffix']);*/ ?>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['group_gp_project_description'])) : ?>
    <?php print render($content['group_gp_project_description']['#prefix']); ?>
      <?php if (!empty($content['group_gp_project_description']['field_gpp_context_and_needs'])) : ?>
        <?php print render($content['group_gp_project_description']['field_gpp_context_and_needs']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_description']['field_gpp_objectives'])) : ?>
        <?php print render($content['group_gp_project_description']['field_gpp_objectives']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_description']['field_gpp_activities'])) : ?>
        <?php print render($content['group_gp_project_description']['field_gpp_activities']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_description']['field_gpp_results'])) : ?>
        <?php print render($content['group_gp_project_description']['field_gpp_results']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_description']['field_gpp_transferability'])) : ?>
        <?php print render($content['group_gp_project_description']['field_gpp_transferability']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_description']['field_gpp_lessons'])) : ?>
        <?php print render($content['group_gp_project_description']['field_gpp_lessons']); ?>
      <?php endif; ?>
    <?php print render($content['group_gp_project_description']['#suffix']); ?>
  <?php endif; ?>

  <?php if (!empty($content['group_gp_project_cost'])) : ?>
    <?php print render($content['group_gp_project_cost']['#prefix']); ?>
      <div class="highlight--background u-p-1em">
        <table class="table table-responsive table-blue table--no-borders table-tbody--horizontal-borders">
          <thead>
            <tr>
              <th>
                <?php print $content['group_gp_project_cost']['field_gpp_total_project_cost']['#title']; ?></th>
              <th>
                <?php print number_format($content['group_gp_project_cost']['field_gpp_total_project_cost']['0']['#markup'], 0, '.', ' '); ?> EUR
              </th>
            </tr>
          </thead>
          <tbody class="u-bg-white">
            <tr>
              <td><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_a_flag_grant']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_a_flag_grant']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_a_flag_grant']['#title']); ?></td>
              <td>
                <?php print number_format($content['group_gp_project_cost']['field_gpp_a_flag_grant']['0']['#markup'], 0, '.', ' '); ?> EUR
                <ul class="u-lst-none highlight--background">
                  <?php if (!empty($content['group_gp_project_cost']['field_gpp_a1_eu_contribution'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_a1_eu_contribution']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_a1_eu_contribution']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_a1_eu_contribution']['#title']); ?>: <?php print floatval($content['group_gp_project_cost']['field_gpp_a1_eu_contribution']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_gp_project_cost']['field_gpp_a2_public_contribution'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_a2_public_contribution']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_a2_public_contribution']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_a2_public_contribution']['#title']); ?>: <?php print floatval($content['group_gp_project_cost']['field_gpp_a2_public_contribution']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_gp_project_cost']['field_gpp_a3_public_contribution'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_a3_public_contribution']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_a3_public_contribution']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_a3_public_contribution']['#title']); ?>: <?php print floatval($content['group_gp_project_cost']['field_gpp_a3_public_contribution']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_gp_project_cost']['field_gpp_a4_public_contribution'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_a4_public_contribution']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_a4_public_contribution']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_a4_public_contribution']['#title']); ?>: <?php print floatval($content['group_gp_project_cost']['field_gpp_a4_public_contribution']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_gp_project_cost']['field_a5_public_contribution'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_a5_public_contribution']['#title'], 0, strpos($content['group_gp_project_cost']['field_a5_public_contribution']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_a5_public_contribution']['#title']); ?>: <?php print render($content['group_gp_project_cost']['field_a5_public_contribution']); ?></li>
                  <?php endif; ?>
                </ul>
              </td>
            </tr>
            <tr>
              <td><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_b_beneficiary']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_b_beneficiary']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_b_beneficiary']['#title']); ?></td>
              <td>
                <?php print number_format($content['group_gp_project_cost']['field_gpp_b_beneficiary']['0']['#markup'], 0, '.', ' '); ?> EUR
                <ul class="u-lst-none highlight--background">
                  <?php if (!empty($content['group_gp_project_cost']['field_b1_other_contribution'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_b1_other_contribution']['#title'], 0, strpos($content['group_gp_project_cost']['field_b1_other_contribution']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_b1_other_contribution']['#title']); ?>: <?php print render($content['group_gp_project_cost']['field_b1_other_contribution']); ?></li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_gp_project_cost']['field_gpp_b2_lead_partner'])) : ?>
                    <li><?php print str_replace(drupal_substr($content['group_gp_project_cost']['field_gpp_b2_lead_partner']['#title'], 0, strpos($content['group_gp_project_cost']['field_gpp_b2_lead_partner']['#title'], '-')) . '-', '', $content['group_gp_project_cost']['field_gpp_b2_lead_partner']['#title']); ?>: <?php print floatval($content['group_gp_project_cost']['field_gpp_b2_lead_partner']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                </ul>
              </td>
            </tr>
          </tbody>
        </table>
      </div>
    <?php print render($content['group_gp_project_cost']['#suffix']); ?>
  <?php endif; ?>

  <div id="group-gp-method-content" class="group-gp-method-content field-group-tab">
    <h3 class="fr-heading"><span>Project Information</span></h3>
    <table class="table table-responsive table-blue table--white-borders">
      <tbody>
      <?php if (!empty($content['group_gp_project_dates']['field_dates_start_end'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_gp_project_dates']['field_dates_start_end']['#title']; ?></th>
          <td class="multi-country"><?php print render($content['group_gp_project_dates']['field_dates_start_end']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_taxonomy']['field_sea_basins'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_gp_project_taxonomy']['field_sea_basins']['#title']; ?></th>
          <td class="multi-country"><?php print render($content['group_gp_project_taxonomy']['field_sea_basins']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_taxonomy']['field_type_of_area'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_gp_project_taxonomy']['field_type_of_area']['#title']; ?></th>
          <td class="multi-country"><?php print render($content['group_gp_project_taxonomy']['field_type_of_area']); ?></td>
        </tr>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_project_taxonomy']['field_term_theme'])) : ?>
        <tr>
          <th scope="row"><?php print $content['group_gp_project_taxonomy']['field_term_theme']['#title']; ?></th>
          <td class="multi-country"><?php print render($content['group_gp_project_taxonomy']['field_term_theme']); ?></td>
        </tr>
      <?php endif; ?>
      </tbody>
    </table>
    <?php print render($content['group_gp_method_resources']['#suffix']); ?>
  </div>

  <div class="link-wrapper right"></div>

  <?php print render($content['group_gp_project_beneficiary']); ?>
  <?php print render($content['group_gp_project_flag']); ?>
  <?php print render($content['group_gp_project_media']); ?>

</div>