Feature: Discussion content type
  In order to manage discussion on the website
  As an authorised user
  I want to be able to create, edit and delete discussion

  @api
  Scenario Outline: Access to Discussion form
    Given I am logged in as a user with the <role> role
    When I visit "node/add/myfarnet-discussion"
    Then I should see the heading "Create Discussion"
  Examples:
      | role          |
      | administrator |

  @api
  Scenario: Access denied to Discussion form
    Given I am an anonymous user
    When I go to "node/add/myfarnet-discussion"
    Then I should get an access denied error

  @api
  Scenario: Discussion check mandatory fields
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/myfarnet-discussion"
    And I press the "Save" button
    Then I should see the error message "Title field is required."
    And I should see the error message "Abstract field is required."
    And I should see the error message "Body field is required."

  @api
   Scenario: Create Discussion
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/myfarnet-discussion"
    Then I should see the heading "Create Discussion"
    When I fill in "title_field[und][0][value]" with "Behat Discussion Test #1"
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    And I press the "Save" button
    Then I should see the success message "Discussion Behat Discussion Test #1 has been created."
    And I should see the heading "Behat Discussion Test #1"
    And I should see "Lorem ipsum dolor sit amet body."

  @api
  Scenario: Edit Discussion
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "myfarnet_discussion" content:
      | title                       | Behat Discussion Test #2             |
      | field_ne_body               | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract. |
      | moderation state            | published                            |
      | workbench_moderation_state  | published                            |
      | status                      | 1                                    |
    Then I should see the heading "Behat Discussion Test #2"
    And I click "Edit"
    And I fill in "title_field[en][0][value]" with "Behat Discussion Test #2.1"
    And I press the "Save" button
    #And I should see the text "Behat Discussion Test #2.1"
    #And I should see the success message "Discussion Behat Discussion Test #2.1 has been updated."

  @api
  Scenario: Delete Discussion
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "myfarnet_discussion" content:
      | title                       | Behat Discussion Test #3             |
      | field_ne_body               | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract. |
      | moderation state            | published                            |
      | workbench_moderation_state  | published                            |
      | status                      | 1                                    |
    Then I should see the heading "Behat Discussion Test #3"
    When I click "Edit"
    And I press "Delete"
    #Then I should see the text "Are you sure you want to delete Behat Discussion Test #3?"
    #When I press "Delete"
    #Then I should see the success message "Discussion Behat Discussion Test #3 has been deleted."
