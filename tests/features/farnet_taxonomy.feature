Feature: Check Views Farnet Taxonomy Term
  In order to check views on the website
  As an administrator
  I want to be able to create a content and see it on view

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
    And I visit "themes/diversification_en"
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
    And I visit "themes/environment_en"
    And I should see the heading "Environment"
    And I should see the text "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create event and check it in view Theme Governance
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_event" content:
      | title                       | Behat Event Test #1                   |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Governance                            |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat Event Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "themes/governance_en"
    And I should see the heading "Governance"
    And I should see the text "Behat Event Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create news with a term in second level in the hierarchy and check it in view Parent
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_news" content:
      | title                       | Behat News Test #2                    |
      | field_abstract              | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Aquaculture                           |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat News Test #2"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "themes/adding-value-fisheries_en"
    And I should see the heading "Adding value to fisheries"
    And I should see the text "Behat News Test #2"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create news with a term in second level in the hierarchy and check it in view Theme Aquaculture
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_news" content:
      | title                       | Behat News Test #3                    |
      | field_abstract              | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Aquaculture                           |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat News Test #3"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "themes/adding-value-fisheries/aquaculture_en"
    And I should see the heading "Aquaculture"
    And I should see the text "Behat News Test #3"
    And I should see "Lorem ipsum dolor sit amet abstract."