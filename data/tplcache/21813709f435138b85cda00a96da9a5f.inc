<div class="tab">
			<div class="a1_1 fl">
				<ul class="a1_ul1">
					{dede:arclist row='4'}
					<li><a href="[field:arcurl/]" title="[field:title/]" class="img"><img src="/uploads/allimg/190530/1-1Z5301646240-L.jpg" alt="[field:title/]"></a>
					<h3><a href="[field:arcurl/]" title="[field:title/]">[field:title/] <span></span></a></h3>
					</li>
					{/dede:arclist}
				</ul>
			</div>
			<div class="a1_2 fr">
				<p><img src="/skin/images/case.jpg" title="case.jpg" alt="case.jpg"></p>
			</div>
			<div class="clearfix"></div>
		</div>{/dede:arclist}
	</div>
</div>
<div class="a2 w1204">
	<div class="a_t">
		<span>发展历程</span>development history
	</div>
</div>
<div class="a2_cont">
	<div class="w1204 clearfix">
		<div class="picScroll-left">
			<div class="bd">
				<ul>
					<li><a><img border="0" src="/skin/images/fzlc_1.png"></a></li>
					<li><a><img border="0" src="/skin/images/fzlc_2.png"></a></li>
				</ul>
			</div>
			<div class="hd">
				<ul>
				</ul>
			</div>
		</div>
		<script type="text/javascript">jQuery(".picScroll-left").slide({titCell:".hd ul",mainCell:".bd ul",autoPage:!0,effect:"leftLoop",autoPlay:!0})</script>
	</div>
</div>
<div class="a3 clearfix">
	<div class="a3_1 fl">
		<p>
			<img src="/skin/images/about.jpg" title="关于我们" alt="关于我们">
		</p>
	</div>
	<div class="a3_2 fr">
		<div class="a3_t">
			<span>关于我们</span>About us
		</div>
		<div class="a3_d">
			<p style="line-height:2em">
				 公司资质 建筑工程有限公司是一家集科研、技术、设计、施工为一体的加固高科技企业。成立于2007年7月，注册资金2100万；特种施工结构补强资质、纠偏平移资质、建筑工程施工总承包三级资质、建筑幕墙二级资质、钢结构三级资质、地基基础三级资质、装饰装修工程施工二级资质、装饰装修设计乙级资质。 公司优势 提供结构改造与加固系统解决方案(设计与施工）我公司拥有十余项建筑加固行业发明专利，浙江省建筑业、加固协会发起单位之一、浙江省建筑业加固行业常务理事单位。 公司施工优势 尤其在钢砼构件粘钢（包钢）加固、碳纤维布（板）加固、化学植筋、加大截面积、锚杆桩基础处理、裂缝修复、建筑物纠偏、平移、钢砼构件无损开洞切割、同步顶升等.技术广...
			</p>
		</div>
	</div>
</div>
{dede:channelartlist typeid='12,12'}
<div class="a4 w1204">
	<div class="a_t">
		<span>{dede:field name='typename'/}</span>{dede:field name='typenameen'/}
	</div>
	<div class="c2a1">
		<div class="tabli1">
			<ul class="c2a_ul">
				{dede:channel type='son' noself='yes'}<li>[field:typename/]</li>{/dede:channel}
			</ul>
		</div>
	</div>
	<div class="c2b1">
		<div class="tab1">
			<div class="a4_1">
				{dede:arclist limit='0,2' typeid='13' titlelen='50' orderby='pubdate'}
				<div class="a4_t">
					<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
				</div>
				<div class="a4_d">
					<dd>[field:description function="cn_substr(@me,200)"/]...</dd>
				</div>
				{/dede:arclist}

			</div>
			<ul class="a4_ul2">
				{dede:arclist limit='2,7' typeid='13' titlelen='60' orderby='pubdate'}
				<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></li>
				{/dede:arclist}
			</ul>
		</div><div class="tab1">
			<div class="a4_1">
				{dede:arclist limit='0,2' typeid='14' titlelen='50' orderby='pubdate'}
				<div class="a4_t">
					<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
				</div>
				<div class="a4_d">
					<dd>[field:description function="cn_substr(@me,200)"/]...</dd>
				</div>
				{/dede:arclist}

			</div>
			<ul class="a4_ul2">
				{dede:arclist limit='2,7' typeid='14' titlelen='60' orderby='pubdate'}
				<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></li>
				{/dede:arclist}

			</ul>
		</div><div class="tab1">
			<div class="a4_1">
				{dede:arclist limit='0,2' typeid='23' titlelen='50' orderby='pubdate'}
				<div class="a4_t">
					<a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a>
				</div>
				<div class="a4_d">
					<dd>[field:description function="cn_substr(@me,200)"/]...</dd>
				</div>
				{/dede:arclist}

			</div>
			<ul class="a4_ul2">
				{dede:arclist limit='2,7' typeid='23' titlelen='60' orderby='pubdate'}
				<li><a href="[field:arcurl/]" title="[field:title/]">[field:title/]</a><span>[field:pubdate function="MyDate('Y-m-d',@me)"/]</span></li>
				{/dede:arclist}

			</ul>
		</div>
	</div>
	<script>$(".tabli1 li").eq(0).addClass("cur"),$(".tab1").eq(0).show(),$(".tabli1 li").hover(function(){$(this).addClass("cur").siblings().removeClass("cur");var s=$(this).index();$(".tab1").eq(s).show().siblings(".tab1").hide()})</script>
	<a href="{dede:field name='typeurl'/}" class="a4_more">了解一下</a>
</div>