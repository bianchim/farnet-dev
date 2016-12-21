Feature: Country Factsheet content type
  In order to manage factsheet_country on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario Outline: Access to Country Factsheet form
    Given I am logged in as a user with the <role> role
    When I visit "node/add/factsheet-country"
    Then I should see the text "Create Country Factsheet"
    Examples:
      | role          |
      | administrator |

  @api
  Scenario: Access denied to Country Factsheet form
    Given I am an anonymous user
    When I go to "node/add/factsheet-country"
    Then I should get an access denied error

  @api
  Scenario: Country Factsheet check mandatory fields
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-country"
    And I press the "Save" button
    Then I should see the error message "Name field is required."
    And I should see the error message "Abstract field is required."

  @api
  Scenario: Create Country Factsheet
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-country"
    Then I should see the heading "Create Country Factsheet"
    When I fill in "title_field[und][0][value]" with "Behat Factsheet Country Test #1"
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I should see "Abstract" in the "div.form-item-field-publication-abstract-und-0-value" element
    And I should see "Publication Channels" in the "div.form-item-field-term-publication-channels-und" element
    And I should see "Publication date" in the "div.field-name-field-publication-date" element
    And I press the "Save" button
    And I should see the success message "Country Factsheet Behat Factsheet Country Test #1 has been created."
    And I should see the heading "Behat Factsheet Country Test #1"

  @api
  Scenario: Edit Country Factsheet
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "factsheet_country" content:
      | title                       | Behat Factsheet Country Test #2       |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.  |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
    Then I should see the heading "Behat Factsheet Country Test #2"
    When I click "New draft"
    And print current URL
    And I fill in "title_field[en][0][value]" with "Behat Factsheet Country Test #2.1"
    And I press the "Save" button
    And I should see the success message "Country Factsheet Behat Factsheet Country Test #2.1 has been updated."
    And I should see the heading "Behat Factsheet Country Test #2.1"

  @api
  Scenario: Delete Country Factsheet
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "factsheet_country" content:
      | title                       | Behat Factsheet Country Test #3         |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.    |
      | moderation state            | published                               |
      | workbench_moderation_state  | published                               |
      | status                      | 1                                       |
    Then I should see the heading "Behat Factsheet Country Test #3"
    When I click "New draft"
    And I fill in "title_field[en][0][value]" with "Behat Factsheet Country Test #3.1"
    And I press "Delete"
    Then I should see the heading "Are you sure you want to delete Behat Factsheet Country Test #3?"
    When I press "Delete"
    Then I should see the success message "Country Factsheet Behat Factsheet Country Test #3 has been deleted."
