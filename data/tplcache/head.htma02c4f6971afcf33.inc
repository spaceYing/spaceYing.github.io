<?php
$z[0]=Array("global","",97,118);
$z[0][4]=array();
$z[0][4]['name']="cfg_db";
$z[1]=Array("type","<a href=\"[field:typelink/]\">[field:typename /]</a>",220,304);
$z[1][4]=array();
$z[1][4]['typeid']="6";
$z[2]=Array("type","<a href=\"[field:typelink/]\">[field:typename /]</a>",324,408);
$z[2][4]=array();
$z[2][4]['typeid']="7";
$z[3]=Array("global","",609,630);
$z[3][4]=array();
$z[3][4]['name']="cfg_mc";
$z[4]=Array("global","",680,701);
$z[4][4]=array();
$z[4][4]['name']="cfg_mc";
$z[5]=Array("global","",790,812);
$z[5][4]=array();
$z[5][4]['name']="cfg_tel";
$z[6]=Array("global","",908,929);
$z[6][4]=array();
$z[6][4]['name']="cfg_zx";
$z[7]=Array("field","(@me==\"\")? @me=\"on\":@me=\"\";",1094,1171);
$z[7][4]=array();
$z[7][4]['name']="typeid";
$z[7][4]['runphp']="yes";
$z[8]=Array("channelartlist","<li class=\"nLi {dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'':'';\r\n            {/dede:field} {dede:field.currentstyle/}\"><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?' \r\n            <ul class=\"sub\">':'';\r\n            {/dede:field}\r\n              {dede:channel type='son' noself='yes'}\r\n             <li><a href=[field:typelink/]>[field:typename/]</a></li>\r\n              {/dede:channel}{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'              \r\n            </ul>':'';\r\n            {/dede:field}\r\n             </li>",1222,2557);
$z[8][4]=array();
$z[8][4]['row']="7";
$z[8][4]['typeid']="top";
$z[8][4]['currentstyle']="on";

?>