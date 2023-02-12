<?php
$z[0]=Array("global","",1071,1097);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("global","",2194,2216);
$z[1][4]=array();
$z[1][4]['name']="cfg_tel";
$z[2]=Array("field","(@me==\"\")? @me=\" currt\":@me=\"\";",2635,2716);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","<li class=\"first-level sf-with-ul {dede:field.currentstyle/}\"><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n					<ul class=\"two\">':'';\r\n            {/dede:field}\r\n						{dede:channel type='son' noself='yes'}\r\n						<li><a indepth=\"true\" href=\"[field:typelink/]\"><strong>[field:typename/]</strong></a></li>\r\n						{/dede:channel}{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'						\r\n					</ul>':'';\r\n            {/dede:field}\r\n					</li>",2753,3792);
$z[3][4]=array();
$z[3][4]['row']="6";
$z[3][4]['typeid']="top";
$z[3][4]['currentstyle']="current";
$z[4]=Array("global","",4112,4138);
$z[4][4]=array();
$z[4][4]['name']="cfg_webname";
$z[5]=Array("field","(@me==\"\")? @me=\"class='currt' \":@me=\"\";",5279,5368);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channelartlist","<li class=\"{dede:field.currentstyle/}\">\r\n					<a {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?' href=\"javascript:\"':'';\r\n            {/dede:field} href=\"{dede:field name='typeurl'/}\"><span>{dede:field name='typename'/}</span> \r\n            {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n					<i class=\"touch-arrow-down\"></i>\r\n					':'';\r\n            {/dede:field}</a> \r\n            {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n					<ul class=\"two\">':'';\r\n            {/dede:field}\r\n						{dede:channel type='son' noself='yes'}\r\n						<li><a indepth=\"true\" href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n						{/dede:channel} \r\n            {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'						\r\n					</ul>':'';\r\n            {/dede:field}\r\n					</li>",5417,7150);
$z[6][4]=array();
$z[6][4]['typeid']="top";
$z[6][4]['currentstyle']="current";

?>