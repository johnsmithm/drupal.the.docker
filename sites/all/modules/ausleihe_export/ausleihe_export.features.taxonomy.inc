<?php
/**
 * @file
 * ausleihe_export.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ausleihe_export_taxonomy_default_vocabularies() {
  return array(
    'buch_ausleihstatus' => array(
      'name' => 'Buch Ausleihstatus',
      'machine_name' => 'buch_ausleihstatus',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
