<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

Factsheet Country Tpl
<?php dpm($content); ?>

<div class="content clearfix">

  <?php if (!empty($content['group_factsheet_content'])) : ?>
    <div id="group-factsheet-country-content" class="group-factsheet-country-content field-group-tab">
      <div class="highlight--background row">
        <div class="col-sm-6 col-md-8">
          <?php if (!empty($content['group_factsheet_content']['field_title_official'])) : ?>
            <?php print render($content['group_factsheet_content']['field_title_official']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group-ne-factsheet-taxonomy']['field_term_country'])) : ?>
            <?php print render($content['group-ne-factsheet-taxonomy']['field_term_country']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_factsheet_content']['field_farnet_abstract'])) : ?>
            <?php print render($content['group_factsheet_content']['field_farnet_abstract']); ?>
          <?php endif; ?>
        </div>
        <div class="col-sm-6 col-md-4">
          <?php print render($content['group_factsheet_content']['field_picture']); ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['group_short_story_content']['field_ne_body'])) : ?>
    <?php print render($content['group_short_story_content']['field_ne_body']); ?>
  <?php endif; ?>

  <?php print render($content['group_factsheet_clld_programme']); ?>

  <?php print render($content['group_factsheet_clld_budget']); ?>

  <?php if (!empty($content['group_factsheet_clld_budget'])) : ?>
    <?php print render($content['group_factsheet_clld_budget']['#prefix']); ?>
      <div class="highlight--background u-p-1em">
        <table class="table table-responsive table-blue table--no-borders table-tbody--horizontal-borders">
          <thead>
            <tr>
              <th>
                <?php print $content['group_factsheet_clld_budget']['field_total_budget']['#title']; ?>
              </th>
              <th>
                <?php print number_format($content['group_factsheet_clld_budget']['field_total_budget']['0']['#markup'], 0, '.', ' '); ?> EUR
              </th>
            </tr>
          </thead>
          <tbody class="u-bg-white">
            <?php if (!empty($content['group_short_story_funding']['field_eu_contribution'])) : ?>
            <tr>
              <td><?php print $content['group_short_story_funding']['field_eu_contribution']['#title']; ?></td>
              <td>
                <?php print number_format($content['group_short_story_funding']['field_eu_contribution']['0']['#markup'], 0, '.', ' '); ?> EUR
                <ul class="u-lst-none highlight--background">
                  <?php if (!empty($content['group_short_story_funding']['field_emff'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_emff']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_emff']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_esf'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_esf']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_esf']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_erdf'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_erdf']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_erdf']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_eardf'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_eardf']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_eardf']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_other_eu_funding'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_other_eu_funding']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_other_eu_funding']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                </ul>
              </td>
            </tr>
            <?php endif; ?>
            <?php if (!empty($content['group_short_story_funding']['field_other_public_contribution'])) : ?>
            <tr>
              <td><?php print $content['group_short_story_funding']['field_other_public_contribution']['#title']; ?></td>
              <td>
                <?php print number_format($content['group_short_story_funding']['field_other_public_contribution']['0']['#markup'], 0, '.', ' '); ?> EUR
                <ul class="u-lst-none highlight--background">
                  <?php if (!empty($content['group_short_story_funding']['field_funding_national'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_funding_national']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_funding_national']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_funding_regional'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_funding_regional']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_funding_regional']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_funding_local'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_funding_local']['#title']; ?>: <?php print floatval($content['group_short_story_funding']['field_funding_local']['0']['#markup']); ?> EUR</li>
                  <?php endif; ?>
                </ul>
              </td>
            </tr>
            <?php endif; ?>
            <?php if (!empty($content['group_short_story_funding']['field_private_contribution'])) : ?>
            <tr>
              <td><?php print $content['group_short_story_funding']['field_private_contribution']['#title']; ?></td>
              <td><?php print number_format($content['group_short_story_funding']['field_private_contribution']['0']['#markup'], 0, '.', ' '); ?> EUR</td>
            </tr>
            <?php endif; ?>
          </tbody>
          <?php if (!empty($content['group_short_story_funding']['field_funding_details'])) : ?>
            <tfoot>
             <tr>
               <td colspan="2">
                 <?php print render($content['group_short_story_funding']['field_funding_details']); ?>
               </td>
             </tr>
            </tfoot>
          <?php endif; ?>
        </table>
      </div>
    <?php print render($content['group_factsheet_clld_budget']['#suffix']); ?>
  <?php endif; ?>

  <?php print render($content['group_factsheet_national_network']); ?>
  <?php print render($content['group_factsheet_cooperation']); ?>
  <?php print render($content['group_factsheet_delivery_clld']); ?>

  <div class="link-wrapper right"></div>

  <?php print render($content['group_factsheet_key_documents']); ?>
  <?php print render($content['contact_details']); ?>

  <?php if (!empty($content['group_factsheet_content']['field_organisation'])) : ?>
    <?php print render($content['group_factsheet_content']['field_organisation']); ?>
  <?php endif; ?>
  <?php print render($content['group_factsheet_areas']); ?>

  <?php print render($content['group_factsheet_map']); ?>

  <?php if (!empty($content['group_ne_factsheet_publication']['field_publication_date'])) : ?>
    <?php print render($content['group_ne_factsheet_publication']['field_publication_date']); ?>
  <?php endif; ?>

</div>
