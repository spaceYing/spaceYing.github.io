<div class="newsBox_left" aos="fade-right" aos-easing="ease" aos-duration="700" aos-delay="100">
        <div class="news_title">
          <h3><a href="{dede:field name='typeurl'/}" title="{dede:field name='typename'/}">{dede:field name='typename'/}</a></h3>
          <a href="{dede:field name='typeurl'/}" class="more">MORE>></a></div>
        <div class="news_box"> 
          <!--推荐内容开始--> 
          {dede:arclist typeid='' limit='0,1' titlelen='50' orderby='pubdate'}
		  <a href="[field:arcurl/]" title="[field:title/]">
          <div class="xxxw">
            <div class="xwtp1"><img src="[field:litpic/]" alt="[field:title/]" width="210" height="158"/></div>
            <div class="xwwz1">
              <h3 >[field:title/]</h3>
              <p>[field:description function="cn_substr(@me,200)"/]...</p>
              <span>[查看详情]</span></div>
          </div>
          </a>
		  {/dede:arclist}
 
          
          <!--推荐内容结束-->
          <ul class="clearfix">
            {dede:arclist typeid='' limit='1,5' titlelen='50' orderby='pubdate'}
			<li><a href="[field:arcurl/]" title="[field:title/]" >[field:title/]</a><span>[[field:pubdate function="MyDate('Y-m-d',@me)"/]]</span></li>
			{/dede:arclist}
          </ul>
        </div>
      </div>