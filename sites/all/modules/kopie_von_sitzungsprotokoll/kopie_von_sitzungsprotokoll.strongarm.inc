<?php
/**
 * @file
 * kopie_von_sitzungsprotokoll.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kopie_von_sitzungsprotokoll_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_sitzungsprotokoll';
  $strongarm->value = 0;
  $export['comment_anonymous_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_sitzungsprotokoll';
  $strongarm->value = 1;
  $export['comment_default_mode_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_sitzungsprotokoll';
  $strongarm->value = '50';
  $export['comment_default_per_page_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_sitzungsprotokoll';
  $strongarm->value = 1;
  $export['comment_form_location_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_sitzungsprotokoll';
  $strongarm->value = '1';
  $export['comment_preview_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_sitzungsprotokoll';
  $strongarm->value = '0';
  $export['comment_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_sitzungsprotokoll';
  $strongarm->value = 1;
  $export['comment_subject_field_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__sitzungsprotokoll';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'ical' => array(
        'custom_settings' => FALSE,
      ),
      'live_results_search' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'foundation_video' => array(
        'custom_settings' => FALSE,
      ),
      'kursansicht' => array(
        'custom_settings' => FALSE,
      ),
      'kursansicht_sanako' => array(
        'custom_settings' => FALSE,
      ),
      'mediendatei_buch' => array(
        'custom_settings' => FALSE,
      ),
      'mediendatei_dvd' => array(
        'custom_settings' => FALSE,
      ),
      'mediendatei_kurs' => array(
        'custom_settings' => FALSE,
      ),
      'teaserdozententext' => array(
        'custom_settings' => FALSE,
      ),
      'testmode1' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_sitzungsprotokoll';
  $strongarm->value = array();
  $export['i18n_sync_node_type_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_sitzungsprotokoll';
  $strongarm->value = '0';
  $export['language_content_type_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_sitzungsprotokoll';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_sitzungsprotokoll';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_sitzungsprotokoll';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_sitzungsprotokoll';
  $strongarm->value = '0';
  $export['node_preview_sitzungsprotokoll'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_sitzungsprotokoll';
  $strongarm->value = 0;
  $export['node_submitted_sitzungsprotokoll'] = $strongarm;

  return $export;
}
