Feature: Cooperation Cooperation Idea content type
  In order to manage cooperation_idea on the website
  As an authorised user
  I want to be able to create, edit and delete Cooperation Idea

  @api
  Scenario: Access to Cooperation Idea create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/cooperation-idea"
    Then I should see the text "Create Cooperation Idea"

  @api
  Scenario: Access denied to create form without right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/cooperation-idea"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/cooperation-idea"
    When I press the "Save" button
    Then I should not see the error message "title field is required"

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/cooperation-idea_en"
    And I fill in "title_field[und][0][value]" with "test Cooperation Idea"    
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    When I press the "Save" button
    Then I should see the heading "test Cooperation Idea"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "cooperation_idea" content:
      | title                 | test Cooperation Idea                |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    When I click "New draft"
    And I fill in "edit-title-field-en-0-value" with "Edited Cooperation Idea"
    And I press the "Save" button
    Then I should see the heading "Edited Cooperation Idea"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "cooperation_idea" content:
      | title                 | test Cooperation Idea                |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test Cooperation Idea?"
    And I press the "Delete" button
    Then I should see the success message "Cooperation Idea test Cooperation Idea has been deleted."