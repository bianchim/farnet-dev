Feature: Content types URL patterns
  In order to access to the contents 
  As an authorised or anonymous user
  I want to be able to access the different content types with clear URLs.

  @api
  Scenario: View news content
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/nexteuropa-news"
    And I fill in "title" with "Test url pattern news"
    And I click "Publication"
    And I fill in "Publication channels" with "Farnet News"
    And I press the "Save" button
    Then the url should match "news-events/news/farnet-news/test-url-pattern-news"


