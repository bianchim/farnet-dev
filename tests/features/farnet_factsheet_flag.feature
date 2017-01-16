Feature: FLAG Factsheet content type
  In order to manage FLAG Factsheet on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario Outline: Access to Flag Factsheet form
    Given I am logged in as a user with the <role> role
    When I visit "node/add/factsheet-flag"
    Then I should see the heading "Create FLAG Factsheet"
  Examples:
      | role          |
      | administrator |

  @api
  Scenario: Access denied to FLAG Factsheet form
    Given I am an anonymous user
    When I go to "node/add/factsheet-flag"
    Then I should get an access denied error

  @api @error
  Scenario: FLAG Factsheet check mandatory fields
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-flag"
    And I press the "Save" button
    Then I should see the error message "Name field is required."
    And I should see the error message "Abstract field is required."
    #And I should see the error message "Name (official) field is required."
    #And I should see the error message "Code field is required."

  @api @create
  Scenario: Create FLAG Factsheet
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-flag"
    Then I should see the heading "Create FLAG Factsheet"
    # Content tab
    And I fill in "title_field[und][0][value]" with "Behat Factsheet Flag Test #1"
    And I fill in "field_title_official[und][0][value]" with "Behat Factsheet Flag Test #1"
    And I fill in "field_farnet_abstract[und][0][value]" with "Lorem ipsum dolor sit amet abstract."
    And I fill in "field_ff_code[und][0][value]" with "12345"
    And I check the box "2007-2013"
    # Location tab
    And I fill in "field_term_country[und]" with "France"
    And I fill in "field_collection_region[und][0][field_region][und][0][value]" with "Grand-Est"
    And I fill in "field_collection_region[und][0][field_area][und][0][value]" with "Metz"
    # Area tab
    And I fill in "field_ff_description[und][0][value]" with "Lorem ipsum dolor sit amet description"
    And I fill in "field_ff_population[und][0][value]" with "42"
    And I fill in "field_ff_population_density[und][0][value]" with "42"
    And I fill in "field_ff_surface_area[und][0][value]" with "42"
    And I fill in "field_ff_protected_areas[und][0][value]" with "Lorem ipsum dolor sit amet protected area"
    And I fill in "field_ff_fishing[und][0][value]" with "42"
    And I fill in "field_ff_aquaculture[und][0][value]" with "42"
    And I fill in "field_ff_processing[und][0][value]" with "42"
    And I fill in "field_ff_total_employment[und][0][value]" with "42"
    And I fill in "field_ff_women_employment[und][0][value]" with "42"
    # Strategy tab
    And I fill in "field_ff_summary[und][0][value]" with "Lorem ipsum dolor sit amet summary"
    And I select "Supporting diversification" from "field_collection_strategy[und][0][field_list_objective][und]"
    And I fill in "field_collection_strategy[und][0][field_priority][und][0][value]" with "42"
    And I fill in "field_collection_strategy[und][0][field_allocated_budget][und][0][value]" with "42"
    # Partnership tab
    And I fill in "field_ff_public_actors[und][0][value]" with "42"
    And I fill in "field_ff_fisheries_actors[und][0][value]" with "42"
    And I fill in "field_ff_other_non_fisheries[und][0][value]" with "42"
    And I fill in "field_ff_environmental_actors[und][0][value]" with "42"
    And I fill in "field_ff_number_staff[und][0][value]" with "42"
    # Funding tab
    And I fill in "field_ff_emff[und][0][value]" with "42"
    And I fill in "field_ff_ms_co_financing[und][0][value]" with "42"
    And I fill in "field_ff_total_public_budget[und][0][value]" with "42"
    # FLAG Contact tab
    # Language information tab
    And I select "French" from "field_collection_language[und][0][field_term_language][und]"
    And I select "Basic" from "field_collection_language[und][0][field_language_level][und]"
    And I press the "Save" button
    Then I should see the heading "Behat Factsheet Flag Test #1"
    And I should see "Lorem ipsum dolor sit amet description"
    And I should see the success message "FLAG Factsheet Behat Factsheet Flag Test #1 has been created."

  @api @edit
  Scenario: Edit FLAG Factsheet
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "factsheet_flag" content:
      | title                         | Behat Factsheet Flag Test #2           |
      | field_title_official          | Behat Factsheet Flag Test #2 Official  |
      | field_ff_code                 | 12345                                  |
      | field_ff_programming_period   | 2007-2013                              |
      | field_farnet_abstract         | Lorem ipsum dolor sit amet abstract.   |
      | field_ne_body                 | Lorem ipsum dolor sit amet body.       |
      | moderation state              | published                              |
      | workbench_moderation_state    | published                              |
      | status                        | 1                                      |
      | field_publication_date        | 1465294233                             |
      | field_term_country            | Belgium                                |
      | field_region                  | Grand Est                              |
      | field_area                    | Lux                                    |
      | field_ff_description          | Lorem ipsum dolor sit amet description.|
      | field_ff_population	          | 12500                                  |
      | field_ff_population_density	  | 12.5                                   |
      | field_ff_surface_area	      | 1000                                   |
      | field_ff_protected_areas	  | Lorem ipsum protected areas            |
      | field_ff_emff                 | 1100                                   |
      | field_ff_ms_co_financing      | 5000                                   |
      | field_ff_total_public_budget  | 16000                                  |
      | field_ff_number_staff         | 16                                     |
      | field_ff_fishing	          | 1                                      |
      | field_ff_aquaculture	      | 2                                      |
      | field_ff_processing	          | 3                                      |
      | field_ff_total_employment	  | 6                                      |
      | field_ff_women_employment     | 16                                     |
      | field_ff_lead_partner         | Erwan Shaw                             |
      | field_ff_members_partnership  | 16                                     |
      | field_ff_public_actors        | 16                                     |
      | field_ff_fisheries_actors     | 16                                     |
      | field_ff_other_non_fisheries  | 16                                     |
      | field_ff_environmental_actors | 16                                     |
      | field_ff_number_assembly      | 16                                     |
      | field_ff_number_decision      | 16                                     |
      | field_ff_summary              | Lorem ipsum summary                    |
      | field_sea_basins              | Atlantic                               |
      | field_type_of_area            | Coastal                                |
      | field_website                 | Test - http://www.google.com           |
    And attach a "field_collection_strategy" field collection to a "node" named "Behat Factsheet Flag Test #2" with:
      | field_list_objective   | Objective 1 |
      | field_priority         | 5           |
      | field_allocated_budget | 10000       |
    Then I should see the heading "Behat Factsheet Flag Test #2"
    And I click "New draft"
    And fill in "title_field[en][0][value]" with "Behat Factsheet Flag Test #2.1"
    And I press the "Save" button
    And I should see the heading "Behat Factsheet Flag Test #2.1"
    And I should see the success message "FLAG Factsheet Behat Factsheet Flag Test #2.1 has been updated."

  @api @delete
  Scenario: Delete FLAG Factsheet
    Given I am logged in as a user with the "administrator" role
    When I am viewing an "factsheet_flag" content:
      | title                         | Behat Factsheet Flag Test #3           |
      | field_title_official          | Behat Factsheet Flag Test #3 Official  |
      | field_ff_code                 | 12345                                  |
      | field_ff_programming_period   | 2007-2013                              |
      | field_farnet_abstract         | Lorem ipsum dolor sit amet abstract.   |
      | field_ne_body                 | Lorem ipsum dolor sit amet body.       |
      | moderation state              | published                              |
      | workbench_moderation_state    | published                              |
      | status                        | 1                                      |
      | field_publication_date        | 1465294233                             |
      | field_term_country            | Belgium                                |
      | field_region                  | Grand Est                              |
      | field_area                    | Lux                                    |
      | field_ff_description          | Lorem ipsum dolor sit amet description.|
      | field_ff_population	          | 12500                                  |
      | field_ff_population_density	  | 12.5                                   |
      | field_ff_surface_area	      | 1000                                   |
      | field_ff_protected_areas	  | Lorem ipsum protected areas            |
      | field_ff_emff                 | 1100                                   |
      | field_ff_ms_co_financing      | 5000                                   |
      | field_ff_total_public_budget  | 16000                                  |
      | field_ff_number_staff         | 16                                     |
      | field_ff_fishing	          | 1                                      |
      | field_ff_aquaculture	      | 2                                      |
      | field_ff_processing	          | 3                                      |
      | field_ff_total_employment	  | 6                                      |
      | field_ff_women_employment     | 16                                     |
      | field_ff_lead_partner         | Erwan Shaw                             |
      | field_ff_members_partnership  | 16                                     |
      | field_ff_public_actors        | 16                                     |
      | field_ff_fisheries_actors     | 16                                     |
      | field_ff_other_non_fisheries  | 16                                     |
      | field_ff_environmental_actors | 16                                     |
      | field_ff_number_assembly      | 16                                     |
      | field_ff_number_decision      | 16                                     |
      | field_ff_summary              | Lorem ipsum summary                    |
      | field_sea_basins              | Atlantic                               |
      | field_type_of_area            | Coastal                                |
      | field_website                 | Test - http://www.google.com           |
    And attach a "field_collection_strategy" field collection to a "node" named "Behat Factsheet Flag Test #3" with:
      | field_list_objective   | Objective 1 |
      | field_priority         | 5           |
      | field_allocated_budget | 10000       |
    Then I should see the heading "Behat Factsheet Flag Test #3"
    When I click "New draft"
    Then I should see the heading "Edit FLAG Factsheet Behat Factsheet Flag Test #3"
    And I press "Delete"
    Then I should see "Are you sure you want to delete Behat Factsheet Flag Test #3?"
    When I press "Delete"
    Then I should see the success message "FLAG Factsheet Behat Factsheet Flag Test #3 has been deleted."
