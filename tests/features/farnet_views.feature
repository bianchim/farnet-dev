Feature: Check Views
  In order to check views on the website
  As an administrator
  I want to be able to create a article and see it on view

  @api
  Scenario: Create article and check it in view Theme Diversification
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "farnet_article" content:
      | title                       | Behat Article Test #1                 |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Diversification                       |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat Article Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "themes/diversification"
    And I should see the heading "Diversification"
    And I should see the text "Behat Article Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create news and check it in view Theme Environment
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_news" content:
      | title                       | Behat News Test #1                    |
      | field_abstract              | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Environment                           |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "themes/environment"
    And I should see the heading "Environment"
    And I should see the text "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create event and check it in view Theme Governance and management
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_event" content:
      | title                       | Behat Event Test #1                   |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Governance and management             |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat Event Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "themes/governance-management"
    And I should see the heading "Governance and management"
    And I should see the text "Behat Event Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."