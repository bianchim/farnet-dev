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
    And I should see the error message "Area field is required."
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
    When I fill in "Name" with "Behat Factsheet Flag Test #1"
    And I fill in "Body" with "Lorem ipsum dolor sit amet body."
    And I fill in "Abstract" with "Lorem ipsum dolor sit amet abstract."
    And I should see "Country" in the "div.form-item-field-term-country-und" element
    And I should see "Abstract" in the "div.form-item-field-publication-abstract-und-0-value" element
    And I should see "Publication Channels" in the "div.form-item-field-term-publication-channels-und" element
    And I should see "Publication date" in the "div.field-name-field-publication-date" element
    And I press the "Save" button
    # Then I should see the heading "Behat Factsheet Flag Test #1"
    # And I should see "Lorem ipsum dolor sit amet body."
    # And I should see "Lorem ipsum dolor sit amet abstract."
    # And I should see the success message "Factsheet Flag Behat Factsheet Flag Test #1 has been created."

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
      | field_term_region             | Region1 EN                             |
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
      | field_email                   | jhon.doe@farnet.dev                    |
      | field_telephone               | 0032011131453                          |
      | field_website                 | http://www.google.be                   |
      | field_address_1               | address 1                              |
      | field_address_2               | address 2                              |
      | field_zip_code                | 7200                                   |
      | field_city                    | Luxembourg                             |
    # | field_collection_budget       | 16                                     |
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
    # | field_ff_multi_funding        | 1                                      |
      | field_ff_summary              | Lorem ipsum summary                    |
      | field_ff_thematic_text        | Lorem ipsum thematic                   |
      | field_sea_basins              | Atlantic                               |
      | field_type_of_area            | Coastal                                |

    Then I should see the heading "Behat Factsheet Flag Test #2"
    And I click "New draft"
    And print current URL
    And I fill in "Name" with "Edit Behat Factsheet Flag Test #2.1"
    And I press the "Save" button
    And print current URL
    # And I should see the heading "Behat Factsheet Flag Test #2.1"
    # And I should see the success message "Factsheet Flag Behat Factsheet Flag Test #2.1 has been updated."

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
      | field_term_region             | Region1 EN                             |
      | field_area                    | Lux                                    |
      | field_ff_description          | Lorem ipsum dolor sit amet description.|
      | field_ff_population	          | 12500                                  |
      | field_ff_population_density	  | 12.5                                   |
      | field_ff_surface_area	      | 1000                                   |
      | field_ff_coastal_inland	      | Inland                                 |
      | field_ff_protected_areas	  | Lorem ipsum protected areas            |
      | field_ff_emff                 | 1100                                   |
      | field_ff_ms_co_financing      | 5000                                   |
      | field_ff_total_public_budget  | 16000                                  |
      | field_ff_number_staff         | 16                                     |
      | field_ff_flag_manager         | Jhon Doe                               |
      | field_ff_flag_president       | Jhon Doe                               |
      | field_email                   | jhon.doe@farnet.dev                    |
      | field_telephone               | 0032011131453                          |
      | field_website                 | http://www.google.be                   |
      | field_address_1               | address 1                              |
      | field_address_2               | address 2                              |
      | field_zip_code                | 7200                                   |
      | field_city                    | Luxembourg                             |
    # | field_collection_budget       | 16                                     |
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
    # | field_ff_multi_funding        | 1                                      |
      | field_ff_summary              | Lorem ipsum summary                    |
      | field_ff_thematic_text        | Lorem ipsum thematic                   |
    Then I should see the heading "Behat Factsheet Flag Test #3"
    When I click "New draft"
    And print current URL
    Then I should see the heading "Edit Factsheet Flag Behat Factsheet Flag Test #3"
    And I press "Delete"
    And print current URL
    # Then I should see "Are you sure you want to delete Behat Factsheet Flag Test #3?"
    # When I press "Delete"
    # And print current URL
    # Then I should see the success message "Factsheet Flag Behat Factsheet Flag Test #3 has been deleted."
