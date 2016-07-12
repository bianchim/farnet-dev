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

/**
 * Contains generic step definitions.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext {

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
   * @param string $fileType
   *   Type of drupal media to upload (Image/document/Video/Audio).
   * @param string $fileName
   *   Name of the file.
   *
   * @Given I fill a media browser :field with a/an :fileType named :fileName
   */
  public function iFillMediaBrowser($field, $fileType, $fileName) {
    $fid = $this->uploadFile($fileType, $fileName);

    $this->getSession()->getPage()->find('css',
      'input[name="' . $field . '"][type="hidden"]')->setValue($fid);
  }

}
