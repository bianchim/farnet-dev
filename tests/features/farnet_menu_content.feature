Feature: Test the presence of the content menu
  On long content types pages
  I can see a menu with the field groups

  @api
  Scenario: I check the GP Project menu
    Given I am logged in as a user with the "administrator" role
    And "factsheet_flag" content:
      | title | status |
      | Flag  | 1      |
    And "organisation" content:
      | title        | status |
      | Organisation | 1      |
    And "nexteuropa_mediagallery" content:
      | title        | status |
      | MediaGallery | 1      |
    And I am viewing a "gp_project" content:
      | title                        | test gp project |
      | field_id                     | 42              |
      | field_flag                   | Flag            |
      | field_gpp_objectives         | Lorem Ipsum     |
      | field_gpp_total_project_cost | 42              |
      | field_organisation           | Organisation    |
      | field_term_theme             | Aquaculture     |
      | field_gallery                | MediaGallery    |
      | field_publication_abstract   | Lorem Ipsum     |
      | field_dates_start_end        | 1, 2            |
      | status                       | 1               |
    Then I should see "Content" in the ".region-sidebar-left" element
    And I should see "Flag" in the ".region-sidebar-left" element
    And I should see "Description" in the ".region-sidebar-left" element
    And I should see "Project Cost / Funding" in the ".region-sidebar-left" element
    And I should see "Timeframe of implementation" in the ".region-sidebar-left" element
    And I should see "Beneficiary" in the ".region-sidebar-left" element
    And I should see "Media" in the ".region-sidebar-left" element
    But I should not see "Taxonomy" in the ".region-sidebar-left" element
    And I should not see "Publication" in the ".region-sidebar-left" element
    And I should not see "Metadata" in the ".region-sidebar-left" element

  @api
  Scenario: I check the GP Method menu
    Given I am logged in as a user with the "administrator" role
    And "organisation" content:
      | title        | status |
      | Organisation | 1      |
    And "nexteuropa_mediagallery" content:
      | title        | status |
      | MediaGallery | 1      |
    And I am viewing a "gp_method" content:
      | title                 | test gp method |
      | field_id              | 42             |
      | field_organisations   | Organisation   |
      | field_term_country    | France         |
      | field_objective       | objectives     |
      | field_gpm_skills      | skills         |
      | field_dates_start_end | 1, 2           |
      | field_gallery         | MediaGallery   |
      | field_term_theme      | Aquaculture    |
      | status                | 1              |
    Then I should see "Content" in the ".region-sidebar-left" element
    And I should see "Organisations" in the ".region-sidebar-left" element
    And I should see "Location" in the ".region-sidebar-left" element
    And I should see "Description" in the ".region-sidebar-left" element
    And I should see "Resources" in the ".region-sidebar-left" element
    And I should see "Timeframe of implementation" in the ".region-sidebar-left" element
    And I should see "Media" in the ".region-sidebar-left" element
    But I should not see "Taxonomy" in the ".region-sidebar-left" element
    And I should not see "Publication" in the ".region-sidebar-left" element
    And I should not see "Metadata" in the ".region-sidebar-left" element

  @api @test
  Scenario: I check the GP Short Story menu
    Given I am logged in as a user with the "administrator" role
    And "organisation" content:
      | title        | status |
      | Organisation | 1      |
    And "nexteuropa_mediagallery" content:
      | title        | status |
      | MediaGallery | 1      |
    And I am viewing a "gp_short_story" content:
      | title                           | test gp short story |
      | field_farnet_abstract           | Lorem Ipsum         |
      | field_quote_text                | Lorem Ipsum         |
      | field_dates_start_end           | 1, 2                |
      | field_budget                    | 42                  |
      | field_eu_contribution           | 13                  |
      | field_other_public_contribution | 13                  |
      | field_private_contribution      | 13                  |
      | field_organisation              | Organisation        |
      | field_term_theme                | Aquaculture         |
      | field_gallery                   | MediaGallery        |
      | field_publication_date          | 1                   |
      | status                          | 1                   |
    Then I should see "Content" in the ".region-sidebar-left" element
    And I should see "Quote" in the ".region-sidebar-left" element
    And I should see "Timeframe of implementation" in the ".region-sidebar-left" element
    And I should see "Funding" in the ".region-sidebar-left" element
    And I should see "Project information" in the ".region-sidebar-left" element
    And I should see "Media" in the ".region-sidebar-left" element
    But I should not see "Taxonomy" in the ".region-sidebar-left" element
    And I should not see "Publication" in the ".region-sidebar-left" element
    And I should not see "Metadata" in the ".region-sidebar-left" element

  @api
  Scenario: I check the Factsheet Flag menu
    Given I am logged in as a user with the "administrator" role
    And "organisation" content:
      | title        | status |
      | Organisation | 1      |
    And "nexteuropa_mediagallery" content:
      | title        | status |
      | MediaGallery | 1      |
    And "gp_method" content:
      | title        | status |
      | GpMethod     | 1      |
    And I am viewing a "factsheet_flag" content:
      | title                           | test flag factsheet       |
      | field_ff_description            | Area Description          |
      | field_ff_summary                | FALG Strategy Summary     |
      | field_ff_calls_for_projects     | Calls for projects        |
      | field_ff_emff                   | 42                        |
      | field_ff_project_title          | Project Title             |
      | field_ff_good_practice          | GpMethod                  |
      | field_ff_expertise_cooperation  | Expertise and cooperation |
      | field_ff_links_description      | CLLD groups Description   |
      | field_ff_accountable_body       | Partnership               |
      | field_ff_number_staff           | 42                        |
      | field_gallery                   | MediaGallery              |
      | field_organisation              | Organisation              |
      | field_ff_twitter                | ok, ok                    |
      | field_interactive_map           | Map                       |
      | status                          | 1                         |
    And attach a "field_collection_language" field collection to a "node" named "test flag factsheet" with:
      | field_term_language  | French |
      | field_language_level | Basic  |
    And I reload the page
    Then I should see "FLAG" in the ".region-sidebar-left" element
    And I should see "Area" in the ".region-sidebar-left" element
    And I should see "FLAG Strategy" in the ".region-sidebar-left" element
    And I should see "Funding" in the ".region-sidebar-left" element
    And I should see "Project examples" in the ".region-sidebar-left" element
    And I should see "Good Practice" in the ".region-sidebar-left" element
    And I should see "Calls for proposals" in the ".region-sidebar-left" element
    And I should see "Expertise & cooperation" in the ".region-sidebar-left" element
    And I should see "Cooperation ideas" in the ".region-sidebar-left" element
    And I should see "Links with LEADER or other CLLD groups" in the ".region-sidebar-left" element
    And I should see "Partnership" in the ".region-sidebar-left" element
    And I should see "Visuals" in the ".region-sidebar-left" element
    And I should see "FLAG Contacts" in the ".region-sidebar-left" element
    And I should see "Social media" in the ".region-sidebar-left" element
    And I should see "Map" in the ".region-sidebar-left" element

  @api
  Scenario: I check the Factsheet country menu
    Given I am logged in as a user with the "administrator" role
    And I upload a "document" file named "behatTestPdf.pdf"
    And "factsheet_flag" content:
      | title | status |
      | Flag  | 1      |
    And I am viewing a "factsheet_country" content:
      | title                      | test flag country |
      | field_axis_4               | Lorem Ipsum       |
      | field_emff_budget          | 42                |
      | field_flag_areas           | Flag              |
      | field_national_network     | Lorem Ipsum       |
      | field_cooperation          | Lorem Ipsum       |
      | field_key_actors_roles     | Lorem Ipsum       |
      | field_term_country         | France            |
      | field_publication_abstract | Lorem Ipsum       |
      | language                   | en                |
      | status                     | 1                 |
    And attach a "field_key_documents" field collection to a "node" named "test flag country" with:
      | field_key_document_label | document pdf |
      | field_document           | behatTestPdf |
    And I reload the page
    Then I should see "Content" in the ".region-sidebar-left" element
    And I should see "CLLD Programme" in the ".region-sidebar-left" element
    And I should see "CLLD Budget" in the ".region-sidebar-left" element
    And I should see "Areas" in the ".region-sidebar-left" element
    And I should see "National Network" in the ".region-sidebar-left" element
    And I should see "Cooperation" in the ".region-sidebar-left" element
    And I should see "Delivery of CLLD" in the ".region-sidebar-left" element
    And I should see "Key Documents" in the ".region-sidebar-left" element
    But I should not see "Taxonomy" in the ".region-sidebar-left" element
    And I should not see "Publication" in the ".region-sidebar-left" element
    And I should not see "Metadata" in the ".region-sidebar-left" element

  #@api
  #Scenario: I check the event field collections
  #  Given I am logged in as a user with the "administrator" role
  #  And I am viewing a "nexteuropa_event" content:
  #    | title                 | test event  |
  #    | field_farnet_abstract | Lorem Ipsum |
  #    | field_term_country    | France      |
  #    | status                | 1           |
  #  And attach a "field_sessions" field collection to a "node" named "test event" with:
  #    | title_field          | session title |
  #    | field_ff_description | session desc  |
  #  And attach a "field_speakers" field collection to another named "field_sessions" with:
  #    | name_field         | speaker name     |
  #    | field_job_position | speaker position |
  #  And I reload the page