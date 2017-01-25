Feature: Publication content type
  In order to manage publications on the website
  As an administrator
  I want to be able to create, edit and delete publications

  @api
  Scenario: Create a publication
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                      | EC decides tax advantages for Fiat are illegal                      |
      | field_farnet_abstract      | Magazines Commissioner states tax rulings are not in line abstract. |
      | field_ne_body              | Magazines Commissioner states tax rulings are not in line body.     |
      | moderation state           | published                                                           |
      | workbench_moderation_state | published                                                           |
      | status                     | 1                                                                     |
    Then I should see the heading "EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line body."
    And I should see the text "Published by Anonymous"

  @api
  Scenario: Create a publication with publication type Guides and test view guides
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                     | Guides EC decides tax advantages for Fiat are illegal               |
      | field_farnet_abstract     | Magazines Commissioner states tax rulings are not in line abstract. |
      | field_ne_body             | Magazines Commissioner states tax rulings are not in line body.     |
      | field_type_of_publication | Guide                                                               |
      | field_publication_date    | 1465294233                                                          |
      | status                    | 1                                                                   |
    Then I should see the heading "Guides EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line body."
    And I visit "library/guides"
    And I should see the heading "Guides"
    And I should see the text "Guides EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line abstract."

  @api
  Scenario: Create a publication with publication type FARNET Magazines and test view magazines
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                     | Magazines EC decides tax advantages for Fiat are illegal            |
      | field_farnet_abstract     | Magazines Commissioner states tax rulings are not in line abstract. |
      | field_ne_body             | Magazines Commissioner states tax rulings are not in line body.     |
      | field_type_of_publication | FARNET Magazine                                                     |
      | field_publication_date    | 1465294233                                                          |
      | status                    | 1                                                                   |
    Then I should see the heading "Magazines EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line body."
    And I should see the text "FARNET Magazine"
    And I visit "library/magazines"
    And I should see the heading "Magazines"
    And I should see the text "Magazines EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line abstract."

  @api
  Scenario: Create a publication with publication type Presentations and test view presentations
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                     | Presentations EC decides tax advantages for Fiat are illegal        |
      | field_farnet_abstract     | Magazines Commissioner states tax rulings are not in line abstract. |
      | field_ne_body             | Magazines Commissioner states tax rulings are not in line body.     |
      | field_type_of_publication | Presentation                                                        |
      | field_publication_date    | 1465294233                                                          |
      | status                    | 1                                                                   |
    Then I should see the heading "Presentations EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line body."
    And I visit "library/presentations"
    And I should see the heading "Presentations"
    And I should see the text "Presentations EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line abstract"