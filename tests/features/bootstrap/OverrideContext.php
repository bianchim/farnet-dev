<?php

/**
 * @file
 * Contains \OverrideContext.
 */

use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\TableNode;
use Behat\Mink\Exception\ExpectationException;
use Drupal\nexteuropa\Context\DrupalContext;

/**
 * Manage DrupalContext overrides.
 */
class OverrideContext extends DrupalContext implements SnippetAcceptingContext {

  /**
   * Keep track of created field collections.
   *
   * @var array
   */
  private $fieldCollections = [];

  /**
   * Create a field collection for future use in the tests.
   *
   * @param string $label
   *   Name of the field collection.
   * @param string $entity_type
   *   Name of the target entity type.
   * @param string $node_label
   *   Name of the target node.
   * @param TableNode $fieldTable
   *   Table of the field collection.
   *
   * @Given (I )attach a :field_collection field collection to a/an :entity_type named :node_label with:
   *
   * @throws ExpectationException
   */
  public function attachFieldCollection($label, $entity_type, $node_label, TableNode $fieldTable) {
    // Get the target node.
    $efq = new EntityFieldQuery();
    $result = $efq->entityCondition('entity_type', $entity_type)
      ->propertyCondition('status', NODE_PUBLISHED)
      ->propertyCondition('title', $node_label, '=')
      ->addMetaData('account', user_load(1))
      ->execute();
    $result = array_keys($result[$entity_type]);

    // Check that the result is a test created entity.
    $saved = [];
    foreach ($this->nodes as $node) {
      $saved[$node->nid] = $node->nid;
    }

    $result = array_intersect($saved, $result);

    if (empty($result)) {
      throw new ExpectationException("The node named '$node_label' was not found.'", $this->getSession());
    }

    $target = node_load(reset($result));

    $this->createFieldCollection($label, $target, $entity_type, $fieldTable);
  }

  /**
   * Attach a field collection to another field collection.
   *
   * Currently broken, field collection search for a non existent bundle.
   *
   * @param string $label
   *   Name of the field collection.
   * @param string $target_fc
   *   Name of the target field collection.
   * @param TableNode $fieldTable
   *   Data table of the field collection.
   *
   * @Given (I )attach a :fc_name field collection to another named :target_fc with:
   *
   * @throws ExpectationException
   */
  public function attachSubFieldCollection($label, $target_fc, TableNode $fieldTable) {
    $entity_type = 'field_collection_item';

    // Get the last field collection with the name.
    $efq = new EntityFieldQuery();
    $result = $efq->entityCondition('entity_type', $entity_type)
      ->propertyCondition('field_name', $target_fc, '=')
      ->addMetaData('account', user_load(1))
      ->execute();
    $result = array_keys($result[$entity_type]);

    // Check that it is a test created field collection.
    $saved = array_keys($this->fieldCollections);
    $result = array_intersect($saved, $result);

    if (empty($result)) {
      throw new ExpectationException("The field_collection '$target_fc' was not found.'", $this->getSession());
    }
    $target = entity_load_single('field_collection_item', reset($result));

    $this->createFieldCollection($label, $target, $entity_type, $fieldTable);
  }

  /**
   * Create field collection entity.
   *
   * Use the context and driver logic to fill fields like a normal node.
   *
   * @param string $label
   *   Name of the field collection.
   * @param string $target
   *   Target node where we attach the field collection.
   * @param TableNode $fieldTable
   *   Data table of the field collection.
   */
  protected function createFieldCollection($label, $target, $entity_type, TableNode $fieldTable) {
    // Get Drupal driver core.
    $core = $this->getDriver()->getCore();

    // Create the base field collection.
    $fc_node = (object) [
      'type' => 'field_collection_item',
      'field_name' => $label,
    ];

    // Process the data table.
    foreach ($fieldTable->getRowsHash() as $field => $value) {
      $fc_node->{$field} = $value;
    }

    $this->parseEntityFields('field_collection_item', $fc_node);

    // Assign authorship if none exists and `author` is passed.
    if (!isset($fc_node->uid) && !empty($fc_node->author) && ($user = user_load_by_name($fc_node->author))) {
      $fc_node->uid = $user->uid;
    }

    // Attempt to decipher any fields that may be specified.
    $field_types = $core->getEntityFieldTypes('field_collection_item');
    foreach ($field_types as $field_name => $type) {
      if (isset($fc_node->$field_name)) {
        $fc_node->$field_name = $core->getFieldHandler($fc_node, 'field_collection_item', $field_name)
          ->expand($fc_node->$field_name);
      }
    }

    // Set defaults that haven't already been set.
    $defaults = clone $fc_node;
    node_object_prepare($defaults);
    $fc_node = (object) array_merge((array) $defaults, (array) $fc_node);

    // Final node save.
    $fc_node = entity_create('field_collection_item', (array) $fc_node);
    $fc_node->setHostEntity($entity_type, $target);
    $fc_node->save();
    $this->fieldCollections[$fc_node->item_id] = $fc_node;
  }

}
