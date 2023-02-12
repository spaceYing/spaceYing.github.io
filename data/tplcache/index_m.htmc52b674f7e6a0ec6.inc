<?php
$z[0]=Array("global","",308,334);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",387,417);
$z[1][4]=array();
$z[1][4]['name']="cfg_description";
$z[2]=Array("global","",454,481);
$z[2][4]=array();
$z[2][4]['name']="cfg_keywords";
$z[3]=Array("include","",868,907);
$z[3][4]=array();
$z[3][4]['filename']="header_m.htm";
$z[4]=Array("myppt","<li><a href=\"[field:url/]\"><img src=\"[field:pic/]\" alt=\"[field:title/]\"></a></li>",1039,1156);
$z[4][4]=array();
$z[4][4]['typeid']="3";
$z[5]=Array("channel","\r\n    <dd><a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a></dd>\r\n    ",1308,1459);
$z[5][4]=array();
$z[5][4]['type']="top";
$z[5][4]['row']="8";
$z[6]=Array("channelartlist","\r\n	<div class=\"floor_2\">\r\n      <div class=\"in_title\">\r\n        <h3 class=\"tit\"><em class=\"line fl\"></em><span class=\"word\">{dede:field name='typename'/}</span><em class=\"line fr\"></em></h3>\r\n      </div>\r\n      <!--产品分类开始-->\r\n      <div class=\"tab\">  {dede:channel type='son' noself='yes'}<a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a>  {/dede:channel}</div>\r\n      <!--产品分类结束-->\r\n      <div class=\"proCenter\">\r\n        <ul class=\"list clearfix\">\r\n          {dede:arclist typeid='' row='6' titlelen='50' orderby='pubdate'}\r\n		  <li><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n            <div class=\"img\"><img class=\"img\" src=\"[field:litpic/]\" alt=\"[field:title/]\"/></div>\r\n            <h3 class=\"tit\">[field:title/]</h3>\r\n            </a></li>\r\n			{/dede:arclist}\r\n        </ul>\r\n      </div>\r\n      <a class=\"look_more\" href=\"list.php?tid={dede:field name='id'/}\" title=\"查看更多>\">查看更多>></a></div>\r\n	  ",1608,2658);
$z[6][4]=array();
$z[6][4]['typeid']="5,5";
$z[7]=Array("channelartlist","\r\n	<div class=\"floor_1\">\r\n      <div class=\"about clearfix\"><a class=\"item fl\" href=\"list.php?tid={dede:field name='id'/}\"><img src=\"{dede:field name='typeimg'/}\" alt=\"{dede:field name='typename'/}\"/></a>\r\n        <div class=\"contW fl\">\r\n          <div class=\"in_title\">\r\n            <h3 class=\"tit\"><em class=\"line fl\"></em><span class=\"word\">{dede:field name='typename'/}</span><em class=\"line fr\"></em></h3>\r\n          </div>\r\n          <p class=\"cont\">　　 {dede:sql sql='Select content from dede_arctype where id=1'} \r\n        [field:content  function='cn_substr(html2text(@me),500)'/]\r\n        {/dede:sql}...</p>\r\n          <a class=\"view_detail\" href=\"list.php?tid={dede:field name='id'/}\" title=\"了解详情>>\">了解详情>></a> </div>\r\n      </div>\r\n    </div>\r\n	",2770,3602);
$z[7][4]=array();
$z[7][4]['typeid']="1,1";
$z[8]=Array("channelartlist","\r\n	<div class=\"floor_4\">\r\n      <div class=\"in_title\">\r\n        <h3 class=\"tit\"><em class=\"line fl\"></em><span class=\"word\">{dede:field name='typename'/}</span><em class=\"line fr\"></em></h3>\r\n      </div>\r\n      <div class=\"caseList\" id=\"caseShow\">\r\n        <div class=\"bd\"> {dede:arclist typeid='' row='10' titlelen='50' orderby='pubdate'}<li><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n            <div class=\"img\"><img class=\"img\" src=\"[field:litpic/]\" alt=\"[field:title/]\"/></div>\r\n            <div class=\"txt\">\r\n              <h3 class=\"tit\" >[field:title/]</h3>\r\n              <p class=\"cont\">[field:description function=\"cn_substr(@me,80)\"/]...</p>\r\n            </div>\r\n            </a></li>\r\n			{/dede:arclist}\r\n </div>\r\n        <div class=\"hd\">\r\n          <ul class=\"iconList\">\r\n          </ul>\r\n        </div>\r\n      </div>\r\n      <a class=\"look_more\" href=\"list.php?tid={dede:field name='id'/}\" title=\"查看更多>\">查看更多>></a></div>\r\n	  ",7442,8473);
$z[8][4]=array();
$z[8][4]['typeid']="12,12";
$z[9]=Array("channelartlist","\r\n	<div class=\"floor_5\">\r\n      <div class=\"in_title\">\r\n        <h3 class=\"tit\"><em class=\"line fl\"></em><span class=\"word\">{dede:field name='typename'/}</span><em class=\"line fr\"></em></h3>\r\n      </div>\r\n      <!--新闻分类开始-->\r\n      <div class=\"tab\">  {dede:channel type='son' noself='yes'}<a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a>  {/dede:channel}</div>\r\n      <!--新闻分类结束-->\r\n      <div class=\"thumblist\">\r\n        <ul class=\"list\">\r\n          {dede:arclist typeid='' row='5' titlelen='50' orderby='pubdate'}\r\n		  <li><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n            <figure><img src=\"[field:litpic/]\" alt=\"[field:title/]\"/></figure>\r\n            <h3 >[field:title/]</h3>\r\n            <p>[field:description function=\"cn_substr(@me,140)\"/]...</p>\r\n            <span>[查看详情]</span></a></li>\r\n			{/dede:arclist}\r\n        </ul>\r\n      </div>\r\n      <a class=\"look_more\" href=\"list.php?tid={dede:field name='id'/}\" title=\"查看更多>\">查看更多>></a></div>\r\n	  ",8585,9698);
$z[9][4]=array();
$z[9][4]['typeid']="9,9";
$z[10]=Array("include","",10215,10254);
$z[10][4]=array();
$z[10][4]['filename']="footer_m.htm";

?>