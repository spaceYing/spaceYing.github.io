<?php
$z[0]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'class=\"v1\"':'';\r\n            ",13,322);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",333,361);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",363,392);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n			<dl>':'';\r\n            ",396,704);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\r\n               <dd><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></dd>\r\n			   ",721,883);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";
$z[5]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'			   \r\n			</dl>':'';\r\n            ",883,1198);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";

?>