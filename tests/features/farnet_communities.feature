Feature: Communities feature 
  As an Administrator
  I can create a public community, a private community or a hidden community
  As an anonymous user
  I cannot see any of the communities and their content
  As an authenticated user
  I can see public and private communities
  I can join a public community
  I can request to join a private community
  I cannot see hidden communities
  I can see contents of public communities
  As a member
  I can add/edit/delete own content of any of the community where I am a member
  As a community administrator
  I can add/edit/delete any content of any of the community where I am a community administrator

  @api
  Scenario: As an Administrator, I can create a public community, a private community or a hidden community

    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/community-public"
    Then I should see the text "Create Community public"
    And I fill in "title_field[und][0][value]" with "A public community"
    And I press the "Save" button
    # And print last response
    Then I should see the heading "A public community"

    And I visit "node/add/community-private"
    Then I should see the text "Create Community private"
    When I fill in "title_field[und][0][value]" with "A private community"
    And I press the "Save" button
    Then I should see the heading "A private community"

    And I visit "node/add/community-hidden"
    Then I should see the text "Create Community hidden"
    When I fill in "title_field[und][0][value]" with "A hidden community"
    And I press the "Save" button
    Then I should see the heading "A hidden community"

  @api 
  Scenario: As an anonymous user, I cannot see any of the communities and their content

    Given I am not logged in
    When I am viewing a "community_public" content:
      | title                 | A public community |
    # And print last response
    Then I should get an access denied error
    And I am viewing a "nexteuropa_news" content:
      | title                          | A News in a public community         |
      | og_group_ref                   | A public community                   |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should get an access denied error

    When I am viewing a "community_private" content:
      | title                 | A private community |
    Then I should get an access denied error
    And I am viewing a "nexteuropa_news" content:
      | title                          | A News in a private community        |
      | og_group_ref                   | A private community                  |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should get an access denied error

    When I am viewing a "community_hidden" content:
      | title                 | A hidden community |
    Then I should get an access denied error
    And I am viewing a "nexteuropa_news" content:
      | title                          | A News hidden community              |
      | og_group_ref                   | A hidden community                   |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should get an access denied error

  @api @test
  Scenario: As an authenticated user
    I can see public and private communities
    I can join a public community
    I can request to join a private community
    I cannot see hidden communities
    I can only see contents of public communities

    Given I am logged in as a user with the "authenticated user" role
    When I am viewing a "community_public" content:
      | title                 | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should see the heading "A public community"
    And I should see "Join"
    And I am viewing a "nexteuropa_news" content:
      | title                          | A News in a public community         |
      | og_group_ref                   | A public community                   |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should see the heading "A News in a public community"

    When I am viewing a "community_private" content:
      | title                 | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should see the heading "A private community"
  And I should see "Ask to join"
    And I am viewing a "nexteuropa_news" content:
      | title                          | A News in a private community        |
      | og_group_ref                   | A private community                  |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should get an access denied error

    When I am viewing a "community_hidden" content:
      | title                 | A hidden community               |
      | field_ne_body         | Lorem ipsum dolor sit amet body. |
      | status                | 1                                |
    Then I should get an access denied error
    And I am viewing a "nexteuropa_news" content:
      | title                          | A News in a hidden community         |
      | og_group_ref                   | A hidden community                   |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should get an access denied error

  @api
  Scenario Outline: As a member, I can add/edit/delete only my own contents of any of the communities where I am a member
    Given I am logged in as a user with the "authenticated user" role and I have the following fields:
      | name | Donald |
    And a "<community-type>" with the title "<community-title>"
    And I have the "member" role in the "<community-title>" group
    And I visit "<community-path>"
    Then I should see "<content-hname>" in the "sidebar_left" region
    When I click "<content-hname>" in the "sidebar_left" region
    Then I should see the heading "Create <content-hname>"
    Given I am viewing a "<content-type>" content:
      | title                          | My Content test                      |
      | og_group_ref                   | <community-title>                    |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
      | author                         | Donald                               |
    Then I should see the heading "My Content test"
    And I should see "New draft"
    When I click "New draft"
    Then I see the button "Delete"
    Given I am viewing a "<content-type>" content:
      | title                          | Content test                         |
      | og_group_ref                   | <community-title>                    |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should see the heading "Content test"
    And I should not see "New draft"

    Examples:
      | community-title     |  community-type   |  community-path             | content-hname             | content-type        |
      | A public community  | community_public  | community/public-community  | News                      | nexteuropa_news     |
      #| A public community  | community_public  | community/public-community  | Discussion                | myfarnet_discussion |
      | A public community  | community_public  | community/public-community  | Event                     | nexteuropa_event    |
      | A private community | community_private | community/private-community | News                      | nexteuropa_news     |
      #| A private community | community_private | community/private-community | Discussion                | myfarnet_discussion |
      | A private community | community_private | community/private-community | Event                     | nexteuropa_event    |
      | A hidden community  | community_hidden  | community/hidden-community  | News                      | nexteuropa_news     |
      #| A hidden community  | community_hidden  | community/hidden-community  | Discussion                | myfarnet_discussion |
      | A hidden community  | community_hidden  | community/hidden-community  | Event                     | nexteuropa_event    |

  @api
  Scenario Outline: As a member, I can add/edit/delete only my own contents of any of the communities where I am a administrator
    Given I am logged in as a user with the "authenticated user" role and I have the following fields:
      | name | Donald |
    And a "<community-type>" with the title "<community-title>"
    And I have the "administrator member" role in the "<community-title>" group
    And I visit "<community-path>"
    Then I should see "<content-hname>" in the "sidebar_left" region
    When I click "<content-hname>" in the "sidebar_left" region
    Then I should see the heading "Create <content-hname>"
    Given I am viewing a "<content-type>" content:
      | title                          | My Content test                      |
      | og_group_ref                   | <community-title>                    |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
      | author                         | Donald                               |
    Then I should see the heading "My Content test"
    And I should see "New draft"
    When I click "New draft"
    Then I see the button "Delete"
    Given I am viewing a "<content-type>" content:
      | title                          | Content test                         |
      | og_group_ref                   | <community-title>                    |
      | field_ne_body                  | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract          | Lorem ipsum dolor sit amet abstract. |
      | status                         | 1                                    |
      | workbench_moderation_state     | published                            |
      | workbench_moderation_state_new | published                            |
    Then I should see the heading "Content test"
    And I should see "New draft"
    When I click "New draft"
    Then I see the button "Delete"

    Examples:
      | community-title     |  community-type   |  community-path             | content-hname             | content-type        |
      | A public community  | community_public  | community/public-community  | News                      | nexteuropa_news     |
      #| A public community  | community_public  | community/public-community  | Discussion                | myfarnet_discussion |
      | A public community  | community_public  | community/public-community  | Event                     | nexteuropa_event    |
      | A private community | community_private | community/private-community | News                      | nexteuropa_news     |
      #| A private community | community_private | community/private-community | Discussion                | myfarnet_discussion |
      | A private community | community_private | community/private-community | Event                     | nexteuropa_event    |
      | A hidden community  | community_hidden  | community/hidden-community  | News                      | nexteuropa_news     |
      #| A hidden community  | community_hidden  | community/hidden-community  | Discussion                | myfarnet_discussion |
      | A hidden community  | community_hidden  | community/hidden-community  | Event                     | nexteuropa_event    |
