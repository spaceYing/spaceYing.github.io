<div class="container">
	<div class="biaoti">
		<h2>{dede:field name='typename'/}</h2>
		<p>{dede:field name='description'/}</p>
		<div class="english"><span>{dede:field name='typenameen'/}</span></div>
	</div>
</div>
<div class="line"></div>
<!--电脑产品中心-->
<div class="container hidden-xs mt">
<div class="row">
  {dede:arclist typeid='' row='6' titlelen='60' orderby='pubdate'}
  <div class="col-xs-12 col-sm-4 col-md-4 ">
		<div class="recent-work-wrap">
		  <a href="[field:arcurl/]">
		  <img class="img-responsive" src="[field:litpic/]" alt="[field:title/]">
			  <div class="overlay">
					<div class="recent-work-inner">
					  <h3>[field:title/]</h3>
					  <p>[field:description function="cn_substr(@me,300)"/]</p>
					</div>
			  </div>
		   </a>
		</div>
  </div>
  {/dede:arclist}

</div>
<a href="{dede:field name='typeurl'/}" class="more">查看更多</a>
</div>