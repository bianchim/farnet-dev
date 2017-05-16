<?php
/**
 * @file
 * Ec_resp's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $display_user_picture: Whether node author's picture should be displayed.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct url of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type, i.e., "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type, i.e. story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined, e.g. $node->body becomes $body. When needing to access
 * a field's raw values, developers/themers are strongly encouraged to use these
 * variables. Otherwise they will have to explicitly specify the desired field
 * language, e.g. $node->body['en'], thus overriding any language negotiation
 * rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
?>

<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="content clearfix"<?php print $content_attributes; ?>>
    <?php if ($prefix_display):?>
    <div class="node-private label label-default clearfix">
      <span class="glyphicon glyphicon-lock"></span>
      <?php print t('This content is private'); ?>
    </div>
    <?php endif; ?>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      hide($content['group_factsheet_flag_content']);
      hide($content['group_factsheet_flag_area']);
      hide($content['group_factsheet_flag_social']);
      hide($content['group_factsheet_flag_contact']);
    ?>
    <?php if (!empty($content['group_factsheet_flag_content'])) : ?>
      <div id="group-factsheet-flag-content" class="group-factsheet-flag-content field-group-tab">
        <div class="highlight--background row">
          <div class="col-sm-6 col-md-8">
            <?php if (!empty($content['group_factsheet_flag_content']['field_title_official'])) : ?>
              <?php print render($content['group_factsheet_flag_content']['field_title_official']); ?>
            <?php endif; ?>
            <?php if (!empty($content['group_factsheet_flag_content']['field_term_country'])) : ?>
              <?php print render($content['group_factsheet_flag_content']['field_term_country']); ?>
            <?php endif; ?>
            <?php if (!empty($content['group_factsheet_flag_content']['field_collection_region'])) : ?>
              <?php print render($content['group_factsheet_flag_content']['field_collection_region']); ?>
            <?php endif; ?>
            <?php if (!empty($content['group_factsheet_flag_content']['field_ff_code'])) : ?>
              <?php print render($content['group_factsheet_flag_content']['field_ff_code']); ?>
            <?php endif; ?>
            <?php if (!empty($content['group_factsheet_flag_content']['field_ff_programming_period'])) : ?>
              <?php print render($content['group_factsheet_flag_content']['field_ff_programming_period']); ?>
            <?php endif; ?>
          </div>
          <div class="col-sm-6 col-md-4">
            <?php print render($content['group_factsheet_flag_content']['field_picture']); ?>
          </div>
        </div>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['group_factsheet_flag_area'])) : ?>
      <?php print render($content['group_factsheet_flag_area']['#prefix']); ?>
      <?php if (!empty($content['group_factsheet_flag_area']['field_ff_description'])) : ?>
        <?php print render($content['group_factsheet_flag_area']['field_ff_description']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_factsheet_flag_area']['field_type_of_area'])) : ?>
        <?php print render($content['group_factsheet_flag_area']['field_type_of_area']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_factsheet_flag_area']['field_sea_basins'])) : ?>
        <?php print render($content['group_factsheet_flag_area']['field_sea_basins']); ?>
      <?php endif; ?>
      <?php if (!empty($content['group_factsheet_flag_area']['field_ff_protected_areas'])) : ?>
        <?php print render($content['group_factsheet_flag_area']['field_ff_protected_areas']); ?>
      <?php endif; ?>

      <?php
        if ((empty($content['group_factsheet_flag_area']['field_ff_population']))
        || (empty($content['group_factsheet_flag_area']['field_ff_surface_area']))
        || (empty($content['group_factsheet_flag_area']['field_ff_population_density']))
        ) {
          $bootstrap_class = 'col-sm-6';
        } else {
          $bootstrap_class = 'col-sm-4';
        }
      ?>

      <div class="container-fluid farnet-stats">
        <div class="row farnet-stats__row">
          <div class="col-md-6 farnet-stats__left-col">
            <div class="row">
              <?php if (!empty($content['group_factsheet_flag_area']['field_ff_population'])) : ?>
                <div class="<?php echo $bootstrap_class; ?> farnet-stats__col farnet-stats__col--with-border">
                  <div class="field field-name-field-ff-population field-type-number-integer field-label-inline clearfix">
                    <div class="field-label"><?php print render($content['group_factsheet_flag_area']['field_ff_population']['#title']); ?></div>
                    <div class="field-items">
                      <div class="field-item even"><?php print render($content['group_factsheet_flag_area']['field_ff_population']['0']['#markup']); ?></div>
                    </div>
                  </div>
                </div>
              <?php endif; ?>
              <?php if (!empty($content['group_factsheet_flag_area']['field_ff_surface_area'])) : ?>
                <div class="<?php echo $bootstrap_class; ?> farnet-stats__col farnet-stats__col--with-border">
                  <div class="field field-name-field-ff-surface-area field-type-number-float field-label-inline clearfix">
                    <div class="field-label"><?php print render($content['group_factsheet_flag_area']['field_ff_surface_area']['#title']); ?></div>
                    <div class="field-items">
                      <div class="field-item even"><?php print render($content['group_factsheet_flag_area']['field_ff_surface_area']['0']['#markup']); ?></div>
                    </div>
                  </div>
                </div>
              <?php endif; ?>
              <?php if (!empty($content['group_factsheet_flag_area']['field_ff_population_density'])) : ?>
                <div class="<?php echo $bootstrap_class; ?> farnet-stats__col">
                  <div class="field field-name-field-ff-population-density field-type-number-float field-label-inline clearfix">
                    <div class="field-label"><?php print render($content['group_factsheet_flag_area']['field_ff_population_density']['#title']); ?></div>
                    <div class="field-items">
                      <div class="field-item even"><?php print render($content['group_factsheet_flag_area']['field_ff_population_density']['0']['#markup']); ?></div>
                    </div>
                  </div>
                </div>
              <?php endif; ?>
            </div>
          </div>
          <div class="col-md-6 farnet-stats__right-col">
            <div class="row">
              <div class="col-sm-4 farnet-stats__col">
                <?php if (!empty($content['group_factsheet_flag_area']['field_ff_total_employment'])) : ?>
                  <div class="field field-name-field-ff-total-employment field-type-number-float field-label-inline clearfix">
                    <div class="field-label"><?php print render($content['group_factsheet_flag_area']['field_ff_total_employment']['#title']); ?></div>
                    <div class="field-items">
                      <div class="field-item even"><?php print render($content['group_factsheet_flag_area']['field_ff_total_employment']['0']['#markup']); ?></div>
                    </div>
                  </div>
                <?php endif; ?>
              </div>
              <?php if ((!empty($content['group_factsheet_flag_area']['field_ff_fishing']))
              || (!empty($content['group_factsheet_flag_area']['field_ff_aquaculture']))
              || (!empty($content['group_factsheet_flag_area']['field_ff_processing']))
              || (!empty($content['group_factsheet_flag_area']['field_ff_women_employment']))
              ): ?>
              <div class="col-sm-8 farnet-stats__col--blue-bg">
                  <?php if (!empty($content['group_factsheet_flag_area']['field_ff_fishing'])) : ?>
                    <?php print render($content['group_factsheet_flag_area']['field_ff_fishing']); ?>
                  <?php endif; ?>
                  <?php if (!empty($content['group_factsheet_flag_area']['field_ff_aquaculture'])) : ?>
                    <?php print render($content['group_factsheet_flag_area']['field_ff_aquaculture']); ?>
                  <?php endif; ?>
                  <?php if (!empty($content['group_factsheet_flag_area']['field_ff_processing'])) : ?>
                    <?php print render($content['group_factsheet_flag_area']['field_ff_processing']); ?>
                  <?php endif; ?>
                  <?php if (!empty($content['group_factsheet_flag_area']['field_ff_women_employment'])) : ?>
                    <?php print render($content['group_factsheet_flag_area']['field_ff_women_employment']); ?>
                  <?php endif; ?>
                </div>
              <?php endif; ?>
            </div>
          </div>
        </div>
      </div>
      <?php print render($content['group_factsheet_flag_area']['#suffix']); ?>
    <?php endif; ?>

    <?php print render($content); ?>

    <?php if (!empty($content['contact_details'])) : ?>
      <?php if (!empty($content['group_factsheet_flag_contact']['field_collection_language']['#object']->field_collection_language)) : ?>
        <?php print render($content['group_factsheet_flag_contact']['field_collection_language']); ?>
      <?php endif; ?>
    <?php endif; ?>

    <div class="u-mt-1em"></div>

    <div class="link-wrapper right">
      <?php print render($content['links']); ?>
    </div>

    <?php print render($content['comments']); ?>

  </div>
</div>
