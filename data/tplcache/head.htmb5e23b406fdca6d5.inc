<?php
$z[0]=Array("global","",77,98);
$z[0][4]=array();
$z[0][4]['name']="cfg_gg";
$z[1]=Array("global","",143,165);
$z[1][4]=array();
$z[1][4]['name']="cfg_tel";
$z[2]=Array("field","(@me==\"\")? @me=\"class='active'\":@me=\"\";",760,849);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","<li class='{dede:field.currentstyle/}'>\r\n					<a href=\"{dede:field name='typeurl'/}\" data-hover=\"dropdown\">{dede:field name='typename'/} <b class=\" icon-angle-down\"></b></a>\r\n					<ul class=\"dropdown-menu\">\r\n						{dede:channel type='son' noself='yes'}\r\n						<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n						{/dede:channel}						\r\n					</ul>\r\n				</li>",883,1339);
$z[3][4]=array();
$z[3][4]['row']="7";
$z[3][4]['typeid']="top";
$z[3][4]['currentstyle']="active";
$z[4]=Array("myppt","\r\n	<div class=\"item[field:global runphp='yes' name=autoindex]\r\n                      \$a=\"\";\r\n                        \$b=\" active\";\r\n                        if ((@me%1)==0 && @me!=1)  @me=\$a;\r\n                        else  @me=\$b;\r\n                        [/field:global]\">\r\n		<img src=\"[field:pic/]\" alt=\"[field:title/]\">\r\n	</div>\r\n	",1733,2102);
$z[4][4]=array();
$z[4][4]['typeid']="2";

?>