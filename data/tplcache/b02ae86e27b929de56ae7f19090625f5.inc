<div class="floor_1 w1200 clearfix">
    <div class="floor_1_main" id="floor_1_left">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h2 class="tit">{dede:field name='typenameen'/}</h2>
        <i></i></div>
      <div class="content"> 
        <!--产品分类开始-->
        <div class="menu" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
          <ul class="list clearfix">
            <li class="item hover"><a href="{dede:field name='typeurl'/}">全部</a></li>
            {dede:channel type='son' noself='yes'}
            <li class="item"><a href="[field:typelink/]" title="[field:typename/]">[field:typename/]</a></li>
            {/dede:channel}            
          </ul>
        </div>
        <!--产品分类结束-->
        <div class="product" id="product" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
          <div class="bd">
            <ul class="list clearfix">
              {dede:arclist row='10' titlelen='60' orderby='pubdate'}
			  <li class="item"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
                <p>[field:title/]</p>
                <div class="bg"></div>
                <div class="txtIco"><s class="icon"></s></div>
                </a></li>
				{/dede:arclist}
            </ul>
          </div>
          <div class="hd"> <span class="prev icon"></span> <a href="{dede:field name='typeurl'/}"><span class="amore icon"></span></a> <span class="next icon"></span> </div>
        </div>
      </div>
    </div>
  </div>