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
		case 'checkin_checkout' :
			if (isset($_GET['nid']) && is_numeric($_GET['nid']) && isset($_GET['barcode']) && is_numeric($_GET['barcode'])  && isset($_GET['mode']) && is_numeric($_GET['mode'])){
				$nid=$_GET['nid'];
				$barcode=$_GET['barcode'];
				$mode=$_GET['mode'];
				$view_display=$_GET['view_display'];
				if ($view_display == 0){
					$view_display="checkout";
				}else{
					$view_display="checkin";
				}
				//rules_invoke_component('rules_artikel_checkin_checkout', $nid, $barcode,$mode);
			}
			break;
		 
	}    
    echo(drupal_json_encode($result));
	module_invoke_all('exit');
	exit;
}

