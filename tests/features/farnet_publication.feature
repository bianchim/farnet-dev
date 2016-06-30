Feature: Publication content type
  In order to manage publications on the website
  As an administrator
  I want to be able to create, edit and delete publications

  @api
  Scenario: Create a publication
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                       | EC decides tax advantages for Fiat are illegal                        |
      | field_farnet_abstract       | Commissioner states tax rulings are not in line with state aid rules. |
      | moderation state            | published                                                             |
      | workbench_moderation_state  | published                                                             |
      | status                      | 1                                                                     |
    Then I should see the heading "EC decides tax advantages for Fiat are illegal"
    And I should see the text "Commissioner states tax rulings are not in line with state aid rules."
    And I should see the text "Published by Anonymous"

  @api
  Scenario: Create a publication with publication type Brochures and test view brochures
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                       | Brochures EC decides tax advantages for Fiat are illegal                        |
      | field_farnet_abstract       | Brochures Commissioner states tax rulings are not in line with state aid rules. |
      | field_type_of_publication   | Brochure                                                                        |
      | field_publication_date      | 1465294233                                                                      |
      | status                      | 1                                                                               |
    Then I should see the heading "Brochures EC decides tax advantages for Fiat are illegal"
    And I should see the text "Brochures Commissioner states tax rulings are not in line with state aid rules."
    And I visit "library/brochures"
    And I should see the heading "Brochures"
    And I should see the text "Brochures EC decides tax advantages for Fiat are illegal"
    And I should see the text "Brochures Commissioner states tax rulings are not in line with state aid rules."
    And I should see the text "Read more"

  @api
  Scenario: Create a publication with publication type FARNET Magazines and test view magazines
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                     | Magazines EC decides tax advantages for Fiat are illegal                        |
      | field_farnet_abstract     | Magazines Commissioner states tax rulings are not in line with state aid rules. |
      | field_type_of_publication | FARNET Magazine                                                                 |
      | field_publication_date    | 1465294233                                                                      |
      | status                    | 1                                                                               |
    Then I should see the heading "Magazines EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line with state aid rules."
    And I should see the text "FARNET Magazine"
    And I should see the text "2016"
    And I visit "library/magazines"
    And I should see the heading "Magazines"
    And I should see the text "Magazines EC decides tax advantages for Fiat are illegal"
    And I should see the text "Magazines Commissioner states tax rulings are not in line with state aid rules."

  @api
  Scenario: Create a publication with publication type Presentations and test view presentations
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "publication" content:
      | title                     | Presentations EC decides tax advantages for Fiat are illegal                        |
      | field_farnet_abstract     | Presentations Commissioner states tax rulings are not in line with state aid rules. |
      | field_type_of_publication | Presentation                                                                        |
      | field_publication_date    | 1465294233                                                                          |
      | status                    | 1                                                                                   |
    Then I should see the heading "Presentations EC decides tax advantages for Fiat are illegal"
    And I should see the text "Presentations Commissioner states tax rulings are not in line with state aid rules."
    And I visit "library/presentations"
    And I should see the heading "Presentations"
    And I should see the text "Presentations EC decides tax advantages for Fiat are illegal"
    And I should see the text "Presentations Commissioner states tax rulings are not in line with state aid rules."
    And I should see the text "Read more"