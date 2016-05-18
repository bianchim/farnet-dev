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
  return $items;
}
