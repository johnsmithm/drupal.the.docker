<?php
/**
 * @file
 * roles_export.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_export_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
    'machine_name' => '',
  );

  return $roles;
}
