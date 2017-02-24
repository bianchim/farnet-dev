<?php

/**
 * @file
 * Render the organisation contacts.
 */
?>

<?php
  $output = '';
  foreach($items as $item) {
    $collection = reset($item['entity']['field_collection_item']);
    $coll_wrapper = entity_metadata_wrapper('field_collection_item', $collection['#entity']);

    if (!isset($collection['field_contact_person'])) {
      continue;
    }

    foreach ($collection['field_contact_person']['#items'] as $contact_item) {

      if (!empty($output)) {
        $output .= '<br/>';
      }

      $contact = $contact_item['entity'];
      $contact_wrapper = entity_metadata_wrapper('node', $contact);

      // Contact fields.
      $fields = [
        'title_field' => [FALSE],
        'field_email' => [TRUE],
        'field_telephone' => [TRUE, t('Phone')],
        'field_phone_mobile' => [TRUE, t('Mobile')],
        'field_skype_id' => [TRUE, t('Skype')],
      ];

      foreach ($fields as $field => $info) {
        if ($info[0]) {
          $value = $coll_wrapper->{$field}->value();
        }

        $value = isset($value) && !empty($value) ? $value : $contact_wrapper->{$field}->value();

        // If the value is an object, it's a taxonomy term, use it's name.
        if (is_object($value)) {
          $value = $value->name;
        }

        // Skip empty values.
        if (empty($value)) {
          unset($value);
          continue;
        }

        switch ($field) {
          case 'title_field':
            $contact_title = $contact_wrapper->field_gender->value() === 'male' ? t('Mr.') : t('Ms.');
            $render = $contact_title . ' ' . $contact_wrapper->field_firstname->value() . ' ' . $value;

            $output .= '<div class="field-items">' . $render . '</div>';
            break;

          case 'field_email':
            $output .= '<div class="field-items">' . l($value, 'mailto:' . $value, ['absolute' => TRUE]) . '</div>';
            break;

          case 'field_telephone':
          case 'field_phone_mobile':
          case 'field_skype_id':
            $output .= '<div class="field-label">' . $info[1] . ' : </div>';
            $output .= '<div class="field-items">' . $value . '</div>';
            break;

          default:
            $output .= '<div class="field-items">' . $value . '</div>';
            break;
        }

        // Unset for the next field checks.
        unset($value);
      }
    }
  }
  print $output;
?>
