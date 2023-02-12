<?php
$z[0]=Array("global","",318,344);
$z[0][4]=array();
$z[0][4]['name']="cfg_webname";
$z[1]=Array("field","",385,414);
$z[1][4]=array();
$z[1][4]['name']="keywords";
$z[2]=Array("field","",454,512);
$z[2][4]=array();
$z[2][4]['name']="description";
$z[2][4]['function']="html2text(@me)";
$z[3]=Array("include","",845,884);
$z[3][4]=array();
$z[3][4]['filename']="header_m.htm";
$z[4]=Array("channel"," <a  href=\"/m/list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a> ",1077,1277);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['currentstyle']="<a href='/m/list.php?tid=~id~' class='on'>~typename~</a>";
$z[5]=Array("list","<a class=\"loop item clearfix\" href=\"/m/view.php?aid=[field:id/]\" title=\"[field:title/]\"><img class=\"img fl\" src=\"[field:litpic/]\" alt=\"[field:title/]\">\r\n    <h3 class=\"tit\">[field:title/]</h3>\r\n    <p>[field:description function=\"cn_substr(@me,200)\"/]...</p>\r\n    <span class=\"time\">时间：[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</span></a>",1436,1824);
$z[5][4]=array();
$z[5][4]['pagesize']="10";
$z[6]=Array("pagelist","",1865,1914);
$z[6][4]=array();
$z[6][4]['listitem']="pre,next";
$z[6][4]['listsize']="1";
$z[7]=Array("include","",1952,1991);
$z[7][4]=array();
$z[7][4]['filename']="footer_m.htm";

?>