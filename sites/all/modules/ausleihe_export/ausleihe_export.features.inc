<?php
/**
 * @file
 * ausleihe_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ausleihe_export_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ausleihe_export_node_info() {
  $items = array(
    'ausleihe' => array(
      'name' => t('Ausleihe'),
      'base' => 'node_content',
      'description' => t('Ausleihe bei Büchern und DVDs'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
