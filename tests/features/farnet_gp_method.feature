Feature: Factsheet GP Method content type
  In order to manage gp_method on the website
  As an authorised user
  I want to be able to create, edit and delete publications

  @api
  Scenario: Access to gp method create form
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-method"
    Then I should see the text "Create GP Method"

  @api
  Scenario: Access denied to create form without right
    Given I am logged in as a user with the "authenticated user" role
    When I go to "node/add/gp-method"
    Then I should get an access denied error

  @api
  Scenario: Check the error messages
    Given I am logged in as a user with the "administrator" role
    And I visit "node/add/gp-method"
    When I press the "Save" button
    Then I should see the error message "Area (value 1) field is required."
    And I should see the error message "ID field is required."
    And I should see the error message "Objectives field is required."
    And I should see the error message "Picture field is required."
    And I should see the error message "Activities field is required."
    And I should see the error message "Lessons field is required."
    And I should see the error message "Main achievements field is required."
    And I should see the error message "Skills field is required."
    And I should see the error message "Transferability field is required."
    And I should see the error message "Official Title field is required."
    And I should see the error message "Title field is required."
    And I should see the error message "You must select one or more groups for this content."

  @api
  Scenario: Create the content
    Given I am logged in as a user with the "administrator" role
    When I visit "node/add/gp-method_en"
    # Content tab
    And I fill in "field_id[und][0][value]" with "42"
    And I fill in "title_field[und][0][value]" with "Test gp method"
    And I fill in "field_title_official[und][0][value]" with "Test gp method"
    And I fill a media browser "field_picture[und][0][fid]" with an "image" named "behatTestImage.png"
    # Metadata tab
    And I fill in "og_group_ref[und][0][admin][0][target_id]" with "Global editorial team (1)"
    # Location tab
    And I fill in "edit-field-area-und-0-value" with "Test gp method"
    # Description tab
    And I fill in "field_objective[und][0][value]" with "Test gp method"
    And I fill in "field_gpm_activities[und][0][value]" with "Test gp method"
    And I fill in "field_gpm_main_achievements[und][0][value]" with "Test gp method"
    And I fill in "field_gpm_transferability[und][0][value]" with "Test gp method"
    And I fill in "field_gpm_lessons[und][0][value]" with "Test gp method"
    # Resources tab
    And I fill in "field_gpm_skills[und][0][value]" with "Test gp method"
    When I press the "Save" button
    Then I should see the heading "Test gp method"

  @api
  Scenario: Edit the content
    Given I am logged in as a user with the "administrator" role
    And I upload an "image" file named "behatTestImage.png"
    And I am viewing a "gp_method" content:
      | title                       | test gp method        |
      | field_id                    | 42                    |
      | field_title_official        | Test gp method        |
      | field_picture               | behatTestImage        |
      | og_group_ref                | Global editorial team |
      | field_area                  | Test gp method        |
      | field_objective             | Test gp method        |
      | field_gpm_activities        | Test gp method        |
      | field_gpm_main_achievements | Test gp method        |
      | field_gpm_transferability   | Test gp method        |
      | field_gpm_lessons           | Test gp method        |
      | field_gpm_skills            | Test gp method        |
      | status                      | 1                     |
    When I click "New draft"
    And I fill in "edit-title-field-en-0-value" with "Edited gp method"
    # Dates field can't be filled at automated node creation
    And I fill in "field_dates_start_end[und][0][value][date]" with "01/01/2000"
    And I fill in "field_dates_start_end[und][0][value2][date]" with "31/12/2000"
    # Temporary fix, |field_picture|behatTestImage| not working
    And I fill a media browser "field_picture[und][0][fid]" with an "image" named "behatTestImage.png"
    And I press the "Save" button
    Then I should see the heading "Edited gp method"

  @api
  Scenario: Delete the content
    Given I am logged in as a user with the "administrator" role
	And I upload an "image" file named "behatTestImage.png"
    And I am viewing a "gp_method" content:
      | title                       | test gp method        |
      | field_id                    | 42                    |
      | field_title_official        | Test gp method        |
      | field_picture               | behatTestImage        |
      | og_group_ref                | Global editorial team |
      | field_area                  | Test gp method        |
      | field_objective             | Test gp method        |
      | field_gpm_activities        | Test gp method        |
      | field_gpm_main_achievements | Test gp method        |
      | field_gpm_transferability   | Test gp method        |
      | field_gpm_lessons           | Test gp method        |
      | field_gpm_skills            | Test gp method        |
      | status                      | 1                     |
    When I click "New draft"
    # Dates field can't be filled at automated node creation
    And I fill in "field_dates_start_end[und][0][value][date]" with "01/01/2000"
    And I fill in "field_dates_start_end[und][0][value2][date]" with "31/12/2000"
    # Temporary fix, |field_picture|behatTestImage| not working
    And I fill a media browser "field_picture[und][0][fid]" with an "image" named "behatTestImage.png"
    And I press the "Delete" button
    Then I should see the heading "Are you sure you want to delete test gp method?"
    And I press the "Delete" button
    Then I should see the success message "GP Method test gp method has been deleted."