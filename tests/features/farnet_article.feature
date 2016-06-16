Feature: Article content type
  In order to manage article on the website
  As an administrator
  I want to be able to create, edit and delete publications

  @api
   Scenario Outline: Create article
    Given I am logged in as a user with the <role> role
    When I visit "node/add/article"
    Then I should see the heading "Create Article"
    When I fill in "title" with "Behat Article Test #1"
    And I fill in "Body" with "Lorem ipsum dolor sit amet body."
    And I fill in "Abstract" with "Lorem ipsum dolor sit amet abstract."
    And I should see "Image" in the "div.form-item-field-image-und-0" element
    And I should see "Page" in the "div.form-item-field-page-und" element
    And I should see "Country" in the "div.form-item-field-term-country-und" element
    And I fill in "Theme" with "237"
    And I should see "Teaser" in the "div.form-item-field-publication-abstract-und-0-value" element
    And I should see "Publication Channels" in the "div.form-item-field-term-publication-channels-und" element
    And I should see "Publication date" in the "div.field-name-field-publication-date" element
    And I press the "Save" button
    Then I should see the success message "Article Behat Article Test #1 has been created."
    And I should see the heading "Behat Article Test #1"
    And I should see "Lorem ipsum dolor sit amet body."
    And I should see "Lorem ipsum dolor sit amet abstract."
  
  Examples:
    | role          |
    | administrator |
  
  @api
  Scenario Outline: Edit article
    Given I am logged in as a user with the <role> role
    When I am viewing an "article" content:
      | title                       | Behat Article Test #2                     |
      | field_abstract              | Lorem ipsum dolor sit amet abstract. 		|
      | field_ne_body               | Lorem ipsum dolor sit amet body.          |
      | moderation state            | published                                 |
      | workbench_moderation_state  | published                                 |
      | status                      | 1          								|
      | field_term_theme            | Diversification   					    |
      | field_article_publication_date    | 1465294233    |
      | field_publication_date    | 1465294233    |
    Then I should see the heading "Behat Article Test #2"
    And I click "New draft"
    And I fill in "title" with "Behat Article Test #2.1"
    And I press the "Save" button
    Then I should see the success message "Article Behat Article Test #2.1 has been updated."
    And I should see the heading "Behat Article Test #2.1"
  
  Examples:
    | role          |
    | administrator |
	
  @api
  Scenario Outline: Delete article
    Given I am logged in as a user with the <role> role
    When I am viewing an "article" content:
      | title                       | Behat Article Test #3                     |
      | field_abstract              | Lorem ipsum dolor sit amet abstract. 		|
      | field_ne_body               | Lorem ipsum dolor sit amet body.          |
      | moderation state            | published                                 |
      | workbench_moderation_state  | published                                 |
      | status                      | 1          								|
      | field_term_theme            | Diversification   					    |
      | field_article_publication_date    | 1465294233    |
      | field_publication_date    | 1465294233    |
    Then I should see the heading "Behat Article Test #3"
    When I click "New draft"
    And I press "Delete"
    Then I should see "Are you sure you want to delete Behat Article Test #3?"
    When I press "Delete"
    Then I should see "Article Behat Article Test #3 has been deleted."
	
  Examples:
    | role          |
    | administrator |
    