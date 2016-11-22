Feature: FAQ content type
  In order to manage faq on the website
  As an administrator

  @api
  Scenario: Access to FAQ content create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-faq"
    Then I should see the text "Create FAQ"

  @api
  Scenario: Access denied to create form without right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/nexteuropa-faq"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/nexteuropa-faq"
    When I press the "Save" button
    Then I should see the error message "Question field is required."
    And I should see the error message "Answer field is required."

  @api
  Scenario: Create FAQ content
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/nexteuropa-faq"
    Then I should see the heading "Create FAQ"
    When I fill in "title_field[und][0][value]" with "Behat FAQ Question #1"
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    When I select "Eligibility" from "Categories"
    And I press the "Save" button
    Then I should see the success message "FAQ Behat FAQ Question #1 has been created."
    And I should see the heading "Behat FAQ Question #1"
    And I should see "Lorem ipsum dolor sit amet body."

  @api
  Scenario: Edit FAQ content
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_faq" content:
      | title                    | Behat FAQ Question #2                      |
      | field_ne_body            | Proin ornare condimentum lectus id iaculis |
      | field_ne_faq_categories  | CLLD overview                              |
      | status                   | 1                                          |
    Then I should see the heading "Behat FAQ Question #2"
    And I click "New draft"
    And I fill in "title_field[en][0][value]" with "Behat FAQ Question #2.1"
    And I press the "Save" button
    And I should see the success message "FAQ Behat FAQ Question #2.1 has been updated."
    And I should see the heading "Behat FAQ Question #2.1"

  @api
  Scenario Outline: Create a faq content with category and test the view with this category
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_faq" content:
      | title                   | <title>                                    |
      | field_ne_body           | Proin ornare condimentum lectus id iaculis |
      | field_ne_faq_categories | <category>                                 |
      | status                  | 1                                          |
    Then I should see the heading "<title>"
    And I should see the text "Proin ornare condimentum lectus id iaculis"
    And I go to "<url>"
    Then I should get a "200" HTTP response
    And I should see the heading "<view_title>"
    And I should see the text "<title>"
    And I should see the text "Proin ornare condimentum lectus id iaculis"

    Examples:
      | category                   | title                                           | view_title                       | url                             |
      | CLLD overview              | Behat FAQ Question - CLLD overview              | FAQ - CLLD overview              | tools/faq/clld-overview         |
      | Eligibility                | Behat FAQ Question - Eligibility                | FAQ - Eligibility                | tools/faq/eligibility           |
      | Finance and administration | Behat FAQ Question - Finance and administration | FAQ - Finance and administration | tools/faq/finance-administration |
      | Setting up FLAGs           | Behat FAQ Question - Setting up FLAGs           | FAQ - Setting up FLAGs           | tools/faq/flag-set-up           |
      | Cooperation                | Behat FAQ Question - Cooperation                | FAQ - Cooperation                | tools/faq/cooperation           |
