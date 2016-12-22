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
  Scenario: View video path
    Given I upload a "video" file named "behatTestVideo.avi"
    When I go to "/library/videos/behattestvideo"
    Then I should see the text "behatTestVideo"

  @api @test
  Scenario Outline: View content alias URL
    Given "<type>" content:
      | title   |
      | <title> |
    And I go to "<url>"
    Then I should get a "200" HTTP response
    And I should see the heading "<title>"

    Examples:
    | title                                  | type                 | url                                                                            |
    | Test url pattern news                  | nexteuropa_news      | news-events/news/test-url-pattern-news_en                                      |
    | Test url pattern factsheet flag        | factsheet_flag       | on-the-ground/flag-factsheets/test-url-pattern-factsheet-flag_en               |
    | Test url pattern factsheet country     | factsheet_country    | on-the-ground/country-factsheets/test-url-pattern-factsheet-country_en         |
    | Test url pattern short story           | gp_short_story       | on-the-ground/good-practice/short-stories/test-url-pattern-short-story_en      |
    | Test url pattern project summary sheet | gp_project           | on-the-ground/good-practice/projects/test-url-pattern-project-summary-sheet_en |
    | Test url pattern summary sheet method  | gp_method            | on-the-ground/good-practice/methods/test-url-pattern-summary-sheet-method_en   |

  @api @test
  Scenario Outline: View content alias URL with parameter
    Given "<type>" content:
      | title   | <parameter_field> |
      | <title> | <parameter> |
    And I go to "<url>"
    Then I should get a "200" HTTP response
    And I should see the heading "<title>"

    Examples:
      | title                        | type             | url                                                      | parameter_field           | parameter    |
      | Test url pattern event       | nexteuropa_event | news-events/events/conferences/test-url-pattern-event_en | field_event_type          | conferences  |
      | Test url pattern publication | publication      | library/presentation/test-url-pattern-publication_en    | field_type_of_publication | presentation |