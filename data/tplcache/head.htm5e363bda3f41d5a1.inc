<?php
$z[0]=Array("global","",85,106);
$z[0][4]=array();
$z[0][4]['name']="cfg_gg";
$z[1]=Array("global","",769,792);
$z[1][4]=array();
$z[1][4]['name']="cfg_gsmc";
$z[2]=Array("field","(@me==\"\")? @me=\"class='active'\":@me=\"\";",917,1006);
$z[2][4]=array();
$z[2][4]['name']="typeid";
$z[2][4]['runphp']="yes";
$z[3]=Array("channelartlist","<li class=\"{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'dropdown':'';\r\n            {/dede:field}\">\r\n				<a class=\"{dede:field.currentstyle/}\" href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>\r\n				<a href=\"{dede:field name='typeurl'/}\" id=\"app_menudown\" class=\"dropdown-toggle\" data-toggle=\"dropdown\" role=\"button\" aria-expanded=\"false\" {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'':' style=\"display:none;\"';\r\n            {/dede:field}><span class=\"glyphicon glyphicon-menu-down btn-xs \"></span></a>\r\n				<ul class='dropdown-menu nav_small' role='menu' {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'':'style=\"display:none;\"';\r\n            {/dede:field}>\r\n					{dede:channel type='son' noself='yes'}\r\n					<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n					{/dede:channel}					\r\n				</ul>\r\n			</li>",1037,2620);
$z[3][4]=array();
$z[3][4]['row']="7";
$z[3][4]['typeid']="top";
$z[3][4]['currentstyle']="active";

?>