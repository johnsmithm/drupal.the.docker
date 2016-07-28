<?php
/**
 * @file
 * export_support_ticket_dependentcies_nodes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function export_support_ticket_dependentcies_nodes_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function export_support_ticket_dependentcies_nodes_node_info() {
  $items = array(
    'raum' => array(
      'name' => t('Raum'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'raumressourcen' => array(
      'name' => t('Raumressourcen'),
      'base' => 'node_content',
      'description' => t('Begleitdokumente für Räume'),
      'has_title' => '1',
      'title_label' => t('Ressourcen'),
      'help' => '',
    ),
  );
  return $items;
}
