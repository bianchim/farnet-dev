Feature: Factsheet GP Project content type
  In order to manage gp_project on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario: Access to gp project create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-project"
    Then I should see the text "Create GP Project"

  @api
  Scenario: Access denied to create form wihtout right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/gp-project"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-project"
    When I press the "Save" button
    Then I should not see the error message "title field is required"

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-project_en"
    And I fill in "edit-title-field-und-0-value" with "test gp project"
    When I press the "Save" button
    Then I should see the heading "test gp project"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "gp_project" content:
      | title  | test gp project |
      | status | 1               |
    When I click "New draft"
    And I fill in "edit-title-field-en-0-value" with "Edited gp project"
    And I press the "Save" button
    Then I should see the heading "Edited gp project"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "gp_project" content:
      | title  | test gp project |
      | status | 1               |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test gp project?"
    And I press the "Delete" button
    Then I should see the success message "GP Project test gp project has been deleted."