

function response(nid,mode) {
	return function() {
		var ciCO="";
		if (http_request.readyState == 4) {
				if (http_request.status == 200) {
						   
				if (mode === 0) {ciCO="-co";}else{ciCO="-ci";}
					  
				var elements = document.getElementsByClassName("box-"+nid+ciCO);
				 //console.log(Drupal.settings.views.ajaxViews);
				for(var prop in Drupal.settings.views.ajaxViews) {
					if(Drupal.settings.views.ajaxViews.hasOwnProperty(prop)){
						if (Drupal.settings.views.ajaxViews[prop].view_name=='checkincheckout_block'){
							 //   console.log(Drupal.settings.views.ajaxViews[prop].view_name);
							 //     console.log(Drupal.settings.views.ajaxViews[prop].view_dom_id);
							var selector = '.view-dom-id-' + Drupal.settings.views.ajaxViews[prop].view_dom_id;
							jQuery(selector).triggerHandler('RefreshView');						
						}
					}
				}
         
            } else {
                alert('Bei dem Request ist ein Problem aufgetreten.'+http_request.status);     
            }
        }
 
    };
}

/**
* Make request to change the items status
*/
function checkinCheckoutNew(nid,barcode,mode,view_display) {

	http_request = false;
	if (window.XMLHttpRequest) { // Mozilla, Safari,...
		http_request = new XMLHttpRequest();
		if (http_request.overrideMimeType) {
			http_request.overrideMimeType('text/xml');
				// zu dieser Zeile siehe weiter unten
		}
	} else if (window.ActiveXObject) { // IE
		try {
			http_request = new ActiveXObject("Msxml2.XMLHTTP");
			} catch (e) {
				try {
					http_request = new ActiveXObject("Microsoft.XMLHTTP");
				} catch (e) {}
			}
		}
 
	if (!http_request) {
		alert('Ende :( Kann keine XMLHTTP-Instanz erzeugen');
		return false;
	}
	http_request.onreadystatechange =response(nid,mode);
	http_request.open('GET', 'http://'+window.location.hostname+':'+window.location.port+'/?q=mediathek_util_ajax_response&action=checkin_checkout&nid='+nid+'&barcode='+barcode+'&mode='+mode+'&view_display='+view_display, true);
	http_request.send(null);
}