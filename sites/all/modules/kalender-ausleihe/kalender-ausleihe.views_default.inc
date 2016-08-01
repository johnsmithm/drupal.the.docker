<?php
/**
 * @file
 * kalender-ausleihe.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kalender-ausleihe_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'kalender_2015';
  $view->description = '';
  $view->tag = 'Calendar';
  $view->base_table = 'node';
  $view->human_name = 'Kalender 2015';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['link_display'] = 'page_1';
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
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'day';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ereignis';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'amazon_suche' => '#ffffff',
    'support_ticket' => '#ffffff',
    'article' => '#ffffff',
    'artikelgruppe' => '#ffffff',
    'ausleihe' => '#faaeae',
    'ausleihvorlagen' => '#ffffff',
    'page' => '#ffffff',
    'notes' => '#ffffff',
    'ereignis' => '#76b2fa',
    'blog' => '#ffffff',
    'date' => '#ffffff',
    'dozententext' => '#ffffff',
    'epg_suchauftraege' => '#ffffff',
    'feed_item' => '#ffffff',
    'forum' => '#ffffff',
    'icon_prototyp' => '#ffffff',
    'h5p_content' => '#ffffff',
    'inventar' => '#ffffff',
    'merci_inventory_master' => '#ffffff',
    'ausleihbare_beh_lter_artikel' => '#ffffff',
    'kurs' => '#ffffff',
    'merci_inventory' => '#ffffff',
    'mediendatei' => '#ffffff',
    'feed' => '#ffffff',
    'panel' => '#ffffff',
    'merci_reservation' => '#faaeae',
    'reservierungshistorie' => '#ffffff',
    'schl_ssell' => '#ffffff',
    'sendungen' => '#ffffff',
    'tutorial' => '#ffffff',
    'video_dvd' => '#ffffff',
    'webform' => '#ffffff',
    'xbmc_videoplaylist' => '#ffffff',
    'ausleihbaresdvd' => '#ffffff',
    'ausleihbares' => '#ffffff',
    'h5p_mediendatei' => '#ffffff',
    'php_seite' => '#ffffff',
  );
  /* Kopfbereich: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php

$kalenderwoche=date("W")+1;
$Jahr=date("Y");
echo "<a href=\\"/fcalendar/xweek/".$Jahr."-W".$kalenderwoche."\\" class=\'erweiterte_Wochenansicht\'>nächste Wochen -> erweiterte Wochenansicht</a><br>";

?>';
  /* Beziehung: Inhalt: Autor */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Beziehung: Inhalt: ArtikelFC (field_artikelfc) */
  $handler->display->display_options['relationships']['field_artikelfc_value']['id'] = 'field_artikelfc_value';
  $handler->display->display_options['relationships']['field_artikelfc_value']['table'] = 'field_data_field_artikelfc';
  $handler->display->display_options['relationships']['field_artikelfc_value']['field'] = 'field_artikelfc_value';
  $handler->display->display_options['relationships']['field_artikelfc_value']['delta'] = '-1';
  /* Feld: Inhalt: Zeit */
  $handler->display->display_options['fields']['field_zeit']['id'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['fields']['field_zeit']['field'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['label'] = '';
  $handler->display->display_options['fields']['field_zeit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_zeit']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_zeit']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_zeit']['delta_offset'] = '0';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Article_Names_calendar */
  $handler->display->display_options['fields']['field_article_names_calendar']['id'] = 'field_article_names_calendar';
  $handler->display->display_options['fields']['field_article_names_calendar']['table'] = 'field_data_field_article_names_calendar';
  $handler->display->display_options['fields']['field_article_names_calendar']['field'] = 'field_article_names_calendar';
  $handler->display->display_options['fields']['field_article_names_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_article_names_calendar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_names_calendar']['alter']['text'] = '[field_article_names_calendar-value]';
  $handler->display->display_options['fields']['field_article_names_calendar']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_article_names_calendar']['element_label_colon'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

If (isset($data->node_title)){
if($data->node_title!="Template"){

echo "<div class=\'aufgabe-titel-calendar\'>".$data->node_title."</div>";
}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zugewiesen_an']['alter']['text'] = '<b>[field_zugewiesen_an]</b>';
  $handler->display->display_options['fields']['field_zugewiesen_an']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_zugewiesen_an']['element_class'] = 'zugewiesen-an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  /* Feld: Inhalt: Raum */
  $handler->display->display_options['fields']['field_raum']['id'] = 'field_raum';
  $handler->display->display_options['fields']['field_raum']['table'] = 'field_data_field_raum';
  $handler->display->display_options['fields']['field_raum']['field'] = 'field_raum';
  $handler->display->display_options['fields']['field_raum']['hide_empty'] = TRUE;
  /* Feld: Feld: Erledigt */
  $handler->display->display_options['fields']['field_erledigt']['id'] = 'field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['table'] = 'field_data_field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['field'] = 'field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['label'] = '';
  $handler->display->display_options['fields']['field_erledigt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['alter']['text'] = '<a href="/node/[nid]">[field_erledigt] ->Aufgabenansicht</a>';
  $handler->display->display_options['fields']['field_erledigt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_erledigt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['hide_alter_empty'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
if (isset($row->title)){
if($row->title!="Template"){
echo "<div class=\'aufgabe-titel-calendar\'>",$row->title,"</div>";
}}
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
//dd($data->field_field_ausgeliehen_p[0][\'rendered\'][\'#markup\']);
if (isset($data->field_field_ausgeliehen_p[0][\'rendered\'][\'#markup\'])){
$realname=$data->field_field_ausgeliehen_p[0][\'rendered\'][\'#markup\'];
if (($realname)){
echo "<a class=\'name-ausleihe\' href=\'node/$data->nid\'>$realname</a>a";}else{
echo "<a class=\'name-ausleihe\' href=\'node/$data->nid\'>Hier klicken</a>a";
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
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_artikelfc']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_artikelfc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artikelfc']['settings'] = array(
    'edit' => 'Bearbeiten',
    'delete' => 'Löschen',
    'add' => 'Hinzufügen',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_artikelfc']['delta_offset'] = '0';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
global $user;
if ($user->uid==6897){
$conflictArray=getConflictArray();

if (isset($conflictArray[$data->nid])){
dd("Das ist die Problemreservierung, die um :15 stattfindet");
showProblemReservation();
}
$myRiskNode=isRiskNode($data->nid);
if ($myRiskNode){
dd("Das ist die Problemreservierung, die vorher stattfindet");
showProblemAhead();
}
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
    'ereignis' => 'ereignis',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Feld: Artikel (field_artikel_noderef) */
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['id'] = 'field_artikel_noderef_nid';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['table'] = 'field_data_field_artikel_noderef';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['field'] = 'field_artikel_noderef_nid';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['relationship'] = 'field_artikelfc_value';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['expose']['operator_id'] = 'field_artikel_noderef_nid_op';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['expose']['label'] = 'Artikel';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['expose']['operator'] = 'field_artikel_noderef_nid_op';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['expose']['identifier'] = 'field_artikel_noderef_nid';
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_artikel_noderef_nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
  );
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'month';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'ausleihbares' => '#ffffff',
    'page' => '#ffffff',
    'blog' => '#ffffff',
    'cd_player' => '#ffffff',
    'cd_player_1_usb_anschluss_' => '#ffffff',
    'dvd_player' => '#ffffff',
    'date' => '#ffffff',
    'ereignis' => '#76b2fa',
    'feed_item' => '#ffffff',
    'forum' => '#ffffff',
    'merci_inventory_master' => '#ffffff',
    'merci_inventory' => '#ffffff',
    'mediendatei' => '#ffffff',
    'feed' => '#ffffff',
    'panel' => '#ffffff',
    'merci_reservation' => '#faaeae',
    'schl_ssel' => '#ffffff',
    'schl_ssell' => '#ffffff',
    'support_ticket' => '#ffffff',
    'poll' => '#ffffff',
    'videorekorder' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_merci_date.field_merci_date_value' => 'field_data_field_merci_date.field_merci_date_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-zeit/month';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Month';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Calendar';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '0';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_zeit' => 'field_zeit',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ereignis';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'amazon_suche' => '#ffffff',
    'support_ticket' => '#ffffff',
    'article' => '#ffffff',
    'artikelgruppe' => '#ffffff',
    'ausleihe' => '#faaeae',
    'ausleihvorlagen' => '#ffffff',
    'page' => '#ffffff',
    'notes' => '#ffffff',
    'ereignis' => '#76b2fa',
    'blog' => '#ffffff',
    'date' => '#ffffff',
    'dozententext' => '#ffffff',
    'epg_suchauftraege' => '#ffffff',
    'feed_item' => '#ffffff',
    'forum' => '#ffffff',
    'icon_prototyp' => '#ffffff',
    'h5p_content' => '#ffffff',
    'inventar' => '#ffffff',
    'merci_inventory_master' => '#ffffff',
    'ausleihbare_beh_lter_artikel' => '#ffffff',
    'kurs' => '#ffffff',
    'merci_inventory' => '#ffffff',
    'mediendatei' => '#ffffff',
    'feed' => '#ffffff',
    'panel' => '#ffffff',
    'merci_reservation' => '#faaeae',
    'reservierungshistorie' => '#ffffff',
    'schl_ssell' => '#ffffff',
    'sendungen' => '#ffffff',
    'tutorial' => '#ffffff',
    'video_dvd' => '#ffffff',
    'webform' => '#ffffff',
    'xbmc_videoplaylist' => '#ffffff',
    'ausleihbaresdvd' => '#ffffff',
    'ausleihbares' => '#ffffff',
    'h5p_mediendatei' => '#ffffff',
    'php_seite' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value' => 'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
    'ereignis' => 'ereignis',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_noscrolltop'] = 1;
  $handler->display->display_options['path'] = 'fcalendar/week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Day */
  $handler = $view->new_display('page', 'Day', 'page_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['date_argument']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['validate_options']['code'] = 'if ($argument!="heute" && $argument!="morgen" && $argument!="gestern"){return true;}
if ($handler->argument=="gestern"){
$myDate = mktime(0, 0, 0, date("m"), date("d")-1, date("y"));
$handler->argument=date("Y-m-d", $myDate); 
}elseif
($handler->argument=="heute"){
$myDate = mktime(0, 0, 0, date("m"), date("d"), date("y"));
$handler->argument=date("Y-m-d", $myDate); 
}elseif
($handler->argument=="morgen"){
$myDate = mktime(0, 0, 0, date("m"), date("d")+1, date("y"));
$handler->argument=date("Y-m-d", $myDate); 
}

return true;';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value' => 'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
    'ereignis' => 'ereignis',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'fcalendar';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Year */
  $handler = $view->new_display('page', 'Year', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'year';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'year';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'year';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_merci_date.field_merci_date_value' => 'field_data_field_merci_date.field_merci_date_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-zeit/year';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Year';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'mini';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['name_size'] = '1';
  $handler->display->display_options['style_options']['mini'] = '1';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '1';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_merci_date.field_merci_date_value' => 'field_data_field_merci_date.field_merci_date_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );

  /* Display: iCal */
  $handler = $view->new_display('feed', 'iCal', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['links'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Datum: Datum (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['path'] = 'calendar-node-field-zeit/ical/%/calendar.ics';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'page_1' => 'page_1',
    'page_2' => 'page_2',
    'page_3' => 'page_3',
    'block_1' => 'block_1',
    'block_2' => 'block_2',
    'default' => 0,
  );

  /* Display: Upcoming */
  $handler = $view->new_display('block', 'Upcoming', 'block_2');
  $handler->display->display_options['display_description'] = 'Block der zukünftigen Events.';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'upcoming-item-class';
  $handler->display->display_options['style_options']['class'] = 'upcoming-item-list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'upcoming-item';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Zeit */
  $handler->display->display_options['fields']['field_zeit']['id'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['fields']['field_zeit']['field'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['label'] = '';
  $handler->display->display_options['fields']['field_zeit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_zeit']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_zeit']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_zeit']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_zeit']['delta_first_last'] = TRUE;
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/[nid]/edit?destination=admin/merci/manage/reservations';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'calendar_inhalt-block';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Feld: MERCI: Reserved items */
  $handler->display->display_options['fields']['item_nid2']['id'] = 'item_nid2';
  $handler->display->display_options['fields']['item_nid2']['table'] = 'merci_reservation_detail';
  $handler->display->display_options['fields']['item_nid2']['field'] = 'item_nid2';
  $handler->display->display_options['fields']['item_nid2']['label'] = '';
  $handler->display->display_options['fields']['item_nid2']['element_type'] = 'div';
  $handler->display->display_options['fields']['item_nid2']['element_class'] = 'reserviertes_calendar';
  $handler->display->display_options['fields']['item_nid2']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Reservation */
  $handler->display->display_options['fields']['field_merci_date']['id'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['field'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['label'] = '';
  $handler->display->display_options['fields']['field_merci_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_merci_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Datum: Datum (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['add_delta'] = 'yes';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  /* Filterkriterium: Inhalt: Zeit -  Startdatum (field_zeit) */
  $handler->display->display_options['filters']['field_zeit_value']['id'] = 'field_zeit_value';
  $handler->display->display_options['filters']['field_zeit_value']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['filters']['field_zeit_value']['field'] = 'field_zeit_value';
  $handler->display->display_options['filters']['field_zeit_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_zeit_value']['default_date'] = 'now +13 days';
  /* Filterkriterium: Feld: Erledigt (field_erledigt) */
  $handler->display->display_options['filters']['field_erledigt_value']['id'] = 'field_erledigt_value';
  $handler->display->display_options['filters']['field_erledigt_value']['table'] = 'field_data_field_erledigt';
  $handler->display->display_options['filters']['field_erledigt_value']['field'] = 'field_erledigt_value';
  $handler->display->display_options['filters']['field_erledigt_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_erledigt_value']['value'] = array(
    1 => '1',
  );
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Upcoming Reservierungen';

  /* Display: Show specific Day */
  $handler = $view->new_display('page', 'Show specific Day', 'page_4');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['date_id'] = 'day';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
echo "<div id=calendar_entry$row->nid>";
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'zugewiesen-an';
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Feld: Inhalt: Raum */
  $handler->display->display_options['fields']['field_raum']['id'] = 'field_raum';
  $handler->display->display_options['fields']['field_raum']['table'] = 'field_data_field_raum';
  $handler->display->display_options['fields']['field_raum']['field'] = 'field_raum';
  $handler->display->display_options['fields']['field_raum']['hide_empty'] = TRUE;
  /* Feld: Inhalt: Reservation */
  $handler->display->display_options['fields']['field_merci_date']['id'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['field'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['label'] = '';
  $handler->display->display_options['fields']['field_merci_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_merci_date']['element_class'] = 'calendar-repeat-field';
  $handler->display->display_options['fields']['field_merci_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_merci_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_merci_date']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date']['delta_offset'] = '0';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_zugewiesen_an']['element_wrapper_class'] = 'zugewiesen-an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  /* Feld: Inhalt: Zeit */
  $handler->display->display_options['fields']['field_zeit']['id'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['fields']['field_zeit']['field'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['label'] = '';
  $handler->display->display_options['fields']['field_zeit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_zeit']['element_wrapper_class'] = 'calendar_inhalt';
  $handler->display->display_options['fields']['field_zeit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_zeit']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_zeit']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['delta_offset'] = '0';
  /* Feld: MERCI: Reserved items */
  $handler->display->display_options['fields']['item_nid2']['id'] = 'item_nid2';
  $handler->display->display_options['fields']['item_nid2']['table'] = 'merci_reservation_detail';
  $handler->display->display_options['fields']['item_nid2']['field'] = 'item_nid2';
  $handler->display->display_options['fields']['item_nid2']['label'] = '';
  $handler->display->display_options['fields']['item_nid2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['item_nid2']['alter']['path'] = 'node/[nid]/edit?destination=admin/merci/manage/reservations';
  $handler->display->display_options['fields']['item_nid2']['element_type'] = 'div';
  $handler->display->display_options['fields']['item_nid2']['element_class'] = 'calendar-repeat-field';
  $handler->display->display_options['fields']['item_nid2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_nid2']['separator'] = '';
  /* Feld: Inhalt: Reservation */
  $handler->display->display_options['fields']['field_merci_date_1']['id'] = 'field_merci_date_1';
  $handler->display->display_options['fields']['field_merci_date_1']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['fields']['field_merci_date_1']['field'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_merci_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_merci_date_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_merci_date_1']['element_class'] = 'calendar-repeat-field';
  $handler->display->display_options['fields']['field_merci_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_merci_date_1']['delta_offset'] = '0';
  /* Feld: Feld: Erledigt */
  $handler->display->display_options['fields']['field_erledigt']['id'] = 'field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['table'] = 'field_data_field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['field'] = 'field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['label'] = '';
  $handler->display->display_options['fields']['field_erledigt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_erledigt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['empty_zero'] = TRUE;
  /* Feld: Inhalt: Kommentar */
  $handler->display->display_options['fields']['field_kommentar']['id'] = 'field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['table'] = 'field_data_field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['field'] = 'field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kommentar']['alter']['text'] = '[field_kommentar]';
  $handler->display->display_options['fields']['field_kommentar']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_kommentar']['element_wrapper_class'] = 'calendar-kommentar';
  $handler->display->display_options['fields']['field_kommentar']['type'] = 'text_plain';
  /* Feld: Benutzer: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'calendar_inhalt';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Feld: Inhalt: Reservation (field_merci_date:Delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Reservation Dates */
  $handler->display->display_options['fields']['field_reservations_date']['id'] = 'field_reservations_date';
  $handler->display->display_options['fields']['field_reservations_date']['table'] = 'field_data_field_reservations_date';
  $handler->display->display_options['fields']['field_reservations_date']['field'] = 'field_reservations_date';
  $handler->display->display_options['fields']['field_reservations_date']['label'] = '';
  $handler->display->display_options['fields']['field_reservations_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reservations_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reservations_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
global $user;

$mysqli = new mysqli("127.0.0.1", "barcode_user", "S43cUR9XhMGTZrY9", "drupal");

if (isset($row->delta)){
$delta=$row->delta;
}
$show=0;$checkin_show=0;
// vergleiche die Startzeit der delta-Reservierung mit der aktuellen Zeit
// Falls die Reservierung nicht am selben Tag liegt
// gibt es kein checkout Feld mehr
$morgen = time() + (12 * 60 * 60);


$row1=$mysqli->query("SELECT merci_reservation_status
FROM  `merci_reservation` WHERE  nid=$data->nid");
$result=$row1->fetch_assoc();
$status=$result[\'merci_reservation_status\'];
$row1=$mysqli->query("select merci_item_nid from merci_reservation_detail where nid=$data->nid and merci_item_status=2");

while ($result = $row1->fetch_assoc()){
//Finde Namen der Artikel
$articleID=$result[\'merci_item_nid\'];

}
switch ($status) {
    case 2:
    //    print "<div class=\'zentriert-ausleihstatus\'>bestätigt</div>";
  print "<div id=box-$row->nid>";
print "<div class=\'zentriert-action\'><input type=\'button\' value=\'check-out\' 
 onclick=\'fast_checkin_checkout(\\"checkout\\",$data->nid,$user->uid);\'></div>";
  print "</div>";
        break;
    case 3:
  print "<div id=box-$row->nid>";
   //    print "<div class=\'zentriert-ausleihstatus-ausgecheckt\'>ausgecheckt</div>";

print "<div class=\'zentriert-action\'><input type=\'button\' value=\'check-in\' 
 onclick=\'fast_checkin_checkout(\\"checkin\\",$data->nid,$user->uid);\'></div>";
  print "</div>";
        break;
    case 4:
  print "<div id=box-$row->nid>";
   //  print "<div class=\'zentriert-ausleihstatus\'>zurückgegeben</div>";
     print "<div class=\'zentriert-action\'><input type=\'button\' value=\'check-out\' 
 onclick=\'fast_checkin_checkout(\\"checkout\\",$data->nid,$user->uid);\'></div>";
  print "</div>";
   break;
case 7:
  print "<div id=box-$row->nid>";
     print "<div class=\'zentriert-action\'><input type=\'button\' value=\'check-out\' 
 onclick=\'fast_checkin_checkout(\\"checkout\\",$data->nid,$user->uid);\'></div>";
$row1=$mysqli->query("UPDATE merci_reservation SET  merci_reservation_status=4 WHERE merci_reservation_status=7");
  print "</div>";
 break;
}

 ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php 
echo "</div>";
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['date_argument']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['date_argument']['validate_options']['code'] = 'if ($handler->argument=="gestern"){
$myDate = mktime(0, 0, 0, date("m"), date("d")-1, date("y"));
$handler->argument=date("Y-m-d", $myDate); 
}elseif
($handler->argument=="heute"){
$myDate = mktime(0, 0, 0, date("m"), date("d"), date("y"));
$handler->argument=date("Y-m-d", $myDate); 
}elseif
($handler->argument=="morgen"){
$myDate = mktime(0, 0, 0, date("m"), date("d")+1, date("y"));
$handler->argument=date("Y-m-d", $myDate); 
}
return true;';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'day';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value' => 'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihbares' => 'ausleihbares',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Feld: Zugewiesen an (field_zugewiesen_an) */
  $handler->display->display_options['filters']['field_zugewiesen_an_uid']['id'] = 'field_zugewiesen_an_uid';
  $handler->display->display_options['filters']['field_zugewiesen_an_uid']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['filters']['field_zugewiesen_an_uid']['field'] = 'field_zugewiesen_an_uid';
  $handler->display->display_options['filters']['field_zugewiesen_an_uid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_zugewiesen_an_uid']['group'] = 2;
  /* Filterkriterium: MERCI: Reserved item nid */
  $handler->display->display_options['filters']['item_nid']['id'] = 'item_nid';
  $handler->display->display_options['filters']['item_nid']['table'] = 'merci_reservation_detail';
  $handler->display->display_options['filters']['item_nid']['field'] = 'item_nid';
  $handler->display->display_options['filters']['item_nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['item_nid']['group'] = 2;
  /* Filterkriterium: Inhalt: Reservation -  Startdatum (field_merci_date) */
  $handler->display->display_options['filters']['field_merci_date_value']['id'] = 'field_merci_date_value';
  $handler->display->display_options['filters']['field_merci_date_value']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['filters']['field_merci_date_value']['field'] = 'field_merci_date_value';
  $handler->display->display_options['filters']['field_merci_date_value']['value']['value'] = '2013-10-22';
  $handler->display->display_options['filters']['field_merci_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_merci_date_value']['expose']['operator_id'] = 'field_merci_date_value_op';
  $handler->display->display_options['filters']['field_merci_date_value']['expose']['label'] = 'Auswahl';
  $handler->display->display_options['filters']['field_merci_date_value']['expose']['operator'] = 'field_merci_date_value_op';
  $handler->display->display_options['filters']['field_merci_date_value']['expose']['identifier'] = 'field_merci_date_value';
  $handler->display->display_options['filters']['field_merci_date_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_merci_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    5 => '5',
    1 => 0,
    3 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_merci_date_value']['year_range'] = '-0:+0';
  $handler->display->display_options['path'] = 'fcalendar/day';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Day';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: my week calendar */
  $handler = $view->new_display('page', 'my week calendar', 'page_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_zeit' => 'field_zeit',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ereignis';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'article' => '#ffffff',
    'ausleihbares' => '#ffffff',
    'page' => '#ffffff',
    'blog' => '#ffffff',
    'cd_player' => '#ffffff',
    'cd_player_1_usb_anschluss_' => '#ffffff',
    'dvd_player' => '#ffffff',
    'date' => '#ffffff',
    'ereignis' => '#76b2fa',
    'feed_item' => '#ffffff',
    'forum' => '#ffffff',
    'merci_inventory_master' => '#ffffff',
    'merci_inventory' => '#ffffff',
    'mediendatei' => '#ffffff',
    'feed' => '#ffffff',
    'panel' => '#ffffff',
    'merci_reservation' => '#faaeae',
    'schl_ssel' => '#ffffff',
    'schl_ssell' => '#ffffff',
    'support_ticket' => '#ffffff',
    'poll' => '#ffffff',
    'videorekorder' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Zeit */
  $handler->display->display_options['fields']['field_zeit']['id'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['fields']['field_zeit']['field'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['label'] = '';
  $handler->display->display_options['fields']['field_zeit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_zeit']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_zeit']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'hide',
  );
  $handler->display->display_options['fields']['field_zeit']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_zeit']['delta_offset'] = '0';
  /* Feld: Inhalt: Beitrags-ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'node/[nid]/edit?destination=admin/merci/manage/reservations';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'calendar_inhalt';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
If (isset($data->field_field_ausgeliehen_p[0][\'rendered\'][\'#markup\'])){
echo "<b>Buch/DVD Reservierung</b><ul style=\\"margin:0px; list-style-image:none;\\"><li style=\\" list-style-image:none;\\">".$data->node_title."</li></ul>";
}
Elseif (isset($data->node_title)){
if($data->node_title!="Reservierung"){

echo "<div class=\'aufgabe-titel-calendar\'>".$data->node_title."</div>";
}
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_zugewiesen_an']['alter']['text'] = '<b>[field_zugewiesen_an]</b>';
  $handler->display->display_options['fields']['field_zugewiesen_an']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_zugewiesen_an']['element_class'] = 'zugewiesen-an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  /* Feld: Realname: Echter Name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['relationship'] = 'uid';
  $handler->display->display_options['fields']['realname']['label'] = '';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  $handler->display->display_options['fields']['realname']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['realname']['link_to_user'] = FALSE;
  /* Feld: Inhalt: Raum */
  $handler->display->display_options['fields']['field_raum']['id'] = 'field_raum';
  $handler->display->display_options['fields']['field_raum']['table'] = 'field_data_field_raum';
  $handler->display->display_options['fields']['field_raum']['field'] = 'field_raum';
  $handler->display->display_options['fields']['field_raum']['hide_empty'] = TRUE;
  /* Feld: Inhalt: Link zum Wiki Eintrag des Raumes */
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['id'] = 'field_link_zum_wiki_eintrag_des_';
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['table'] = 'field_data_field_link_zum_wiki_eintrag_des_';
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['field'] = 'field_link_zum_wiki_eintrag_des_';
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['label'] = '';
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_zum_wiki_eintrag_des_']['click_sort_column'] = 'url';
  /* Feld: MERCI: Reserved items */
  $handler->display->display_options['fields']['item_nid2']['id'] = 'item_nid2';
  $handler->display->display_options['fields']['item_nid2']['table'] = 'merci_reservation_detail';
  $handler->display->display_options['fields']['item_nid2']['field'] = 'item_nid2';
  $handler->display->display_options['fields']['item_nid2']['label'] = '';
  $handler->display->display_options['fields']['item_nid2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['item_nid2']['alter']['path'] = '[field_link_zum_wiki_eintrag_des_]';
  $handler->display->display_options['fields']['item_nid2']['element_type'] = 'div';
  $handler->display->display_options['fields']['item_nid2']['element_class'] = 'reserviertes_calendar';
  $handler->display->display_options['fields']['item_nid2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['item_nid2']['type'] = 'ul';
  /* Feld: Inhalt: Reservation */
  $handler->display->display_options['fields']['field_merci_date']['id'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['field'] = 'field_merci_date';
  $handler->display->display_options['fields']['field_merci_date']['label'] = '';
  $handler->display->display_options['fields']['field_merci_date']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_merci_date']['element_class'] = 'calendar-repeat-field';
  $handler->display->display_options['fields']['field_merci_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_merci_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_merci_date']['settings'] = array(
    'format_type' => 'uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '1',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_merci_date']['delta_offset'] = '0';
  /* Feld: Feld: Erledigt */
  $handler->display->display_options['fields']['field_erledigt']['id'] = 'field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['table'] = 'field_data_field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['field'] = 'field_erledigt';
  $handler->display->display_options['fields']['field_erledigt']['label'] = '';
  $handler->display->display_options['fields']['field_erledigt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['alter']['text'] = '<a href="/node/[nid]">[field_erledigt] ->Aufgabenansicht</a>';
  $handler->display->display_options['fields']['field_erledigt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_erledigt']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_erledigt']['hide_alter_empty'] = FALSE;
  /* Feld: Inhalt: Kommentar */
  $handler->display->display_options['fields']['field_kommentar']['id'] = 'field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['table'] = 'field_data_field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['field'] = 'field_kommentar';
  $handler->display->display_options['fields']['field_kommentar']['label'] = '';
  $handler->display->display_options['fields']['field_kommentar']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_kommentar']['alter']['text'] = '[field_kommentar]';
  $handler->display->display_options['fields']['field_kommentar']['element_label_colon'] = FALSE;
  /* Feld: Benutzer: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'node/[nid]/edit?destination=admin/merci/manage/reservations';
  $handler->display->display_options['fields']['name']['element_type'] = 'div';
  $handler->display->display_options['fields']['name']['element_class'] = 'calendar_inhalt';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Feld: Inhalt: Reservation (field_merci_date:Delta) */
  $handler->display->display_options['fields']['delta']['id'] = 'delta';
  $handler->display->display_options['fields']['delta']['table'] = 'field_data_field_merci_date';
  $handler->display->display_options['fields']['delta']['field'] = 'delta';
  $handler->display->display_options['fields']['delta']['label'] = '';
  $handler->display->display_options['fields']['delta']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delta']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Reservation Dates */
  $handler->display->display_options['fields']['field_reservations_date']['id'] = 'field_reservations_date';
  $handler->display->display_options['fields']['field_reservations_date']['table'] = 'field_data_field_reservations_date';
  $handler->display->display_options['fields']['field_reservations_date']['field'] = 'field_reservations_date';
  $handler->display->display_options['fields']['field_reservations_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reservations_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Feld: Inhalt: Ausgeliehen an */
  $handler->display->display_options['fields']['field_ausgeliehen_p']['id'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['table'] = 'field_data_field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['field'] = 'field_ausgeliehen_p';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_p']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_p']['type'] = 'user_reference_plain';
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = '';
  $handler->display->display_options['fields']['php_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
if (isset($row->title)){
if($row->title!="Reservierung"){
echo "<div class=\'aufgabe-titel-calendar\'>",$row->title,"</div>";
}}
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  /* Feld: Inhalt: Ausgeliehen von/bis */
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['id'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['table'] = 'field_data_field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['field'] = 'field_ausgeliehen_von_bis';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['label'] = '';
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ausgeliehen_von_bis']['settings'] = array(
    'format_type' => 'uhrzeit',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value' => 'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value',
    'field_data_field_merci_date.field_merci_date_value' => 'field_data_field_merci_date.field_merci_date_value',
    'field_data_field_reservations_date.field_reservations_date_value' => 'field_data_field_reservations_date.field_reservations_date_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  /* Kontextfilter: Benutzer: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterium: Inhalt: Typ */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ausleihe' => 'ausleihe',
    'ereignis' => 'ereignis',
    'merci_reservation' => 'merci_reservation',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filterkriterium: Inhalt: Veröffentlicht */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['group'] = 1;
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = '$myNodeID=$data->nid;
$myNode=node_load($myNodeID);
global $user;
if (isset($myNode->field_ausgeliehen_p) && $myNode->field_ausgeliehen_p[\'und\'][0][\'uid\']==$user->uid) return false;


if (!isset($myNode->merci_reservation_items) && !isset($myNode->field_zugewiesen_an)){return true;}
if (isset($myNode->merci_reservation_items)){
$anzahl=count($myNode->merci_reservation_items);
if ($anzahl==0){
if ($anzahl==0 && $myNode->type=="merci_reservation"){return TRUE;}
}
}';
  $handler->display->display_options['use_ajax_flags'] = array(
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_noscrolltop'] = 1;
  $handler->display->display_options['path'] = 'calendar-node-field-zeit_/my_week';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: xWeek */
  $handler = $view->new_display('page', 'xWeek', 'page_6');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'date_views_pager';
  $handler->display->display_options['pager']['options']['link_format'] = 'clean';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'calendar_style';
  $handler->display->display_options['style_options']['calendar_type'] = 'week';
  $handler->display->display_options['style_options']['name_size'] = '3';
  $handler->display->display_options['style_options']['mini'] = '0';
  $handler->display->display_options['style_options']['with_weekno'] = '0';
  $handler->display->display_options['style_options']['multiday_theme'] = '0';
  $handler->display->display_options['style_options']['theme_style'] = '1';
  $handler->display->display_options['style_options']['max_items'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'calendar_entity';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_zeit' => 'field_zeit',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['calendar_date_link'] = 'ereignis';
  $handler->display->display_options['row_options']['colors']['legend'] = 'type';
  $handler->display->display_options['row_options']['colors']['calendar_colors_type'] = array(
    'amazon_suche' => '#ffffff',
    'support_ticket' => '#ffffff',
    'article' => '#ffffff',
    'artikelgruppe' => '#ffffff',
    'ausleihe' => '#faaeae',
    'ausleihvorlagen' => '#ffffff',
    'page' => '#ffffff',
    'notes' => '#ffffff',
    'ereignis' => '#76b2fa',
    'blog' => '#ffffff',
    'date' => '#ffffff',
    'dozententext' => '#ffffff',
    'epg_suchauftraege' => '#ffffff',
    'feed_item' => '#ffffff',
    'forum' => '#ffffff',
    'icon_prototyp' => '#ffffff',
    'h5p_content' => '#ffffff',
    'inventar' => '#ffffff',
    'merci_inventory_master' => '#ffffff',
    'ausleihbare_beh_lter_artikel' => '#ffffff',
    'kurs' => '#ffffff',
    'merci_inventory' => '#ffffff',
    'mediendatei' => '#ffffff',
    'feed' => '#ffffff',
    'panel' => '#ffffff',
    'merci_reservation' => '#faaeae',
    'reservierungshistorie' => '#ffffff',
    'schl_ssell' => '#ffffff',
    'sendungen' => '#ffffff',
    'tutorial' => '#ffffff',
    'video_dvd' => '#ffffff',
    'webform' => '#ffffff',
    'xbmc_videoplaylist' => '#ffffff',
    'ausleihbaresdvd' => '#ffffff',
    'ausleihbares' => '#ffffff',
    'h5p_mediendatei' => '#ffffff',
    'php_seite' => '#ffffff',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Kontextfilter: Datum: Datum (node) */
  $handler->display->display_options['arguments']['date_argument']['id'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['table'] = 'node';
  $handler->display->display_options['arguments']['date_argument']['field'] = 'date_argument';
  $handler->display->display_options['arguments']['date_argument']['default_action'] = 'default';
  $handler->display->display_options['arguments']['date_argument']['exception']['title'] = 'Alles';
  $handler->display->display_options['arguments']['date_argument']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['date_argument']['granularity'] = 'week';
  $handler->display->display_options['arguments']['date_argument']['add_delta'] = 'yes';
  $handler->display->display_options['arguments']['date_argument']['date_fields'] = array(
    'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value' => 'field_data_field_ausgeliehen_von_bis.field_ausgeliehen_von_bis_value',
    'field_data_field_zeit.field_zeit_value' => 'field_data_field_zeit.field_zeit_value',
  );
  $handler->display->display_options['use_ajax_flags'] = array(
    'bookmarks' => 0,
  );
  $handler->display->display_options['use_ajax_flags_noscrolltop'] = 1;
  $handler->display->display_options['path'] = 'fcalendar/xweek';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Week';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['kalender_2015'] = array(
    t('Master'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Autor'),
    t('field collection item from field_artikelfc'),
    t('[field_article_names_calendar-value]'),
    t('Zugewiesen an'),
    t('<b>[field_zugewiesen_an]</b>'),
    t('Raum'),
    t('<a href="/node/[nid]">[field_erledigt] ->Aufgabenansicht</a>'),
    t('Artikel'),
    t('Month'),
    t('Alles'),
    t('Week'),
    t('Day'),
    t('Year'),
    t('Block'),
    t('iCal'),
    t('Upcoming'),
    t('Block der zukünftigen Events.'),
    t('Upcoming Reservierungen'),
    t('Show specific Day'),
    t('Kommentar'),
    t('[field_kommentar]'),
    t('.'),
    t(','),
    t('Auswahl'),
    t('my week calendar'),
    t('Reservation Dates'),
    t('Alle'),
    t('xWeek'),
  );
  $export['kalender_2015'] = $view;

  return $export;
}
