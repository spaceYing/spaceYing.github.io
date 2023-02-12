<?php
$z[0]=Array("field","",11,37);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?' href=\"javascript:\"':'';\r\n            ",49,367);
$z[1][4]=array();
$z[1][4]['name']="typeid";
$z[1][4]['runphp']="yes";
$z[2]=Array("field","",374,402);
$z[2][4]=array();
$z[2][4]['name']="typeurl";
$z[3]=Array("field","",410,439);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n					<i class=\"touch-arrow-down\"></i>\r\n					':'';\r\n            ",461,806);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n					<ul class=\"two\">':'';\r\n            ",825,1147);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("channel","\r\n						<li><a indepth=\"true\" href=\"[field:typelink/]\"><span>[field:typename/]</span></a></li>\r\n						",1155,1310);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['noself']="yes";
$z[7]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'						\r\n					</ul>':'';\r\n            ",1325,1642);
$z[7][4]=array();
$z[7][4]['name']="typeid";
$z[7][4]['runphp']="yes";

?>