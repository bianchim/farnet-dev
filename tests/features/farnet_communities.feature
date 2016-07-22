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

  @api @here
  Scenario: As an anonymous user, I cannot see any of the communities and their content
    Given I am not logged in
    And I am viewing a "public_community" content:
      | title                 | A public community                    |
    # | group_group           | Group                                 |
    # | group_access          | Public - accessible to all site users |
      | field_ne_body         | Lorem ipsum dolor sit amet body.      |
    # And print last response
    Then I should get an access denied error

    And I am viewing a "private_community" content:
      | title                 | A private community                  |
    # | group_access          | 1                                    |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
    Then I should get an access denied error

    And I am viewing a "hidden_community" content:
      | title                 | A hidden community                   |
    # | group_access          | 1                                    |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
    Then I should get an access denied error

    And I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a public community    |
      | og_group_ref          | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
    Then I should get an access denied error

  @api 
  Scenario: As an authenticated user
    I can see public and private communities
    I can join a public community
    I can request to join a private community
    I cannot see hidden communities
    I can see contents of public communities

    Given I am logged in as a user with the "authenticated user" role
    And I am viewing a "public_community" content:
      | title                 | A public community                    |
    # | group_group           | Group                                 |
    # | group_access          | Public - accessible to all site users |
      | field_ne_body         | Lorem ipsum dolor sit amet body.      |
      | status                | 1                                     |
    Then I should see the heading "A public community"
    And I should see "Subscribe to group"

    And I am viewing a "private_community" content:
      | title                 | A private community                  |
    # | group_access          | 1                                    |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should see the heading "A private_community community"
    And I should see "Request group membership"

    And I am viewing a "hidden_community" content:
      | title                 | A hidden community                   |
    # | group_access          | 1                                    |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    Then I should get an access denied error

    And I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a public community    |
      | og_group_ref          | A public community                   |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    Then I should see the heading "An MS Fiche in a public community"

    And I am viewing a "ms_fiche" content:
      | title                 | An MS Fiche in a private community   |
      | og_group_ref          | A private community                  |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | field_farnet_abstract | Lorem ipsum dolor sit amet abstract. |
      | status                | 1                                    |
    Then I should get an access denied error

  @api
  Scenario:  As a member, I can add/edit/delete own content of any of the community where I am a member
    Given I am logged in as a user with the "authenticated user" role
    And I am viewing a "public_community" content:
      | title                 | A public community                   |
    # | group_access          | 0                                    |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    And I am a "member" of "A public community"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    And I fill in "title_field[und][0][value]" with "An MS Fiche in a public community"    
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I fill in "og_group_ref[und][0][admin][0][target_id]" with "A public community"
    And I press the "Save" button
    Then I should see the heading "A public community"

    And I am viewing a "public_community":
      | title                 | Another public community             |
    # | group_access          | 0                                    |
      | field_ne_body         | Lorem ipsum dolor sit amet body.     |
      | status                | 1                                    |
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    And I fill in "title_field[und][0][value]" with "An MS Fiche in another public community"    
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I fill in "og_group_ref[und][0][admin][0][target_id]" with "Another public community"
    And I press the "Save" button
    Then I should see the error message "You must select one or more groups for this content."

  @api 
  Scenario:  As a community administrator, I can add/edit/delete any content of any of the community where I am a community administrator
    Given I am logged in as a user with the "authenticated user" role
    And I am viewing a "public_community":
      | title                 | A public community                    |
    # | group_access          | Public - accessible to all site users |
      | field_ne_body         | Lorem ipsum dolor sit amet body.      |
      | status                | 1                                     |
    And I am a "administrator member" of "A public community"
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    And I fill in "title_field[und][0][value]" with "An MS Fiche in a public community"    
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I fill in "og_group_ref[und][0][admin][0][target_id]" with "A public community"
    And I press the "Save" button
    Then I should see the heading "A public community"

    And I am viewing a "public_community":
      | title                 | Another public community                   |
    # | group_access          | Private - accessible only to group members |
      | field_ne_body         | Lorem ipsum dolor sit amet body.           |
      | status                | 1                                          |
    And I visit "node/add/ms-fiche"
    Then I should see the heading "Create Cooperation MS Fiche"
    And I fill in "title_field[und][0][value]" with "An MS Fiche in another public community"    
    And I fill in "field_ne_body[und][0][value]" with "Lorem ipsum dolor sit amet body."
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I fill in "og_group_ref[und][0][admin][0][target_id]" with "Another public community"
    And I press the "Save" button
    Then I should see the heading "Another public community"