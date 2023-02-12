<div class="floor_2_main">
    <div class="floor_2 w1200 clearfix">
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700">
        <h3 class="tit"><em>{dede:field name='typename'/}</em></h3>
        <p class="subtit"></p>
      </div>
      <div class="caseList" id="icase" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
        <div class="bd">
          <ul class="list clearfix">
            {dede:arclist row='6' titlelen='60' orderby='pubdate'}
		   <li class="item"><a href="[field:arcurl/]" title="[field:title/]">
              <div class="img"><img src="[field:litpic/]" alt="[field:title/]"/></div>
              <div class="txt">
                <h3 class="tit">[field:title/]</h3>
              </div>
              </a></li>
           {/dede:arclist}
          </ul>
        </div>
        <div class="hd"><span class="icon prev"></span><span class="icon next"></span></div>
      </div>
      <a class="cMore" href="{dede:field name='typeurl'/}" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="300">查看更多</a></div>
  </div>