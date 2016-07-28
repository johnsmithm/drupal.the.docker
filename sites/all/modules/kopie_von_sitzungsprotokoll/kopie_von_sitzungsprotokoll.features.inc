<?php
/**
 * @file
 * kopie_von_sitzungsprotokoll.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kopie_von_sitzungsprotokoll_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function kopie_von_sitzungsprotokoll_node_info() {
  $items = array(
    'sitzungsprotokoll' => array(
      'name' => t('Sitzungsprotokoll'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
