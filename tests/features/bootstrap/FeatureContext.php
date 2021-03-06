<?php

/**
 * @file
 * Contains \FeatureContext.
 */

use Behat\Behat\Context\SnippetAcceptingContext;
use Behat\Gherkin\Node\TableNode;
use Behat\Mink\Element\NodeElement;
use Behat\Mink\Exception\ExpectationException;
use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Hook\Scope\AfterStepScope;
use Behat\Behat\Hook\Scope\BeforeScenarioScope;

/**
 * Contains generic step definitions.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

  private $geonameUsername = FALSE;

  /**
   * Checks that a 403 Access Denied error occurred.
   *
   * @Then I should get an access denied error
   */
  public function assertAccessDenied() {
    $this->assertSession()->statusCodeEquals(403);
  }

  /**
   * Checks that the given select field has the options listed in the table.
   *
   * @Then I should have the following options for :select:
   */
  public function assertSelectOptions($select, TableNode $options) {
    // Retrieve the specified field.
    if (!$field = $this->getSession()->getPage()->findField($select)) {
      throw new ExpectationException("Field '$select' not found.", $this->getSession());
    }

    // Check that the specified field is a <select> field.
    $this->assertElementType($field, 'select');

    // Retrieve the options table from the test scenario and flatten it.
    $expected_options = $options->getColumnsHash();
    array_walk($expected_options, function (&$value) {
      $value = reset($value);
    });

    // Retrieve the actual options that are shown in the page.
    $actual_options = $field->findAll('css', 'option');

    // Convert into a flat list of option text strings.
    array_walk($actual_options, function (&$value) {
      $value = $value->getText();
    });

    // Check that all expected options are present.
    foreach ($expected_options as $expected_option) {
      if (!in_array($expected_option, $actual_options)) {
        throw new ExpectationException("Option '$expected_option' is missing from select list '$select'.", $this->getSession());
      }
    }
  }

  /**
   * Checks that the given select field doesn't have the listed options.
   *
   * @Then I should not have the following options for :select:
   */
  public function assertNoSelectOptions($select, TableNode $options) {
    // Retrieve the specified field.
    if (!$field = $this->getSession()->getPage()->findField($select)) {
      throw new ExpectationException("Field '$select' not found.", $this->getSession());
    }

    // Check that the specified field is a <select> field.
    $this->assertElementType($field, 'select');

    // Retrieve the options table from the test scenario and flatten it.
    $expected_options = $options->getColumnsHash();
    array_walk($expected_options, function (&$value) {
      $value = reset($value);
    });

    // Retrieve the actual options that are shown in the page.
    $actual_options = $field->findAll('css', 'option');

    // Convert into a flat list of option text strings.
    array_walk($actual_options, function (&$value) {
      $value = $value->getText();
    });

    // Check that none of the expected options are present.
    foreach ($expected_options as $expected_option) {
      if (in_array($expected_option, $actual_options)) {
        throw new ExpectationException("Option '$expected_option' is unexpectedly found in select list '$select'.", $this->getSession());
      }
    }
  }

  /**
   * Checks that the given element is of the given type.
   *
   * @param NodeElement $element
   *   The element to check.
   * @param string $type
   *   The expected type.
   *
   * @throws ExpectationException
   *   Thrown when the given element is not of the expected type.
   */
  public function assertElementType(NodeElement $element, $type) {
    if ($element->getTagName() !== $type) {
      throw new ExpectationException("The element is not a '$type'' field.", $this->getSession());
    }
  }

  /**
   * Upload a managed file in Drupal.
   *
   * @param string $type
   *   Type of drupal media to upload (Image/document/Video/Audio).
   * @param string $filename
   *   Name of the file.
   *
   * @Given I upload a/an :fileType file named :fileName
   */
  public function uploadFile($type, $filename) {
    // Create the complete file path from the config and the parameters.
    $path = implode('/', [
      $this->getMinkParameter('files_path'),
      strtolower($type),
      $filename,
    ]);

    $data = file_get_contents($path);

    // Set the properties if not already done.
    if (!isset($this->uploadedFiles)) {
      $this->uploadedFiles = [];
    }

    if (!isset($this->lastFile)) {
      $this->lastFile = NULL;
    }

    $file = file_save_data($data, 'public://' . $filename);
    $this->uploadedFiles[$file->fid] = $file;
    $this->lastFile = $file->fid;

    // Remove the extension from  the file name.
    $filename = pathinfo($filename, PATHINFO_FILENAME);
    $file->filename = $filename;
    file_save($file);

    return $file->fid;
  }

  /**
   * Delete the uploaded files.
   *
   * @AfterScenario
   */
  public function deleteUploadedFiles() {
    if (isset($this->uploadedFiles)) {
      $files = $this->uploadedFiles;
      foreach ($files as $file) {
        file_delete($file);
      }
    }
  }

  /**
   * Fill a media browser widget with a file.
   *
   * @param string $field
   *   Name property of the input to fill.
   * @param string $file_type
   *   Type of drupal media to upload (Image/document/Video/Audio).
   * @param string $file_name
   *   Name of the file.
   *
   * @Given I fill a media browser :field with a/an :fileType named :fileName
   */
  public function iFillMediaBrowser($field, $file_type, $file_name) {
    $fid = $this->uploadFile($file_type, $file_name);

    $this->getSession()->getPage()->find('css',
      'input[name="' . $field . '"][type="hidden"]')->setValue($fid);
  }

  /**
   * Creates content of type news, provided in the form.
   *
   * @Given I am viewing a farnet news:
   */
  public function assertViewingNode(TableNode $fields) {
    $node = (object) array(
      'type' => 'nexteuropa_news',
    );

    foreach ($fields->getRowsHash() as $field => $value) {
      $node->{$field} = $value;
    }

    // $saved = $this->nodeCreate($node);
    foreach ($node as $field => $value) {
      $field_info = field_info_field($field);
      if (!is_null($field_info)) {
        // Manage fields with summary.
        if ($field_info['type'] == 'text_with_summary') {
          $node->$field = [LANGUAGE_NONE => [0 => ['value' => $value]]];
        }

        // Manage taxonomy terms.
        if ($field_info['type'] == 'taxonomy_term_reference') {
          $term = taxonomy_get_term_by_name($value);

          if (empty($term)) {
            throw new Exception("No term '$value' exists.");
          }

          $term = reset($term);
          $node->$field = [LANGUAGE_NONE => [0 => ['tid' => $term->tid]]];
        }
      }
    }

    $saved = node_submit($node);
    node_save($saved);
    $this->nodes[] = $saved;

    // Set internal browser on the node.
    $this->getSession()->visit($this->locatePath('/node/' . $saved->nid));
  }

  /**
   * Prepare for PHP errors log.
   *
   * @BeforeScenario
   */
  public static function preparePhpErrors(BeforeScenarioScope $scope) {
    // Clear out the watchdog table at the beginning of each test scenario.
    db_truncate('watchdog')->execute();
  }

  /**
   * Check for PHP errors log.
   *
   * @param AfterStepScope $scope
   *    AfterStep hook scope object.
   *
   * @throws \Exception
   *    Print out descriptive error message by throwing an exception.
   *
   * @AfterStep
   */
  public static function checkPhpErrors(AfterStepScope $scope) {
    // Find any PHP errors at the end of the suite
    // and output them as an exception.
    $log = db_select('watchdog', 'w')
      ->fields('w')
      ->condition('w.type', 'php', '=')
      ->execute()
      ->fetchAll();
    if (!empty($log)) {
      $errors = count($log);
      $step_text = $scope->getStep()->getText();
      $step_line = $scope->getStep()->getLine();
      $feature_title = $scope->getFeature()->getTitle();
      $feature_file = $scope->getFeature()->getFile();
      $message = "$errors PHP errors were logged to the watchdog\n";
      $message .= "Feature: '$feature_title' on '$feature_file' line $step_line\n";
      $message .= "Step: '$step_text'\n";
      $message .= "Errors:\n";
      $message .= "----------\n";
      foreach ($log as $error) {
        $error->variables = unserialize($error->variables);
        $date = date('Y-m-d H:i:sP', $error->timestamp);
        $message .= sprintf("Message: %s: %s in %s (line %s of %s).\n", $error->variables['%type'], $error->variables['!message'], $error->variables['%function'], $error->variables['%line'], $error->variables['%file']);
        $message .= "Location: $error->location\n";
        $message .= "Referer: $error->referer\n";
        $message .= "Date/Time: $date\n\n";
      }
      $message .= "----------\n";
      throw new \Exception($message);
    }
  }

  /**
   * Make a user with the OG role in the group (create it if it doesn't exist).
   *
   * @Given I am a/an :roles user, member of entity :entity_name of type :entity_type as :group_role
   */
  public function iAmMemberOfEntityHavingRole($roles, $group_role, $entity_name, $entity_type) {
    $admin = user_load(1);
    // Create the user.
    $account = (object) array(
      'name' => $this->getRandom()->name(8),
      'mail' => $this->getRandom()->name(8) . '@example.com',
      'pass' => $this->getRandom()->name(16),
      'role' => $roles,
      'field_terms_and_conditions' => 'Terms and conditions have been accepted',
    );
    $this->userCreate($account);
    $roles = array_map('trim', explode(',', $roles));
    foreach ($roles as $role) {
      if (!in_array($role, array('authenticated', 'authenticated user'))) {
        $this->getDriver()->userAddRole($account, $role);
      }
    }
    // Try to use an existing 'entity' node.
    try {
      $entity = $this->getNodeByTitle($entity_type, $entity_name);
    }
    catch (ExpectationException $e) {
      $entity = FALSE;
    }
    // Create the group, if doesn't exist.
    if (!$entity) {
      $entity = $this->nodeCreate((object) array(
        'status' => TRUE,
        'uid' => 1,
        'type' => $entity_type,
        'title' => $entity_name,
      ));
    }
    $this->addMembertoGroup($account, $group_role, $entity);
    // Authenticate.
    $this->login();
  }

  /**
   * Adds a member to an organic group with the specified role.
   *
   * @param object $account
   *   The user to be added in group.
   * @param string $group_role
   *   The machine name of the group role.
   * @param object $group
   *   The group node.
   * @param string $group_type
   *   (optional) The group's entity type.
   *
   * @throws \Exception
   *   Throw an error if the membership or the group role has an issue.
   */
  protected function addMembertoGroup($account, $group_role, $group, $group_type = 'node') {
    list($gid,,) = entity_extract_ids($group_type, $group);
    $membership = og_group($group_type, $gid, array(
      'entity type' => 'user',
      'entity' => $account,
    ));
    if (!$membership) {
      throw new \Exception("The Organic Group membership could not be created.");
    }
    // Add role for membership.
    $roles = og_roles($group_type, $group->type, $gid);
    $rid = array_search($group_role, $roles);
    if (!$rid) {
      throw new \Exception("'$group_role' is not a valid group role.");
    }
    og_role_grant($group_type, $gid, $account->uid, $rid);
  }

  /**
   * Loads a node by its title.
   *
   * @param string $type
   *   The node type.
   * @param string $title
   *   The node title.
   *
   * @return \stdClass
   *   The node object.
   *
   * @throws ExpectationException
   *   When no node is found.
   */
  protected function getNodeByTitle($type, $title) {
    if (!($node = node_load_multiple(array(), array('type' => $type, 'title' => $title), TRUE))) {
      throw new ExpectationException("There's no '$type' node entitled '$title'.", $this->getSession());
    }
    $node = reset($node);
    return $node;
  }

  /**
   * Reinitialize farnet error variables.
   *
   * @AfterScenario @cleanFarnetErrorVariables
   */
  public function cleanFarnetErrorVariables() {
    // Farnet error public variables.
    i18n_variable_del("farnet_error_public_title", "en");
    i18n_variable_del("farnet_error_public_body", "en");
    i18n_variable_del("farnet_error_public_title", "fr");
    i18n_variable_del("farnet_error_public_body", "fr");
    variable_del('farnet_error_public_title');
    variable_del('farnet_error_public_body');
    // Farnet error MyFarnet variables.
    i18n_variable_del("farnet_error_myfarnet_title", "en");
    i18n_variable_del("farnet_error_myfarnet_body", "en");
    i18n_variable_del("farnet_error_myfarnet_title", "fr");
    i18n_variable_del("farnet_error_myfarnet_body", "fr");
    variable_del('farnet_error_myfarnet_title');
    variable_del('farnet_error_myfarnet_body');
  }

  /**
   * Prepare the configuration for the use of GeoNames.
   *
   * @beforeScenario
   */
  public function geonamesBeforeScenario() {
    $this->geonameUsername = variable_get('geonames_username', FALSE);
    variable_set('geonames_username', 'ec_europa_testing');
  }

  /**
   * Restore the configuration after the use of GeoNames, and check for errors.
   *
   * @afterScenario
   */
  public function geonamesAfterScenario() {
    if ($this->geonameUsername) {
      variable_set('geonames_username', $this->geonameUsername);
    }
    else {
      variable_del('geonames_username');
    }

    // Get all errors from GeoNames and display them.
    $log = db_select('watchdog', 'w')
      ->fields('w')
      ->condition('w.type', 'GeoNames', '=')
      ->execute()
      ->fetchAll();

    if (!empty($log)) {
      $message = count($log) . " error(s) triggered by GeoNames API calls\n";
      $message .= "Errors:" . PHP_EOL;
      $message .= "----------" . PHP_EOL;
      foreach ($log as $error) {
        $error->variables = unserialize($error->variables);
        $date = date('Y-m-d H:i:sP', $error->timestamp);
        $message .= "Message: " . format_string($error->message, $error->variables) . PHP_EOL;
        $message .= "Location: $error->location" . PHP_EOL;
        $message .= "Referer: $error->referer" . PHP_EOL;
        $message .= "Date/Time: $date" . PHP_EOL . PHP_EOL;
      }
      $message .= "----------" . PHP_EOL;
      throw new \Exception($message);
    }
  }

}
