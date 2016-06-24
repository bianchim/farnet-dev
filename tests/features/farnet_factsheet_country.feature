Feature: Factsheet Country content type
  In order to manage factsheet_country on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario Outline: Access to Factsheet Country form
    Given I am logged in as a user with the <role> role
    When I visit "node/add/factsheet-country"
    Then I should see the text "Create Factsheet Country"
  Examples:
      | role          |
      | administrator |

  @api
  Scenario: Access denied to Factsheet Country form
    Given I am an anonymous user
    When I go to "node/add/factsheet-country"
    Then I should get an access denied error

  @api
  Scenario: Factsheet Country check mandatory fields
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-country"
    And I press the "Save" button
    Then I should see the error message "Name field is required."
    And I should see the error message "Abstract field is required."
    And I should see the error message "Managing Authority field is required."
    And I should see the error message "Country field is required."
    And I should see the error message "CLLD Context field is required."
    And I should see the error message "Axis 4 achievements (2007-2013) field is required."
    And I should see the error message "CLLD objectives and challenges for 2014-2020 field is required."

  @api
   Scenario: Create Factsheet Country
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-country"
    Then I should see the heading "Create Factsheet Country"
    When I fill in "title" with "Behat Factsheet Country Test #1"
    And I fill in "Body" with "Lorem ipsum dolor sit amet body."
    And I fill in "Abstract" with "Lorem ipsum dolor sit amet abstract."
    # And I attach the file "profiles/multisite_drupal_standard/themes/ec_resp/logo.png" to "edit-field-picture-und-0-upload"
    # And I should see "Page" in the "div.form-item-field-page-und" element
    And I should see "Country" in the "div.form-item-field-term-country-und" element
    # And I select "Diversification" from "Theme"
    And I should see "Abstract" in the "div.form-item-field-publication-abstract-und-0-value" element
    And I should see "Publication Channels" in the "div.form-item-field-term-publication-channels-und" element
    And I should see "Publication date" in the "div.field-name-field-publication-date" element
    And I press the "Save" button
    Then I should see the success message "Factsheet Country Behat Factsheet Country Test #1 has been created."
    And I should see the heading "Behat Factsheet Country Test #1"
    And I should see "Lorem ipsum dolor sit amet body."
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Edit Factsheet Country
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "factsheet_country" content:
      | title_field                 | Behat Factsheet Country Test #2       |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Diversification                       |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat Factsheet Country Test #2"
    And I click "Edit"
    And I fill in "name" with "Behat Factsheet Country Test #2.1"
    # And I attach the file "profiles/multisite_drupal_standard/themes/ec_resp/logo.png" to "edit-field-picture-und-0-upload"
    And I press the "Save" button
    And I should see the success message "Factsheet Country Behat Factsheet Country Test #2.1 has been updated."
    And I should see the heading "Behat Factsheet Country Test #2.1"

  @api
  Scenario: Delete Factsheet Country
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "factsheet_country" content:
      | title_field                 | Behat Factsheet Country Test #3           |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.      |
      | field_ne_body               | Lorem ipsum dolor sit amet body.          |
      | moderation state            | published                                 |
      | workbench_moderation_state  | published                                 |
      | status                      | 1                                         |
      | field_term_theme            | Diversification                           |
      | field_publication_date      | 1465294233                                |
    Then I should see the heading "Behat Factsheet Country Test #3"
    When I click "Edit"
    # And I attach the file "profiles/multisite_drupal_standard/themes/ec_resp/logo.png" to "edit-field-picture-und-0-upload"
    And I press "Delete"
    Then I should see the heading "Are you sure you want to delete Behat Factsheet Country Test #3?"
    When I press "Delete"
    Then I should see the success message "Factsheet Country Behat Factsheet Country Test #3 has been deleted."
