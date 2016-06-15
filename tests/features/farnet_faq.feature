Feature: FAQ content type
  In order to manage faq on the website
  As an administrator

  @api
  Scenario: Create a faq content with category and test view faq-clld-overview
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "faq" content:
      | title                   | Question 1                                  |
      | body                    | Proin ornare condimentum lectus id iaculis  |
      | field_ne_body           | Proin ornare condimentum lectus id iaculis  |
      | field_ne_faq_categories | CLLD overview                               |
      | status                  | 1                                           |
    Then I should see the heading "Question 1"
    # And I should see the text "Proin ornare condimentum lectus id iaculis"
    And I visit "tools/faq/clld-overview"
    And I should see the heading "FAQ - CLLD overview"
    And I should see the text "Question 1"
    # And I should see the text "Proin ornare condimentum lectus id iaculis"