<?php
$z[0]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'dropdown':'';\r\n            ",11,318);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",336,362);
$z[1][4]=array();
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","",370,398);
$z[2][4]=array();
$z[2][4]['name']="typeurl";
$z[3]=Array("field","",400,429);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","",448,476);
$z[4][4]=array();
$z[4][4]['name']="typeurl";
$z[5]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'':' style=\"display:none;\"';\r\n            ",579,900);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";
$z[6]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'':'style=\"display:none;\"';\r\n            ",1018,1338);
$z[6][4]=array();
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";
$z[7]=Array("channel","\r\n					<li><a href=\"[field:typelink/]\">[field:typename/]</a></li>\r\n					",1346,1471);
$z[7][4]=array();
$z[7][4]['type']="son";
$z[7][4]['noself']="yes";

?>