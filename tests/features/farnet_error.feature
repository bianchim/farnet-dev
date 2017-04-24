Feature: Farnet custom error
  In order to manage different Accecss denied page
  As an administrator
  I can change error messages for public and MyFarnet error page

  @api @cleanFarnetErrorVariables
  Scenario: Check Public Access denied page
    Given I am an anonymous user
    When I go to "admin"
    Then I should see the heading "Access denied"
    And I should see the text "You don't have access to this content."
    Given I am logged in as a user with the "administrator" role
    And I go to "admin/config/system/farnet_error"
    And I fill in "farnet_error_public_title" with "Access denied public"
    And I fill in "farnet_error_public_body[value]" with "You don't have access to public content"
    When I press the "Save configuration" button
    Then I should see the success message "The configuration options have been saved."
    When I click "French"
    And I fill in "farnet_error_public_title" with "Accès Refusé public"
    And I fill in "farnet_error_public_body[value]" with "Vous n'avez pas accès au contenu public"
    When I press the "Save configuration" button
    Then I should see the success message "The configuration options have been saved."
    Given I am an anonymous user
    When I go to "admin"
    Then I should see the heading "Access denied public"
    And I should see the text "You don't have access to public content"
    When I go to "admin_fr"
    Then I should see the heading "Accès Refusé public"
    And I should see the text "Vous n'avez pas accès au contenu public"
    When I go to "admin_es"
    Then I should see the heading "Access denied public"
    And I should see the text "You don't have access to public content"

  @api @cleanFarnetErrorVariables @test
  Scenario: Check Public Access denied page
    Given I am an anonymous user
    And I am viewing a "community_private" content:
      | title                 | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should see the heading "Welcome to myFARNET"
    And I should see the text "myFARNET is only accessible to registered users."
    Given I am logged in as a user with the "administrator" role
    And I go to "admin/config/system/farnet_error"
    And I fill in "farnet_error_myfarnet_anon_title" with "Access denied MyFarnet"
    And I fill in "farnet_error_myfarnet_anon_body[value]" with "You don't have access to MyFarnet content"
    When I press the "Save configuration" button
    Then I should see the success message "The configuration options have been saved."
    When I click "French"
    And I fill in "farnet_error_myfarnet_anon_title" with "Accès Refusé MyFarnet"
    And I fill in "farnet_error_myfarnet_anon_body[value]" with "Vous n'avez pas accès au contenu MyFarnet"
    When I press the "Save configuration" button
    Then I should see the success message "The configuration options have been saved."
    Given I am an anonymous user
    When I go to "community/private-community"
    Then I should see the heading "Access denied MyFarnet"
    And I should see the text "You don't have access to MyFarnet content"
    When I go to "community/private-community_fr"
    Then I should see the heading "Accès Refusé MyFarnet"
    And I should see the text "Vous n'avez pas accès au contenu MyFarnet"
    When I go to "community/private-community_es"
    Then I should see the heading "Access denied MyFarnet"
    And I should see the text "You don't have access to MyFarnet content"
	When I go to "admin"
    Then I should see the heading "Access denied"
    And I should see the text "You don't have access to this content."

