<?php
if(!isset($GLOBALS['_vars'])) $GLOBALS['_vars'] = array(); 
$fields = array();
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=<?php echo $cfg_soft_lang; ?>">
<title>幻灯管理</title>
<link href='css/base.css' rel='stylesheet' type='text/css'>
</head>
<body background='images/allbg.gif' leftmargin='8' topmargin='8'>
<table width="98%" border="0" align="center" cellpadding="3" cellspacing="1" bgcolor="#D1DDAA">
  <tr>
   <td height="28" background="images/tbg.gif" colspan="8">
     <b>幻灯管理</b>&nbsp;[<a href="ppt_add.php"><u>添加幻灯片图片</u></a>][<a href="ppttype_main.php"><u>增加一组幻灯片</u></a>]
	</td>
</tr>
  <tr align="center" bgcolor="#F9FCEF" height="24"> 
      <td width="10%">幻灯排序</td>
    <td width="10%">幻灯标题</td>
      <td width="10%">幻灯片组</td>
      <td width="30%">图片地址</td>
      <td width="30%">图片链接</td>
      <td width="10%">管理</td>
   </tr>
   <?php
$atts = array();
$atts['tagname'] = 'datalist';
$blockValue = $this->refObj->GetArcList($atts,$this->refObj,$fields); 
if(is_array($blockValue)){
foreach( $blockValue as $key=>$fields )
{
?>
    <tr align="center" bgcolor="#FFFFFF" height="24" onMouseMove="javascript:this.bgColor='#f4fbf4';" onMouseOut="javascript:this.bgColor='#FFFFFF';"> 
        <td><?php echo $fields['orderid']; ?></td>
        <td><a href="ppt_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=edit"><?php echo $fields['title']; ?></a></td>
        <td><a href="?tid=<?php echo $fields['typeid']; ?>"><?php echo GetPptTypeName($fields['typeid']); ?></a></td>
        <td><a href="<?php echo $fields['pic']; ?>" target="_blank"><?php echo $fields['pic']; ?></a></td>
        <td align="left"><a href="<?php echo $fields['url']; ?>" target="_blank"><?php echo $fields['url']; ?></a></td>
        <td>
            <a href='ppt_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=edit'>[更改]</a>
	    <a href='ppt_edit.php?aid=<?php echo $fields['aid']; ?>&dopost=delete'>[删除]</a>
		    </td>
     </tr>
		<?php
}
}?>
     <tr align="center" bgcolor="#F9FCEF" height="24"> 
      <td colspan="8">
      	<?php
$atts = array();
$atts['tagname'] = 'pagelist';
$atts['listsize'] = '5';
 echo $this->refObj->GetPageList($atts,$this->refObj,$fields); 
?>

      </td>
     </tr>
   </table>
   </td>
</tr>
</table>
</body>
</html>