<div id="floor_2_main">
    <div class="floor_2 w1200">
      <div class="in_title clearfix" aos="fade-up" aos-easing="ease" aos-duration="700">
        <p class="entit" aos="fade-up" aos-easing="ease" aos-duration="700">{dede:field name='typenameen'/}</p>
        <h3 class="tit clearfix" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100"><em class="line"></em><span class="word">{dede:field name='typename'/}</span><em class="line"></em></h3>
      </div>
      <!--产品分类开始-->
      <div class="tab" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">{dede:channel type='son' noself='yes'}  <a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a>{/dede:channel}</div>
      <!--产品分类结束-->
      <div class="proCenter" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
        <ul class="list clearfix">
          {dede:arclist row='8' titlelen='60' orderby='pubdate'}
		  <li><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
            <div class="title clearfix">
              <h3 class="tit" >[field:title/]</h3>
            </div>
            </a></li>
			{/dede:arclist}
        </ul>
      </div>
      <div class="more clearfix" aos="fade-up" aos-easing="ease" aos-duration="700">
        <div class="line fl"></div>
        <a class="look_more fl" href="{dede:field name='typeurl'/}" title="查看更多>>">查看更多>></a>
        <div class="line fl"></div>
      </div>
    </div>
  </div>