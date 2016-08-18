<?php
/**
 * @file
 * mediadatai_export.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function mediadatai_export_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_kursmedien-field_audiodatei'.
  $fields['field_collection_item-field_kursmedien-field_audiodatei'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audiodatei',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'field_kursmedien',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'soundmanager2',
          'settings' => array(
            'audio_type' => 'default',
            'pause' => 'pause',
            'stream' => FALSE,
            'text' => 'description',
          ),
          'type' => 'soundmanager2_page_player',
          'weight' => '1',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '2',
        ),
        'kursdateien_verwalten' => array(
          'label' => 'hidden',
          'module' => 'soundmanager2',
          'settings' => array(
            'audio_type' => 'default',
            'pause' => 'pause',
            'stream' => FALSE,
            'text' => 'description',
          ),
          'type' => 'soundmanager2_page_player',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_audiodatei',
      'label' => 'Audiodatei',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'mp3',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 'attach',
              'clipboard' => 0,
              'plupload' => 0,
              'reference' => 'reference',
              'remote' => 0,
              'upload' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_generic',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kursmedien-field_dateianhang'.
  $fields['field_collection_item-field_kursmedien-field_dateianhang'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dateianhang',
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
        'display_default' => 1,
        'display_field' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'uri_scheme' => 'private',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'field_kursmedien',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download',
          'weight' => '2',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download',
          'weight' => '1',
        ),
        'kursdateien_verwalten' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_dateianhang',
      'label' => 'Dateianhang',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'attachment',
        'file_extensions' => 'txt pdf jpg doc docx odt png ppt pptx xls xlsx odp',
        'max_filesize' => '10MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_filefield_widget',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_mfw',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kursmedien-field_kursbemerkung'.
  $fields['field_collection_item-field_kursmedien-field_kursbemerkung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kursbemerkung',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_kursmedien',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'kursdateien_verwalten' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_minimal',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_kursbemerkung',
      'label' => 'KursBemerkung',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_kursmedien-field_kursvideodatei'.
  $fields['field_collection_item-field_kursmedien-field_kursvideodatei'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kursvideodatei',
      'field_permissions' => array(
        'type' => '2',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'field_kursmedien',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'videojs',
          'settings' => array(
            'height' => NULL,
            'posterimage_field' => NULL,
            'posterimage_style' => NULL,
            'width' => NULL,
          ),
          'type' => 'videojs',
          'weight' => '3',
        ),
        'kursdateien_verwalten' => array(
          'label' => 'hidden',
          'module' => 'videojs',
          'settings' => array(
            'height' => '',
            'posterimage_field' => NULL,
            'posterimage_style' => NULL,
            'width' => '',
          ),
          'type' => 'videojs',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_kursvideodatei',
      'label' => 'kursvideodatei',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => '',
        'file_extensions' => 'mov mp4',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'file',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 'attach',
              'clipboard' => 0,
              'plupload' => 0,
              'reference' => 'reference',
              'remote' => 0,
              'upload' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
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

  // Exported field: 'field_collection_item-field_kursmedien-field_videodatei'.
  $fields['field_collection_item-field_kursmedien-field_videodatei'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_videodatei',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'field_kursmedien',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => 4,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'mediaelement',
          'settings' => array(
            'controls' => 1,
            'download_link' => 0,
            'download_text' => 'Herunterladen',
            'height' => '282',
            'width' => '500',
          ),
          'type' => 'mediaelement_video',
          'weight' => '3',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursdateien_verwalten' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_videodatei',
      'label' => 'Videodatei',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'rel_remove' => 'default',
        'title' => 'optional',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => '255',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_videokapitel-field_video_kapitelname'.
  $fields['field_collection_item-field_videokapitel-field_video_kapitelname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video_kapitelname',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_videokapitel',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_video_kapitelname',
      'label' => 'Titel',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_videokapitel-field_video_kapitelposition'.
  $fields['field_collection_item-field_videokapitel-field_video_kapitelposition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video_kapitelposition',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_videokapitel',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_video_kapitelposition',
      'label' => 'Position',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '30',
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_amazon'.
  $fields['node-mediendatei-field_amazon'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_amazon',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'asin',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'asin',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'asin',
          'settings' => array(),
          'type' => 'asin_default',
          'weight' => '41',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '129',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '135',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '118',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_amazon',
      'label' => 'Amazon',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'asin',
        'settings' => array(),
        'type' => 'asin_text',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_anzahl_exemplare'.
  $fields['node-mediendatei-field_anzahl_exemplare'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_anzahl_exemplare',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_anzahl_exemplare',
      'label' => 'Anzahl Exemplare',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '10',
        'min' => '1',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_art'.
  $fields['node-mediendatei-field_art'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '5',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_art',
      'field_permissions' => array(
        'type' => '2',
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
            'vocabulary' => 'art',
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
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'tid' => '104429',
        ),
      ),
      'deleted' => '0',
      'description' => 'Inklusive Archivbestand, d.h. auch Medienart des Mutterbands berücksichtigen.<br/>
Bitte das Häkchen bei <b>Datei</b> nicht vergessen, wenn <b>Audio-</b> oder <b>Videodateien</b> hochgeladen wurden.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '121',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_art',
      'label' => 'Vorhandene Medienarten',
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_audiodatei'.
  $fields['node-mediendatei-field_audiodatei'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audiodatei',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '<b>Upload und Benennung in Etappen erledigen. 30 min. nach dem Öffnen der Bearbeiten-Ansicht erfolgt ein Timeout, danach erscheint beim Speichern der Seite eine Fehlermeldung und die Änderungen gehen verloren!</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'file',
          'settings' => array(),
          'type' => 'file_default',
          'weight' => '7',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'soundmanager2',
          'settings' => array(
            'audio_type' => 'default',
            'pause' => 'pause',
            'stream' => FALSE,
            'text' => 'description',
          ),
          'type' => 'soundmanager2_page_player',
          'weight' => '2',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_audiodatei',
      'label' => 'Audiodatei',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'audiodateien/ellert/oscar/audios/[current-date:custom:Y-m-d]/[current-user:uid]',
        'file_extensions' => 'mp3',
        'max_filesize' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_filefield_widget',
        'settings' => array(
          'progress_indicator' => 'bar',
        ),
        'type' => 'file_mfw',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_audios_sichtbar_bei_stud'.
  $fields['node-mediendatei-field_audios_sichtbar_bei_stud'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audios_sichtbar_bei_stud',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Studenten dürfen die Audios nicht sehen',
          1 => 'Studenten dürfen die Audios sehen',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '117',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_audios_sichtbar_bei_stud',
      'label' => 'Audios sichtbar bei Studenten',
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
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_audiotrack'.
  $fields['node-mediendatei-field_audiotrack'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_audiotrack',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '29',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '118',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '136',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_audiotrack',
      'label' => 'Audiotrack',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '46',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_aufloesung'.
  $fields['node-mediendatei-field_aufloesung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_aufloesung',
      'field_permissions' => array(
        'type' => '2',
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
            'vocabulary' => 'aufl_sung',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_reference_view_mode' => 'full',
          ),
          'type' => 'ds_taxonomy_view_mode',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_reference_view_mode' => 'full',
          ),
          'type' => 'ds_taxonomy_view_mode',
          'weight' => '2',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_aufloesung',
      'label' => 'Auflösung',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => 0,
        ),
        'type' => 'options_select',
        'weight' => '40',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_aufnahmedatum'.
  $fields['node-mediendatei-field_aufnahmedatum'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_aufnahmedatum',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 1,
        'entity_translation_sync' => FALSE,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => '0',
        'timezone_db' => 'UTC',
        'todate' => '',
        'tz_handling' => 'site',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'datestamp',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'medium',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '9',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'teaserdozententext' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_aufnahmedatum',
      'label' => 'Aufnahmedatum',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => 1,
          'input_format' => 'd.m.Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_ausgeliehen_an'.
  $fields['node-mediendatei-field_ausgeliehen_an'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ausgeliehen_an',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Falls das Buch an einen Dozenten ausgeliehen ist, sich also nicht am normalen Standort befindet, bitte hier eintragen, an wen und bis wann es ausgeliehen ist.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '3',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_ausgeliehen_an',
      'label' => 'Ausgeliehen an',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '80',
        ),
        'type' => 'text_textfield',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_ausleihbar'.
  $fields['node-mediendatei-field_ausleihbar'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ausleihbar',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Darf nicht ausgeliehen werden',
          1 => 'Darf ausgeliehen werden',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => 'Gilt natürlich nur für Bücher und DVDs. Standard ist "Darf ausgeliehen werden". Ist nichts ausgewählt, dann gilt der Artikel auch als ausleihbar.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_ausleihbar',
      'label' => 'Ausleihbar',
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
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_ausleihm_glichkeit'.
  $fields['node-mediendatei-field_ausleihm_glichkeit'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ausleihm_glichkeit',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'test_field_behavior' => array(
              'status' => 0,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'direction' => 'DESC',
            'property' => 'title',
            'type' => 'property',
          ),
          'target_bundles' => array(
            'ausleihbares' => 'ausleihbares',
          ),
        ),
        'target_type' => 'node',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Verknüpft die Mediendatei mit einer DVD im Verleihsystem.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '37',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_ausleihm_glichkeit',
      'label' => 'Ausleihmöglichkeit',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'test_instance_behavior' => array(
            'status' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_author'.
  $fields['node-mediendatei-field_author'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_author',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(
        'uid' => array(
          'columns' => array(
            'uid' => 'uid',
          ),
          'table' => 'users',
        ),
      ),
      'indexes' => array(
        'uid' => array(
          0 => 'uid',
        ),
      ),
      'locked' => '0',
      'module' => 'user_reference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'referenceable_roles' => array(
          2 => 0,
          3 => '3',
          4 => '4',
          5 => '5',
          6 => 0,
          7 => 0,
          8 => 0,
          9 => '9',
          10 => 0,
          11 => 0,
          12 => 0,
        ),
        'referenceable_status' => array(
          0 => 0,
          1 => '1',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'user_reference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '34',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '34',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_author',
      'label' => 'Auftraggeber',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'realname_userreference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'realname_userreference/autocomplete',
          'size' => '60',
        ),
        'type' => 'realname_userreference_auto',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_bemerkung_buch'.
  $fields['node-mediendatei-field_bemerkung_buch'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bemerkung_buch',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hier kann man zusätzliche Metadaten eintragen, die sich nicht durch die bestehenden Felder abbilden lassen.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '7',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_bemerkung_buch',
      'label' => 'Zusätzliche Informationen zum Buch',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '73',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_bild_tonqualitaet'.
  $fields['node-mediendatei-field_bild_tonqualitaet'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bild_tonqualitaet',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'fivestar',
      'settings' => array(
        'axis' => 'quality',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'fivestar',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Wie zufrieden sind Sie mit der Bild- und Tonqualität?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_bild_tonqualitaet',
      'label' => 'Bild/Ton',
      'required' => 0,
      'settings' => array(
        'allow_clear' => 1,
        'allow_ownvote' => TRUE,
        'allow_revote' => TRUE,
        'entity_translation_sync' => FALSE,
        'stars' => '5',
        'target' => 'none',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'fivestar',
        'settings' => array(),
        'type' => 'exposed',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_bitte_schneiden'.
  $fields['node-mediendatei-field_bitte_schneiden'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_bitte_schneiden',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nein',
          1 => 'Bitte schneiden',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Geschnitten wird im Normalfall nur bei zu archivierenden Aufnahmen.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '27',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '117',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_bitte_schneiden',
      'label' => 'Bitte Schneiden',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_autor'.
  $fields['node-mediendatei-field_buch_autor'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_autor',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Schema: "Vorname Nachname / Vorname Nachname / ..."',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '5',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '8',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_autor',
      'label' => 'Autor',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '67',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_beschreibung'.
  $fields['node-mediendatei-field_buch_beschreibung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_beschreibung',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '37',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '37',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '16',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '17',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '125',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '82',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '20',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_beschreibung',
      'label' => 'Beschreibung',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
        ),
        'type' => 'text_textarea',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_inhaltsverzeichnispdf'.
  $fields['node-mediendatei-field_buch_inhaltsverzeichnispdf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_inhaltsverzeichnispdf',
      'field_permissions' => array(
        'type' => '2',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'default',
          ),
          'type' => 'file_rendered',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'default',
          ),
          'type' => 'file_rendered',
          'weight' => '8',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'file_entity',
          'settings' => array(
            'file_view_mode' => 'default',
          ),
          'type' => 'file_rendered',
          'weight' => '8',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_inhaltsverzeichnispdf',
      'label' => 'buch_inhaltsverzeichnisPDF',
      'required' => 0,
      'settings' => array(
        'description_field' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'book_pdf/titel_[current-page:query:title]',
        'file_extensions' => 'pdf',
        'max_filesize' => '20MB',
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
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_generic',
        'weight' => '51',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_originaltitel'.
  $fields['node-mediendatei-field_buch_originaltitel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_originaltitel',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Transliteration des Titels ins lateinische Schriftsystem. Keine Titelübersetzung ins Deutsche! Ausfüllen nur bei Originaltiteln in nichtlateinischen Schriftsystemen wie Arabisch, Chinesisch, Farsi, Griechisch, Russisch usw.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '3',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '133',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '5',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_originaltitel',
      'label' => 'Transliterierter Titel',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '70',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_seiten'.
  $fields['node-mediendatei-field_buch_seiten'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_seiten',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '6',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '118',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '10',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_seiten',
      'label' => 'Seiten',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '69',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_standort'.
  $fields['node-mediendatei-field_buch_standort'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_standort',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Falls sich das Buch nicht im SLZ befindet, bitte hier den Standort eingeben (z.B. "Archiv Mutterbandmanuskripte", "U1.009"...).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '0',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '5',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_standort',
      'label' => 'Standort',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '80',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_thumb'.
  $fields['node-mediendatei-field_buch_thumb'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_thumb',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '32',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '121',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '132',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_thumb',
      'label' => 'buch_thumb',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '47',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buch_verlag'.
  $fields['node-mediendatei-field_buch_verlag'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buch_verlag',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '4',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '134',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '6',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buch_verlag',
      'label' => 'Verlag',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '68',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_buchkategorie'.
  $fields['node-mediendatei-field_buchkategorie'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_buchkategorie',
      'field_permissions' => array(
        'type' => '2',
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
            'vocabulary' => 'signaturkategorien',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_buchkategorie',
      'label' => 'Signaturkategorie',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => 0,
        ),
        'type' => 'options_select',
        'weight' => '64',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_cover'.
  $fields['node-mediendatei-field_cover'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_cover',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => '0',
            'linking_method' => 'onclick_full',
            'modal' => 'colorbox',
            'slide_style' => 'galleryformatter_slide',
            'style' => 'Greenarrows',
            'thumb_style' => 'galleryformatter_thumb',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => '0',
            'linking_method' => 'onclick_full',
            'modal' => 'colorbox',
            'slide_style' => 'galleryformatter_slide',
            'style' => 'Greenarrows',
            'thumb_style' => 'galleryformatter_thumb',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '3',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'live_results_search' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => '0',
            'linking_method' => 'onclick_full',
            'modal' => 'colorbox',
            'slide_style' => 'galleryformatter_slide',
            'style' => 'Greenarrows',
            'thumb_style' => 'galleryformatter_thumb',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '7',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'galleryformatter',
          'settings' => array(
            'link_to_full' => 1,
            'link_to_full_style' => '0',
            'linking_method' => 'onclick_full',
            'modal' => 'colorbox',
            'slide_style' => 'galleryformatter_slide',
            'style' => 'Greenarrows',
            'thumb_style' => 'galleryformatter_thumb',
          ),
          'type' => 'galleryformatter_default',
          'weight' => '4',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_cover',
      'label' => 'Cover/Inhaltsverzeichnis',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'bookCoverImages',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '3 MB',
        'max_resolution' => '800x900',
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
              'plupload' => 'plupload',
              'reference' => 0,
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => 'galleryformatter_thumb',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '65',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_credits'.
  $fields['node-mediendatei-field_credits'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_credits',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_credits',
      'label' => 'Credits',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '61',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_darsteller'.
  $fields['node-mediendatei-field_darsteller'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_darsteller',
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
            'vocabulary' => 'personen',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '1',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '24',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_darsteller',
      'label' => 'Darsteller',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'popular_tags' => array(
            'limit' => '',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_download'.
  $fields['node-mediendatei-field_download'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_download',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'foundation_video' => array(
          'label' => 'inline',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '43',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'kursansicht_sanako' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '131',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'mediendatei_buch' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'mediendatei_dvd' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '120',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_download',
      'label' => 'Download',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'optional',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '45',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_dozent_in_'.
  $fields['node-mediendatei-field_dozent_in_'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_dozent_in_',
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
            'vocabulary' => 'dozenten',
            'parent' => '0',
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_link' => 0,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '6',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_link' => 0,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '6',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_dozent_in_',
      'label' => 'Dozent(in)',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'deny',
          'popular_tags' => array(
            'limit' => '',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '49',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_drehorte'.
  $fields['node-mediendatei-field_drehorte'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_drehorte',
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
            'vocabulary' => 'drehorte',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '27',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '27',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'notifications' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_drehorte',
      'label' => 'Drehorte',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_ref_autocomplete',
        'settings' => array(
          'autocomplete_path' => 'term_ref_autocomplete/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'size' => 60,
        ),
        'type' => 'term_ref_autocomplete_widget',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_ects'.
  $fields['node-mediendatei-field_ects'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ects',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nein',
          1 => 'Ja',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_ects',
      'label' => 'ECTS',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '56',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_epg_search_id'.
  $fields['node-mediendatei-field_epg_search_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_epg_search_id',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_epg_search_id',
      'label' => 'epg_search_id',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_episodentitel'.
  $fields['node-mediendatei-field_episodentitel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_episodentitel',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'live_results_search' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'teaserdozententext' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_episodentitel',
      'label' => 'Episodentitel; Untertitel bei Büchern',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_errors_in_recording'.
  $fields['node-mediendatei-field_errors_in_recording'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_errors_in_recording',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
        'entity_translation_sync' => FALSE,
        'precision' => '10',
        'scale' => '0',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_decimal',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '48',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '117',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '134',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '123',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_errors_in_recording',
      'label' => 'Fehler in der Aufnahme',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_erscheinungsjahr'.
  $fields['node-mediendatei-field_erscheinungsjahr'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_erscheinungsjahr',
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
            'vocabulary' => 'erscheinungsjahr',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Bei Büchern das <b>Jahr der Auflage</b> eintragen (nicht Jahr des Drucks).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'foundation_video' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '32',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '32',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'kursansicht_sanako' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'mediendatei_buch' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'mediendatei_dvd' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '144',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_erscheinungsjahr',
      'label' => 'Erscheinungsjahr',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => 0,
        ),
        'type' => 'options_select',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_erstauff_hrung'.
  $fields['node-mediendatei-field_erstauff_hrung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_erstauff_hrung',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '51',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '120',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '138',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '126',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '117',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_erstauff_hrung',
      'label' => 'Erstaufführung',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '38',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_eventidsendungenkurz'.
  $fields['node-mediendatei-field_eventidsendungenkurz'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_eventidsendungenkurz',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_eventidsendungenkurz',
      'label' => 'eventIDSendungenKurz',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_fachstud'.
  $fields['node-mediendatei-field_fachstud'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_fachstud',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nein',
          1 => 'Ja',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_fachstud',
      'label' => 'für Fachstudenten',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '57',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_feed_item_description'.
  $fields['node-mediendatei-field_feed_item_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_feed_item_description',
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
        'views_base_table' => 0,
      ),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '36',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '36',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '15',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '16',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '81',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '19',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'search_result' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'teaserdozententext' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_feed_item_description',
      'label' => 'Zusammenfassung',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'entity_translation_sync' => FALSE,
        'linkit' => array(
          'button_text' => 'Suche',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_field_to_be_deleted_in_n_d'.
  $fields['node-mediendatei-field_field_to_be_deleted_in_n_d'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_field_to_be_deleted_in_n_d',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'entity_translation_sync' => FALSE,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 'second',
          'year' => 'year',
        ),
        'repeat' => '0',
        'timezone_db' => 'UTC',
        'todate' => '',
        'tz_handling' => 'site',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => 'Der Zeitpunkt, an dem der Film zum Löschen markiert wird. Damit wird er bei Suchen nicht mehr gefunden, kann aber weiterhin von Dozenten verlinkt und angesehen werden. Sieben Tage nach dem hier angegebenen Datum wird die Datei endgültig gelöscht.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '46',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '133',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '122',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_field_to_be_deleted_in_n_d',
      'label' => 'Löschzeitpunkt',
      'required' => 0,
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => '15',
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_file_anhang'.
  $fields['node-mediendatei-field_file_anhang'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_file_anhang',
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
        'display_default' => 1,
        'display_field' => 0,
        'entity_translation_sync' => array(
          0 => 'fid',
        ),
        'uri_scheme' => 'public',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'file',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '120',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_icon',
          'weight' => '5',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_icon',
          'weight' => '17',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_icon',
          'weight' => '19',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_icon',
          'weight' => '83',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'download_file',
          'settings' => array(),
          'type' => 'direct_download_icon',
          'weight' => '21',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_file_anhang',
      'label' => 'Dateianhang',
      'required' => 0,
      'settings' => array(
        'description_field' => 1,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'file-attachments',
        'file_extensions' => 'txt pdf doc docx ppt pptx xls xlsc',
        'max_filesize' => '5 MB',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'multiupload_filefield_widget',
        'settings' => array(
          'progress_indicator' => 'throbber',
        ),
        'type' => 'file_mfw',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_filesize'.
  $fields['node-mediendatei-field_filesize'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_filesize',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_filesize',
      'label' => 'Dateigröße',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'linkit' => array(
          'button_text' => 'Suche',
          'enable' => 0,
          'profile' => '',
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '39',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_genre'.
  $fields['node-mediendatei-field_genre'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '10',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_genre',
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
            'vocabulary' => 'genre',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '4',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'inline',
          'module' => 'i18n_taxonomy',
          'settings' => array(),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'teaserdozententext' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_reset',
      'entity_type' => 'node',
      'field_name' => 'field_genre',
      'label' => 'Genre',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'deny',
          'popular_tags' => array(
            'limit' => '20',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_hat_kapitel'.
  $fields['node-mediendatei-field_hat_kapitel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hat_kapitel',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nein',
          1 => 'Ja',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '122',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht_sanako' => array(
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
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '128',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_hat_kapitel',
      'label' => 'Hat Kapitel',
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
        'weight' => '75',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_hilfreich'.
  $fields['node-mediendatei-field_hilfreich'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_hilfreich',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'fivestar',
      'settings' => array(
        'axis' => 'vote',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'fivestar',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Wie nützlich fanden Sie diesen Beitrag für Ihr Studium?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '129',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_hilfreich',
      'label' => 'Nützlich',
      'required' => 0,
      'settings' => array(
        'allow_clear' => 1,
        'allow_ownvote' => TRUE,
        'allow_revote' => TRUE,
        'entity_translation_sync' => FALSE,
        'stars' => '5',
        'target' => 'none',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'fivestar',
        'settings' => array(),
        'type' => 'exposed',
        'weight' => '42',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_icon'.
  $fields['node-mediendatei-field_icon'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_icon',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_multivalue_index' => NULL,
            'colorbox_node_style' => '',
            'colorbox_node_style_first' => '',
          ),
          'type' => 'colorbox',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_icon',
      'label' => 'icon',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'images',
        'file_extensions' => 'png',
        'max_filesize' => '100 kb',
        'max_resolution' => '24x24',
        'min_resolution' => '24x24',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'filefield_sources' => array(
            'filefield_sources' => array(
              'attach' => 'attach',
              'clipboard' => 0,
              'plupload' => 0,
              'reference' => 0,
              'remote' => 0,
              'upload' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'images',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => '',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_imageratio'.
  $fields['node-mediendatei-field_imageratio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_imageratio',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Das Seitenverhältnis des Films. Nur ändern, falls der Film in einem falschen Seitenverhältnis dargestellt wird.
Beispiele:
4:3=><b>1.33</b>
16:9=><b>1.78</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '119',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_imageratio',
      'label' => 'Darstellungsverhältnis',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_inhaltlich_veraltet'.
  $fields['node-mediendatei-field_inhaltlich_veraltet'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_inhaltlich_veraltet',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'ist inhaltlich aktuell',
          1 => 'ist inhaltlich veraltet',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_inhaltlich_veraltet',
      'label' => 'Inhaltlich veraltet',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_inhaltsverzeichnis'.
  $fields['node-mediendatei-field_inhaltsverzeichnis'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_inhaltsverzeichnis',
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
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'colorbox',
          'settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_image_style' => '',
            'colorbox_multivalue_index' => NULL,
            'colorbox_node_style' => '',
            'colorbox_node_style_first' => '',
          ),
          'type' => 'colorbox',
          'weight' => '34',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '123',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_inhaltsverzeichnis',
      'label' => 'inhaltsverzeichnis',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'entity_translation_sync' => FALSE,
        'file_directory' => 'bookCoverImages',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '500x300',
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
              'plupload' => 0,
              'reference' => 0,
              'remote' => 0,
            ),
            'source_attach' => array(
              'absolute' => '0',
              'attach_mode' => 'move',
              'path' => 'file_attach',
            ),
            'source_imce' => array(
              'imce_mode' => 0,
            ),
            'source_reference' => array(
              'autocomplete' => '0',
            ),
          ),
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_inhaltsverzeichnisocrtext'.
  $fields['node-mediendatei-field_inhaltsverzeichnisocrtext'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_inhaltsverzeichnisocrtext',
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
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hier den mit der Texterkennungssoftware (OCR = <i>optical character recognition</i>) erkannten Text eingeben. Die Formatierung darf unordentlich bleiben.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '35',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '124',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_inhaltsverzeichnisocrtext',
      'label' => 'Inhaltsverzeichnis OCR-Text',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '66',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_inventur_timestamp'.
  $fields['node-mediendatei-field_inventur_timestamp'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_inventur_timestamp',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '118',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '136',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_inventur_timestamp',
      'label' => 'Inventur_timestamp',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '53',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_isbn'.
  $fields['node-mediendatei-field_isbn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_isbn',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '8',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '117',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '11',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_isbn',
      'label' => 'ISBN',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '71',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_ist_hoertext'.
  $fields['node-mediendatei-field_ist_hoertext'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ist_hoertext',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Mediendatei ist keine Hörtextseite',
          1 => 'Mediendatei ist zugleich auch Hörtextseite',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '119',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_ist_hoertext',
      'label' => 'Ist ein Hörtext',
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
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_kategorisierung'.
  $fields['node-mediendatei-field_kategorisierung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kategorisierung',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'fivestar',
      'settings' => array(
        'axis' => 'categorisation',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'fivestar',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Ist der Beitrag korrekt kategorisiert?
Sie können unter "weitere Stichworte vorschlagen" weitere Kategorien angeben.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '128',
        ),
        'mediendatei_buch' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_kategorisierung',
      'label' => 'Kategorisierung',
      'required' => 0,
      'settings' => array(
        'allow_clear' => 1,
        'allow_ownvote' => TRUE,
        'allow_revote' => TRUE,
        'entity_translation_sync' => FALSE,
        'stars' => '5',
        'target' => 'none',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'fivestar',
        'settings' => array(),
        'type' => 'exposed',
        'weight' => '44',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_keywords'.
  $fields['node-mediendatei-field_keywords'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_keywords',
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
            'vocabulary' => 'keywords',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Hier kann man Stichwörter durch Kommas getrennt vergeben. Bitte nicht die selben Ausdrücke wie bei den Genres verwenden. Noch nicht in der Datenbank erfasste Stichwörter werden automatisch beim Abspeichern erstellt. Bitte immer nur einen Teil des Wortes eintippen und warten, ob es dann von der Autovervollständigung vorgeschlagen wird.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '32',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '7',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '16',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '18',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '100',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '6',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '8',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
      ),
      'ds_extras_field_template' => 'theme_ds_field_reset',
      'entity_type' => 'node',
      'field_name' => 'field_keywords',
      'label' => 'Stichwörter',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'popular_tags' => array(
            'limit' => '20',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_kurs__startdate'.
  $fields['node-mediendatei-field_kurs__startdate'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kurs__startdate',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'entity_translation_sync' => FALSE,
        'granularity' => array(
          'day' => 'day',
          'hour' => 0,
          'minute' => 0,
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'repeat' => '0',
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'date',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'long',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'wochentag',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '5',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'date',
          'settings' => array(
            'format_type' => 'wochentag',
            'fromto' => 'both',
            'multiple_from' => '',
            'multiple_number' => '',
            'multiple_to' => '',
            'show_repeat_rule' => 'show',
          ),
          'type' => 'date_default',
          'weight' => '5',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_kurs__startdate',
      'label' => 'kurs_ startdate',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'display_all_day' => 0,
          'increment' => 15,
          'input_format' => 'Y-m-d H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'repeat_collapsed' => 0,
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '52',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_kurs_id'.
  $fields['node-mediendatei-field_kurs_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kurs_id',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_kurs_id',
      'label' => 'Kurs-ID(field_kurs_id)',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '48',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_kursmedien'.
  $fields['node-mediendatei-field_kursmedien'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kursmedien',
      'field_permissions' => array(
        'type' => '2',
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
        'hide_blank_items' => 0,
        'path' => '',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'view_mode' => 'token',
          ),
          'type' => 'field_collection_fields',
          'weight' => '1',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_kursmedien',
      'label' => 'Kursmedien',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection_table',
        'settings' => array(
          'nodragging' => FALSE,
        ),
        'type' => 'field_collection_table',
        'weight' => '51',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_kursverknuepfung'.
  $fields['node-mediendatei-field_kursverknuepfung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kursverknuepfung',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'handler' => 'views',
        'handler_settings' => array(
          'behaviors' => array(
            'test_field_behavior' => array(
              'status' => 0,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'view' => array(
            'args' => array(),
            'display_name' => 'entityreference_1',
            'view_name' => 'noderefkurs',
          ),
        ),
        'target_type' => 'node',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '56',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'entityreference',
          'settings' => array(
            'link' => FALSE,
          ),
          'type' => 'entityreference_label',
          'weight' => '1',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_kursverknuepfung',
      'label' => 'Kursverknüpfung',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'test_instance_behavior' => array(
            'status' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '60',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_kursview'.
  $fields['node-mediendatei-field_kursview'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kursview',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'view_id' => array(
          0 => 'view_id',
        ),
      ),
      'locked' => '0',
      'module' => 'viewreference',
      'settings' => array(
        'append_id' => 0,
        'arguments' => array(
          'delimiter' => '/',
          'dsv_arguments' => 0,
          'label' => '!field_label Argumente',
          'php_arguments' => 1,
          'rows' => '2',
        ),
        'entity_translation_sync' => FALSE,
        'referenceable_tags' => array(
          'allow' => '',
          'deny' => '',
        ),
        'referenceable_views' => array(
          'alle_genres:default' => 0,
          'alle_genres:page' => 0,
          'alleausleihgegenst_nde:default' => 0,
          'alleausleihgegenst_nde:page' => 0,
          'alleausleihgegenst_nde:page_1' => 0,
          'alledozenten:default' => 0,
          'alledozenten:page' => 0,
          'allemediendateien:default' => 0,
          'allemediendateien:page' => 0,
          'allesendungen:default' => 0,
          'allesendungen:page' => 0,
          'allesuchauftr_ge:default' => 0,
          'allesuchauftr_ge:page' => 0,
          'alletimer:default' => 0,
          'alletimer:page' => 0,
          'alletimer:page_1' => 0,
          'altemediathekmediendateien:default' => 0,
          'altemediathekmediendateien:page' => 0,
          'archive:block' => 0,
          'archive:default' => 0,
          'archive:page' => 0,
          'artikel_suche:block' => 0,
          'artikel_suche:default' => 0,
          'artikel_suche:page' => 0,
          'artikelsuche:block' => 0,
          'artikelsuche:default' => 0,
          'artikelsuche:page' => 0,
          'aufnahmefehler:block' => 0,
          'aufnahmefehler:default' => 0,
          'aufnahmefehler:page' => 0,
          'ausleihbares:block_1' => 0,
          'ausleihbares:default' => 0,
          'ausleihbares:page' => 0,
          'autocomplete_nodes:default' => 0,
          'autocomplete_nodes:page' => 0,
          'autocomplete_users:default' => 0,
          'autocomplete_users:page' => 0,
          'autocomplete_words:default' => 0,
          'autocomplete_words:page' => 0,
          'b_cher_mit_audios:default' => 0,
          'b_cher_mit_audios:page' => 0,
          'b_cher_ohne_coverbilder:block_1' => 0,
          'b_cher_ohne_coverbilder:block_2' => 0,
          'b_cher_ohne_coverbilder:default' => 0,
          'b_cher_ohne_coverbilder:page' => 0,
          'backlinks:block' => 0,
          'backlinks:default' => 0,
          'backlinks:page' => 0,
          'benutzersuche:block' => 0,
          'benutzersuche:default' => 0,
          'benutzersuche:page' => 0,
          'bitte_schneiden:block' => 0,
          'bitte_schneiden:default' => 0,
          'bitte_schneiden:page' => 0,
          'bulkchangeentities:default' => 0,
          'bulkchangeentities:page' => 0,
          'closedquestionuserlog:default' => 0,
          'closedquestionusers:default' => 0,
          'comments_recent:block' => 0,
          'comments_recent:default' => 0,
          'comments_recent:page' => 0,
          'diesuche:default' => 0,
          'diesuche:page' => 0,
          'epg_suchauftrag:block' => 0,
          'epg_suchauftrag:default' => 0,
          'epg_suchauftrag:page' => 0,
          'fastkalender:block_1' => 0,
          'fastkalender:block_2' => 0,
          'fastkalender:default' => 0,
          'fastkalender:feed_1' => 0,
          'fastkalender:page' => 0,
          'fastkalender:page_1' => 0,
          'fastkalender:page_2' => 0,
          'fastkalender:page_3' => 0,
          'feeds_defaults_feed_items:default' => 0,
          'feeds_defaults_feed_items:page_1' => 0,
          'feeds_log:default' => 0,
          'feeds_log:page_1' => 0,
          'feeds_log:page_2' => 0,
          'feeds_log:page_3' => 0,
          'fieldcollectiontest:default' => 0,
          'fieldcollectiontest:page' => 0,
          'filterbyname:default' => 0,
          'filterbyname:page' => 0,
          'flag_bookmarks:block_1' => 0,
          'flag_bookmarks:default' => 0,
          'flag_bookmarks:page' => 0,
          'flag_bookmarks_tab:default' => 0,
          'flag_bookmarks_tab:page' => 0,
          'frontpage:default' => 0,
          'frontpage:feed' => 0,
          'frontpage:page' => 0,
          'gedrucktesnichtverschlagwortet:block_1' => 0,
          'gedrucktesnichtverschlagwortet:default' => 0,
          'gedrucktesnichtverschlagwortet:page' => 0,
          'glossary:attachment' => 0,
          'glossary:default' => 0,
          'glossary:page' => 0,
          'h_rtextseiten_verwalten:block_1' => 0,
          'h_rtextseiten_verwalten:default' => 0,
          'h_rtextseiten_verwalten:page' => 0,
          'journal:default' => 0,
          'journal:page' => 0,
          'kalender:block_1' => 0,
          'kalender:block_2' => 0,
          'kalender:default' => 0,
          'kalender:feed_1' => 0,
          'kalender:page' => 0,
          'kalender:page_1' => 0,
          'kalender:page_2' => 0,
          'kalender:page_3' => 0,
          'kalender_aufnahmedatum:block_1' => 0,
          'kalender_aufnahmedatum:block_2' => 0,
          'kalender_aufnahmedatum:default' => 0,
          'kalender_aufnahmedatum:page' => 0,
          'kalender_aufnahmedatum:page_1' => 0,
          'kalender_aufnahmedatum:page_2' => 0,
          'kalender_aufnahmedatum:page_3' => 0,
          'kalendermerci:block_1' => 0,
          'kalendermerci:block_2' => 0,
          'kalendermerci:default' => 0,
          'kalendermerci:page' => 0,
          'kalendermerci:page_1' => 0,
          'kalendermerci:page_2' => 0,
          'kalendermerci:page_3' => 0,
          'kalenderseptember2013:block_1' => 0,
          'kalenderseptember2013:block_2' => 0,
          'kalenderseptember2013:default' => 0,
          'kalenderseptember2013:feed_1' => 0,
          'kalenderseptember2013:page' => 0,
          'kalenderseptember2013:page_1' => 0,
          'kalenderseptember2013:page_2' => 0,
          'kalenderseptember2013:page_3' => 0,
          'kalenderseptember2013:page_4' => 0,
          'keywords:default' => 0,
          'keywords:page' => 0,
          'kursdateien_hinzuf_gen_entfernen:default' => 0,
          'kursdateien_hinzuf_gen_entfernen:page' => 0,
          'kursdateien_hinzuf_gen_entfernen:page_1' => 0,
          'kursdateienmp3:default' => 0,
          'kursdateienmp3:page' => 0,
          'kursverwaltung:default' => 0,
          'kursverwaltung:page' => 0,
          'l_sche_alle_audiodateien:default' => 0,
          'l_sche_alle_audiodateien:page' => 0,
          'media2:default' => 0,
          'media2:feed' => 0,
          'media2:page' => 0,
          'media_op:default' => 0,
          'media_op:page' => 0,
          'mediafile_standard:block' => 0,
          'mediafile_standard:default' => 0,
          'mediafile_standard:page' => 0,
          'mediatest1:block' => 0,
          'mediatest1:default' => 0,
          'mediatest1:page' => 0,
          'mediendatei_detail_view:block' => 0,
          'mediendatei_detail_view:default' => 0,
          'mediendatei_detail_view:page' => 0,
          'mediensuche:default' => 0,
          'mediensuche:page' => 0,
          'meine_kurse:block' => 0,
          'meine_kurse:default' => 0,
          'meine_kurse:page' => 0,
          'merci_calendar_view:block_1' => 0,
          'merci_calendar_view:block_2' => 0,
          'merci_calendar_view:default' => 0,
          'merci_calendar_view:page' => 0,
          'merci_calendar_view:page_1' => 0,
          'merci_calendar_view:page_2' => 0,
          'merci_calendar_view:page_3' => 0,
          'merci_inventory_view:default' => 0,
          'merci_inventory_view:page_1' => 0,
          'merci_kalender:block_1' => 0,
          'merci_kalender:block_2' => 0,
          'merci_kalender:default' => 0,
          'merci_kalender:page' => 0,
          'merci_kalender:page_1' => 0,
          'merci_kalender:page_2' => 0,
          'merci_kalender:page_3' => 0,
          'merci_reservable_items:default' => 0,
          'merci_reservable_items:page_1' => 0,
          'merci_reservable_items:page_2' => 0,
          'merci_reservable_items:page_3' => 0,
          'merci_ui_node_reservations:default' => 0,
          'merci_ui_node_reservations:page_1' => 0,
          'merci_ui_reservations:block_1' => 0,
          'merci_ui_reservations:block_2' => 0,
          'merci_ui_reservations:default' => 0,
          'merci_ui_reservations:page_1' => 0,
          'merci_ui_reservations:page_2' => 0,
          'merci_ui_reservations:page_3' => 0,
          'merci_ui_reservations:page_4' => 0,
          'merci_ui_reservations:page_5' => 0,
          'merci_ui_reservations:search_api_views_facets_block_1' => 0,
          'merci_ui_user_reservations:default' => 0,
          'merci_ui_user_reservations:page_1' => 0,
          'moviedownloadlink:default' => 0,
          'moviedownloadlink:page' => 0,
          'mp3_kursdateien:default' => 0,
          'mp3_kursdateien:embed_1' => 'mp3_kursdateien:embed_1',
          'mp3_kursdateien:page' => 'mp3_kursdateien:page',
          'mp3_kursdateien:page_1' => 'mp3_kursdateien:page_1',
          'my_recent_recordings:block_1' => 0,
          'my_recent_recordings:default' => 0,
          'my_recent_recordings:page' => 0,
          'myrecordings:block' => 0,
          'myrecordings:default' => 0,
          'myrecordings:page' => 0,
          'mysolrview:default' => 0,
          'mysolrview:page' => 0,
          'mytags:default' => 0,
          'mytags:page' => 0,
          'mytagsview:block_1' => 0,
          'mytagsview:default' => 0,
          'mytagsview:page' => 0,
          'neuesteaufnahmen:block' => 0,
          'neuesteaufnahmen:default' => 0,
          'neuesteaufnahmen:page' => 0,
          'nicht_kategorisierte_b_cher:block' => 0,
          'nicht_kategorisierte_b_cher:default' => 0,
          'nicht_kategorisierte_b_cher:page' => 0,
          'noderefkurs:default' => 0,
          'noderefkurs:entityreference_1' => 0,
          'noderefkurs:page' => 0,
          'noderefmediendatei:default' => 0,
          'noderefmediendatei:entityreference_1' => 0,
          'noderefmediendatei:page' => 0,
          'notifications_content_node_list:default' => 0,
          'notifications_content_node_list:page' => 0,
          'ocr_feld_leer:default' => 0,
          'ocr_feld_leer:page' => 0,
          'popular:block' => 0,
          'popular:block_1' => 0,
          'popular:default' => 0,
          'popular:page' => 0,
          'popular:page_1' => 0,
          'recent_recordings:block_1' => 0,
          'recent_recordings:default' => 0,
          'recent_recordings:page' => 0,
          'rechter_block_autorefresh:block_1' => 0,
          'rechter_block_autorefresh:block_2' => 0,
          'rechter_block_autorefresh:default' => 0,
          'rechter_block_autorefresh:page_1' => 0,
          'rechter_block_autorefresh:page_2' => 0,
          'rechter_block_autorefresh:page_3' => 0,
          'rechter_block_autorefresh:page_4' => 0,
          'rechter_block_autorefresh:page_5' => 0,
          'rechter_block_autorefresh:search_api_views_facets_block_1' => 0,
          'reservierungen:block_1' => 0,
          'reservierungen:block_2' => 0,
          'reservierungen:default' => 0,
          'reservierungen:page' => 0,
          'reservierungen:page_1' => 0,
          'reservierungen:page_2' => 0,
          'reservierungen:page_3' => 0,
          'reservierungsjournal:default' => 0,
          'reservierungsjournal:page' => 0,
          'reservierungsjournal:page_1' => 0,
          'rules_scheduler:default' => 0,
          'serien:default' => 0,
          'serien:page' => 0,
          'similarterms:block' => 0,
          'similarterms:default' => 0,
          'solrview:default' => 0,
          'solrview:page' => 0,
          'svdrp_test:default' => 0,
          'svdrp_test:page' => 0,
          'taxonomy_term:default' => 0,
          'taxonomy_term:feed' => 0,
          'taxonomy_term:page' => 0,
          'taxonomy_term:page_1' => 0,
          'top_content:default' => 0,
          'top_content:page_1' => 0,
          'top_content:page_2' => 0,
          'top_content:page_3' => 0,
          'tracker:default' => 0,
          'tracker:page' => 0,
          'tracker_nachaufnahmedatum:default' => 0,
          'tracker_nachaufnahmedatum:page' => 0,
          'vdr:default' => 0,
          'vdr:page' => 0,
          'vdrview:default' => 0,
          'vdrview:page' => 0,
          'verkn_pfte_mediendateien:default' => 0,
          'verkn_pfte_mediendateien:page' => 0,
          'zuml_schenvorbereitet:default' => 0,
          'zuml_schenvorbereitet:page' => 0,
        ),
        'skip_default' => 0,
        'skip_empty' => 0,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'viewreference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_default',
          'weight' => '5',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_default',
          'weight' => '7',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_default',
          'weight' => '0',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_kursview',
      'label' => 'KursView',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '50',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_leclanguage'.
  $fields['node-mediendatei-field_leclanguage'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_leclanguage',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_leclanguage',
      'label' => 'leclanguage',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '58',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_lecture_uid'.
  $fields['node-mediendatei-field_lecture_uid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lecture_uid',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_lecture_uid',
      'label' => 'Kurs-ID',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '48',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_legacy'.
  $fields['node-mediendatei-field_legacy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_legacy',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'neue Mediathek',
          1 => 'alte Mediathek',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Kommt die Mediendatei aus der alten Mediathek?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'foundation_video' => array(
          'label' => 'inline',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '33',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'kursansicht_sanako' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '122',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '124',
        ),
        'mediendatei_buch' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'mediendatei_dvd' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_legacy',
      'label' => 'legacy',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_mediendatei_eventid'.
  $fields['node-mediendatei-field_mediendatei_eventid'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_mediendatei_eventid',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_mediendatei_eventid',
      'label' => 'EventID',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_medientyp'.
  $fields['node-mediendatei-field_medientyp'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_medientyp',
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
            'vocabulary' => 'medientyp',
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
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'tid' => '66474',
        ),
      ),
      'deleted' => '0',
      'description' => '"Audio" bitte nur dann markieren, wenn wirklich Audios hochgeladen sind, nicht, wenn es nur prinzipiell Audios dazu gibt!<br>
<b>Erlaubte Kombinationen:</b><br>
- Audio<br>
- Audio + Gedrucktes<br>
- Video',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '39',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '127',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'teaserdozententext' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_medientyp',
      'label' => 'Medientyp',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_mutterbandnr'.
  $fields['node-mediendatei-field_mutterbandnr'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_mutterbandnr',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Falls das Mutterband nicht (mehr) vorhanden sein sollte, bitte als "XXXX <b>(n/v)</b>" eintragen (also z.B. "3693 (n/v)").<br>
Sind Indizes vorhanden, bitte für jedes Mutterband ein eigenes Feld anlegen, also "1234a" + "1234b" + "1234c" usw.
',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '15',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '15',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '20',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_mutterbandnr',
      'label' => 'Mutterbandnummer',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_muttersendung'.
  $fields['node-mediendatei-field_muttersendung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_muttersendung',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '39',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_muttersendung',
      'label' => 'muttersendung',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_noderefmediendatei'.
  $fields['node-mediendatei-field_noderefmediendatei'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_noderefmediendatei',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(
        'node' => array(
          'columns' => array(
            'target_id' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'target_id' => array(
          0 => 'target_id',
        ),
      ),
      'locked' => '0',
      'module' => 'entityreference',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'handler' => 'views',
        'handler_settings' => array(
          'behaviors' => array(
            'test_field_behavior' => array(
              'status' => 0,
            ),
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'view' => array(
            'args' => array(),
            'display_name' => 'entityreference_1',
            'view_name' => 'noderefmediendatei',
          ),
        ),
        'target_type' => 'node',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'entityreference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '28',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '73',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '130',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_noderefmediendatei',
      'label' => 'Verknüpfung mit anderer Mediendatei',
      'required' => 0,
      'settings' => array(
        'behaviors' => array(
          'test_instance_behavior' => array(
            'status' => 0,
          ),
        ),
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'entityreference',
        'settings' => array(
          'match_operator' => 'CONTAINS',
          'path' => '',
          'references_dialog_add' => 0,
          'references_dialog_edit' => 0,
          'references_dialog_search' => 0,
          'references_dialog_search_view' => '',
          'size' => '120',
        ),
        'type' => 'entityreference_autocomplete',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_oeffentlich'.
  $fields['node-mediendatei-field_oeffentlich'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_oeffentlich',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nein',
          1 => 'Ja',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '0',
        ),
      ),
      'deleted' => '0',
      'description' => 'Soll die Mediendatei für alle Benutzer findbar sein?',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '36',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '125',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_oeffentlich',
      'label' => 'Öffentlich',
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
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_organisational'.
  $fields['node-mediendatei-field_organisational'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organisational',
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
            'vocabulary' => 'organisational',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_reference_view_mode' => 'full',
          ),
          'type' => 'ds_taxonomy_view_mode',
          'weight' => '1',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_reference_view_mode' => 'full',
          ),
          'type' => 'ds_taxonomy_view_mode',
          'weight' => '1',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '80',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_organisational',
      'label' => 'organisational',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'deny',
          'popular_tags' => array(
            'limit' => '',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '60',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_orgname'.
  $fields['node-mediendatei-field_orgname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_orgname',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_orgname',
      'label' => 'orgname',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '59',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_regie'.
  $fields['node-mediendatei-field_regie'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '5',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_regie',
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
            'vocabulary' => 'personen',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '0',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '23',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_regie',
      'label' => 'Regie',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_semester'.
  $fields['node-mediendatei-field_semester'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_semester',
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
            'vocabulary' => 'semester',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_link' => 0,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '4',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'module' => 'ds',
          'settings' => array(
            'taxonomy_term_link' => 0,
            'taxonomy_term_separator' => ', ',
          ),
          'type' => 'ds_taxonomy_separator',
          'weight' => '4',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_semester',
      'label' => 'Semester',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'deny',
          'popular_tags' => array(
            'limit' => '',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '53',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_sender_taxonomy'.
  $fields['node-mediendatei-field_sender_taxonomy'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sender_taxonomy',
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
            'vocabulary' => 'sender',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '12',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sender_taxonomy',
      'label' => 'Sender',
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_serienaufnahme'.
  $fields['node-mediendatei-field_serienaufnahme'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_serienaufnahme',
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
            'vocabulary' => 'serienklick',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '38',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '92',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '126',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '95',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_serienaufnahme',
      'label' => 'Serienaufnahme',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'mode' => 'single',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_serienposition'.
  $fields['node-mediendatei-field_serienposition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_serienposition',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '2',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '58',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '122',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '4',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_serienposition',
      'label' => 'DVD-Nummer',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '10',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_share_with_xbmc_lifetime'.
  $fields['node-mediendatei-field_share_with_xbmc_lifetime'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_share_with_xbmc_lifetime',
      'field_permissions' => array(
        'type' => '2',
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
            'vocabulary' => 'aufnahme_loeschintervall',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '32',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_share_with_xbmc_lifetime',
      'label' => 'xbmc lifetime',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => 0,
        ),
        'type' => 'options_select',
        'weight' => '62',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_signatur'.
  $fields['node-mediendatei-field_signatur'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_signatur',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Bei Materialien, die vor 2014 inventarisiert wurden, hier die damals gültige Signatur eingeben (zwecks Rückverfolgbarkeit).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '14',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '81',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '123',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_signatur',
      'label' => 'Alte Signatur',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '15',
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_signatur_neu'.
  $fields['node-mediendatei-field_signatur_neu'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_signatur_neu',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Die Signatur wird hier nicht verändert!',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '101',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '14',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '70',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_signatur_neu',
      'label' => 'Signatur',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_signatur_praefix'.
  $fields['node-mediendatei-field_signatur_praefix'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_signatur_praefix',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<b>Kleinbuchstaben, dreistellig.</b> Ermöglicht das Vereinigen von Büchern mit unterschiedlichen Titeln an einer Stelle im Regal. <b>Bitte zurückhaltend verwenden!</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_signatur_praefix',
      'label' => 'Signatur-Präfix',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '5',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_signatur_suffix'.
  $fields['node-mediendatei-field_signatur_suffix'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_signatur_suffix',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<b>Zahlen, zweistellig. </b>Ermöglicht das Differenzieren, wenn Bücher mit identischem Titelbeginn dieselbe Signatur zugewiesen bekommen. <b>Bitte auch von dieser Möglichkeit zurückhaltend Gebrauch machen!</b>',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '53',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '39',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_signatur_suffix',
      'label' => 'Signatur-Suffix',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '5',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_spieldauer'.
  $fields['node-mediendatei-field_spieldauer'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_spieldauer',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '15',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '29',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_spieldauer',
      'label' => 'Spieldauer',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_sprach_bergreifende_schlag'.
  $fields['node-mediendatei-field_sprach_bergreifende_schlag'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sprach_bergreifende_schlag',
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
            'vocabulary' => 'sprachen_bergreifende_schlagw_rter',
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
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'tid' => '131266',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '75',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sprach_bergreifende_schlag',
      'label' => 'Sprachübergreifende Schlagwörter',
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
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_sprache'.
  $fields['node-mediendatei-field_sprache'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sprache',
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
            'vocabulary' => 'sprache',
            'parent' => '0',
            'depth' => '',
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Bei Büchern und Sprachkursen nur die <b>Zielsprache</b> (=<b>eine</b> Sprache) eingeben.<br/>
Mehrfachauswahl über die Strg-Taste.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '13',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '12',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '18',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sprache',
      'label' => 'Sprache',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => 0,
        ),
        'type' => 'options_select',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_sprachniveau'.
  $fields['node-mediendatei-field_sprachniveau'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sprachniveau',
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
            'vocabulary' => 'sprachniveau',
            'parent' => '0',
            'depth' => '',
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'tid' => '233196',
        ),
      ),
      'deleted' => '0',
      'description' => 'Bei Büchern und Audios; Einteilung nach Europäischem Referenzrahmen (CEFR).<br/>
Mehrfachauswahl über die Strg-Taste.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '30',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '119',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '90',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sprachniveau',
      'label' => 'Empfohlen für (Sprachniveau)',
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
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_sprachspezifische_schlagw_'.
  $fields['node-mediendatei-field_sprachspezifische_schlagw_'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sprachspezifische_schlagw_',
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
            'vocabulary' => 'sprachspezifische_schlagw_rter',
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
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'tid' => '131267',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '59',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sprachspezifische_schlagw_',
      'label' => 'Sprachspezifische Schlagwörter',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'multiselect',
        'settings' => array(),
        'type' => 'multiselect',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_status'.
  $fields['node-mediendatei-field_status'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_status',
      'field_permissions' => array(
        'type' => '2',
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
            'vocabulary' => 'workflowstatus',
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
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'tid' => '104428',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'foundation_video' => array(
          'label' => 'inline',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '31',
        ),
        'full' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '103',
        ),
        'kursansicht_sanako' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '120',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '120',
        ),
        'mediendatei_buch' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'mediendatei_dvd' => array(
          'label' => 'inline',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_status',
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

  // Exported field: 'node-mediendatei-field_strichcodetextfeld'.
  $fields['node-mediendatei-field_strichcodetextfeld'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_strichcodetextfeld',
      'field_permissions' => array(
        'type' => '2',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Automatisch erstellter Hash. Nicht änderbar. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '55',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '57',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '76',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '51',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '78',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_strichcodetextfeld',
      'label' => 'Barcode',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_sws'.
  $fields['node-mediendatei-field_sws'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sws',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '99',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '72',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sws',
      'label' => 'SWS',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '50',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_synopsis'.
  $fields['node-mediendatei-field_synopsis'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_synopsis',
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
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '15',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '15',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '44',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '11',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '28',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_synopsis',
      'label' => 'synopsis',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'entity_translation_sync' => FALSE,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '10',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_tax_auftraggeber'.
  $fields['node-mediendatei-field_tax_auftraggeber'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '10',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tax_auftraggeber',
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
            'vocabulary' => 'taxonomy_term_auftraggeber',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '45',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '132',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '127',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '106',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '121',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '64',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_tax_auftraggeber',
      'label' => 'tax_auftraggeber',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_testvideo'.
  $fields['node-mediendatei-field_testvideo'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_testvideo',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '42',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '96',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '113',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '130',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '131',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '119',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_testvideo',
      'label' => 'testvideo',
      'required' => FALSE,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'optional',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_uebung'.
  $fields['node-mediendatei-field_uebung'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_uebung',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nein',
          1 => 'Ja',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Auch auszuwählen, wenn die Mediendatei eine Übung neben anderen Inhalten enthält.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '77',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '98',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '115',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_uebung',
      'label' => 'Mit Übung',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_uebungsview'.
  $fields['node-mediendatei-field_uebungsview'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_uebungsview',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'view_id' => array(
          0 => 'view_id',
        ),
      ),
      'locked' => '0',
      'module' => 'viewreference',
      'settings' => array(
        'append_id' => 0,
        'arguments' => array(
          'delimiter' => '/',
          'dsv_arguments' => 0,
          'label' => '!field_label Argumente',
          'php_arguments' => 0,
          'rows' => '1',
        ),
        'entity_translation_sync' => FALSE,
        'referenceable_tags' => array(
          'allow' => '',
          'deny' => '',
        ),
        'referenceable_views' => array(
          'alle_artikel:page' => 0,
          'alle_buecher:page' => 0,
          'alle_genres:page' => 0,
          'alle_mit_isbn:page' => 0,
          'alleausleihgegenst_nde:page' => 0,
          'alleausleihgegenst_nde:page_1' => 0,
          'alledozenten:page' => 0,
          'allehiwis:page' => 0,
          'allehiwis:references_1' => 0,
          'allemediendateien:page' => 0,
          'allemediendateien:page_1' => 0,
          'allesendungen:page' => 0,
          'allesuchauftr_ge:page' => 0,
          'allesuchauftr_ge:page_1' => 0,
          'alletimer:page' => 0,
          'alletimer:page_1' => 0,
          'altemediathekmediendateien:page' => 0,
          'altemediathekmediendateien:page_1' => 0,
          'altemediathekmediendateien:page_2' => 0,
          'archive:block' => 0,
          'archive:page' => 0,
          'artikel_suche:block' => 0,
          'artikel_suche:page' => 0,
          'artikel_suche:page_1' => 0,
          'artikelgruppen:page' => 0,
          'artikelgruppen:page_1' => 0,
          'artikelgruppen:references_1' => 0,
          'artikelgruppen_noderef:entityreference_1' => 0,
          'artikelgruppen_noderef:page' => 0,
          'artikelgruppen_noderef:references_1' => 0,
          'artikelsuche:block' => 0,
          'artikelsuche:page' => 0,
          'aufnahmefehler:block' => 0,
          'aufnahmefehler:page' => 0,
          'ausleihbares:block_1' => 0,
          'ausleihbares:page' => 0,
          'ausleihe_artikelnoderef:entityreference_1' => 0,
          'ausleihe_artikelnoderef:page' => 0,
          'ausleihe_artikelnoderef:references_1' => 0,
          'ausleihen:page' => 0,
          'ausleiher:page' => 0,
          'ausleiher:references_1' => 0,
          'ausleihjournal:page' => 0,
          'b_cher_mit_audios:page' => 0,
          'b_cher_mit_ocr_feld_aber_ohne_inhaltscover:page' => 0,
          'b_cher_nach_kategorien:page' => 0,
          'b_cher_ohne_coverbilder:block_1' => 0,
          'b_cher_ohne_coverbilder:block_2' => 0,
          'b_cher_ohne_coverbilder:page' => 0,
          'b_cher_ohne_coverbilder:page_1' => 0,
          'b_cher_ohne_inhaltstext:block' => 0,
          'b_cher_ohne_inhaltstext:page' => 0,
          'b_chern_nach_kategorien_genres_zuweisen:page' => 0,
          'backlinks:block' => 0,
          'backlinks:page' => 0,
          'barcodes_f_r_b_cher:page' => 0,
          'benutzersuche:block' => 0,
          'benutzersuche:page' => 0,
          'benutzerzugriffe:page' => 0,
          'benutzerzugriffe:page_1' => 0,
          'benutzerzugriffe:page_2' => 0,
          'bitte_schneiden:block' => 0,
          'bitte_schneiden:page' => 0,
          'blog:block' => 0,
          'blog:page' => 0,
          'blograster:page' => 0,
          'book:page' => 0,
          'bookmarked:block' => 0,
          'bookmarked:page' => 0,
          'buecher_mit_genres_als_stichwoerter:page' => 0,
          'bulkchangeentities:page' => 0,
          'charts_demo:column' => 0,
          'charts_demo:page' => 0,
          'charts_demo:pie' => 0,
          'checkincheckout:checkin' => 0,
          'checkincheckout:checkout' => 0,
          'checkincheckout_block:checkin_block' => 0,
          'checkincheckout_block:checkin_late' => 0,
          'checkincheckout_block:checkout_block' => 0,
          'checkincheckout_block:page' => 0,
          'checkincheckout_block:page_1' => 0,
          'checkincheckout_block:page_2' => 0,
          'checkincheckout_block:page_3' => 0,
          'checkincheckout_dvd_buch:block' => 0,
          'checkincheckout_dvd_buch:block_1' => 0,
          'checkincheckout_dvd_buch:page' => 0,
          'comments_recent:block' => 0,
          'comments_recent:page' => 0,
          'deltaxonomy:page' => 0,
          'diesuche:page' => 0,
          'doppelte_buchsprachen:page' => 0,
          'download_zip:page' => 0,
          'dvd_buchausleihe:page' => 0,
          'dvd_buchausleihe:page_1' => 0,
          'dvd_buchausleihe:page_2' => 0,
          'editausleihe:page' => 0,
          'els:page' => 0,
          'epg_suchauftrag:block' => 0,
          'epg_suchauftrag:page' => 0,
          'epg_xbmc_felder:page' => 0,
          'erkl_rungsseiten:block' => 0,
          'erkl_rungsseiten:block_1' => 0,
          'erkl_rungsseiten:block_2' => 0,
          'erkl_rungsseiten:page' => 0,
          'erkl_rungsseiten:page_1' => 0,
          'erstelle_md_kapitel:page' => 0,
          'erstelle_md_kapitel:page_1' => 0,
          'falsche_timernummern:page' => 0,
          'fastkalender:block_1' => 0,
          'fastkalender:block_2' => 0,
          'fastkalender:block_3' => 0,
          'fastkalender:feed_1' => 0,
          'fastkalender:page' => 0,
          'fastkalender:page_1' => 0,
          'fastkalender:page_2' => 0,
          'fastkalender:page_3' => 0,
          'fc_titel_freitext:page' => 0,
          'feeds_defaults_feed_items:page_1' => 0,
          'feeds_log:page_1' => 0,
          'feeds_log:page_2' => 0,
          'feeds_log:page_3' => 0,
          'fieldcollectiontest:page' => 0,
          'filterbyname:page' => 0,
          'flag_bookmarks:block_1' => 0,
          'flag_bookmarks:page' => 0,
          'flag_bookmarks_tab:page' => 0,
          'frontpage:feed' => 0,
          'frontpage:page' => 0,
          'gedrucktesnichtverschlagwortet:block_1' => 0,
          'gedrucktesnichtverschlagwortet:page' => 0,
          'gedrucktesver_ffentlichen:page' => 0,
          'genre_nach_sw:page' => 0,
          'geschnittene_filme_mit_l_schdatum:page' => 0,
          'glossary:attachment' => 0,
          'glossary:page' => 0,
          'grouping_test:page' => 0,
          'gsolr:page' => 0,
          'h5p_mediendateien:page' => 0,
          'h_rtextseiten_verwalten:block_1' => 0,
          'h_rtextseiten_verwalten:page' => 0,
          'i5p:page' => 0,
          'interactivecontent:page' => 0,
          'journal:page' => 0,
          'kalender:block_1' => 0,
          'kalender:block_2' => 0,
          'kalender:feed_1' => 0,
          'kalender:page' => 0,
          'kalender:page_1' => 0,
          'kalender:page_2' => 0,
          'kalender:page_3' => 0,
          'kalender_2015:block_1' => 0,
          'kalender_2015:block_2' => 0,
          'kalender_2015:feed_1' => 0,
          'kalender_2015:page' => 0,
          'kalender_2015:page_1' => 0,
          'kalender_2015:page_2' => 0,
          'kalender_2015:page_3' => 0,
          'kalender_2015:page_4' => 0,
          'kalender_2015:page_5' => 0,
          'kalender_2015:page_6' => 0,
          'kalender_aufnahmedatum:block_1' => 0,
          'kalender_aufnahmedatum:block_2' => 0,
          'kalender_aufnahmedatum:page' => 0,
          'kalender_aufnahmedatum:page_1' => 0,
          'kalender_aufnahmedatum:page_2' => 0,
          'kalender_aufnahmedatum:page_3' => 0,
          'kalendermerci:block_1' => 0,
          'kalendermerci:block_2' => 0,
          'kalendermerci:page' => 0,
          'kalendermerci:page_1' => 0,
          'kalendermerci:page_2' => 0,
          'kalendermerci:page_3' => 0,
          'kalenderseptember2013:block_1' => 0,
          'kalenderseptember2013:block_2' => 0,
          'kalenderseptember2013:feed_1' => 0,
          'kalenderseptember2013:page' => 0,
          'kalenderseptember2013:page_1' => 0,
          'kalenderseptember2013:page_2' => 0,
          'kalenderseptember2013:page_3' => 0,
          'kalenderseptember2013:page_4' => 0,
          'kalenderseptember2013:page_5' => 0,
          'kaputtelinksinmediendateien:page' => 0,
          'keywords:page' => 0,
          'kursdateien_hinzuf_gen_entfernen:page' => 0,
          'kursdateien_hinzuf_gen_entfernen:page_1' => 0,
          'kursdateienmp3:page' => 0,
          'kursverwaltung:page' => 0,
          'l_sche_alle_audiodateien:page' => 0,
          'l_schestichworte:page' => 0,
          'links_mit_mit_mediathek_sz_fau:page' => 0,
          'load_save_mediendatei:page' => 0,
          'media2:feed' => 0,
          'media2:page' => 0,
          'media_op:page' => 0,
          'mediafile_standard:block' => 0,
          'mediafile_standard:page' => 0,
          'mediatest1:block' => 0,
          'mediatest1:page' => 0,
          'medien_h_rtextseiten:block' => 0,
          'medien_h_rtextseiten:page' => 0,
          'mediendatei_detail_view:block' => 0,
          'mediendatei_detail_view:page' => 0,
          'mediendateien:block' => 0,
          'mediendateien:page' => 0,
          'mediendateien_mit_gedruckt_und_video:page' => 0,
          'mediensuche:page' => 0,
          'meine_kurse:block' => 0,
          'meine_kurse:block_1' => 0,
          'meine_kurse:block_2' => 0,
          'meine_kurse:block_3' => 0,
          'meine_kurse:page' => 0,
          'merci_calendar_view:block_1' => 0,
          'merci_calendar_view:block_2' => 0,
          'merci_calendar_view:page' => 0,
          'merci_calendar_view:page_1' => 0,
          'merci_calendar_view:page_2' => 0,
          'merci_calendar_view:page_3' => 0,
          'merci_inventory_view:page_1' => 0,
          'merci_kalender:block_1' => 0,
          'merci_kalender:block_2' => 0,
          'merci_kalender:page' => 0,
          'merci_kalender:page_1' => 0,
          'merci_kalender:page_2' => 0,
          'merci_kalender:page_3' => 0,
          'merci_reservable_items:page_1' => 0,
          'merci_reservable_items:page_2' => 0,
          'merci_reservable_items:page_3' => 0,
          'merci_ui_node_reservations:page_1' => 0,
          'merci_ui_reservations:block_1' => 0,
          'merci_ui_reservations:block_2' => 0,
          'merci_ui_reservations:page_1' => 0,
          'merci_ui_reservations:page_2' => 0,
          'merci_ui_reservations:page_3' => 0,
          'merci_ui_reservations:page_4' => 0,
          'merci_ui_reservations:page_5' => 0,
          'merci_ui_reservations:search_api_views_facets_block_1' => 0,
          'merci_ui_user_reservations:page_1' => 0,
          'moviedownloadlink:page' => 0,
          'mp3_kursdateien:embed_1' => 0,
          'mp3_kursdateien:page' => 0,
          'mp3_kursdateien:page_1' => 0,
          'msearch:page' => 0,
          'my_recent_recordings:block_1' => 0,
          'my_recent_recordings:page' => 0,
          'myrecordings:block' => 0,
          'myrecordings:page' => 0,
          'mysolrview:page' => 0,
          'mysolrview:page_1' => 0,
          'mytags:page' => 0,
          'mytagsview:block_1' => 0,
          'mytagsview:page' => 0,
          'neu_grouping:page' => 0,
          'neu_grouping:page_1' => 0,
          'neuesteaufnahmen:block' => 0,
          'neuesteaufnahmen:page' => 0,
          'neuesteaufnahmen:page_1' => 0,
          'newsolr:page' => 0,
          'nicht_kategorisierte_b_cher:block' => 0,
          'nicht_kategorisierte_b_cher:page' => 0,
          'nicht_verfuegbare_buecher:page' => 0,
          'node_results:page' => 0,
          'nodequeue_gallery:page' => 0,
          'nodequeue_test1:block' => 0,
          'nodequeue_test1:page' => 0,
          'noderefkurs:entityreference_1' => 0,
          'noderefkurs:page' => 0,
          'noderefmediendatei:entityreference_1' => 0,
          'noderefmediendatei:page' => 0,
          'noderefmediendatei:references_1' => 0,
          'nodes_autocomplete:page' => 0,
          'notifications_content_node_list:page' => 0,
          'ocr_feld_leer:page' => 0,
          'printout_barcodes_signaturen:page' => 0,
          'printout_barcodes_signaturen:page_1' => 0,
          'quicklinks:page' => 0,
          'raum_supportticket:block' => 0,
          'realname_und_loginnamen_der_hiwis:block' => 0,
          'realname_und_loginnamen_der_hiwis:page' => 0,
          'recent_recordings:block_1' => 0,
          'recent_recordings:page' => 0,
          'rechter_block_autorefresh:block_1' => 0,
          'rechter_block_autorefresh:block_2' => 0,
          'rechter_block_autorefresh:block_3' => 0,
          'rechter_block_autorefresh:block_4' => 0,
          'rechter_block_autorefresh:page_1' => 0,
          'rechter_block_autorefresh:page_2' => 0,
          'rechter_block_autorefresh:page_3' => 0,
          'rechter_block_autorefresh:page_4' => 0,
          'rechter_block_autorefresh:page_5' => 0,
          'rechter_block_autorefresh:search_api_views_facets_block_1' => 0,
          'regelm_ige_aufgaben:page' => 0,
          'rep_b_cher:page' => 0,
          'reservierungen:block_1' => 0,
          'reservierungen:block_2' => 0,
          'reservierungen:page' => 0,
          'reservierungen:page_1' => 0,
          'reservierungen:page_2' => 0,
          'reservierungen:page_3' => 0,
          'reservierungsjournal:page' => 0,
          'reservierungsjournal:page_1' => 0,
          'reservierungsjournal:page_2' => 0,
          'search_epg_id_null_l_schen:page' => 0,
          'serien:page' => 0,
          'similarterms:block' => 0,
          'solrGrouping_2015:page' => 0,
          'solrGrouping_2015:page_1' => 0,
          'solrqueue:page' => 0,
          'solrview:page' => 0,
          'solrview:page_1' => 0,
          'solrview:page_2' => 0,
          'solrview:page_3' => 0,
          'solrview:solr_grouping' => 0,
          'sprachniveau:page' => 0,
          'stichw_rter_bearbeiten:page' => 0,
          'stichwoerter:page' => 0,
          'studieng_nge:page' => 0,
          'support_ticket:block' => 0,
          'support_ticket:block_1' => 0,
          'support_ticket:page' => 0,
          'support_ticket:page_1' => 0,
          'svdrp_test:page' => 0,
          'taxonomy_term:feed' => 0,
          'taxonomy_term:page' => 0,
          'taxonomy_term:page_1' => 0,
          'test_artikel:page' => 0,
          'top_content:page_1' => 0,
          'top_content:page_2' => 0,
          'top_content:page_3' => 0,
          'tracker:page' => 0,
          'tracker_nachaufnahmedatum:page' => 0,
          'uebungen:block' => 0,
          'uebungen:page' => 0,
          'uebungsview:page' => 'uebungsview:page',
          'updateicons:page' => 0,
          'user_results:page' => 0,
          'users_autocomplete:page' => 0,
          'vdr:page' => 0,
          'vdrview:page' => 0,
          'vdrview:page_1' => 0,
          'verkn_medien:block' => 0,
          'verkn_medien:page' => 0,
          'verkn_pfte_mediendateien:page' => 0,
          'verschlagworten:page' => 0,
          'verschlagworten:page_1' => 0,
          'verschlagworten:page_2' => 0,
          'verschlagworten:page_3' => 0,
          'video_dvd_iso_erstellen:page' => 0,
          'video_dvds:page' => 0,
          'videokapitel:page' => 0,
          'wiki_kapitel:page' => 0,
          'wiki_kapitel:wiki_ac_block' => 0,
          'wochendarstellung2014:block_1' => 0,
          'wochendarstellung2014:block_2' => 0,
          'wochendarstellung2014:feed_1' => 0,
          'wochendarstellung2014:page' => 0,
          'wochendarstellung2014:page_1' => 0,
          'wochendarstellung2014:page_2' => 0,
          'wochendarstellung2014:page_3' => 0,
          'wochendarstellung2014:page_4' => 0,
          'wochendarstellung:block_1' => 0,
          'wochendarstellung:block_2' => 0,
          'wochendarstellung:page' => 0,
          'wochendarstellung:page_1' => 0,
          'wochendarstellung:page_2' => 0,
          'wochendarstellung:page_3' => 0,
          'words_autocomplete:page' => 0,
          'xbmc:page' => 0,
          'xbmc:page_1' => 0,
          'xbmc:page_2' => 0,
          'xbmc:page_3' => 0,
          'xbmc:page_4' => 0,
          'zuml_schenvorbereitet:page' => 0,
        ),
        'skip_default' => 1,
        'skip_empty' => 1,
        'views_base_columns' => array(
          'arguments' => 'arguments',
          'entity_id' => 'entity_id',
        ),
        'views_base_table' => 1,
      ),
      'translatable' => '0',
      'type' => 'viewreference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'view_id' => 'uebungsview:page',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_default',
          'weight' => 123,
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht_sanako' => array(
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
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'viewreference',
          'settings' => array(),
          'type' => 'viewreference_full',
          'weight' => '0',
        ),
        'mediendatei_dvd' => array(
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
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_uebungsview',
      'label' => 'Übungsview',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '76',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_univisref_person'.
  $fields['node-mediendatei-field_univisref_person'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_univisref_person',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '69',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '62',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '89',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_univisref_person',
      'label' => 'UnivISRef_Person',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '54',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_univisref_title'.
  $fields['node-mediendatei-field_univisref_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_univisref_title',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '88',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '60',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '68',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '85',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '50',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '61',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_univisref_title',
      'label' => 'UnivISRef_title',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '49',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_untertitel'.
  $fields['node-mediendatei-field_untertitel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_untertitel',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '74',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '87',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'live_results_search' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '3',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '79',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '97',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_untertitel',
      'label' => 'Untertitel',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_ursprungsland'.
  $fields['node-mediendatei-field_ursprungsland'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '5',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ursprungsland',
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
            'vocabulary' => 'ursprungsland',
            'parent' => '0',
          ),
        ),
        'entity_translation_sync' => FALSE,
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => '33',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => '33',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '91',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '93',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => '145',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '116',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '33',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_ursprungsland',
      'label' => 'Ursprungsland',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'popular_tags' => array(
            'limit' => '',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_usertags'.
  $fields['node-mediendatei-field_usertags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_usertags',
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
            'vocabulary' => 'usertags',
            'parent' => '0',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '4',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '9',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '12',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '126',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_link',
          'weight' => '14',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '130',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_usertags',
      'label' => 'UserTags',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'active_tags',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'mode' => 'single',
          'size' => 60,
        ),
        'type' => 'active_tags_taxonomy_autocomplete',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_verbesserungswuerdig'.
  $fields['node-mediendatei-field_verbesserungswuerdig'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_verbesserungswuerdig',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Beschreibung ist vollständig.',
          1 => 'Ist verbesserungswürdig',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => 'Markiere dieses Feld, wenn dieser Eintrag mangelhaft ist (Unvollständigkeiten oder Fehler).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '100',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '65',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '84',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '52',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_verbesserungswuerdig',
      'label' => 'Eintrag verbesserungswürdig',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 0,
        ),
        'type' => 'options_onoff',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_verfuegbar'.
  $fields['node-mediendatei-field_verfuegbar'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_verfuegbar',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'Nicht verfügbar',
          1 => 'Verfügbar',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'value' => '1',
        ),
      ),
      'deleted' => '0',
      'description' => 'Feld ist nur relevant, falls ein Buch <b>nicht (mehr) verfügbar</b> ist, d.h. wenn sein Verbleib unbekannt ist. Bei bekanntem Verbleib (z.B. Buch verliehen) gilt das Buch weiterhin als verfügbar!',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '112',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '30',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_verfuegbar',
      'label' => 'Verfügbar',
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
        'weight' => '63',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_verknuepfung_und_icon'.
  $fields['node-mediendatei-field_verknuepfung_und_icon'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_verknuepfung_und_icon',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'view_id' => array(
          0 => 'view_id',
        ),
      ),
      'locked' => '0',
      'module' => 'viewreference',
      'settings' => array(
        'append_id' => 0,
        'arguments' => array(
          'delimiter' => '/',
          'dsv_arguments' => 0,
          'label' => '!field_label Argumente',
          'php_arguments' => 0,
          'rows' => '1',
        ),
        'entity_translation_sync' => FALSE,
        'referenceable_tags' => array(
          'allow' => '',
          'deny' => '',
        ),
        'referenceable_views' => array(
          'alle_genres:page' => 0,
          'alleausleihgegenst_nde:page' => 0,
          'alleausleihgegenst_nde:page_1' => 0,
          'alledozenten:page' => 0,
          'allemediendateien:page' => 0,
          'allesendungen:page' => 0,
          'allesuchauftr_ge:page' => 0,
          'allesuchauftr_ge:page_1' => 0,
          'alletimer:page' => 0,
          'alletimer:page_1' => 0,
          'altemediathekmediendateien:page' => 0,
          'altemediathekmediendateien:page_1' => 0,
          'altemediathekmediendateien:page_2' => 0,
          'archive:block' => 0,
          'archive:page' => 0,
          'artikel_suche:block' => 0,
          'artikel_suche:page' => 0,
          'artikelsuche:block' => 0,
          'artikelsuche:page' => 0,
          'aufnahmefehler:block' => 0,
          'aufnahmefehler:page' => 0,
          'ausleihbares:block_1' => 0,
          'ausleihbares:page' => 'ausleihbares:page',
          'ausleiher:page' => 0,
          'ausleiher:references_1' => 0,
          'autocomplete_nodes:page' => 0,
          'autocomplete_users:page' => 0,
          'autocomplete_words:page' => 0,
          'b_cher_mit_audios:page' => 0,
          'b_cher_ohne_coverbilder:block_1' => 0,
          'b_cher_ohne_coverbilder:block_2' => 0,
          'b_cher_ohne_coverbilder:page' => 0,
          'b_cher_ohne_coverbilder:page_1' => 0,
          'backlinks:block' => 0,
          'backlinks:page' => 0,
          'barcodes_f_r_b_cher:page' => 0,
          'benutzersuche:block' => 0,
          'benutzersuche:page' => 0,
          'bitte_schneiden:block' => 0,
          'bitte_schneiden:page' => 0,
          'bulkchangeentities:page' => 0,
          'comments_recent:block' => 0,
          'comments_recent:page' => 0,
          'diesuche:page' => 0,
          'download_zip:page' => 0,
          'epg_suchauftrag:block' => 0,
          'epg_suchauftrag:page' => 0,
          'epg_xbmc_felder:page' => 0,
          'fastkalender:block_1' => 0,
          'fastkalender:block_2' => 0,
          'fastkalender:block_3' => 0,
          'fastkalender:feed_1' => 0,
          'fastkalender:page' => 0,
          'fastkalender:page_1' => 0,
          'fastkalender:page_2' => 0,
          'fastkalender:page_3' => 0,
          'feeds_defaults_feed_items:page_1' => 0,
          'feeds_log:page_1' => 0,
          'feeds_log:page_2' => 0,
          'feeds_log:page_3' => 0,
          'fieldcollectiontest:page' => 0,
          'filterbyname:page' => 0,
          'flag_bookmarks:block_1' => 0,
          'flag_bookmarks:page' => 0,
          'flag_bookmarks_tab:page' => 0,
          'frontpage:feed' => 0,
          'frontpage:page' => 0,
          'gedrucktesnichtverschlagwortet:block_1' => 0,
          'gedrucktesnichtverschlagwortet:page' => 0,
          'gedrucktesver_ffentlichen:page' => 0,
          'glossary:attachment' => 0,
          'glossary:page' => 0,
          'grouping_test:page' => 0,
          'h_rtextseiten_verwalten:block_1' => 0,
          'h_rtextseiten_verwalten:page' => 0,
          'i5p:page' => 0,
          'journal:page' => 0,
          'kalender:block_1' => 0,
          'kalender:block_2' => 0,
          'kalender:feed_1' => 0,
          'kalender:page' => 0,
          'kalender:page_1' => 0,
          'kalender:page_2' => 0,
          'kalender:page_3' => 0,
          'kalender_aufnahmedatum:block_1' => 0,
          'kalender_aufnahmedatum:block_2' => 0,
          'kalender_aufnahmedatum:page' => 0,
          'kalender_aufnahmedatum:page_1' => 0,
          'kalender_aufnahmedatum:page_2' => 0,
          'kalender_aufnahmedatum:page_3' => 0,
          'kalendermerci:block_1' => 0,
          'kalendermerci:block_2' => 0,
          'kalendermerci:page' => 0,
          'kalendermerci:page_1' => 0,
          'kalendermerci:page_2' => 0,
          'kalendermerci:page_3' => 0,
          'kalenderseptember2013:block_1' => 0,
          'kalenderseptember2013:block_2' => 0,
          'kalenderseptember2013:feed_1' => 0,
          'kalenderseptember2013:page' => 0,
          'kalenderseptember2013:page_1' => 0,
          'kalenderseptember2013:page_2' => 0,
          'kalenderseptember2013:page_3' => 0,
          'kalenderseptember2013:page_4' => 0,
          'kalenderseptember2013:page_5' => 0,
          'keywords:page' => 0,
          'kursdateien_hinzuf_gen_entfernen:page' => 0,
          'kursdateien_hinzuf_gen_entfernen:page_1' => 0,
          'kursdateienmp3:page' => 0,
          'kursverwaltung:page' => 0,
          'l_sche_alle_audiodateien:page' => 0,
          'load_save_mediendatei:page' => 0,
          'media2:feed' => 0,
          'media2:page' => 0,
          'media_op:page' => 0,
          'mediafile_standard:block' => 0,
          'mediafile_standard:page' => 0,
          'mediatest1:block' => 0,
          'mediatest1:page' => 0,
          'mediendatei_detail_view:block' => 0,
          'mediendatei_detail_view:page' => 0,
          'mediendateien_mit_gedruckt_und_video:page' => 0,
          'mediensuche:page' => 0,
          'meine_kurse:block' => 0,
          'meine_kurse:block_1' => 0,
          'meine_kurse:block_2' => 0,
          'meine_kurse:page' => 0,
          'merci_calendar_view:block_1' => 0,
          'merci_calendar_view:block_2' => 0,
          'merci_calendar_view:page' => 0,
          'merci_calendar_view:page_1' => 0,
          'merci_calendar_view:page_2' => 0,
          'merci_calendar_view:page_3' => 0,
          'merci_inventory_view:page_1' => 0,
          'merci_kalender:block_1' => 0,
          'merci_kalender:block_2' => 0,
          'merci_kalender:page' => 0,
          'merci_kalender:page_1' => 0,
          'merci_kalender:page_2' => 0,
          'merci_kalender:page_3' => 0,
          'merci_reservable_items:page_1' => 0,
          'merci_reservable_items:page_2' => 0,
          'merci_reservable_items:page_3' => 0,
          'merci_ui_node_reservations:page_1' => 0,
          'merci_ui_reservations:block_1' => 0,
          'merci_ui_reservations:block_2' => 0,
          'merci_ui_reservations:page_1' => 0,
          'merci_ui_reservations:page_2' => 0,
          'merci_ui_reservations:page_3' => 0,
          'merci_ui_reservations:page_4' => 0,
          'merci_ui_reservations:page_5' => 0,
          'merci_ui_reservations:search_api_views_facets_block_1' => 0,
          'merci_ui_user_reservations:page_1' => 0,
          'moviedownloadlink:page' => 0,
          'mp3_kursdateien:embed_1' => 0,
          'mp3_kursdateien:page' => 0,
          'mp3_kursdateien:page_1' => 0,
          'my_recent_recordings:block_1' => 0,
          'my_recent_recordings:page' => 0,
          'myrecordings:block' => 0,
          'myrecordings:page' => 0,
          'mysolrview:page' => 0,
          'mytags:page' => 0,
          'mytagsview:block_1' => 0,
          'mytagsview:page' => 0,
          'neuesteaufnahmen:block' => 0,
          'neuesteaufnahmen:page' => 0,
          'nicht_kategorisierte_b_cher:block' => 0,
          'nicht_kategorisierte_b_cher:page' => 0,
          'nicht_verfuegbare_buecher:page' => 0,
          'noderefkurs:entityreference_1' => 0,
          'noderefkurs:page' => 0,
          'noderefmediendatei:entityreference_1' => 0,
          'noderefmediendatei:page' => 0,
          'notifications_content_node_list:page' => 0,
          'ocr_feld_leer:page' => 0,
          'popular:block' => 0,
          'popular:block_1' => 0,
          'popular:page' => 0,
          'popular:page_1' => 0,
          'printout_barcodes_signaturen:page' => 0,
          'printout_barcodes_signaturen:page_1' => 0,
          'realname_und_loginnamen_der_hiwis:block' => 0,
          'realname_und_loginnamen_der_hiwis:page' => 0,
          'recent_recordings:block_1' => 0,
          'recent_recordings:page' => 0,
          'rechter_block_autorefresh:block_1' => 0,
          'rechter_block_autorefresh:block_2' => 0,
          'rechter_block_autorefresh:page_1' => 0,
          'rechter_block_autorefresh:page_2' => 0,
          'rechter_block_autorefresh:page_3' => 0,
          'rechter_block_autorefresh:page_4' => 0,
          'rechter_block_autorefresh:page_5' => 0,
          'rechter_block_autorefresh:search_api_views_facets_block_1' => 0,
          'reservierungen:block_1' => 0,
          'reservierungen:block_2' => 0,
          'reservierungen:page' => 0,
          'reservierungen:page_1' => 0,
          'reservierungen:page_2' => 0,
          'reservierungen:page_3' => 0,
          'reservierungsjournal:page' => 0,
          'reservierungsjournal:page_1' => 0,
          'search_epg_id_null_l_schen:page' => 0,
          'serien:page' => 0,
          'similarterms:block' => 0,
          'solrview:page' => 0,
          'solrview:page_1' => 0,
          'studieng_nge:page' => 0,
          'svdrp_test:page' => 0,
          'taxonomy_term:feed' => 0,
          'taxonomy_term:page' => 0,
          'taxonomy_term:page_1' => 0,
          'top_content:page_1' => 0,
          'top_content:page_2' => 0,
          'top_content:page_3' => 0,
          'tracker:page' => 0,
          'tracker_nachaufnahmedatum:page' => 0,
          'uebungen:block' => 0,
          'uebungen:page' => 0,
          'updateicons:page' => 0,
          'vdr:page' => 0,
          'vdrview:page' => 0,
          'vdrview:page_1' => 0,
          'verkn_pfte_mediendateien:page' => 0,
          'wochendarstellung2014:block_1' => 0,
          'wochendarstellung2014:block_2' => 0,
          'wochendarstellung2014:feed_1' => 0,
          'wochendarstellung2014:page' => 0,
          'wochendarstellung2014:page_1' => 0,
          'wochendarstellung2014:page_2' => 0,
          'wochendarstellung2014:page_3' => 0,
          'wochendarstellung2014:page_4' => 0,
          'wochendarstellung:block_1' => 0,
          'wochendarstellung:block_2' => 0,
          'wochendarstellung:page' => 0,
          'wochendarstellung:page_1' => 0,
          'wochendarstellung:page_2' => 0,
          'wochendarstellung:page_3' => 0,
          'xbmc:page' => 0,
          'xbmc:page_1' => 0,
          'xbmc:page_2' => 0,
          'xbmc:page_3' => 0,
          'xbmc:page_4' => 0,
          'zuml_schenvorbereitet:page' => 0,
        ),
        'skip_default' => 1,
        'skip_empty' => 0,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'viewreference',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '114',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '71',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_verknuepfung_und_icon',
      'label' => 'verknuepfung_und_icon',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'viewreference',
        'settings' => array(),
        'type' => 'viewreference_select',
        'weight' => '52',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_videocodec'.
  $fields['node-mediendatei-field_videocodec'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_videocodec',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '50',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '105',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '119',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '137',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '125',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '108',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_videocodec',
      'label' => 'Videocodec',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_videodatei'.
  $fields['node-mediendatei-field_videodatei'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_videodatei',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'example_node_list' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'editablefields',
          'settings' => array(
            'click_to_edit' => FALSE,
            'click_to_edit_style' => 'button',
            'empty_text' => '',
            'fallback_format' => NULL,
            'fallback_settings' => array(),
          ),
          'type' => 'editable',
          'weight' => '49',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '104',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '118',
        ),
        'kursansicht_sanako' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '135',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '107',
        ),
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '109',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '124',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '19',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '110',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_videodatei',
      'label' => 'Videodatei',
      'required' => 0,
      'settings' => array(
        'absolute_url' => 1,
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'entity_translation_sync' => FALSE,
        'title' => 'value',
        'title_label_use_field_label' => FALSE,
        'title_maxlength' => '128',
        'title_value' => 'Film abspielen',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_videokapitel'.
  $fields['node-mediendatei-field_videokapitel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_videokapitel',
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
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '121',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'kursansicht_sanako' => array(
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
        'mediendatei_buch' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '127',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
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
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_videokapitel',
      'label' => 'Videokapitel',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_collection',
        'settings' => array(),
        'type' => 'field_collection_embed',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-field_zip_download'.
  $fields['node-mediendatei-field_zip_download'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_zip_download',
      'field_permissions' => array(
        'type' => '2',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'download',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'download_link',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => array(
        0 => array(
          'download_fields' => array(
            'field_audiodatei' => 'field_audiodatei',
            'field_buch_inhaltsverzeichnispdf' => 0,
            'field_cover' => 0,
            'field_icon' => 0,
            'field_inhaltsverzeichnis' => 0,
          ),
          'download_label' => 'Download ZIP',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '82',
        ),
        'foundation_video' => array(
          'label' => 'above',
          'module' => 'download',
          'settings' => array(),
          'type' => 'download_link_formatter',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '63',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '66',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '83',
        ),
        'live_results_search' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'module' => 'download',
          'settings' => array(),
          'type' => 'download_link_formatter',
          'weight' => '16',
        ),
        'mediendatei_dvd' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '86',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_zip_download',
      'label' => 'Download ZIP',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'filename' => 'audio.zip',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'download',
        'settings' => array(),
        'type' => 'download_link_widget',
        'weight' => '74',
      ),
    ),
  );

  // Exported field: 'node-mediendatei-title_field'.
  $fields['node-mediendatei-title_field'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'title_field',
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
        'max_length' => 255,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'mediendatei',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '<b>ACHTUNG: Eine Änderung des Titels führt zu einer Änderung der Signatur!</b><br>

Bei <b>Büchern</b>: Originaltitel; Formatierung normalisieren, d.h. keine GROSSBUCHSTABEN o.ä.; Keine Übersetzungen oder Transliterationen des Titels, sondern Originalzeichensystem (z.B. Arabisch, Kyrillisch) beibehalten. ',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '54',
        ),
        'foundation_video' => array(
          'label' => 'hidden',
          'module' => 'title',
          'settings' => array(
            'title_class' => '',
            'title_link' => '',
            'title_style' => '',
          ),
          'type' => 'title_linked',
          'weight' => '40',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '94',
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'kursansicht' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '111',
        ),
        'kursansicht_sanako' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '128',
        ),
        'live_results_search' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '1',
        ),
        'mediendatei_buch' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '102',
        ),
        'mediendatei_dvd' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '117',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '67',
        ),
        'teaserdozententext' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'title_field',
      'label' => 'Titel',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'hide_label' => array(
          'entity' => 0,
          'page' => 0,
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_email'.
  $fields['taxonomy_term-dozenten-field_email'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_email',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 5,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_email',
      'label' => 'email',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_firstname'.
  $fields['taxonomy_term-dozenten-field_firstname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_firstname',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 1,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_firstname',
      'label' => 'firstname',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_gender'.
  $fields['taxonomy_term-dozenten-field_gender'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_gender',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 2,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_gender',
      'label' => 'gender',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_id'.
  $fields['taxonomy_term-dozenten-field_id'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_id',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 0,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_integer',
          'weight' => 3,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_id',
      'label' => 'id',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_lastname'.
  $fields['taxonomy_term-dozenten-field_lastname'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_lastname',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 4,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_lastname',
      'label' => 'lastname',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_office'.
  $fields['taxonomy_term-dozenten-field_office'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_office',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 7,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_office',
      'label' => 'office',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '38',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_organisational'.
  $fields['taxonomy_term-dozenten-field_organisational'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_organisational',
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
            'vocabulary' => 'organisational',
            'parent' => '0',
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
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'i18n_taxonomy',
          'settings' => array(),
          'type' => 'i18n_taxonomy_term_reference_link',
          'weight' => 9,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_organisational',
      'label' => 'organisational',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'content_taxonomy_autocomplete_new_terms' => 'allow',
          'popular_tags' => array(
            'limit' => '',
            'showhide' => 0,
            'use' => 0,
          ),
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '41',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_ort'.
  $fields['taxonomy_term-dozenten-field_ort'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ort',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 6,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_ort',
      'label' => 'ort',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_person_key'.
  $fields['taxonomy_term-dozenten-field_person_key'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_person_key',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_person_key',
      'label' => 'Person_key',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_tel'.
  $fields['taxonomy_term-dozenten-field_tel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tel',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 8,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_tel',
      'label' => 'tel',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '39',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-dozenten-field_user_login_name'.
  $fields['taxonomy_term-dozenten-field_user_login_name'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_user_login_name',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'dozenten',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 10,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_user_login_name',
      'label' => 'user_login_name',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '43',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-drehorte-synonyms_synonyms'.
  $fields['taxonomy_term-drehorte-synonyms_synonyms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'synonyms_synonyms',
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
      'locked' => '1',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'drehorte',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please, enter the synonyms which should be related to this term.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'synonyms_synonyms',
      'label' => 'Synonyme',
      'required' => FALSE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-genre-synonyms_synonyms'.
  $fields['taxonomy_term-genre-synonyms_synonyms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'synonyms_synonyms',
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
      'locked' => '1',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'genre',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please, enter the synonyms which should be related to this term.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ical' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'synonyms_synonyms',
      'label' => 'Synonyme',
      'required' => FALSE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-sender-synonyms_synonyms'.
  $fields['taxonomy_term-sender-synonyms_synonyms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'synonyms_synonyms',
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
      'locked' => '1',
      'module' => 'text',
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'max_length' => 255,
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'sender',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Please, enter the synonyms which should be related to this term.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'synonyms_synonyms',
      'label' => 'Synonyme',
      'required' => FALSE,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-signaturkategorien-field_kuerzel'.
  $fields['taxonomy_term-signaturkategorien-field_kuerzel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_kuerzel',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'signaturkategorien',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_kuerzel',
      'label' => 'Kuerzel',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'taxonomy_term-sprache-field_sprachkuerzel'.
  $fields['taxonomy_term-sprache-field_sprachkuerzel'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sprachkuerzel',
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
        'max_length' => '255',
        'views_base_columns' => array(),
        'views_base_table' => FALSE,
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'sprache',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_sprachkuerzel',
      'label' => 'Kuerzel',
      'required' => 1,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '31',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('"Audio" bitte nur dann markieren, wenn wirklich Audios hochgeladen sind, nicht, wenn es nur prinzipiell Audios dazu gibt!<br>
<b>Erlaubte Kombinationen:</b><br>
- Audio<br>
- Audio + Gedrucktes<br>
- Video');
  t('<b>ACHTUNG: Eine Änderung des Titels führt zu einer Änderung der Signatur!</b><br>

Bei <b>Büchern</b>: Originaltitel; Formatierung normalisieren, d.h. keine GROSSBUCHSTABEN o.ä.; Keine Übersetzungen oder Transliterationen des Titels, sondern Originalzeichensystem (z.B. Arabisch, Kyrillisch) beibehalten. ');
  t('<b>Kleinbuchstaben, dreistellig.</b> Ermöglicht das Vereinigen von Büchern mit unterschiedlichen Titeln an einer Stelle im Regal. <b>Bitte zurückhaltend verwenden!</b>');
  t('<b>Upload und Benennung in Etappen erledigen. 30 min. nach dem Öffnen der Bearbeiten-Ansicht erfolgt ein Timeout, danach erscheint beim Speichern der Seite eine Fehlermeldung und die Änderungen gehen verloren!</b>');
  t('<b>Zahlen, zweistellig. </b>Ermöglicht das Differenzieren, wenn Bücher mit identischem Titelbeginn dieselbe Signatur zugewiesen bekommen. <b>Bitte auch von dieser Möglichkeit zurückhaltend Gebrauch machen!</b>');
  t('Alte Signatur');
  t('Amazon');
  t('Anzahl Exemplare');
  t('Auch auszuwählen, wenn die Mediendatei eine Übung neben anderen Inhalten enthält.');
  t('Audiodatei');
  t('Audios sichtbar bei Studenten');
  t('Audiotrack');
  t('Auflösung');
  t('Aufnahmedatum');
  t('Auftraggeber');
  t('Ausgeliehen an');
  t('Ausleihbar');
  t('Ausleihmöglichkeit');
  t('Automatisch erstellter Hash. Nicht änderbar. ');
  t('Autor');
  t('Barcode');
  t('Bei Büchern das <b>Jahr der Auflage</b> eintragen (nicht Jahr des Drucks).');
  t('Bei Büchern und Audios; Einteilung nach Europäischem Referenzrahmen (CEFR).<br/>
Mehrfachauswahl über die Strg-Taste.');
  t('Bei Büchern und Sprachkursen nur die <b>Zielsprache</b> (=<b>eine</b> Sprache) eingeben.<br/>
Mehrfachauswahl über die Strg-Taste.');
  t('Bei Materialien, die vor 2014 inventarisiert wurden, hier die damals gültige Signatur eingeben (zwecks Rückverfolgbarkeit).');
  t('Beschreibung');
  t('Bild/Ton');
  t('Bitte Schneiden');
  t('Cover/Inhaltsverzeichnis');
  t('Credits');
  t('DVD-Nummer');
  t('Darsteller');
  t('Darstellungsverhältnis');
  t('Das Seitenverhältnis des Films. Nur ändern, falls der Film in einem falschen Seitenverhältnis dargestellt wird.
Beispiele:
4:3=><b>1.33</b>
16:9=><b>1.78</b>');
  t('Dateianhang');
  t('Dateigröße');
  t('Der Zeitpunkt, an dem der Film zum Löschen markiert wird. Damit wird er bei Suchen nicht mehr gefunden, kann aber weiterhin von Dozenten verlinkt und angesehen werden. Sieben Tage nach dem hier angegebenen Datum wird die Datei endgültig gelöscht.');
  t('Die Signatur wird hier nicht verändert!');
  t('Download');
  t('Download ZIP');
  t('Dozent(in)');
  t('Drehorte');
  t('ECTS');
  t('Eintrag verbesserungswürdig');
  t('Empfohlen für (Sprachniveau)');
  t('Episodentitel; Untertitel bei Büchern');
  t('Erscheinungsjahr');
  t('Erstaufführung');
  t('EventID');
  t('Falls das Buch an einen Dozenten ausgeliehen ist, sich also nicht am normalen Standort befindet, bitte hier eintragen, an wen und bis wann es ausgeliehen ist.');
  t('Falls das Mutterband nicht (mehr) vorhanden sein sollte, bitte als "XXXX <b>(n/v)</b>" eintragen (also z.B. "3693 (n/v)").<br>
Sind Indizes vorhanden, bitte für jedes Mutterband ein eigenes Feld anlegen, also "1234a" + "1234b" + "1234c" usw.
');
  t('Falls sich das Buch nicht im SLZ befindet, bitte hier den Standort eingeben (z.B. "Archiv Mutterbandmanuskripte", "U1.009"...).');
  t('Fehler in der Aufnahme');
  t('Feld ist nur relevant, falls ein Buch <b>nicht (mehr) verfügbar</b> ist, d.h. wenn sein Verbleib unbekannt ist. Bei bekanntem Verbleib (z.B. Buch verliehen) gilt das Buch weiterhin als verfügbar!');
  t('Genre');
  t('Geschnitten wird im Normalfall nur bei zu archivierenden Aufnahmen.');
  t('Gilt natürlich nur für Bücher und DVDs. Standard ist "Darf ausgeliehen werden". Ist nichts ausgewählt, dann gilt der Artikel auch als ausleihbar.');
  t('Hat Kapitel');
  t('Hier den mit der Texterkennungssoftware (OCR = <i>optical character recognition</i>) erkannten Text eingeben. Die Formatierung darf unordentlich bleiben.');
  t('Hier kann man Stichwörter durch Kommas getrennt vergeben. Bitte nicht die selben Ausdrücke wie bei den Genres verwenden. Noch nicht in der Datenbank erfasste Stichwörter werden automatisch beim Abspeichern erstellt. Bitte immer nur einen Teil des Wortes eintippen und warten, ob es dann von der Autovervollständigung vorgeschlagen wird.');
  t('Hier kann man zusätzliche Metadaten eintragen, die sich nicht durch die bestehenden Felder abbilden lassen.');
  t('ISBN');
  t('Inhaltlich veraltet');
  t('Inhaltsverzeichnis OCR-Text');
  t('Inklusive Archivbestand, d.h. auch Medienart des Mutterbands berücksichtigen.<br/>
Bitte das Häkchen bei <b>Datei</b> nicht vergessen, wenn <b>Audio-</b> oder <b>Videodateien</b> hochgeladen wurden.');
  t('Inventur_timestamp');
  t('Ist der Beitrag korrekt kategorisiert?
Sie können unter "weitere Stichworte vorschlagen" weitere Kategorien angeben.');
  t('Ist ein Hörtext');
  t('Kategorisierung');
  t('Kommt die Mediendatei aus der alten Mediathek?');
  t('Kuerzel');
  t('Kurs-ID');
  t('Kurs-ID(field_kurs_id)');
  t('KursBemerkung');
  t('KursView');
  t('Kursmedien');
  t('Kursverknüpfung');
  t('Löschzeitpunkt');
  t('Markiere dieses Feld, wenn dieser Eintrag mangelhaft ist (Unvollständigkeiten oder Fehler).');
  t('Medientyp');
  t('Mit Übung');
  t('Mutterbandnummer');
  t('Nützlich');
  t('Person_key');
  t('Please, enter the synonyms which should be related to this term.');
  t('Position');
  t('Regie');
  t('SWS');
  t('Schema: "Vorname Nachname / Vorname Nachname / ..."');
  t('Seiten');
  t('Semester');
  t('Sender');
  t('Serienaufnahme');
  t('Signatur');
  t('Signatur-Präfix');
  t('Signatur-Suffix');
  t('Signaturkategorie');
  t('Soll die Mediendatei für alle Benutzer findbar sein?');
  t('Spieldauer');
  t('Sprache');
  t('Sprachspezifische Schlagwörter');
  t('Sprachübergreifende Schlagwörter');
  t('Standort');
  t('Status');
  t('Stichwörter');
  t('Synonyme');
  t('Titel');
  t('Transliteration des Titels ins lateinische Schriftsystem. Keine Titelübersetzung ins Deutsche! Ausfüllen nur bei Originaltiteln in nichtlateinischen Schriftsystemen wie Arabisch, Chinesisch, Farsi, Griechisch, Russisch usw.');
  t('Transliterierter Titel');
  t('UnivISRef_Person');
  t('UnivISRef_title');
  t('Untertitel');
  t('Ursprungsland');
  t('UserTags');
  t('Verfügbar');
  t('Verknüpft die Mediendatei mit einer DVD im Verleihsystem.');
  t('Verknüpfung mit anderer Mediendatei');
  t('Verlag');
  t('Videocodec');
  t('Videodatei');
  t('Videokapitel');
  t('Vorhandene Medienarten');
  t('Wie nützlich fanden Sie diesen Beitrag für Ihr Studium?');
  t('Wie zufrieden sind Sie mit der Bild- und Tonqualität?');
  t('Zusammenfassung');
  t('Zusätzliche Informationen zum Buch');
  t('buch_inhaltsverzeichnisPDF');
  t('buch_thumb');
  t('email');
  t('epg_search_id');
  t('eventIDSendungenKurz');
  t('firstname');
  t('für Fachstudenten');
  t('gender');
  t('icon');
  t('id');
  t('inhaltsverzeichnis');
  t('kurs_ startdate');
  t('kursvideodatei');
  t('lastname');
  t('leclanguage');
  t('legacy');
  t('muttersendung');
  t('office');
  t('organisational');
  t('orgname');
  t('ort');
  t('synopsis');
  t('tax_auftraggeber');
  t('tel');
  t('testvideo');
  t('user_login_name');
  t('verknuepfung_und_icon');
  t('xbmc lifetime');
  t('Öffentlich');
  t('Übungsview');

  return $fields;
}
