<?php
$z[0]=Array("field","",308,327);
$z[0][4]=array();
$z[0][4]['name']="title";
$z[1]=Array("global","",328,354);
$z[1][4]=array();
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",395,424);
$z[2][4]=array();
$z[2][4]['name']="keywords";
$z[3]=Array("field","",464,522);
$z[3][4]=array();
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",855,894);
$z[4][4]=array();
$z[4][4]['filename']="header_m.htm";
$z[5]=Array("field","",1003,1061);
$z[5][4]=array();
$z[5][4]['name']="typeid";
$z[5][4]['function']="GetTopTypename(@me)";
$z[6]=Array("channel","<a href=\"list.php?tid=[field:id/]\" title=\"[field:typename/]\">[field:typename/]</a>  ",1138,1333);
$z[6][4]=array();
$z[6][4]['type']="son";
$z[6][4]['currentstyle']="<a class='on' href='list.php?tid=~id~' >~typename~</a>";
$z[7]=Array("list","<li class=\"loop\"><a href=\"view.php?aid=[field:id/]\" title=\"[field:title/]\">\r\n      <figure><img src=\"[field:litpic/]\" alt=\"[field:title/]\"></figure>\r\n      <h3 >[field:title/]</h3>\r\n      </a></li>",1508,1742);
$z[7][4]=array();
$z[7][4]['pagesize']="8";
$z[8]=Array("pagelist","",1785,1834);
$z[8][4]=array();
$z[8][4]['listitem']="pre,next";
$z[8][4]['listsize']="5";
$z[9]=Array("include","",1920,1959);
$z[9][4]=array();
$z[9][4]['filename']="footer_m.htm";

?>