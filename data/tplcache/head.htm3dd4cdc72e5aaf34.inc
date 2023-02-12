<?php
$z[0]=Array("global","",74,95);
$z[0][4]=array();
$z[0][4]['name']="cfg_gg";
$z[1]=Array("global","",213,236);
$z[1][4]=array();
$z[1][4]['name']="cfg_gsmc";
$z[2]=Array("global","",276,299);
$z[2][4]=array();
$z[2][4]['name']="cfg_gsmc";
$z[3]=Array("global","",561,583);
$z[3][4]=array();
$z[3][4]['name']="cfg_tel";
$z[4]=Array("global","",601,625);
$z[4][4]=array();
$z[4][4]['name']="cfg_phone";
$z[5]=Array("global","",700,723);
$z[5][4]=array();
$z[5][4]['name']="cfg_gsmc";
$z[6]=Array("channelartlist","<li><a  \r\n			{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'class=\"v1\"':'';\r\n            {/dede:field}\r\n			href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a>{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'\r\n			<dl>':'';\r\n            {/dede:field}\r\n               {dede:channel type='son' noself='yes'}\r\n               <dd><a href='[field:typelink/]' title='[field:typename/]'>[field:typename/]</a></dd>\r\n			   {/dede:channel}{dede:field name=typeid runphp=\"yes\"}\r\n            global \$dsql;\r\n            \$sql = \"SELECT id From `dede_arctype` WHERE reid='@me' And ishidden<>1 order by sortrank asc limit 0, 100 \";\r\n            \$row = \$dsql->GetOne(\$sql);      \r\n            @me=is_array(\$row)?'			   \r\n			</dl>':'';\r\n            {/dede:field}\r\n        </li>",1000,2299);
$z[6][4]=array();
$z[6][4]['row']="7";
$z[6][4]['typeid']="top";
$z[6][4]['currentstyle']="active";
$z[7]=Array("myppt","\r\n	<div class=\"item\"> <a href=\"\" style=\"background-image: url([field:pic/]);\">\r\n      <div class=\"pt\"></div>\r\n      </a> </div>\r\n	  ",2451,2619);
$z[7][4]=array();
$z[7][4]['typeid']="2";

?>