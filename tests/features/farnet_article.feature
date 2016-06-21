Feature: Article content type
  In order to manage article on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario Outline: Access to Article form
    Given I am logged in as a user with the <role> role
    When I visit "node/add/farnet-article"
    Then I should see the heading "Create Article"
  Examples:
      | role          |
      | administrator |

  @api
  Scenario: Access denied to Article form
    Given I am an anonymous user
    When I go to "node/add/farnet-article"
    Then I should get an access denied error

  @api
  Scenario: Article check mandatory fields
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/farnet-article"
    And I press the "Save" button
    Then I should see the error message "Title field is required."
    And I should see the error message "Abstract field is required."
    And I should see the error message "Body field is required."
    And I should see the error message "Theme field is required."
    And I should see the error message "Image field is required."

  @api
   Scenario: Create article
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/farnet-article"
    Then I should see the heading "Create Article"
    When I fill in "title" with "Behat Article Test #1"
    And I fill in "Body" with "Lorem ipsum dolor sit amet body."
    And I fill in "Abstract" with "Lorem ipsum dolor sit amet abstract."
    And I attach the file "profiles/multisite_drupal_standard/themes/ec_resp/logo.png" to "edit-field-picture-und-0-upload"
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

  @api
  Scenario: Edit article
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "farnet_article" content:
      | title                       | Behat Article Test #2                 |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.  |
      | field_ne_body               | Lorem ipsum dolor sit amet body.      |
      | moderation state            | published                             |
      | workbench_moderation_state  | published                             |
      | status                      | 1                                     |
      | field_term_theme            | Diversification                       |
      | field_publication_date      | 1465294233                            |
    Then I should see the heading "Behat Article Test #2"
    And I click "Edit"
    And I fill in "title" with "Behat Article Test #2.1"
    And I attach the file "profiles/multisite_drupal_standard/themes/ec_resp/logo.png" to "edit-field-picture-und-0-upload"
    And I press the "Save" button
    And I should see the success message "Article Behat Article Test #2.1 has been updated."
    And I should see the heading "Behat Article Test #2.1"

  @api
  Scenario: Delete article
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "farnet_article" content:
      | title                       | Behat Article Test #3                     |
      | field_farnet_abstract       | Lorem ipsum dolor sit amet abstract.      |
      | field_ne_body               | Lorem ipsum dolor sit amet body.          |
      | moderation state            | published                                 |
      | workbench_moderation_state  | published                                 |
      | status                      | 1                                         |
      | field_term_theme            | Diversification                           |
      | field_publication_date      | 1465294233                                |
    Then I should see the heading "Behat Article Test #3"
    When I click "Edit"
    And I attach the file "profiles/multisite_drupal_standard/themes/ec_resp/logo.png" to "edit-field-picture-und-0-upload"
    And I press "Delete"
    Then I should see the heading "Are you sure you want to delete Behat Article Test #3?"
    When I press "Delete"
    Then I should see the success message "Article Behat Article Test #3 has been deleted."
