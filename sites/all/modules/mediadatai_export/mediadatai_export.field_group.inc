<?php
/**
 * @file
 * mediadatai_export.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediadatai_export_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audio|node|mediendatei|form';
  $field_group->group_name = 'group_audio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_audio_video';
  $field_group->data = array(
    'label' => 'Audio',
    'weight' => '4',
    'children' => array(
      0 => 'field_audiodatei',
      1 => 'field_mutterbandnr',
      2 => 'field_audios_sichtbar_bei_stud',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Audio',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'audiogroup group-audio field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_audio|node|mediendatei|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audio|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_audio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = 'group_covermusik';
  $field_group->data = array(
    'label' => 'Audios',
    'weight' => '8',
    'children' => array(
      0 => 'field_audiodatei',
      1 => 'field_kursmedien',
      2 => 'field_kursview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-audio field-group-htab',
      ),
    ),
  );
  $export['group_audio|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_besetzung_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_besetzung_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = 'group_mediendetails_dvd';
  $field_group->data = array(
    'label' => '',
    'weight' => '143',
    'children' => array(
      0 => 'field_erscheinungsjahr',
      1 => 'field_ursprungsland',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => 'node_mediendatei_full_group_besetzung',
        'classes' => 'besetzung group-besetzung field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_besetzung_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_besetzung|node|mediendatei|full';
  $field_group->group_name = 'group_besetzung';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_mediendetails';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_author',
      1 => 'field_erscheinungsjahr',
      2 => 'field_ursprungsland',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'besetzung group-besetzung field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_mediendatei_full_group_besetzung',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_besetzung|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bewertung_ht|node|mediendatei|full';
  $field_group->group_name = 'group_bewertung_ht';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bewertung',
    'weight' => '98',
    'children' => array(
      0 => 'field_bild_tonqualitaet',
      1 => 'field_hilfreich',
      2 => 'field_kategorisierung',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-bewertung-ht field-group-htab',
      ),
    ),
  );
  $export['group_bewertung_ht|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buchcover|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_buchcover';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = 'group_covermusik';
  $field_group->data = array(
    'label' => 'Cover',
    'weight' => '6',
    'children' => array(
      0 => 'field_buch_inhaltsverzeichnispdf',
      1 => 'field_cover',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Cover',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' group-buchcover field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_buchcover|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_buch|node|mediendatei|form';
  $field_group->group_name = 'group_buch';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_audio_video';
  $field_group->data = array(
    'label' => 'Buch',
    'weight' => '2',
    'children' => array(
      0 => 'field_buch_verlag',
      1 => 'field_buch_originaltitel',
      2 => 'field_buch_seiten',
      3 => 'field_isbn',
      4 => 'field_buch_autor',
      5 => 'field_cover',
      6 => 'field_inhaltsverzeichnisocrtext',
      7 => 'field_zip_download',
      8 => 'field_buchkategorie',
      9 => 'field_verfuegbar',
      10 => 'field_bemerkung_buch',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-buch field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_buch|node|mediendatei|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_covermusik_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_covermusik_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'covermusik',
    'weight' => '3',
    'children' => array(
      0 => 'group_dvd_cover',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'covermusik',
      'instance_settings' => array(
        'classes' => ' group-covermusik field-group-htabs',
      ),
    ),
  );
  $export['group_covermusik_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_covermusik|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_covermusik';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'CoverMusik',
    'weight' => '3',
    'children' => array(
      0 => 'group_buchcover',
      1 => 'group_audio',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-covermusik field-group-htabs',
      ),
    ),
  );
  $export['group_covermusik|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_darsteller_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_darsteller_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = 'group_mediendetails_dvd';
  $field_group->data = array(
    'label' => '',
    'weight' => '144',
    'children' => array(
      0 => 'field_darsteller',
      1 => 'field_regie',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => 'node_mediendatei_full_group_darsteller',
        'classes' => 'group-darsteller-div group-darsteller field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_darsteller_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_darsteller|node|mediendatei|full';
  $field_group->group_name = 'group_darsteller';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_mediendetails';
  $field_group->data = array(
    'label' => '',
    'weight' => '5',
    'children' => array(
      0 => 'field_darsteller',
      1 => 'field_regie',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'group-darsteller-div group-darsteller field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_mediendatei_full_group_darsteller',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_darsteller|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|mediendatei|full';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_mediendetails';
  $field_group->data = array(
    'label' => '',
    'weight' => '6',
    'children' => array(
      0 => 'field_aufloesung',
      1 => 'status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-details field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_mediendatei_full_group_details',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dvd_cover|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_dvd_cover';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = 'group_covermusik_dvd';
  $field_group->data = array(
    'label' => 'Cover',
    'weight' => '5',
    'children' => array(
      0 => 'field_cover',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Cover',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' group-buchcover field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_dvd_cover|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_audio_video|node|mediendatei|form';
  $field_group->group_name = 'group_edit_audio_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'audioVideoGruppe',
    'weight' => '16',
    'children' => array(
      0 => 'group_video',
      1 => 'group_audio',
      2 => 'group_standard',
      3 => 'group_buch',
      4 => 'group_kurserstellung',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'audioVideoGruppe',
      'instance_settings' => array(
        'classes' => 'audiovideogroup group-edit-audio-video field-group-htabs',
      ),
    ),
  );
  $export['group_edit_audio_video|node|mediendatei|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppe1_dvd1|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_gruppe1_dvd1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_spieldauer',
      1 => 'field_sprache',
      2 => 'field_serienposition',
      3 => 'field_buch_standort',
      4 => 'field_mutterbandnr',
      5 => 'erscheinungsjahr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => 'node_mediendatei_full_group_gruppe1',
        'classes' => 'wrapper_gruppe1 group-gruppe1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_gruppe1_dvd1|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppe1|node|mediendatei|full';
  $field_group->group_name = 'group_gruppe1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_spieldauer',
      1 => 'field_sender_taxonomy',
      2 => 'field_aufnahmedatum',
      3 => 'field_filesize',
      4 => 'field_buch_verlag',
      5 => 'field_buch_originaltitel',
      6 => 'field_buch_seiten',
      7 => 'field_isbn',
      8 => 'field_buch_autor',
      9 => 'field_sprache',
      10 => 'field_imageratio',
      11 => 'field_signatur',
      12 => 'field_serienposition',
      13 => 'field_buch_standort',
      14 => 'field_ausgeliehen_an',
      15 => 'field_mutterbandnr',
      16 => 'download_link',
      17 => 'erscheinungsjahr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'wrapper_gruppe1 group-gruppe1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_mediendatei_full_group_gruppe1',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_gruppe1|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gruppe1|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_gruppe1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_buch_verlag',
      1 => 'field_buch_originaltitel',
      2 => 'field_buch_seiten',
      3 => 'field_isbn',
      4 => 'field_buch_autor',
      5 => 'field_sprache',
      6 => 'field_serienposition',
      7 => 'field_buch_standort',
      8 => 'field_ausgeliehen_an',
      9 => 'field_kursverknuepfung',
      10 => 'field_mutterbandnr',
      11 => 'field_zip_download',
      12 => 'field_signatur_neu',
      13 => 'field_bemerkung_buch',
      14 => 'erscheinungsjahr',
      15 => 'verf_gbarkeit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'wrapper_gruppe1 group-gruppe1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_mediendatei_mediendatei_buch_group_gruppe1',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_gruppe1|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inhalt_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_inhalt_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = 'group_summary_synapsis_dvd';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '18',
    'children' => array(
      0 => 'field_feed_item_description',
      1 => 'field_buch_beschreibung',
      2 => 'field_file_anhang',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Inhalt',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' group-summary-menuitem field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_inhalt_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inhaltsverzeichnis|node|mediendatei|full';
  $field_group->group_name = 'group_inhaltsverzeichnis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_summary_synapsis';
  $field_group->data = array(
    'label' => 'Audios',
    'weight' => '41',
    'children' => array(
      0 => 'field_audiodatei',
      1 => 'field_buch_inhaltsverzeichnispdf',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Audios',
      'instance_settings' => array(
        'classes' => ' group-inhaltsverzeichnis field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_inhaltsverzeichnis|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kurserstellung|node|mediendatei|form';
  $field_group->group_name = 'group_kurserstellung';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_audio_video';
  $field_group->data = array(
    'label' => 'Kurserstellung',
    'weight' => '5',
    'children' => array(
      0 => 'field_kursmedien',
      1 => 'field_kursview',
      2 => 'field_semester',
      3 => 'field_lecture_uid',
      4 => 'field_univisref_person',
      5 => 'field_ects',
      6 => 'field_fachstud',
      7 => 'field_leclanguage',
      8 => 'field_orgname',
      9 => 'field_kurs__startdate',
      10 => 'field_organisational',
      11 => 'field_credits',
      12 => 'field_dozent_in_',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-kurserstellung field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_kurserstellung|node|mediendatei|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_kursgruppe_links|node|mediendatei|kursansicht';
  $field_group->group_name = 'group_kursgruppe_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'kursansicht';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '3',
    'children' => array(
      0 => 'field_semester',
      1 => 'field_kurs__startdate',
      2 => 'field_dozent_in_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'wrapper_gruppe1 group-kursgruppe-links field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_mediendatei_kursansicht_group_kursgruppe_links',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_kursgruppe_links|node|mediendatei|kursansicht'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_locations|node|mediendatei|full';
  $field_group->group_name = 'group_locations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_summary_synapsis';
  $field_group->data = array(
    'label' => 'Drehorte',
    'weight' => '38',
    'children' => array(
      0 => 'field_drehorte',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Drehorte',
      'instance_settings' => array(
        'classes' => ' group-locations field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_locations|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mediendetails_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_mediendetails_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = 'group_summary_synapsis_dvd';
  $field_group->data = array(
    'label' => 'Mediendetails',
    'weight' => '21',
    'children' => array(
      0 => 'group_besetzung_dvd',
      1 => 'group_darsteller_dvd',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Mediendetails',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'classmediendatei group-mediendetails field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mediendetails_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mediendetails|node|mediendatei|full';
  $field_group->group_name = 'group_mediendetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_summary_synapsis';
  $field_group->data = array(
    'label' => 'Mediendetails',
    'weight' => '36',
    'children' => array(
      0 => 'group_details',
      1 => 'group_besetzung',
      2 => 'group_darsteller',
      3 => 'group_details2',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Mediendetails',
      'instance_settings' => array(
        'classes' => 'classmediendatei group-mediendetails field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mediendetails|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_noderefs|node|mediendatei|full';
  $field_group->group_name = 'group_noderefs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_summary_synapsis';
  $field_group->data = array(
    'label' => 'Verknüpfte Medien',
    'weight' => '35',
    'children' => array(
      0 => 'field_kursverknuepfung',
      1 => 'verkn_pfte_mediendateien',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Verknüpfte Medien',
      'instance_settings' => array(
        'classes' => 'verknuepfte_medien group-noderefs field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_noderefs|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_similar_|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_similar_';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = 'group_summary_synapsis1';
  $field_group->data = array(
    'label' => 'Übung',
    'weight' => '87',
    'children' => array(
      0 => 'field_uebungsview',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Übung',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' group-similar- field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_similar_|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_standard|node|mediendatei|form';
  $field_group->group_name = 'group_standard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_audio_video';
  $field_group->data = array(
    'label' => 'Standard',
    'weight' => '0',
    'children' => array(
      0 => 'field_feed_item_description',
      1 => 'field_episodentitel',
      2 => 'field_erscheinungsjahr',
      3 => 'field_genre',
      4 => 'field_ursprungsland',
      5 => 'field_keywords',
      6 => 'field_noderefmediendatei',
      7 => 'title_field',
      8 => 'field_sprache',
      9 => 'field_sprachniveau',
      10 => 'field_buch_standort',
      11 => 'field_file_anhang',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-standard field-group-htab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_standard|node|mediendatei|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_kurs|node|mediendatei|kursansicht';
  $field_group->group_name = 'group_summary_kurs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'kursansicht';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group_summary_synapsis',
    'weight' => '12',
    'children' => array(
      0 => 'field_feed_item_description',
      1 => 'field_buch_beschreibung',
      2 => 'field_file_anhang',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'group_summary_synapsis',
      'instance_settings' => array(
        'classes' => 'summary_box_kurs group-summary-kurs field-group-htabs',
      ),
    ),
  );
  $export['group_summary_kurs|node|mediendatei|kursansicht'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_menuitem|node|mediendatei|full';
  $field_group->group_name = 'group_summary_menuitem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_summary_synapsis';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '33',
    'children' => array(
      0 => 'field_feed_item_description',
      1 => 'field_buch_beschreibung',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Inhalt',
      'instance_settings' => array(
        'classes' => ' group-summary-menuitem field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_summary_menuitem|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_menuitem|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_summary_menuitem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = 'group_summary_synapsis1';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '84',
    'children' => array(
      0 => 'field_feed_item_description',
      1 => 'field_buch_beschreibung',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Inhalt',
      'instance_settings' => array(
        'classes' => ' group-summary-menuitem field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_summary_menuitem|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_synapsis1|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_summary_synapsis1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group_summary_synapsis',
    'weight' => '7',
    'children' => array(
      0 => 'field_file_anhang',
      1 => 'group_noderefs_',
      2 => 'group_similar_',
      3 => 'group_summary_menuitem',
      4 => 'group_synapsis_menuitem',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'group_summary_synapsis',
      'instance_settings' => array(
        'classes' => 'summary_box group-summary-synapsis1 field-group-htabs',
      ),
    ),
  );
  $export['group_summary_synapsis1|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_synapsis_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_summary_synapsis_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'summary_synapsis',
    'weight' => '9',
    'children' => array(
      0 => 'group_inhalt_dvd',
      1 => 'group_synapsis_menuitem_dvd',
      2 => 'group_noderefs_dvd',
      3 => 'group_mediendetails_dvd',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'summary_synapsis',
      'instance_settings' => array(
        'classes' => 'summary_box group-summary-synapsis field-group-htabs',
      ),
      'formatter' => '',
    ),
  );
  $export['group_summary_synapsis_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary_synapsis|node|mediendatei|full';
  $field_group->group_name = 'group_summary_synapsis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'summary_synapsis',
    'weight' => '8',
    'children' => array(
      0 => 'group_summary_menuitem',
      1 => 'group_synapsis_menuitem',
      2 => 'group_locations',
      3 => 'group_mediendetails',
      4 => 'group_similar',
      5 => 'group_noderefs',
      6 => 'group_bearbeiten',
      7 => 'group_inhaltsverzeichnis',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'summary_synapsis',
      'instance_settings' => array(
        'classes' => 'summary_box group-summary-synapsis field-group-htabs',
      ),
    ),
  );
  $export['group_summary_synapsis|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synapsis_menuitem_dvd|node|mediendatei|mediendatei_dvd';
  $field_group->group_name = 'group_synapsis_menuitem_dvd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_dvd';
  $field_group->parent_name = 'group_summary_synapsis_dvd';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '19',
    'children' => array(
      0 => 'field_synopsis',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Inhalt',
      'instance_settings' => array(
        'id' => '',
        'classes' => ' group-synapsis-menuitem field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_synapsis_menuitem_dvd|node|mediendatei|mediendatei_dvd'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synapsis_menuitem|node|mediendatei|full';
  $field_group->group_name = 'group_synapsis_menuitem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_summary_synapsis';
  $field_group->data = array(
    'label' => 'Inhalt',
    'weight' => '34',
    'children' => array(
      0 => 'field_synopsis',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Inhalt',
      'instance_settings' => array(
        'classes' => ' group-synapsis-menuitem field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_synapsis_menuitem|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_synapsis_menuitem|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_synapsis_menuitem';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = 'group_summary_synapsis1';
  $field_group->data = array(
    'label' => 'group_synapsis_menuitem',
    'weight' => '85',
    'children' => array(
      0 => 'field_synopsis',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-synapsis-menuitem field-group-htab',
      ),
    ),
  );
  $export['group_synapsis_menuitem|node|mediendatei|mediendatei_buch'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|mediendatei|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_audio_video';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '1',
    'children' => array(
      0 => 'field_videodatei',
      1 => 'field_untertitel',
      2 => 'field_sender_taxonomy',
      3 => 'field_aufnahmedatum',
      4 => 'field_author',
      5 => 'field_drehorte',
      6 => 'field_darsteller',
      7 => 'field_field_to_be_deleted_in_n_d',
      8 => 'field_imageratio',
      9 => 'field_status',
      10 => 'field_serienposition',
      11 => 'field_regie',
      12 => 'field_bitte_schneiden',
      13 => 'field_share_with_xbmc_lifetime',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'videogroup group-video field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_video|node|mediendatei|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_rechts|node|mediendatei|full';
  $field_group->group_name = 'group_wrapper_rechts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_usertags',
      1 => 'ds_switch_field',
      2 => 'community_tags_block',
      3 => 'ds_block',
      4 => 'filter_nach_genre',
      5 => 'group_gruppe2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-wrapper-rechts field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_mediendatei_full_group_wrapper_rechts',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_wrapper_rechts|node|mediendatei|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_rechts|node|mediendatei|mediendatei_buch';
  $field_group->group_name = 'group_wrapper_rechts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mediendatei';
  $field_group->mode = 'mediendatei_buch';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '4',
    'children' => array(
      0 => 'field_usertags',
      1 => 'ds_switch_field',
      2 => 'community_tags_block',
      3 => 'ds_block',
      4 => 'filter_nach_genre',
      5 => 'group_gruppe2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-wrapper-rechts field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_mediendatei_mediendatei_buch_group_wrapper_rechts',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_wrapper_rechts|node|mediendatei|mediendatei_buch'] = $field_group;

  return $export;
}
