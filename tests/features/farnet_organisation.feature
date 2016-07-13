Feature: Organisation content type
  In order to manage organisations on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario: Access to Organisation create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/organisation"
    Then I should see the text "Create Organisation"

  @api
  Scenario: Access denied to create form without right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/organisation"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/organisation"
    When I press the "Save" button
    Then I should not see the error message "title field is required"

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/organisation"
    And I fill in "edit-title-field-und-0-value" with "test organisation"
    And select "DG MARE" from "field_term_type_organisation[und]"
    When I press the "Save" button
    Then I should see the heading "test organisation"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing an "organisation" content:
      | title              | test organisation |
      | field_term_type_organisation | DG MARE           |
      | status             | 1                 |
    When I click "New draft"
    And I fill in "edit-title-field-en-0-value" with "Edited organisation"
    And I press the "Save" button
    Then I should see the heading "Edited organisation"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing an "organisation" content:
      | title              | test organisation |
      | field_term_type_organisation | DG MARE           |
      | status             | 1                 |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test organisation?"
    And I press the "Delete" button
    Then I should see the success message "Organisation test organisation has been deleted."