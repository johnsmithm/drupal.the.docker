<?php
/**
 * @file
 * roles_export1.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_export1_user_default_roles() {
  $roles = array();

  // Exported role: Dozent.
  $roles['Dozent'] = array(
    'name' => 'Dozent',
    'weight' => '3',
    'machine_name' => '',
  );

  // Exported role: Kursmediendateien bearbeiten.
  $roles['Kursmediendateien bearbeiten'] = array(
    'name' => 'Kursmediendateien bearbeiten',
    'weight' => '10',
    'machine_name' => '',
  );

  // Exported role: Neues-Theme.
  $roles['Neues-Theme'] = array(
    'name' => 'Neues-Theme',
    'weight' => '11',
    'machine_name' => '',
  );

  // Exported role: Spezialaufgaben.
  $roles['Spezialaufgaben'] = array(
    'name' => 'Spezialaufgaben',
    'weight' => '12',
    'machine_name' => '',
  );

  // Exported role: hiwi.
  $roles['hiwi'] = array(
    'name' => 'hiwi',
    'weight' => '4',
    'machine_name' => '',
  );

  // Exported role: kannArtikelHinzufügen.
  $roles['kannArtikelHinzufügen'] = array(
    'name' => 'kannArtikelHinzufügen',
    'weight' => '6',
    'machine_name' => '',
  );

  // Exported role: kannLöschen.
  $roles['kannLöschen'] = array(
    'name' => 'kannLöschen',
    'weight' => '5',
    'machine_name' => '',
  );

  // Exported role: liveTV.
  $roles['liveTV'] = array(
    'name' => 'liveTV',
    'weight' => '13',
    'machine_name' => '',
  );

  // Exported role: memcache.
  $roles['memcache'] = array(
    'name' => 'memcache',
    'weight' => '9',
    'machine_name' => '',
  );

  // Exported role: sso-dozent.
  $roles['sso-dozent'] = array(
    'name' => 'sso-dozent',
    'weight' => '8',
    'machine_name' => '',
  );

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => '7',
    'machine_name' => '',
  );

  return $roles;
}
