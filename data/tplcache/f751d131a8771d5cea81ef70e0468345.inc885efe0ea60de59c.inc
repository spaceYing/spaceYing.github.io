<?php
$z[0]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'':'';\r\n            ",15,314);
$z[0][4]=array();
$z[0][4]['name']="typeid";
$z[0][4]['runphp']="yes";
$z[1]=Array("field","",315,341);
$z[1][4]=array();
$z[1][4]['name']="currentstyle";
$z[2]=Array("field","",352,380);
$z[2][4]=array();
$z[2][4]['name']="typeurl";
$z[3]=Array("field","",382,411);
$z[3][4]=array();
$z[3][4]['name']="typename";
$z[4]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?' \r\n            <ul class=\"sub\">':'';\r\n            ",415,745);
$z[4][4]=array();
$z[4][4]['name']="typeid";
$z[4][4]['runphp']="yes";
$z[5]=Array("channel","\r\n             <li><a href=[field:typelink/]>[field:typename/]</a></li>\r\n              ",761,901);
$z[5][4]=array();
$z[5][4]['type']="son";
$z[5][4]['noself']="yes";
$z[6]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'              \r\n            </ul>':'';\r\n            ",901,1233);
$z[6][4]=array();
$z[6][4]['name']="typeid";
$z[6][4]['runphp']="yes";

?>