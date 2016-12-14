Feature: News content type
  In order to manage news on the website
  As an authorised user
  I want to be able to create, edit and delete news

  @api
  Scenario: Access to news create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-news"
    Then I should see the text "Create News"

  @api
  Scenario: Access denied to create form wihtout right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/nexteuropa-news"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-news"
    When I press the "Save" button
    Then I should see the error message "Title field is required."
    And I should see the error message "Abstract field is required."

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-news"
    And I fill in "title_field[und][0][value]" with "test news"
    And I fill in "field_abstract[und][0][value]" with "test news abstract"
    When I press the "Save" button
    Then I should see the heading "test news"

  @api @test
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "nexteuropa_news" content:
      | title          | test news          |
      | field_abstract | test news abstract |
      | status         | 1                  |
    When I click "New draft"
    And I fill in "title_field[en][0][value]" with "Edited news"
    And I press the "Save" button
    Then I should see the heading "Edited news"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
    And I am viewing a "nexteuropa_news" content:
      | title          | test news          |
      | field_abstract | test news abstract |
      | status         | 1                  |
    When I click "New draft"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test news?"
    And I press the "Delete" button
    Then I should see the success message "News test news has been deleted."