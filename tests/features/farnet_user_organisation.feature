Feature: Organisation field on user profile
  Check that the organisation is always filled on a user profile
  If no organisation was specified, the "other" field must be filled

  Background:
    Given I am logged in as a user with the "administrator" role

  @api
  Scenario: Fill neither organisation fields (creation form).
    Given I visit "/admin/people/create"
    And I press the "Create new account" button
    Then I should see the error message "One organisation field must be filled."

  @api
  Scenario: Fill the organisation field (creation form).
    Given an "organisation" content with the title "Test organisation"
    When I visit "/admin/people/create"
    And I fill in the autocomplete "Organisation" with "Test organisation"
    And I press the "Create new account" button
    Then I should not see the error message "One organisation field must be filled."

  @api
  Scenario: Fill the other organisation field (creation form).
    Given an "organisation" content with the title "Test organisation"
    When I visit "/admin/people/create"
    And I fill in "Organisation (other)" with "Test organisation"
    And I press the "Create new account" button
    Then I should not see the error message "One organisation field must be filled."

  @api
  Scenario: Fill neither organisation fields (edition form).
    Given I visit "/user"
    And I click "Edit"
    And I press the "Save" button
    Then I should see the error message "One organisation field must be filled."

  @api
  Scenario: Fill the organisation field (edition form).
    Given an "organisation" content with the title "Test organisation"
    When I visit "/user"
    And I click "Edit"
    And I fill in the autocomplete "Organisation" with "Test organisation"
    And I press the "Save" button
    Then I should not see the error message "One organisation field must be filled."

  @api
  Scenario: Fill the other organisation field (edition form).
    Given an "organisation" content with the title "Test organisation"
    When I visit "/user"
    And I click "Edit"
    And I fill in "Organisation (other)" with "Test organisation"
    And I press the "Save" button
    Then I should not see the error message "One organisation field must be filled."