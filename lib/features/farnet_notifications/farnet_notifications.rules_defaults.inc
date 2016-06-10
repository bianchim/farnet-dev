<?php
/**
 * @file
 * farnet_notifications.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function farnet_notifications_default_rules_configuration() {
  $items = array();
  $items['rules_notification_first_login'] = entity_import('rules_config', '{ "rules_notification_first_login" : {
      "LABEL" : "Notification first login",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Notifications" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [ { "data_is_empty" : { "data" : [ "account:last-access" ] } } ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "6" : "6" } },
            "subject" : "First login",
            "message" : "First login of the user [site:current-user].",
            "from" : "[site:mail]"
          }
        }
      ]
    }
  }');
  $items['rules_rules_notification_first_profile_completed'] = entity_import('rules_config', '{ "rules_rules_notification_first_profile_completed" : {
      "LABEL" : "Notification first complete profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Notifications" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "site:current-user:field-profile-completed" ],
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "6" : "6" } },
            "subject" : "First complete of the profile",
            "message" : "First complete of the profile for the user [site:current-user].",
            "from" : "[site:mail]"
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-profile-completed" ],
            "value" : "1"
          }
        }
      ]
    }
  }');
  $items['rules_send_email_when_user_add_a_new_organisation'] = entity_import('rules_config', '{ "rules_send_email_when_user_add_a_new_organisation" : {
      "LABEL" : "Send Email when user add a new organisation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "account:field-organisation-other" ] } },
        { "NOT data_is" : {
            "data" : [ "account:field-organisation-other" ],
            "value" : "[account-unchanged:field-organisation-other]"
          }
        }
      ],
      "DO" : [
        { "mail" : {
            "to" : "[site:mail]",
            "subject" : "A user has added a new organisation on FARNET",
            "message" : "[account:name] has updated his profile with a new organisation named \\u0022[account:field-organisation-other]\\u0022",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
