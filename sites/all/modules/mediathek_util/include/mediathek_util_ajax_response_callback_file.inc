<?php

 /**
 * Implements ajax response maker.
 */
function mediathek_util_ajax_response_callback(){
	if (empty($_REQUEST['action']))
		$_REQUEST['action'] = '';
    
    $result = '';
    switch($_REQUEST['action'])
	{
		
		case 'test': 
			$result = 1;
			break;
		 
	}    
    echo(drupal_json_encode($result));
	module_invoke_all('exit');
	exit;
}

