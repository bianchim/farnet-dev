Feature: Factsheet Flag content type
  In order to manage factsheet flag on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario Outline: Access to Factsheet Flag form
    Given I am logged in as a user with the <role> role
    When I visit "node/add/factsheet-flag"
    Then I should see the heading "Create Factsheet Flag"
  Examples:
      | role          |
      | administrator |

  @api
  Scenario: Access denied to Factsheet Flag form
    Given I am an anonymous user
    When I go to "node/add/factsheet-flag"
    Then I should get an access denied error

  @api
  Scenario: Factsheet Flag check mandatory fields
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-flag"
    And I press the "Save" button
    Then I should see the error message "Name field is required."
    And I should see the error message "Name (official) field is required."
    And I should see the error message "Code field is required."
    And I should see the error message "Programming period field is required."
    And I should see the error message "Country field is required."
    And I should see the error message "Area (value 1) field is required."
    And I should see the error message "Address 1 field is required."
    And I should see the error message "City field is required."
    And I should see the error message "% of the budget allocated field is required."
    And I should see the error message "Objective field is required."
    And I should see the error message "Priority field is required."
    And I should see the error message "Email field is required."
    And I should see the error message "Aquaculture field is required."
    And I should see the error message "Description field is required."
    And I should see the error message "EMFF (a) field is required."
    And I should see the error message "% of environmental actors field is required."
    And I should see the error message "% of fisheries actors field is required."
    And I should see the error message "Fishing field is required."
    And I should see the error message "FLAG Manager field is required."
    And I should see the error message "Lead partner (Responsible Legal Entity) field is required."
    And I should see the error message "MS co-financing (b) field is required."
    And I should see the error message "Number of contracted staff in FLAG field is required."
    And I should see the error message "% of other (non-fisheries) private / NGO sector actors field is required."
    And I should see the error message "Population field is required."
    And I should see the error message "Population density field is required."
    And I should see the error message "Processing field is required."
    And I should see the error message "Protected areas field is required."
    And I should see the error message "% of public actors field is required."
    And I should see the error message "Summary field is required."
    And I should see the error message "Surface area (km²) field is required."
    And I should see the error message "Thematic expertise and cooperation field is required."
    And I should see the error message "Total employment in fisheries field is required."
    And I should see the error message "Total public budget allocated to the FLAG for 2014-2020 field is required."
    And I should see the error message "Women employment in fisheries field is required."
    And I should see the error message "Region field is required."
    And I should see the error message "Zip Code field is required."

  @api
  Scenario: Create factsheet flag
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/factsheet-flag"
    Then I should see the heading "Create Factsheet Flag"
    # Content tab
    And I fill in "title_field[und][0][value]" with "Behat Factsheet Flag Test #1"
    And I fill in "field_title_official[und][0][value]" with "Behat Factsheet Flag Test #1"
    And I fill in "field_ff_code[und][0][value]" with "12345"
    And I select the radio button "2007-2013"
    # Location tab
    And I fill in "field_term_country[und]" with "France"
    And I fill in "field_region[und][0][value]" with "Grand-Est"
    And I fill in "field_area[und][0][value]" with "Metz"
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
    And I select "Objective 1" from "field_collection_strategy[und][0][field_list_objective][und]"
    And I fill in "field_collection_strategy[und][0][field_priority][und][0][value]" with "42"
    And I fill in "field_collection_strategy[und][0][field_allocated_budget][und][0][value]" with "42"
    # Thematic expertise and cooperation tab
    And I fill in "field_ff_thematic_text[und][0][value]" with "Lorem ipsum dolor sit amet thematic"
    # Partnership tab
    And I fill in "field_ff_lead_partner[und][0][value]" with "Lorem ipsum lead partner"
    And I fill in "field_ff_public_actors[und][0][value]" with "42"
    And I fill in "field_ff_fisheries_actors[und][0][value]" with "42"
    And I fill in "field_ff_other_non_fisheries[und][0][value]" with "42"
    And I fill in "field_ff_environmental_actors[und][0][value]" with "42"
    # Budget tab
    And I fill in "field_ff_emff[und][0][value]" with "42"
    And I fill in "field_ff_ms_co_financing[und][0][value]" with "42"
    And I fill in "field_ff_total_public_budget[und][0][value]" with "42"
    # Contact tab
    And I fill in "field_ff_flag_manager[und][0][value]" with "Lorem ipsum manager"
    And I fill in "field_email[und][0][email]" with "Lorem@ipsul.com"
    And I fill in "field_address_1[und][0][value]" with "Lorem ipsum address"
    And I fill in "field_zip_code[und][0][value]" with "57000"
    And I fill in "field_city[und][0][value]" with "Metz"
    # Staff tab
    And I fill in "field_ff_number_staff[und][0][value]" with "42"
    # Language information tab
    And I select "French" from "field_collection_language[und][0][field_term_language][und]"
    And I select "Basic" from "field_collection_language[und][0][field_language_level][und]"
    And I press the "Save" button
    Then I should see the heading "Behat Factsheet Flag Test #1"
    And I should see "Lorem ipsum dolor sit amet thematic"
    And I should see "Lorem ipsum dolor sit amet description"
    And I should see the success message "Factsheet Flag Behat Factsheet Flag Test #1 has been created."

  @api
  Scenario: Edit factsheet flag
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
      | field_ff_flag_manager         | Jhon Doe                               |
      | field_ff_flag_president       | Jhon Doe                               |
      | field_telephone               | 0032011131453                          |
      | field_address_1               | address 1                              |
      | field_address_2               | address 2                              |
      | field_zip_code                | 7200                                   |
      | field_city                    | Luxembourg                             |
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
      | field_ff_thematic_text        | Lorem ipsum thematic                   |
      | field_sea_basins              | Atlantic                               |
      | field_type_of_area            | Coastal                                |
      | field_website                 | Test - http://www.google.com           |
    And attach a "field_collection_strategy" field collection to a "node" named "Behat Factsheet Flag Test #2" with:
      | field_list_objective   | Objective 1 |
      | field_priority         | 5           |
      | field_allocated_budget | 10000       |
    Then I should see the heading "Behat Factsheet Flag Test #2"
    And I click "New draft"
    And fill in "field_email[und][0][email]" with "john.doe@farnet.dev"
    And fill in "title_field[en][0][value]" with "Behat Factsheet Flag Test #2.1"
    And I press the "Save" button
    And I should see the heading "Behat Factsheet Flag Test #2.1"
    And I should see the success message "Factsheet Flag Behat Factsheet Flag Test #2.1 has been updated."

  @api
  Scenario: Delete factsheet flag
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
      | field_ff_flag_manager         | Jhon Doe                               |
      | field_ff_flag_president       | Jhon Doe                               |
      | field_telephone               | 0032011131453                          |
      | field_address_1               | address 1                              |
      | field_address_2               | address 2                              |
      | field_zip_code                | 7200                                   |
      | field_city                    | Luxembourg                             |
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
      | field_ff_thematic_text        | Lorem ipsum thematic                   |
      | field_sea_basins              | Atlantic                               |
      | field_type_of_area            | Coastal                                |
      | field_website                 | Test - http://www.google.com           |
    And attach a "field_collection_strategy" field collection to a "node" named "Behat Factsheet Flag Test #3" with:
      | field_list_objective   | Objective 1 |
      | field_priority         | 5           |
      | field_allocated_budget | 10000       |
    Then I should see the heading "Behat Factsheet Flag Test #3"
    When I click "New draft"
    # Manage the  email field that can't be filled normally.
    And fill in "field_email[und][0][email]" with "john.doe@farnet.dev"
    Then I should see the heading "Edit Factsheet Flag Behat Factsheet Flag Test #3"
    And I press "Delete"
    Then I should see "Are you sure you want to delete Behat Factsheet Flag Test #3?"
    When I press "Delete"
    Then I should see the success message "Factsheet Flag Behat Factsheet Flag Test #3 has been deleted."
