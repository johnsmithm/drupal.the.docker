<?php
/**
 * @file
 * export_support_ticket.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function export_support_ticket_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
