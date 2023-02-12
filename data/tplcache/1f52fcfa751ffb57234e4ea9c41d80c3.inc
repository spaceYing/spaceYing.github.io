<div class="floor_3 clearfix">
    <div class="floor_3_main w1200" >
      <div class="indexTit" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="100">
        <h2 class="tit">{dede:field name='typename'/}</h2>
        <i></i></div>
      <div class="content" aos="fade-up" aos-easing="ease" aos-duration="700" aos-delay="200">
        <div class="case" id="case">
          <div class="bd" >
            <ul class="list clearfix">
              {dede:arclist row='10' titlelen='60' orderby='pubdate'}
			  <li class="item"><a href="[field:arcurl/]" title="[field:title/]"><img src="[field:litpic/]" alt="[field:title/]"/>
                <p>[field:title/]<i class="icon"></i></p>
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