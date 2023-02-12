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
$z[4]=Array("channel"," <a  href=\"/m/list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a> ",1078,1278);
$z[4][4]=array();
$z[4][4]['type']="son";
$z[4][4]['currentstyle']="<a href='/m/list.php?tid=~id~' class='on'>~typename~</a>";
$z[5]=Array("list","<li class=\"loop item\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n      <h3 class=\"tit\">[field:title/]</h3>\r\n      <span class=\"time\">时间：[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]　浏览量：[field:click/]</span>\r\n      <p class=\"txt\">[field:description function=\"cn_substr(@me,120)\"/]...</p>\r\n      </a></li>",1449,1826);
$z[5][4]=array();
$z[5][4]['pagesize']="10";
$z[6]=Array("pagelist","",1860,1926);
$z[6][4]=array();
$z[6][4]['listitem']="index,end,pre,next,pageno";
$z[6][4]['listsize']="1";
$z[7]=Array("include","",2025,2064);
$z[7][4]=array();
$z[7][4]['filename']="footer_m.htm";

?>