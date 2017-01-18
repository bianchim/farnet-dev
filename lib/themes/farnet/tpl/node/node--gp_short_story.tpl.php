<?php
/**
 * @file
 * Override of node.tpl.php for GP Short Story
 */

?>

<div class="content clearfix">
  <?php if (!empty($content['group_short_story_content'])) : ?>
    <?php print render($content['group_short_story_content']['#prefix']); ?>
      <?php if (!empty($content['group_short_story_content']['field_id_text'])) : ?>
        <?php print render($content['group_short_story_content']['field_id_text']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_short_story_content']['field_ne_body'])) : ?>
        <?php print render($content['group_short_story_content']['field_ne_body']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_short_story_content']['field_website'])) : ?>
        <?php print render($content['group_short_story_content']['field_website']); ?>
      <?php endif; ?>
      <?php print render($content['group_short_story_content']['#suffix']); ?>
    <?php endif; ?>

    <?php if (!empty($content['group_short_story_quote'])) : ?>
      <?php print render($content['group_short_story_quote']['#prefix']); ?>
        <div class="farnet-quote">
          <?php if (!empty($content['group_short_story_quote']['field_picture'])) : ?>
            <div class="farnet-quote__illustration">
              <div class="farnet-quote__picture">
                <?php print render($content['group_short_story_quote']['field_picture']); ?>
              </div>
            </div>
            <?php endif; ?>
            <!-- div class="farnet-quote__illustration">
                <img class="farnet-quote__picture" src="https://unsplash.it/400/300?random" alt="Illustration" />
            </div -->
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
      <?php print render($content['group_short_story_quote']['#suffix']); ?>
    <?php endif; ?>

    <?php if (!empty($content['group_short_story_timeframe'])) : ?>
      <?php print render($content['group_short_story_timeframe']['#prefix']); ?>
        <?php if (!empty($content['group_short_story_timeframe']['field_dates_start_end'])) : ?>
          <?php print render($content['group_short_story_timeframe']['field_dates_start_end']); ?>
        <?php endif; ?>
      <?php print render($content['group_short_story_timeframe']['#suffix']); ?>
    <?php endif; ?>

    <?php if (!empty($content['group_short_story_funding'])) : ?>
      <?php print render($content['group_short_story_funding']['#prefix']); ?>
        <div class="highlight--background u-p-1em">
          <table class="table table-responsive table-blue table--no-borders table-tbody--horizontal-borders">
            <thead>
              <tr>
                <th>
                  <?php print $content['group_short_story_funding']['field_budget']['#title']; ?>
                </th>
                <th>
                  <?php print number_format($content['group_short_story_funding']['field_budget']['0']['#markup'], 0, '.', ' '); ?> EUR
                </th>
              </tr>
            </thead>
            <tbody class="u-bg-white">
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
              <tr>
                <td><?php print $content['group_short_story_funding']['field_other_public_contribution']['#title']; ?>Other public contribution</td>
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
              <tr>
                <td><?php print $content['group_short_story_funding']['field_private_contribution']['#title']; ?></td>
                <td><?php print number_format($content['group_short_story_funding']['field_private_contribution']['0']['#markup'], 0, '.', ' '); ?> EUR</td>
              </tr>
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

    <?php if (!empty($content['group__gp_short_story_info'])) : ?>
      <?php print render($content['group__gp_short_story_info']['#prefix']); ?>
        <table class="table table-responsive table-blue table--white-borders">
          <tbody>
            <tr>
              <th scope="row"><?php print $content['group__gp_short_story_info']['field_term_country']['#title']; ?></th>
              <td class="multi-country"><?php print render($content['group__gp_short_story_info']['field_term_country']); ?></td>
            </tr>
            <tr>
              <th scope="row"><?php print $content['group__gp_short_story_info']['field_organisations']['#title']; ?></th>
              <td><?php print render($content['group__gp_short_story_info']['field_organisations']); ?></td>
            </tr>
            <tr>
              <th scope="row"><?php print $content['group__gp_short_story_info']['field_collection_region']['#title']; ?></th>
              <td><?php print render($content['group__gp_short_story_info']['field_collection_region']); ?></td>
            </tr>
          </tbody>
        </table>
      <?php print render($content['group__gp_short_story_info']['#suffix']); ?>
    <?php endif; ?>

    <div class="link-wrapper right"></div>

    <?php print render($content['group_short_story_taxonomy']); ?>
    <?php print render($content['group_short_story_media']); ?>

</div>

