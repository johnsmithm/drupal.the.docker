<?php
/**
 * @file
 * checkincheckout_block_view_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function checkincheckout_block_view_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'checkincheckout_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'CheckinCheckout Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CheckinCheckout';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ausleihe-box box-[nid]-ci';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Kopfbereich: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php

echo "<script type=\\"text/JavaScript\\" src=\\"/sites/all/libraries/checkinCheckout.js\\"></script>";
?>';
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Nachrichten */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'Im Moment stehen keine Artikel zum Einchecken an.';
  /* Beziehung: Inhalt: ArtikelFC (field_artikelfc) */
  $handler->display->display_options['relationships']['field_artikelfc_value']['id'] = 'field_artikelfc_value';
  $handler->display->display_options['relationships']['field_artikelfc_value']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['relationships']['field_artikelfc_value']['field'] = 'field_artikelfc_value';
  $handler->display->display_options['relationships']['field_artikelfc_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_artikelfc_value']['delta'] = '-1';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'ausleihe-input';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$random=rand();
echo "<input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,1); }\\"></input>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Sortierkriterien: Inhalt: Beitragsdatum */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Kontextfilter: Inhalt: Beitrags-ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207831 => '207831',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';

  /* Display: Checkin */
  $handler = $view->new_display('page', 'Checkin', 'page');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Alles eingecheckt Meldung';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Alle Artikel wurden erfolgreich eingecheckt</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$random=rand();
