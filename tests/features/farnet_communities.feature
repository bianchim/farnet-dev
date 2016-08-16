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
    And I am viewing a "community_public" content:
      | title                 | A public community                   |
    # And print last response
    Then I should get an access denied error

    And I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a public community    |
      | og_group_ref          | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
    Then I should get an access denied error

    And I am viewing a "community_private" content:
      | title                 | A private community                  |
    Then I should get an access denied error

    And I am viewing a "community_hidden" content:
      | title                 | A hidden community                   |
    Then I should get an access denied error

  @api 
  Scenario: As an authenticated user
    I can see public and private communities
    I can join a public community
    I can request to join a private community
    I cannot see hidden communities
    I can only see contents of public communities

    Given I am logged in as a user with the "authenticated user" role
    And I am viewing a "community_public" content:
      | title                 | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should see the heading "A public community"
    And I should see "Subscribe to group"
    And I am viewing a "community_private" content:
      | title                 | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should see the heading "A private community"
    And I should see "Request group membership"
    And I am viewing a "community_hidden" content:
      | title                 | A hidden community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should get an access denied error
    And I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a private community   |
      | og_group_ref          | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    Then I should get an access denied error
  # And I am viewing a "ms_fiche" content:
  #   | title                 | An MS Fiche in a public community    |
  #   | og_group_ref          | A public community                   |
  #   | field_ne_body         | Lorem ipsum dolor sit amet body.     |
  #   | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
  #   | status                | 1                                    |
  # And print last response
  # Then I should see the heading "An MS Fiche in a public community"

  @api 
  Scenario:  As a member, I can add/edit/delete only my own contents of any of the communities where I am a member

    Given I am an "authenticated user" user, member of entity "A public community" of type "community_public" as "member"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    Given I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a public community    |
      | og_group_ref          | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    Then I should not see "New draft"

    Given I am an "authenticated user" user, member of entity "A private community" of type "community_private" as "member"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    Given I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a private community   |
      | og_group_ref          | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    Then I should not see "New draft"

    Given I am an "authenticated user" user, member of entity "A hidden community" of type "community_hidden" as "member"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    Given I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a hidden community    |
      | og_group_ref          | A hidden community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    Then I should not see "New draft"

  @api 
  Scenario:  As a community administrator, I can add/edit/delete any contents of any of the communities where I am a community administrator

    Given I am an "authenticated user" user, member of entity "A public community" of type "community_public" as "administrator member"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    Given I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a public community    |
      | og_group_ref          | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    When I click "New draft"
    And I press the "Save" button
    Then I should see "Cooperation MS Fiche An MS Fiche in a public community has been updated."
    When I click "Edit draft"
    And I press the "Delete" button
    Then I should see "Are you sure you want to delete An MS Fiche in a public community?"

    Given I am an "authenticated user" user, member of entity "A private community" of type "community_private" as "administrator member"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    Given I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a private community   |
      | og_group_ref          | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    When I click "New draft"
    And I press the "Save" button
    Then I should see "Cooperation MS Fiche An MS Fiche in a private community has been updated."
    When I click "Edit draft"
    And I press the "Delete" button
    Then I should see "Are you sure you want to delete An MS Fiche in a private community?"

    Given I am an "authenticated user" user, member of entity "A hidden community" of type "community_hidden" as "administrator member"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    Given I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a hidden community    |
      | og_group_ref          | A hidden community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    When I click "New draft"
    And I press the "Save" button
    Then I should see "Cooperation MS Fiche An MS Fiche in a hidden community has been updated."  
    When I click "Edit draft"
    And I press the "Delete" button
    Then I should see "Are you sure you want to delete An MS Fiche in a hidden community?"
