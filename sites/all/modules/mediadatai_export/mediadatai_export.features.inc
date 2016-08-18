<?php
/**
 * @file
 * mediadatai_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediadatai_export_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mediadatai_export_node_info() {
  $items = array(
    'mediendatei' => array(
      'name' => t('Mediendatei'),
      'base' => 'node_content',
      'description' => t('Oberbegriff für Audio- und Videodateien, evtl auch für eingescannte Texte u.ä.'),
      'has_title' => '1',
      'title_label' => t('Mediendatei'),
      'help' => '',
    ),
  );
  return $items;
}
