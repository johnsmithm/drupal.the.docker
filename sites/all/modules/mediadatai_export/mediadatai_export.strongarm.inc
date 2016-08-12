<?php
/**
 * @file
 * mediadatai_export.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediadatai_export_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_mediendatei';
  $strongarm->value = 0;
  $export['comment_anonymous_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_mediendatei';
  $strongarm->value = 1;
  $export['comment_default_mode_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_mediendatei';
  $strongarm->value = '50';
  $export['comment_default_per_page_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_mediendatei';
  $strongarm->value = 1;
  $export['comment_form_location_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_mediendatei';
  $strongarm->value = '1';
  $export['comment_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_mediendatei';
  $strongarm->value = '1';
  $export['comment_preview_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_mediendatei';
  $strongarm->value = 1;
  $export['comment_subject_field_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__mediendatei';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => TRUE,
      ),
      'ical' => array(
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'testmode1' => array(
        'custom_settings' => FALSE,
      ),
      'example_node_list' => array(
        'custom_settings' => TRUE,
      ),
      'teaserdozententext' => array(
        'custom_settings' => TRUE,
      ),
      'notifications' => array(
        'custom_settings' => TRUE,
      ),
      'mediendatei_buch' => array(
        'custom_settings' => TRUE,
      ),
      'kursansicht' => array(
        'custom_settings' => TRUE,
      ),
      'mediendatei_kurs' => array(
        'custom_settings' => FALSE,
      ),
      'foundation_video' => array(
        'custom_settings' => TRUE,
      ),
      'kursansicht_sanako' => array(
        'custom_settings' => TRUE,
      ),
      'live_results_search' => array(
        'custom_settings' => TRUE,
      ),
      'mediendatei_dvd' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'feeds' => array(
          'weight' => '0',
        ),
        'language' => array(
          'weight' => '26',
        ),
        'path' => array(
          'weight' => '25',
        ),
        'redirect' => array(
          'weight' => '40',
        ),
        'xmlsitemap' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'teaserdozententext' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'mediendatei_buch' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'kursansicht' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'foundation_video' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'kursansicht_sanako' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'live_results_search' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'mediendatei_dvd' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_mediendatei';
  $strongarm->value = '1';
  $export['i18n_node_extended_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_mediendatei';
  $strongarm->value = array();
  $export['i18n_node_options_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_mediendatei';
  $strongarm->value = array();
  $export['i18n_sync_node_type_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_mediendatei';
  $strongarm->value = '4';
  $export['language_content_type_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_mediendatei';
  $strongarm->value = array();
  $export['menu_options_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_mediendatei';
  $strongarm->value = 'main-menu:5812';
  $export['menu_parent_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_mediendatei';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_mediendatei';
  $strongarm->value = '0';
  $export['node_preview_mediendatei'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_mediendatei';
  $strongarm->value = 0;
  $export['node_submitted_mediendatei'] = $strongarm;

  return $export;
}
