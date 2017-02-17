<?php

/**
 * @file
 * Override of node.tpl.php for GP Short Story.
 */
?>

<div class="content clearfix">

  <?php if (!empty($content['group_gp_method_content'])) : ?>
    <div id="group-gp-method-content" class="group-gp-method-content field-group-tab">
      <div class="highlight--background row">
        <div class="col-sm-6 col-md-8">
          <?php if (!empty($content['group_gp_method_content']['field_title_official'])) : ?>
            <?php print render($content['group_gp_method_content']['field_title_official']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_gp_method_content']['field_term_country'])) : ?>
            <?php print render($content['group_gp_method_content']['field_term_country']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_gp_method_content']['field_collection_region'])) : ?>
            <?php print render($content['group_gp_method_content']['field_collection_region']); ?>
          <?php endif; ?>
          <?php if (!empty($content['group_gp_method_content']['field_id_text'])) : ?>
            <?php print render($content['group_gp_method_content']['field_id_text']); ?>
          <?php endif; ?>
        </div>
        <div class="col-sm-6 col-md-4">
          <?php if (!empty($content['group_gp_method_content']['field_picture'])) : ?>
            <?php print render($content['group_gp_method_content']['field_picture']); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
  <?php endif; ?>

  <?php if (!empty($content['group_short_story_content']['field_ne_body'])) : ?>
    <?php /*print render($content['group_short_story_content']['field_ne_body']);*/ ?>
  <?php endif; ?>

  <?php if (!empty($content['group_gp_method_description'])) : ?>
    <?php print render($content['group_gp_method_description']['#prefix']); ?>
      <?php if (!empty($content['group_gp_method_description']['field_context'])) : ?>
        <?php print render($content['group_gp_method_description']['field_context']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_method_description']['field_objective'])) : ?>
        <?php print render($content['group_gp_method_description']['field_objective']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_method_description']['field_gpm_activities'])) : ?>
        <?php print render($content['group_gp_method_description']['field_gpm_activities']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_method_description']['field_gpm_main_achievements'])) : ?>
        <?php print render($content['group_gp_method_description']['field_gpm_main_achievements']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_method_description']['field_gpm_transferability'])) : ?>
        <?php print render($content['group_gp_method_description']['field_gpm_transferability']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_gp_method_description']['field_gpm_lessons'])) : ?>
        <?php print render($content['group_gp_method_description']['field_gpm_lessons']); ?>
      <?php endif; ?>
    <?php print render($content['group_gp_method_description']['#suffix']); ?>
  <?php endif; ?>

  <?php if (!empty($content['group_gp_method_resources'])) : ?>
    <?php print render($content['group_gp_method_resources']['#prefix']); ?>
    <?php if (!empty($content['group_gp_method_resources']['field_gpm_skills'])) : ?>
      <?php print render($content['group_gp_method_resources']['field_gpm_skills']); ?>
    <?php endif; ?>
    <?php if (!empty($content['group_gp_method_resources']['field_gpm_staff_resources'])) : ?>
      <?php print render($content['group_gp_method_resources']['field_gpm_staff_resources']); ?>
    <?php endif; ?>
    <?php if (!empty($content['group_gp_method_resources']['field_gpm_financial_resources'])) : ?>
      <?php print render($content['group_gp_method_resources']['field_gpm_financial_resources']); ?>
    <?php endif; ?>
    <?php if (!empty($content['group_gp_method_resources']['field_gpm_other_resources'])) : ?>
      <?php print render($content['group_gp_method_resources']['field_gpm_other_resources']); ?>
    <?php endif; ?>
    <?php print render($content['group_gp_method_resources']['#suffix']); ?>
  <?php endif; ?>

  <?php if (!empty($content['group_gp_method_information'])) : ?>
    <?php print render($content['group_gp_method_information']['#prefix']); ?>
      <table class="table table-responsive table-blue table--white-borders">
        <tbody>
        <?php if (!empty($content['group_gp_method_information']['field_dates_start_end'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_method_information']['field_dates_start_end']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_method_information']['field_dates_start_end']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_method_information']['field_sea_basins'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_method_information']['field_sea_basins']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_method_information']['field_sea_basins']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_method_information']['field_type_of_area'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_method_information']['field_type_of_area']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_method_information']['field_type_of_area']); ?></td>
          </tr>
        <?php endif; ?>
        <?php if (!empty($content['group_gp_method_information']['field_term_theme'])) : ?>
          <tr>
            <th scope="row"><?php print $content['group_gp_method_information']['field_term_theme']['#title']; ?></th>
            <td class="multi-values"><?php print render($content['group_gp_method_information']['field_term_theme']); ?></td>
          </tr>
        <?php endif; ?>
        </tbody>
      </table>
    <?php print render($content['group_gp_method_information']['#suffix']); ?>
  <?php endif; ?>

  <div class="link-wrapper right"></div>

  <?php print render($content['group_gp_method_organisations']); ?>
  <?php print render($content['group_gp_method_flag']); ?>
  <?php print render($content['group_gp_method_media']); ?>

  <?php print render($content['contact_details']); ?>

  <div class="u-mt-1em"></div>

  <?php if (!empty($content['group_gp_method_publication']['field_publication_date'])) : ?>
    <?php print render($content['group_gp_method_publication']['field_publication_date']); ?>
  <?php endif; ?>

</div>
