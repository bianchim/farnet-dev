Feature: GP Short Story content type
  In order to manage gp_short_story on the website
  As an authorised user
  I want to be able to create, edit and delete short stories

  @api
  Scenario: Access to gp short story create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-short-story"
    Then I should see the text "Create Good Practice short story"

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
    And I should see the error message "Abstract field is required."

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/gp-short-story_en"
    And I fill in "title_field[und][0][value]" with "Test gp short story"
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    When I press the "Save" button
    Then I should see the heading "Test gp short story"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "gp_short_story" content:
      | title                 | test gp short story                  |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    When I click "New draft"
    And I fill in "title_field[en][0][value]" with "Edited gp short story"
    And I press the "Save" button
    Then I should see the heading "Edited gp short story"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "gp_short_story" content:
      | title                 | test gp short story                  |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test gp short story?"
    And I press the "Delete" button
    Then I should see the success message "Good Practice Short Story test gp short story has been deleted."