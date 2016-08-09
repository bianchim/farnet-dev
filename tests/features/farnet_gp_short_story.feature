Feature: Factsheet GP Short Story content type
  In order to manage gp_short_story on the website
  As an authorised user
  I want to be able to create, edit and delete short stories

  @api
  Scenario: Access to gp short story create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-short-story"
    Then I should see the text "Create GP short story"

  @api
  Scenario: Access denied to create form without right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/gp-short-story"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-short-story"
    When I press the "Save" button
    Then I should see the error message "Title field is required."
    And I should see the error message "EU contribution field is required."
    And I should see the error message "Other public contribution field is required."
    And I should see the error message "Private contribution field is required."
    And I should see the error message "Total project cost field is required."

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    And "factsheet_flag" content:
      | title | status |
      | flag  | 1      |
    When I visit "node/add/gp-short-story_en"
    And I fill in "title_field[und][0][value]" with "Test gp short story"
    And I select "flag" from "field_flag[und]"
    And I fill in "field_total_cost[und][0][value]" with "42"
    And I fill in "field_eu_contribution[und][0][value]" with "42"
    And I fill in "field_other_public_contribution[und][0][value]" with "42"
    And I fill in "field_private_contribution[und][0][value]" with "42"
    When I press the "Save" button
    Then I should see the heading "Test gp short story"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And "factsheet_flag" content:
      | title | status |
      | flag  | 1      |
    And I am viewing a "gp_short_story" content:
      | title                           | test gp short story   |
      | field_flag                      | flag                  |
      | field_total_cost                | 42                    |
      | field_eu_contribution           | 42                    |
      | field_other_public_contribution | 42                    |
      | field_private_contribution      | 42                    |
      | status                          | 1                     |
    When I click "New draft"
    And I fill in "title_field[en][0][value]" with "Edited gp short story"
    And I press the "Save" button
    Then I should see the heading "Edited gp short story"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And "factsheet_flag" content:
      | title | status |
      | flag  | 1      |
    And I am viewing a "gp_short_story" content:
      | title                           | test gp short story   |
      | field_flag                      | flag                  |
      | field_total_cost                | 42                    |
      | field_eu_contribution           | 42                    |
      | field_other_public_contribution | 42                    |
      | field_private_contribution      | 42                    |
      | status                          | 1                     |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test gp short story?"
    And I press the "Delete" button
    Then I should see the success message "GP Short Story test gp short story has been deleted."