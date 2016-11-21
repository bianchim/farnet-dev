Feature: Event content type
  In order to manage events on the website
  As an authorised user
  I want to be able to create, edit and delete events

  @api
  Scenario: Access to event create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-event"
    Then I should see the text "Create Event"

  @api
  Scenario: Access denied to create form wihtout right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/nexteuropa-event"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-event"
    When I press the "Save" button
    Then I should see the error message "Title field is required."
    And I should see the error message "Abstract field is required."
    
  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-event"
    And fill in "title_field[und][0][value]" with "test event"
    And fill in "field_farnet_abstract[und][0][value]" with "test event abstract"
    When I press the "Save" button
    Then I should see the heading "test event"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "nexteuropa_event" content:
      | title                 | test event          |
      | field_farnet_abstract | test event abstract |
      | status                | 1                   |
    When I click "New draft"
    And I fill in "edit-title-field-en-0-value" with "Edited event"
    And I press the "Save" button
    Then I should see the heading "Edited event"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "nexteuropa_event" content:
      | title                 | test event          |
      | field_farnet_abstract | test event abstract |
      | status                | 1                   |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test event?"
    And I press the "Delete" button
    Then I should see the success message "Event test event has been deleted."