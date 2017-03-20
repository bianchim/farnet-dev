<?php
/**
 * @file
 * farnet_communities.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function farnet_communities_default_rules_configuration() {
  $items = array();
  $items['og_join_private_community'] = entity_import('rules_config', '{ "og_join_private_community" : {
      "LABEL" : "Join private community",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "farnet" ],
      "REQUIRES" : [ "rules", "farnet_communities", "og" ],
      "ON" : { "og_user_insert" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "og-membership:state" ], "value" : "2" } },
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } }
      ],
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "node", "value" : [ "og-membership:group" ] },
            "PROVIDE" : { "variable_added" : { "group" : "Added variable" } }
          }
        },
        { "farnet_communities_get_admins" : {
            "USING" : { "group_content" : [ "group" ] },
            "PROVIDE" : { "group_managers" : { "group_managers" : "List of group managers" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-managers" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:mail" ],
                  "subject" : "A user asked to join the community [group:title]",
                  "message" : "The user [account:name] asked to join [group:title], you can review his request at [group:url]",
                  "language" : [ "" ]
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
