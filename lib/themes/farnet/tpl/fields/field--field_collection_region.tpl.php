<?php

/**
 * @file
 * Default template implementation to display the value of a field.
 *
 * @see theme_field()
 * Available variables:
 * - $items: An array of field values. Use render() to output them.
 * - $label: The item label.
 * - $label_hidden: Whether the label display is set to 'hidden'.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - field: The current template type, i.e., "theming hook".
 *   - field-name-[field_name]: The current field name. For example, if the
 *     field name is "field_description" it would result in
 *     "field-name-field-description".
 *   - field-type-[field_type]: The current field type. For example, if the
 *     field type is "text" it would result in "field-type-text".
 *   - field-label-[label_display]: The current label position. For example, if
 *     the label position is "above" it would result in "field-label-above".
 *
 * Other variables:
 * - $element['#object']: The entity to which the field is attached.
 * - $element['#view_mode']: View mode, e.g. 'full', 'teaser'...
 * - $element['#field_name']: The field name.
 * - $element['#field_type']: The field type.
 * - $element['#field_language']: The field language.
 * - $element['#field_translatable']: Whether the field is translatable or not.
 * - $element['#label_display']: Position of label display, inline, above, or
 *   hidden.
 * - $field_name_css: The css-compatible field name.
 * - $field_type_css: The css-compatible field type.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_field()
 * @see theme_field()
 *
 * @ingroup themeable
 */
?>

<?php $regions = []; ?>
<?php $areas = []; ?>
<?php foreach ($items as $delta => $item_collection): ?>
  <?php foreach ($item_collection['entity']['field_collection_item'] as $delta => $item): ?>
    <?php $regions[] = $item['field_region'][0]['#markup']; ?>
    <?php foreach ($item['field_area']['#items'] as $delta => $item_area): ?>
      <?php $areas[] = $item_area['value']; ?>
    <?php endforeach; ?>
  <?php endforeach; ?>
<?php endforeach; ?>

<?php if (count($regions) > 0): ?>
  <div class="field field-name-field-collection-region field-type-field-collection field-label-inline clearfix">
    <div class="field-label"><?php echo $label; ?>:&nbsp;</div>
    <div class="field-items">
      <ul class="links">
        <?php foreach ($regions as $region): ?>
          <li><?php echo $region ?></li>
        <?php endforeach; ?>
        <?php /*if (count ($areas) > 0): ?>
          <?php foreach ($areas as $area): ?>
            <li><?php echo $area ?></li>
          <?php endforeach; ?>
        <?php endif;*/ ?>
      </ul>
    </div>
  </div>
<?php endif; ?>
