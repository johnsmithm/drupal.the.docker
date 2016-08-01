<?php
/**
* Implementation of hook_views_handlers() to register all of the basic handlers
* views uses.
*/
function views_mdfilter_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'views_mdfilter') . '/inc', // path to view files
    ),
    'handlers' => array(
      // register our custom filter, with the class/file name and parent class
      'views_mdfilter_filter_multiple' => array(
        'parent' => 'views_handler_filter',
      )
    ),
  );
}

function views_mdfilter_views_data() {
  $data = array();
  
  // The flexible date filter.
  $data['node']['views_mdfilter'] = array(
    'group' => t('Custom'),
    'real field'  => 'views_mdfilter',
    'title' => t('Custom Date/Term combined filter'),
    'help' => t('Filter any Views based on date and term'),
    'filter' => array(
      'handler' => 'views_mdfilter_filter_multiple'
    ),
  ); 
  
  return $data;
}