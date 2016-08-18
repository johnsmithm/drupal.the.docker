<?php
/**
 * @file
 * testtt.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function testtt_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'support_ticket';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Support Ticket';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Aufgabenübersicht';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_zugewiesen_an' => 'field_zugewiesen_an',
    'changed' => 'changed',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_zugewiesen_an' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Kopfbereich: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/aufgabenuebersicht-abgeschlossen">--> abgeschlossene Arbeitsaufträge</a>';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['label'] = 'Zugewiesen';
  $handler->display->display_options['fields']['field_zugewiesen_an']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_zugewiesen_an']['multi_type'] = 'ul';
  /* Feld: Tracker: Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'tracker_node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'aktualisiert vor';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Textkörper';
  /* Sortierkriterien: Inhalt: Typ */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Sortierkriterien: Inhalt: Zeit -  Startdatum (field_zeit) */
  $handler->display->display_options['sorts']['field_zeit_value']['id'] = 'field_zeit_value';
  $handler->display->display_options['sorts']['field_zeit_value']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['sorts']['field_zeit_value']['field'] = 'field_zeit_value';
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
    'support_ticket' => 'support_ticket',
  );
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$uid=$user->uid;
$node=node_load($data->nid);

if (isset($node->state) && $node->state == "4") return TRUE;
return FALSE;';
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_routineaufgabe_value']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Kopfbereich: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<a href="/aufgabenuebersicht-abgeschlossen">--> abgeschlossene Arbeitsaufträge</a>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['label'] = 'Zugewiesen';
  $handler->display->display_options['fields']['field_zugewiesen_an']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_zugewiesen_an']['multi_type'] = 'ul';
  /* Feld: Tracker: Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'tracker_node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'aktualisiert vor';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Inhalt';
  $handler->display->display_options['path'] = 'aufgabenuebersicht';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Titel';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

$myNode=node_load($data->nid);
$myTitle=$myNode->title;
$zugewiesenAn="";
if ($myNode->type=="ereignis"){
// Es handelt sich um eine Betreuungsaufgabe
echo "<div class=aufgabenTitel><a href=\'/node/$data->nid\'>".$myTitle."</a></div>";

foreach ($myNode->field_zugewiesen_an[\'und\'] as $myZugewiesenAn){
$myUser=user_load($myZugewiesenAn[\'uid\']);
$zugewiesenAn=$zugewiesenAn.$myUser->realname.", ";

}
$zugewiesenAn=substr($zugewiesenAn,0,-2);
echo "<div class=zugewiesenAnFront>Zugewiesen an: ".$zugewiesenAn."</div>";
}else{
echo "<div class=aufgabenTitel><a href=\'/node/$data->nid\'>".$myTitle."</a></div>";
foreach ($myNode->field_zugewiesen_an[\'und\'] as $myZugewiesenAn){
$myUser=user_load($myZugewiesenAn[\'uid\']);
$zugewiesenAn=$zugewiesenAn.$myUser->realname.", ";

}
$zugewiesenAn=substr($zugewiesenAn,0,-2);
echo "<div class=zugewiesenAnFront>Zugewiesen an: ".$zugewiesenAn."</div>";
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['label'] = 'Zugewiesen';
  $handler->display->display_options['fields']['field_zugewiesen_an']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zugewiesen_an']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_zugewiesen_an']['multi_type'] = 'ul';
  /* Feld: Tracker: Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'tracker_node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = '';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Feld: Inhalt: Typ */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  /* Feld: Inhalt: Zeit */
  $handler->display->display_options['fields']['field_zeit']['id'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['fields']['field_zeit']['field'] = 'field_zeit';
  $handler->display->display_options['fields']['field_zeit']['label'] = 'Wann?';
  $handler->display->display_options['fields']['field_zeit']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_zeit']['element_class'] = 'aufgabenDatum';
  $handler->display->display_options['fields']['field_zeit']['element_label_colon'] = FALSE;
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
    'ereignis' => 'ereignis',
    'support_ticket' => 'support_ticket',
  );
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$uid=$user->uid;
$node=node_load($data->nid);