echo "<input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,1); }\\"></input>";

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'deutsch',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207830 => '207830',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  $handler->display->display_options['path'] = 'fcheckinb';

  /* Display: Checkin Block */
  $handler = $view->new_display('block', 'Checkin Block', 'checkin_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹--';
  $handler->display->display_options['pager']['options']['tags']['next'] = '--›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Nachrichten */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'Im Moment stehen keine Artikel zum Einchecken an.';
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: PHP */
  $handler->display->display_options['empty']['php']['id'] = 'php';
  $handler->display->display_options['empty']['php']['table'] = 'views';
  $handler->display->display_options['empty']['php']['field'] = 'php';
  $handler->display->display_options['empty']['php']['empty'] = TRUE;
  $handler->display->display_options['empty']['php']['php_output'] = '<?php
echo "<div class=fcheckinlate><a href=\'fcheckinlate\'>Sollte hier was stehen? --> verspätetes Einchecken</a></div>";
?>';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Startzeit - Enddatum (field_startzeit:value2) */
  $handler->display->display_options['sorts']['field_startzeit_value2']['id'] = 'field_startzeit_value2';
  $handler->display->display_options['sorts']['field_startzeit_value2']['table'] = 'field_data_field_startzeit';
  $handler->display->display_options['sorts']['field_startzeit_value2']['field'] = 'field_startzeit_value2';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207830 => '207830',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  /* Filterkriterium: Inhalt: Ausgeliehen von/bis - Enddatum (field_ausgeliehen_von_bis:value2) */
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['id'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['field'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['operator'] = 'between';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['default_date'] = 'now -5 hours';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['default_to_date'] = 'now + 60 minutes';
  /* Filterkriterium: Inhalt: Ausgeliehen von/bis -  Startdatum (field_ausgeliehen_von_bis) */
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['id'] = 'field_ausgeliehen_von_bis_value';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['field'] = 'field_ausgeliehen_von_bis_value';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['operator'] = 'not between';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['default_date'] = 'now - 20 minutes';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['default_to_date'] = 'now +60 minutes';
  $handler->display->display_options['block_description'] = 'Checkin Block';

  /* Display: Checkout */
  $handler = $view->new_display('page', 'Checkout', 'page_1');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Alles ausgecheckt Meldung';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Alle Artikel wurden erfolgreich ausgecheckt</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$random=rand();
echo "<input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,0); }\\"></input>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'deutsch',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  $handler->display->display_options['path'] = 'fcheckoutb';

  /* Display: Checkout Block */
  $handler = $view->new_display('block', 'Checkout Block', 'checkout_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹--';
  $handler->display->display_options['pager']['options']['tags']['next'] = '--›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'ausleihe-box box-[nid]-co';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Nachrichten */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'Im Moment stehen keine Artikel zum Auschecken an.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'ausleihe-input';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$random=rand();
echo "<input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,0); }\\"></input>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
global $user;
if ($user->uid==6897){
$conflictArray=getConflictArray();


$myRiskNode=isRiskNode($data->nid);
if ($myRiskNode){
dd("Das ist die Problemreservierung, die vorher stattfindet");
showProblemAhead();
}
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Ausgeliehen von/bis -  Startdatum (field_ausgeliehen_von_bis) */
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value']['id'] = 'field_ausgeliehen_von_bis_value';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value']['field'] = 'field_ausgeliehen_von_bis_value';
  /* Sortierkriterien: Inhalt: Ausgeliehen an (field_ausgeliehen_an) */
  $handler->display->display_options['sorts']['field_ausgeliehen_an_value']['id'] = 'field_ausgeliehen_an_value';
  $handler->display->display_options['sorts']['field_ausgeliehen_an_value']['table'] = 'field_data_field_ausgeliehen_an';
  $handler->display->display_options['sorts']['field_ausgeliehen_an_value']['field'] = 'field_ausgeliehen_an_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207830 => '207830',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  /* Filterkriterium: Inhalt: Ausgeliehen von/bis -  Startdatum (field_ausgeliehen_von_bis) */
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['id'] = 'field_ausgeliehen_von_bis_value';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['field'] = 'field_ausgeliehen_von_bis_value';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['default_date'] = 'now -2 hours';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value']['default_to_date'] = 'now +20 minutes';
  /* Filterkriterium: Inhalt: Ausgeliehen von/bis - Enddatum (field_ausgeliehen_von_bis:value2) */
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['id'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['field'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'Checkout Block';

  /* Display: Checkin Late Block */
  $handler = $view->new_display('block', 'Checkin Late Block', 'checkin_late');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'lateCheckin box-[nid]-ci';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'warningOverdue';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$myUser=user_load($data->_field_data[\'nid\'][\'entity\']->field_ausgeliehen_p[\'und\'][0][\'uid\']);
global $user;
$currentUser=user_load($user->uid);
$mail=$currentUser->mail;
echo "<h3>ACHTUNG, ".$currentUser->field_firstname[\'und\'][0][\'value\']."!!</h3>";
echo "Falls der Artikel hier ist und nicht eingecheckt wurde -> einchecken. Ansonsten schau in Outlook nach, ob schon eine Email geschrieben wurde.";
echo "Falls nicht, bitte JETZT eine Mail an diese Person schicken: <a href=\'mailto:".$myUser->mail."?cc=sz-medien@fau.de\'>Klicke hier</a>";
$random=rand();
echo "<p><input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,1); }\\"></input></p>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Ausgeliehen von/bis - Enddatum (field_ausgeliehen_von_bis:value2) */
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['id'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['field'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207830 => '207830',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 1;
  $handler->display->display_options['filters']['php']['php_setup'] = 'lists_session("overdueReservations","1");
';
  $handler->display->display_options['filters']['php']['php_filter'] = '$jetzt=time();

$counter=0;
if (strpos(lists_session("overdueReservations"),$data->nid)) return TRUE;
$node=node_load($data->nid);
//dd($node->field_ausgeliehen_von_bis[\'und\']);

foreach ($node->field_ausgeliehen_von_bis[\'und\'] as $ausleihtermin){
$myCookie=lists_session("overdueReservations");
$start=date("U",strtotime($ausleihtermin[\'value\']));

if ($start>$jetzt){
//dd("start größer als jetzt");
$endzeitEinsVorher=date("U",strtotime($node->field_ausgeliehen_von_bis[\'und\'][$counter-1][\'value2\']));
$startzeitEinsVorher=date("U",strtotime($node->field_ausgeliehen_von_bis[\'und\'][$counter-1][\'value\']));
dd("endzeit eins vorher: ".$node->field_ausgeliehen_von_bis[\'und\'][$counter-1][\'value2\']);
dd("startzeit eins vorher: ".$node->field_ausgeliehen_von_bis[\'und\'][$counter-1][\'value\']);
if ($endzeitEinsVorher && $jetzt>($endzeitEinsVorher+8400) && $jetzt<$start) { dd("jetzt kleiner als endzeit vorher. counter ist: ".$counter);
lists_session("overdueReservations",$myCookie.",".$data->nid);
return false;}
//dd("return true");
//$myCookie.=",".$data->nid;
return true;
}
$counter++;

}
return true;';
  $handler->display->display_options['block_description'] = 'Checkin Late Block';

  /* Display: AllesEinchecken */
  $handler = $view->new_display('page', 'AllesEinchecken', 'page_2');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Alles eingecheckt Meldung';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Alle Artikel wurden erfolgreich eingecheckt</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$random=rand();
echo "<input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,1); }\\"></input>";

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'deutsch',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
echo "<a href=\'/node/$data->nid/edit\'>Reservierung aufrufen</a>";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207830 => '207830',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  $handler->display->display_options['path'] = 'fcheckinLate';

  /* Display: AllesAuschecken */
  $handler = $view->new_display('page', 'AllesAuschecken', 'page_3');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Verhalten, wenn keine Ergebnisse vorliegen: Global: Textbereich */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Alles ausgecheckt Meldung';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h3>Alle Artikel wurden erfolgreich ausgecheckt</h3>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$random=rand();
echo "<input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,2); }\\"></input>";

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'deutsch',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207831 => '207831',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  /* Filterkriterium: Inhalt: Ausgeliehen von/bis - Enddatum (field_ausgeliehen_von_bis:value2) */
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['id'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['field'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_ausgeliehen_von_bis_value2']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'fcheckoutLate';

  /* Display: Checkin Late Block clone */
  $handler = $view->new_display('block', 'Checkin Late Block clone', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'lateCheckin box-[nid]-ci';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'warningOverdue';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$myUser=user_load($data->_field_data[\'nid\'][\'entity\']->field_ausgeliehen_p[\'und\'][0][\'uid\']);
global $user;
$currentUser=user_load($user->uid);
$mail=$currentUser->mail;
echo \'<a href="/node/\'.$data->nid.\'/edit" >Check dates</a>\';
echo "<h3>ACHTUNG, ".$currentUser->field_firstname[\'und\'][0][\'value\']."!!</h3>";
echo "Falls der Artikel hier ist und nicht eingecheckt wurde -> einchecken. Ansonsten schau in Outlook nach, ob schon eine Email geschrieben wurde.";
echo "Falls nicht, bitte JETZT eine Mail an diese Person schicken: <a href=\'mailto:".$myUser->mail."?cc=sz-medien@fau.de\'>Klicke hier</a>";
$random=rand();
echo "<p><input autofocus=\\"autofocus\\" type=text id=mytextfield$random onkeydown=\\"if (event.keyCode == 13) {checkinCheckoutNew($data->nid,document.getElementById(\'mytextfield$random\').value,1); }\\"></input></p>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['delta_offset'] = '0';
  /* Feld: Inhalt: ArtikelFC */
  $handler->display->display_options['fields']['field_artikelfc']['id'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['field'] = 'field_artikelfc';
  $handler->display->display_options['fields']['field_artikelfc']['label'] = '';
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'view_mode' => 'ical',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_artikelfc']['multi_type'] = 'ul';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sortierkriterien: Inhalt: Ausgeliehen von/bis - Enddatum (field_ausgeliehen_von_bis:value2) */
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['id'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['field'] = 'field_ausgeliehen_von_bis_value2';
  $handler->display->display_options['sorts']['field_ausgeliehen_von_bis_value2']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
  );
  /* Filterkriterium: Feld: Status (field_status_dvd) */
  $handler->display->display_options['filters']['field_status_dvd_tid']['id'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['table'] = 'field_data_field_status_dvd';
  $handler->display->display_options['filters']['field_status_dvd_tid']['field'] = 'field_status_dvd_tid';
  $handler->display->display_options['filters']['field_status_dvd_tid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_status_dvd_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_dvd_tid']['value'] = array(
    207830 => '207830',
  );
  $handler->display->display_options['filters']['field_status_dvd_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_status_dvd_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_dvd_tid']['vocabulary'] = 'buch_ausleihstatus';
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 1;
  $handler->display->display_options['filters']['php']['php_setup'] = 'lists_session("overdueReservations","1");
';
  $handler->display->display_options['filters']['php']['php_filter'] = '$jetzt=time();
//return false;
$counter=0;
if (strpos(lists_session("overdueReservations"),$data->nid)) return TRUE;
$node=node_load($data->nid);
//dd(lists_session("overdueReservations"));
//dd($node->field_ausgeliehen_p[\'und\'][0][\'uid\']);

foreach ($node->field_ausgeliehen_von_bis[\'und\'] as $ausleihtermin){
  $myCookie=lists_session("overdueReservations");

  $start=date("U",strtotime($ausleihtermin[\'value\']));

  if ($start<$jetzt){
    //if($node->field_ausgeliehen_p[\'und\'][0][\'uid\'] != \'7144\')return true;

    $endzeitEinsVorher=date("U",strtotime($node->field_ausgeliehen_von_bis[\'und\'][$counter][\'value2\']));
    $startzeitEinsVorher=date("U",strtotime($node->field_ausgeliehen_von_bis[\'und\'][$counter][\'value\']));
    if ($endzeitEinsVorher && $jetzt>($endzeitEinsVorher+8400) && $jetzt < ($endzeitEinsVorher+24*3600)  && $jetzt>$start) { 
      
      dd(\'$endzeitEinsVorher\'.$endzeitEinsVorher);
      dd(\'$start\'.$start);
      dd(\'nid\'.$data->nid);
      lists_session("overdueReservations",$myCookie.",".$data->nid);
      return false;
    }
   
  }
  $counter++;

}

return true;';
  $handler->display->display_options['block_description'] = 'Checkin Late Block clone';
  $translatables['checkincheckout_block'] = array(
    t('Master'),
    t('CheckinCheckout'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('Im Moment stehen keine Artikel zum Einchecken an.'),
    t('field collection item from field_artikelfc'),
    t('Ausgeliehen von/bis'),
    t('Alle'),
    t('Checkin'),
    t('Alles eingecheckt Meldung'),
    t('<h3>Alle Artikel wurden erfolgreich eingecheckt</h3>'),
    t('Checkin Block'),
    t('‹--'),
    t('--›'),
    t('Checkout'),
    t('Alles ausgecheckt Meldung'),
    t('<h3>Alle Artikel wurden erfolgreich ausgecheckt</h3>'),
    t('Checkout Block'),
    t('Im Moment stehen keine Artikel zum Auschecken an.'),
    t('Checkin Late Block'),
    t('AllesEinchecken'),
    t('AllesAuschecken'),
    t('Checkin Late Block clone'),
  );
  $export['checkincheckout_block'] = $view;

  return $export;
}
