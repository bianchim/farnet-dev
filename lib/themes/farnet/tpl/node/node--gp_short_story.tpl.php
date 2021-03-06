<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>


<?php

/**
 * Format for decimal output.
 */
function _format_field_decimal($field_markup) {
  $field_markup_temp = explode('.', floatval($field_markup));
  if(count($field_markup_temp) > 1) {
    $field_markup = number_format($field_markup_temp[0], 0, '.', ' ');
    $field_markup .= (($field_markup_temp[1] > 0) ? ',' . $field_markup_temp[1] : '');
  } else {
    $field_markup = number_format($field_markup_temp[0], 0, '.', ' ');
  }
  return($field_markup);
}

?>

<div class="content clearfix">

  <?php if (!empty($content['group_short_story_content'])) : ?>
    <div id="group-short-story-content" class="group-short-story-content field-group-tab">
      <div class="u-fw-bold multi-values">
        <?php if (!empty($content['group_short_story_content']['field_term_country'])) : ?>
          <?php print render($content['group_short_story_content']['field_term_country']); ?>
        <?php endif; ?>
        <?php if (!empty($content['group_short_story_content']['field_collection_region'])) : ?>
          <?php /*print render($content['group_short_story_content']['field_collection_region']);*/ ?>
        <?php endif; ?>
      </div>
      <div class="u-mt-1em"></div>
      <?php if (!empty($content['group_short_story_content']['field_id_text'])) : ?>
        <?php print render($content['group_short_story_content']['field_id_text']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_short_story_content']['field_farnet_abstract'])) : ?>
        <?php print render($content['group_short_story_content']['field_farnet_abstract']); ?>
      <?php endif; ?>
    </div>
  <?php endif; ?>

  <div class="u-mt-1em"></div>

  <?php if (!empty($content['group_short_story_quote'])) : ?>
    <div id="group-short-story-quote" class="group_short_story_quote field-group-tab">
      <div class="farnet-quote">
        <?php if (!empty($content['group_short_story_quote']['field_picture'])) : ?>
          <div class="farnet-quote__illustration">
            <div class="farnet-quote__picture">
              <?php print render($content['group_short_story_quote']['field_picture']); ?>
            </div>
          </div>
        <?php endif; ?>
          <blockquote class="farnet-quote__main">
            <?php if (!empty($content['group_short_story_quote']['field_quote_text'])) : ?>
              <div class="farnet-quote__citation">
                <?php print render($content['group_short_story_quote']['field_quote_text']); ?>
              </div>
              <?php endif; ?>
              <?php if (!empty($content['group_short_story_quote']['field_quote_author'])) : ?>
                <footer class="farnet-quote__author">
                  <?php print render($content['group_short_story_quote']['field_quote_author']); ?>
                </footer>
             <?php endif; ?>
          </blockquote>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['group_short_story_content']['field_ne_body'])) : ?>
    <?php print render($content['group_short_story_content']['field_ne_body']); ?>
  <?php endif; ?>

  <?php if (!empty($content['group_short_story_funding'])) : ?>
    <?php print render($content['group_short_story_funding']['#prefix']); ?>
      <div class="highlight--background u-p-1em">
        <table class="table table-responsive table-blue table--no-borders table-tbody--horizontal-borders">
          <thead>
            <tr>
              <?php if (!empty($content['group_short_story_funding']['field_budget'])) : ?>
              <th>
                <?php print $content['group_short_story_funding']['field_budget']['#title']; ?>
              </th>
              <th>
                <?php print _format_field_decimal($content['group_short_story_funding']['field_budget']['0']['#markup']); ?> €
              </th>
              <?php endif; ?>
            </tr>
          </thead>
          <tbody class="u-bg-white">
            <?php if (!empty($content['group_short_story_funding']['field_eu_contribution'])) : ?>
            <tr>
              <td><?php print $content['group_short_story_funding']['field_eu_contribution']['#title']; ?></td>
              <td>
                <?php print _format_field_decimal($content['group_short_story_funding']['field_eu_contribution']['0']['#markup']); ?> €
                <ul class="u-lst-none highlight--background">
                  <?php if (!empty($content['group_short_story_funding']['field_emff'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_emff']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_emff']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_esf'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_esf']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_esf']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_erdf'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_erdf']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_erdf']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_eardf'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_eardf']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_eardf']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_other_eu_funding'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_other_eu_funding']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_other_eu_funding']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                </ul>
              </td>
            </tr>
            <?php endif; ?>
            <?php if (!empty($content['group_short_story_funding']['field_other_public_contribution'])) : ?>
            <tr>
              <td><?php print $content['group_short_story_funding']['field_other_public_contribution']['#title']; ?></td>
              <td>
                <?php print _format_field_decimal($content['group_short_story_funding']['field_other_public_contribution']['0']['#markup']); ?> €
                <ul class="u-lst-none highlight--background">
                  <?php if (!empty($content['group_short_story_funding']['field_funding_national'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_funding_national']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_funding_national']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_funding_regional'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_funding_regional']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_funding_regional']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                  <?php if (!empty($content['group_short_story_funding']['field_funding_local'])) : ?>
                    <li><?php print $content['group_short_story_funding']['field_funding_local']['#title']; ?>: <?php print _format_field_decimal($content['group_short_story_funding']['field_funding_local']['0']['#markup']); ?> €</li>
                  <?php endif; ?>
                </ul>
              </td>
            </tr>
            <?php endif; ?>
            <?php if (!empty($content['group_short_story_funding']['field_private_contribution'])) : ?>
            <tr>
              <td><?php print $content['group_short_story_funding']['field_private_contribution']['#title']; ?></td>
              <td><?php print _format_field_decimal($content['group_short_story_funding']['field_private_contribution']['0']['#markup']); ?> €</td>
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
    <?php print render($content['group_short_story_funding']['#suffix']); ?>
  <?php endif; ?>

  <?php if (!empty($content['group_gp_short_story_info'])) : ?>
    <?php print render($content['group_gp_short_story_info']['#prefix']); ?>
      <table class="table table-responsive table-blue table--white-borders">
        <tbody>
        <?php if (!empty($content['group_gp_short_story_info']['field_dates_start_end'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_short_story_info']['field_dates_start_end']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_short_story_info']['field_dates_start_end']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_short_story_info']['field_sea_basins'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_short_story_info']['field_sea_basins']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_short_story_info']['field_sea_basins']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_short_story_info']['field_type_of_area'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_short_story_info']['field_type_of_area']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_short_story_info']['field_type_of_area']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_short_story_info']['field_term_theme'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_short_story_info']['field_term_theme']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_short_story_info']['field_term_theme']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_short_story_info']['field_website'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_short_story_info']['field_website']['#title']; ?></th>
            <td class="multi-values"><a href="<?php print render($content['group_gp_short_story_info']['field_website'][0]['#element']['url']); ?>" target="_blank" rel="noreferrer"><?php print render($content['group_gp_short_story_info']['field_website'][0]['#element']['url']); ?></a></td>
          </tr>
        <?php endif; ?>
        </tbody>
      </table>
    </div>
  <?php endif; ?>

  <div class="link-wrapper right"></div>

  <?php print render($content['group_short_story_organisations']); ?>
  <?php print render($content['group_short_story_flag']); ?>
  <?php print render($content['group_short_story_media']); ?>

  <?php print render($content['contact_details']); ?>

  <div class="u-mt-1em"></div>

  <?php if (!empty($content['group_short_story_publication']['field_publication_date'])) : ?>
    <?php print render($content['group_short_story_publication']['field_publication_date']); ?>
  <?php endif; ?>

</div>
