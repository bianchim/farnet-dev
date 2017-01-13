Feature: Check Views
  In order to check views on the website
  As an administrator
  I want to be able to create a article and see it on view

  @api
  Scenario: Create news and check it in view News
    Given I am logged in as a user with the "administrator" role
    When I am viewing a farnet news:
      | title                           | Behat News Test #1                   |
      | field_abstract                  | Lorem ipsum dolor sit amet abstract. |
      | field_ne_body                   | Lorem ipsum dolor sit amet body.     |
      | moderation state                | published                            |
      | workbench_moderation_state      | published                            |
      | status                          | 1                                    |
      | field_term_publication_channels | News - FARNET                        |
      | field_publication_date          | 1465294233                           |
    Then I should see the heading "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "news-events/news"
    And I should see the heading "News"
    And I should see the text "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create news and check it in view FARNET news
    Given I am logged in as a user with the "administrator" role
    When I am viewing a farnet news:
      | title                           | Behat News Test #2                   |
      | field_abstract                  | Lorem ipsum dolor sit amet abstract. |
      | field_ne_body                   | Lorem ipsum dolor sit amet body.     |
      | moderation state                | published                            |
      | workbench_moderation_state      | published                            |
      | status                          | 1                                    |
      | field_term_publication_channels | News - FARNET                        |
      | field_publication_date          | 1465294233                           |
    Then I should see the heading "Behat News Test #2"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "news-events/news/farnet"
    And I should see the heading "FARNET News"
    And I should see the text "Behat News Test #2"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create news and check it in view Other news
    Given I am logged in as a user with the "administrator" role
    When I am viewing a farnet news:
      | title                           | Behat News Test #3                   |
      | field_abstract                  | Lorem ipsum dolor sit amet abstract. |
      | field_ne_body                   | Lorem ipsum dolor sit amet body.     |
      | moderation state                | published                            |
      | workbench_moderation_state      | published                            |
      | status                          | 1                                    |
      | field_term_publication_channels | News - Other                         |
      | field_publication_date          | 1465294233                           |
    Then I should see the heading "Behat News Test #3"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    And I visit "news-events/news/other"
    And I should see the heading "Other News"
    And I should see the text "Behat News Test #3"
    And I should see "Lorem ipsum dolor sit amet abstract."

  @api
  Scenario: Create GP Project and check it in view Good Practices
    Given I am logged in as a user with the "administrator" role
    When "gp_project" content:
      | title                     | status  | field_publication_date  |
      | Behat GP Projects Test #1 | 1       | 1465294233              |
    When I visit "on-the-ground/good-practice"
    And I should see the heading "Good practice"
    And I should see the text "Behat GP Projects Test #1"

  @api
  Scenario: Create GP Project and check it in view Other GP Method
    Given I am logged in as a user with the "administrator" role
    When "gp_project" content:
      | title                     | status  | field_publication_date  |
      | Behat GP Projects Test #1 | 1       | 1465294233              |
    When I visit "on-the-ground/good-practice/projects"
    And I should see the heading "Projects"
    And I should see the text "Behat GP Projects Test #1"

  @api
  Scenario: Create GP Method and check it in view Other GP Method
    Given I am logged in as a user with the "administrator" role
    When "gp_method" content:
      | title                   | status  | field_publication_date  |
      | Behat GP Method Test #1 | 1       | 1465294233              |
    When I visit "on-the-ground/good-practice/methods"
    And I should see the text "Behat GP Method Test #1"

  @api
  Scenario: Create news with a term in second level and check it in view Themes
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "nexteuropa_news" content:
      | title                       | Behat News Test #1                    |
      | field_abstract              | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Aquaculture                           |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."
    And I should see "Lorem ipsum dolor sit amet body."
    #And I visit "themes"
    And I visit "themes_en"
    And I should see the heading "Themes"
    And I should see the text "Behat News Test #1"
    And I should see "Lorem ipsum dolor sit amet abstract."