Feature: Content types URL patterns
  In order to access to the contents 
  As an authorised or anonymous user
  I want to be able to access the different content types with clear URLs.

  Background:
    Given I am logged in as a user with the "administrator" role

  @api
  Scenario: View image path
    Given I upload an "image" file named "behatTestImage.png"
    When I go to "/library/photos/behattestimage"
    Then I should see the text "behatTestImage"

  @api
  Scenario: View image path
    Given I upload a "video" file named "behatTestVideo.avi"
    When I go to "/library/videos/behattestvideo"
    Then I should see the text "behatTestVideo"

  @api
  Scenario: View event content
    Given "nexteuropa_event" content:
      | title                  | field_event_type |
      | Test url pattern event | conferences      |
    And I go to "news-events/events/conferences/test-url-pattern-event"
    Then I should get a "200" HTTP response
    And I should see the heading "Test url pattern event"

  @api @test
  Scenario Outline: View content alias URL
    Given "<type>" content:
      | title   |
      | <title> |
    And I go to "<url>"
    Then I should get a "200" HTTP response
    And I should see the heading "<title>"

    Examples:
    | title                                  | type                  | url                                                                         |
    | Test url pattern news                  | nexteuropa_news       | news-events/news/test-url-pattern-news                                      |
    | Test url pattern factsheet flag        | factsheet_flag        | on-the-ground/flag-factsheets/test-url-pattern-factsheet-flag               |
    | Test url pattern factsheet country     | factsheet_country     | on-the-ground/country-factsheets/test-url-pattern-factsheet-country         |
    | Test url pattern short story           | project_short_story   | on-the-ground/good-practice/short-stories/test-url-pattern-short-story      |
    | Test url pattern project summary sheet | project_summary_sheet | on-the-ground/good-practice/projects/test-url-pattern-project-summary-sheet |
    | Test url pattern summary sheet method  | summary_sheet_method  | on-the-ground/good-practice/methods/test-url-pattern-summary-sheet-method   |
    | Test url pattern article               | farnet_article        | themes/test-url-pattern-article                                             |

  @api
  Scenario Outline: View content alias URL with parameter
    Given "<type>" content:
      | title   | <parameter_field> |
      | <title> | <parameter> |
    And I go to "<url>"
    Then I should get a "200" HTTP response
    And I should see the heading "<title>"

    Examples:
      | title                        | type             | url                                                   | parameter_field           | parameter   |
      | Test url pattern event       | nexteuropa_event | news-events/events/conferences/test-url-pattern-event | field_event_type          | conferences |
      | Test url pattern publication | publication      | library/brochure/test-url-pattern-publication         | field_type_of_publication | brochure    |