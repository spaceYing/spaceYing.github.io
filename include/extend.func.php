<?php
function litimgurls($imgid=0)
{
    global $lit_imglist,$dsql;
    //获取附加表
    $row = $dsql->GetOne("SELECT c.addtable FROM #@__archives AS a LEFT JOIN #@__channeltype AS c 
                                                            ON a.channel=c.id where a.id='$imgid'");
    $addtable = trim($row['addtable']);
    
    //获取图片附加表imgurls字段内容进行处理
    $row = $dsql->GetOne("Select imgurls From `$addtable` where aid='$imgid'");
    
    //调用inc_channel_unit.php中ChannelUnit类
    $ChannelUnit = new ChannelUnit(2,$imgid);
    
    //调用ChannelUnit类中GetlitImgLinks方法处理缩略图
    $lit_imglist = $ChannelUnit->GetlitImgLinks($row['imgurls']);
    
    //返回结果
    return $lit_imglist;
}
/**
 *  获取顶级栏目相关信息
 *
 * @access    public
 * @param     string  $tid  	栏目id
 * @param     string  $field	栏目字段
 * @return    string
 */
if ( ! function_exists('getToptype'))
{
	function getToptype($tid,$field)
	{
		global $dsql,$cfg_Cs;
		if(!is_array($cfg_Cs))
		{
			require_once(DEDEDATA."/cache/inc_catalog_base.inc");
		}
		if(!isset($cfg_Cs[$tid][0]) || $cfg_Cs[$tid][0]==0)
		{
			$topid = $tid;
		}
		else
		{
			$topid = GetTopid($cfg_Cs[$tid][0]);
		}
		$row = $dsql->GetOne("SELECT * FROM `#@__arctype` WHERE id=$topid");
		if($field=='id') return $row['id'];//栏目ID
		if($field=='typename') return $row['typename'];//栏目名称
		if($field=='typeurl') return GetOneTypeUrlA($row);//栏目链接
		if($field=='typenamedir') return $row['typenamedir'];//栏目英文名称
		if($field=='typeimg') return $row['typeimg'];//栏目SEO标题
		if($field=='description') return $row['description'];//栏目描述
		if($field=='typenameen') return $row['typenameen'];//栏目内容
	}
}
/**
 *  获取当前栏目相关信息
 *
 * @access    public
 * @param     string  $tid  	栏目id
 * @param     string  $field	栏目字段
 * @return    string
 */
if ( ! function_exists('getCurtype'))
{
	function getCurtype($tid,$field)
	{
		global $dsql;
		$row = $dsql->GetOne("SELECT * FROM `#@__arctype` WHERE id=$tid");
		if($field=='id') return $row['id'];//栏目ID
		if($field=='typename') return $row['typename'];//栏目名称
		if($field=='typeurl') return GetOneTypeUrlA($row);//栏目链接
		if($field=='typenamedir') return $row['typenamedir'];//栏目英文名称
		if($field=='typeimg') return $row['typeimg'];//栏目SEO标题
		if($field=='description') return $row['description'];//栏目描述
		if($field=='typenameen') return $row['typenameen'];//栏目内容
	}
}
/**
 *  获取上级栏目相关信息
 *
 * @access    public
 * @param     string  $tid  	栏目id
 * @param     string  $field	栏目字段
 * @return    string
 */
if ( ! function_exists('getRetype'))
{
	function getRetype($tid,$field)
	{
		global $dsql;
		$typeid = $tid;
		$query = "SELECT reid FROM `#@__arctype` where id = $typeid";
		$rs = $dsql->GetOne($query);
		$reid = $rs['reid']; 
		$query2 = "SELECT * FROM `#@__arctype` where id = $reid";
		$row = $dsql->GetOne($query2);
		if($field=='id') return $row['id'];//栏目ID
		if($field=='typename') return $row['typename'];//栏目名称
		if($field=='typeurl') return GetOneTypeUrlA($row);//栏目链接
		if($field=='typenamedir') return $row['typenamedir'];//栏目英文名称
		if($field=='typeimg') return $row['typeimg'];//栏目SEO标题
		if($field=='description') return $row['description'];//栏目描述
		if($field=='typenameen') return $row['typenameen'];//栏目内容
	}
}