<?php
/**
 * @file
 * ausleihbare_einzelst_cke.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ausleihbare_einzelst_cke_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ausleihbare_einzelst_cke_node_info() {
  $items = array(
    'ausleihbares' => array(
      'name' => t('ausleihbare Einzelstücke'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
