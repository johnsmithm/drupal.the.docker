<?php
/**
 * @file
 * field_sitzungspunkt.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function field_sitzungspunkt_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_sitzungspunkt-field_erledigt'.
  $fields['field_collection_item-field_sitzungspunkt-field_erledigt'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_erledigt',
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
          0 => 'Noch nicht erledigt',
          1 => 'Erledigt',
        ),
        'allowed_values_function' => '',
        'entity_translation_sync' => FALSE,
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'field_sitzungspunkt',
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
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 3,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_erledigt',
      'label' => 'Erledigt',
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_sitzungspunkt-field_sitzungskommentar'.
  $fields['field_collection_item-field_sitzungspunkt-field_sitzungskommentar'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sitzungskommentar',
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
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_sitzungspunkt',
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
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_sitzungskommentar',
      'label' => 'Kommentar',
      'required' => 0,
      'settings' => array(
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
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_sitzungspunkt-field_sitzungsthema'.
  $fields['field_collection_item-field_sitzungspunkt-field_sitzungsthema'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sitzungsthema',
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
      'bundle' => 'field_sitzungspunkt',
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
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_sitzungsthema',
      'label' => 'Thema',
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
          'size' => '100',
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_sitzungspunkt-field_zugewiesen_an'.
  $fields['field_collection_item-field_sitzungspunkt-field_zugewiesen_an'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '4',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_zugewiesen_an',
      'field_permissions' => array(
        'type' => '0',
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
          3 => 0,
          4 => 0,
          5 => '5',
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
          11 => 0,
          12 => 0,
          13 => 0,
          14 => 0,
        ),
        'referenceable_status' => array(
          0 => 0,
          1 => '1',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'references_1',
          'view_name' => 'allehiwis',
        ),
        'views_base_columns' => array(),
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'user_reference',
    ),
    'field_instance' => array(
      'bundle' => 'field_sitzungspunkt',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'user_reference',
          'settings' => array(),
          'type' => 'user_reference_default',
          'weight' => 2,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_zugewiesen_an',
      'label' => 'Zugewiesen an',
      'required' => 0,
      'settings' => array(
        'entity_translation_sync' => FALSE,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'realname_userreference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'realname_userreference/autocomplete',
          'size' => 60,
        ),
        'type' => 'realname_userreference_auto',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-sitzungsprotokoll-field_sitzungspunkt'.
  $fields['node-sitzungsprotokoll-field_sitzungspunkt'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sitzungspunkt',
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
        'views_base_table' => 0,
      ),
      'translatable' => '0',
      'type' => 'field_collection',
    ),
    'field_instance' => array(
      'bundle' => 'sitzungsprotokoll',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'field_collection',
          'settings' => array(
            'add' => 'Hinzufügen',
            'delete' => 'Löschen',
            'description' => TRUE,
            'edit' => 'Bearbeiten',
            'view_mode' => 'full',
          ),
          'type' => 'field_collection_view',
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
          'weight' => '4',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_sitzungspunkt',
      'label' => 'Sitzungspunkt',
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
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Erledigt');
  t('Kommentar');
  t('Sitzungspunkt');
  t('Thema');
  t('Zugewiesen an');

  return $fields;
}
