function errorTip(msg , type){
	switch(type)
	{
	   case 'success':
		 humane.success(msg);
	   break;
	
	   case 'error':
		 humane.error(msg);
	   break;
	   case 'log':
		 humane.log(msg);
	   break;
	   case 'info':
		 humane.info(msg);
	   break;
	}
}

// JavaScript Document
function urlredirect() {
	
	var sUserAgent = navigator.userAgent.toLowerCase();	
	if ((sUserAgent.match(/(ipod|iphone os|midp|ucweb|android|windows ce|windows mobile)/i))) {
		// 只适用盘古建站，PC跳转移动端
		//var thisUrl = window.location.href;
		var host = window.location.host;
		//var host2=document.domain; 
		//window.location.href = thisUrl.substr(0,thisUrl.lastIndexOf('/')+1)+'wap/';
		//alert(window.location.host);
		window.location.href="http://"+host+"/m/";
		
	}
}
urlredirect();