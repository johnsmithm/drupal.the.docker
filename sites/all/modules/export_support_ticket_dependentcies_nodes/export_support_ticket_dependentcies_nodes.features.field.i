<?php
/**
 * @file
 * export_support_ticket_dependentcies_nodes.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function export_support_ticket_dependentcies_nodes_field_default_fields() {
  $fields = array();

  // Exported field: 'node-raum-body'.
  $fields['node-raum-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'raum',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-raum-field_artikel_noderef'.
  $fields['node-raum-field_artikel_noderef'] = array(
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
      'bundle' => 'raum',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '4',
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
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-raum-field_raum_bild'.
  $fields['node-raum-field_raum_bild'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_raum_bild',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'uri_scheme' => 'public',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'raum',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'medium',
          ),
          'type' => 'image',
          'weight' => '2',
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
      'field_name' => 'field_raum_bild',
      'label' => 'Bild',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'Raumbilder',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '5 MB',
        'max_resolution' => '800x600',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'imce' => 0,
              'plupload' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => '0',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => 'medium',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-raum-field_raumdokumente'.
  $fields['node-raum-field_raumdokumente'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_raumdokumente',
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
          'ausleihbares' => 0,
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
          'raumressourcen' => 'raumressourcen',
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
          'display_name' => '',
          'view_name' => '',
        ),
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'raum',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '3',
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
      'field_name' => 'field_raumdokumente',
      'label' => 'Raumdokumente',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => FALSE,
        ),
        'type' => 'options_select',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-raumressourcen-body'.
  $fields['node-raumressourcen-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'raumressourcen',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'entity_translation_sync' => FALSE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-raumressourcen-field_raum_ressourcen'.
  $fields['node-raumressourcen-field_raum_ressourcen'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_raum_ressourcen',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'file',
      'settings' => array(
        'display_default' => 0,
        'display_field' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'uri_scheme' => 'public',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'raumressourcen',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_accessible_icon',
          'weight' => '2',
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
      'field_name' => 'field_raum_ressourcen',
      'label' => 'Ressourcen',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'Raumreferenzdokumente',
        'file_extensions' => 'docx pdf doc ppt pptx xls xlsx',
        'max_filesize' => '5 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 0,
              'clipboard' => 0,
              'imce' => 0,
              'plupload' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 'upload',
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => '0',
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-raumressourcen-field_support_ticket_raum'.
  $fields['node-raumressourcen-field_support_ticket_raum'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_support_ticket_raum',
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
          'ausleihbares' => 0,
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
          'raum' => 'raum',
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
          'display_name' => '',
          'view_name' => '',
        ),
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'raumressourcen',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => 3,
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
      'field_name' => 'field_support_ticket_raum',
      'label' => 'Raum',
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
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Artikel');
  t('Bild');
  t('Body');
  t('Raum');
  t('Raumdokumente');
  t('Ressourcen');

  return $fields;
}