if (!isset($node->field_zugewiesen_an[\'und\'])) return true;
if (isset($node->state) && $node->state == "4") return TRUE;
if (isset($node->field_erledigt[\'und\'][0][\'value\']) && $node->field_erledigt[\'und\'][0][\'value\'] == "1") return TRUE;

if (search_in_array($uid,$node->field_zugewiesen_an[\'und\'])) return FALSE;

return TRUE;';
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_routineaufgabe_value']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['block_description'] = 'Meine Aufgaben';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Abgeschlossene Aufgaben';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['label'] = 'Zugewiesen';
  $handler->display->display_options['fields']['field_zugewiesen_an']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = 'all';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_zugewiesen_an']['multi_type'] = 'ul';
  /* Feld: Tracker: Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'tracker_node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'aktualisiert vor';
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Inhalt';
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
    'support_ticket' => 'support_ticket',
  );
  /* Filterkriterium: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 0;
  $handler->display->display_options['filters']['php']['php_filter'] = 'global $user;
$uid=$user->uid;
$node=node_load($data->nid);

if (isset($node->state) && $node->state == "4") return false;
return true;';
  /* Filterkriterium: Inhalt: Beitragsdatum */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '2014-10-01 00:00:00';
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'aufgabenuebersicht-abgeschlossen';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bitte erledigen';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Feld: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
global $user;
$myUser=user_load($user->uid);
echo "<b>Aufgepasst, ".$myUser->field_firstname[\'und\'][0][\'safe_value\']."!!</b>";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Feld: Inhalt: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Feld: Feld: Zugewiesen an */
  $handler->display->display_options['fields']['field_zugewiesen_an']['id'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['table'] = 'field_data_field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['field'] = 'field_zugewiesen_an';
  $handler->display->display_options['fields']['field_zugewiesen_an']['label'] = 'Zugewiesen';
  $handler->display->display_options['fields']['field_zugewiesen_an']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zugewiesen_an']['type'] = 'user_reference_plain';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_zugewiesen_an']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_zugewiesen_an']['multi_type'] = 'ul';
  /* Feld: Tracker: Aktualisierungszeitpunkt */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'tracker_node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'aktualisiert vor';
  $handler->display->display_options['fields']['changed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['format_date_sql'] = 0;
  /* Feld: Inhalt: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Feld: Feld: Erledigt (editable) */
  $handler->display->display_options['fields']['field_erledigt_editable']['id'] = 'field_erledigt_editable';
  $handler->display->display_options['fields']['field_erledigt_editable']['table'] = 'field_data_field_erledigt';
  $handler->display->display_options['fields']['field_erledigt_editable']['field'] = 'field_erledigt_editable';
  $handler->display->display_options['fields']['field_erledigt_editable']['label'] = '';
  $handler->display->display_options['fields']['field_erledigt_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_erledigt_editable']['type'] = 'editable';
  $handler->display->display_options['fields']['field_erledigt_editable']['settings'] = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'list_default',
  );
  $handler->display->display_options['fields']['field_erledigt_editable']['widget_type'] = 'options_buttons';
  $handler->display->display_options['fields']['field_erledigt_editable']['suppress_label'] = 1;
  $handler->display->display_options['fields']['field_erledigt_editable']['suppress_description'] = 1;
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
    'ereignis' => 'ereignis',
  );
  /* Filterkriterium: Inhalt: Routineaufgabe (field_routineaufgabe) */
  $handler->display->display_options['filters']['field_routineaufgabe_value']['id'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['table'] = 'field_data_field_routineaufgabe';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['field'] = 'field_routineaufgabe_value';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_routineaufgabe_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_routineaufgabe_value']['reduce_duplicates'] = TRUE;
  /* Filterkriterium: Inhalt: Zeit -  Startdatum (field_zeit) */
  $handler->display->display_options['filters']['field_zeit_value']['id'] = 'field_zeit_value';
  $handler->display->display_options['filters']['field_zeit_value']['table'] = 'field_data_field_zeit';
  $handler->display->display_options['filters']['field_zeit_value']['field'] = 'field_zeit_value';
  $handler->display->display_options['filters']['field_zeit_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_zeit_value']['granularity'] = 'minute';
  $handler->display->display_options['filters']['field_zeit_value']['default_date'] = 'now-500 minutes';
  $handler->display->display_options['filters']['field_zeit_value']['default_to_date'] = 'now + 20 minutes';
  /* Filterkriterium: Feld: Erledigt (field_erledigt) */
  $handler->display->display_options['filters']['field_erledigt_value']['id'] = 'field_erledigt_value';
  $handler->display->display_options['filters']['field_erledigt_value']['table'] = 'field_data_field_erledigt';
  $handler->display->display_options['filters']['field_erledigt_value']['field'] = 'field_erledigt_value';
  $handler->display->display_options['filters']['field_erledigt_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_erledigt_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'regelaufgaben';
  $translatables['support_ticket'] = array(
    t('Master'),
    t('Aufgabenübersicht'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('<a href="/aufgabenuebersicht-abgeschlossen">--> abgeschlossene Arbeitsaufträge</a>'),
    t('Titel'),
    t('Zugewiesen'),
    t('aktualisiert vor'),
    t('Textkörper'),
    t('Page'),
    t('Inhalt'),
    t('Block'),
    t('Wann?'),
    t('Meine Aufgaben'),
    t('Abgeschlossene Aufgaben'),
    t('Bitte erledigen'),
    t('regelaufgaben'),
  );
  $export['support_ticket'] = $view;

  return $export;
}
