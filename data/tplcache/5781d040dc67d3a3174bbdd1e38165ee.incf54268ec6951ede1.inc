<?php
$z[0]=Array("field","",34,60);
$z[0][4]=array();
$z[0][4]['name']="currentstyle";
$z[1]=Array("field","",71,99);
$z[1][4]=array();
$z[1][4]['name']="typeurl";
$z[2]=Array("field","",101,130);
$z[2][4]=array();
$z[2][4]['name']="typename";
$z[3]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n					<ul class=\"two\">':'';\r\n            ",134,456);
$z[3][4]=array();
$z[3][4]['name']="typeid";
$z[3][4]['runphp']="yes";
$z[4]=Array("channel","\r\n						<li><a indepth=\"true\" href=\"[field:typelink/]\"><strong>[field:typename/]</strong></a></li>\r\n						",464,623);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['noself']="yes";
$z[5]=Array("field","\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'						\r\n					</ul>':'';\r\n            ",623,940);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['runphp']="yes";

?>