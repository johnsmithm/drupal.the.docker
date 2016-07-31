<?php
/**
 * @file
 * articlefc_export.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function articlefc_export_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_artikelfc-field_artikel_noderef'.
  $fields['field_collection_item-field_artikelfc-field_artikel_noderef'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_artikel_noderef',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'referenceable_types' => array(
          'amazon_suche' => 0,
          'article' => 0,
          'artikelgruppe' => 0,
          'ausleihbare_beh_lter_artikel' => 0,
          'ausleihbares' => 'ausleihbares',
          'ausleihbaresdvd' => 0,
          'ausleihe' => 0,
          'ausleihvorlagen' => 0,
          'blog' => 0,
          'book' => 0,
          'date' => 0,
          'dozententext' => 0,
          'epg_suchauftraege' => 0,
          'ereignis' => 0,
          'erklaerungsseiten' => 0,
          'feed' => 0,
          'feed_item' => 0,
          'forum' => 0,
          'h5p_content' => 0,
          'h5p_mediendatei' => 0,
          'icon_prototyp' => 0,
          'inventar' => 0,
          'kurs' => 0,
          'mediendatei' => 0,
          'merci_inventory' => 0,
          'merci_inventory_master' => 0,
          'merci_reservation' => 0,
          'notes' => 0,
          'page' => 0,
          'panel' => 0,
          'php_seite' => 0,
          'query_lesezeichen' => 0,
          'raum' => 0,
          'raumressourcen' => 0,
          'reservierungshistorie' => 0,
          'schl_ssell' => 0,
          'sendungen' => 0,
          'support_ticket' => 0,
          'tutorial' => 0,
          'video_dvd' => 0,
          'webform' => 0,
          'xbmc_videoplaylist' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'ausleihe_artikelnoderef',
        ),
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_artikelfc',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_plain',
          'weight' => '0',
        ),
        'ical' => array(
          'label' => 'hidden',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_plain',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_artikel_noderef',
      'label' => 'Artikel',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_artikelfc-field_status_dvd'.
  $fields['field_collection_item-field_artikelfc-field_status_dvd'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status_dvd',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'buch_ausleihstatus',
            'parent' => '0',
            'depth' => '',
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_artikelfc',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '1',
        ),
        'ical' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_status_dvd',
      'label' => 'Status',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-ausleihe-field_artikelfc'.
  $fields['node-ausleihe-field_artikelfc'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_artikelfc',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'revision_id' => array(
          0 => 'revision_id',
        ),
      ),
      'locked' => '0',
      'module' => 'field_collection',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'hide_blank_items' => 1,
        'path' => '',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'ausleihe',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_collection',
          'settings' => array(
            'add' => '',
            'delete' => '',
            'description' => 1,
            'edit' => '',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
          'weight' => '48',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_artikelfc',
      'label' => 'ArtikelFC',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Artikel');
  t('ArtikelFC');
  t('Status');

  return $fields;
}
